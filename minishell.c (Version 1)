#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "minishell.h"

void printPrompt() {
    printf("minishell> ");
}

void readCommand(char *buffer) {
    fgets(buffer, LINE_LEN, stdin);
    buffer[strcspn(buffer, "\n")] = 0; // Remove newline character
}

int parseCommand(char *commandLine, struct command_t *command) {
    int argc = 0;
    char *token = strtok(commandLine, WHITESPACE);

    while (token != NULL && argc < MAX_ARGS) {
        command->argv[argc] = token;
        argc++;
        token = strtok(NULL, WHITESPACE);
    }

    if (argc == 0) { return -1; }

    command->argv[argc] = NULL; // Set the last argument to NULL for execvp
    command->name = command->argv[0];
    command->argc = argc;

    return 0;
}

char *lookupPath(char **argv, char **dir) {
    char *result = malloc(MAX_PATH_LEN);
    
    if (*argv[0] == '/') { // Absolute path
        strcpy(result, argv[0]);
        return result;
    }

    for (int i = 0; i < MAX_PATHS && dir[i] != NULL; i++) {
        // Construct full path
        strcpy(result, dir[i]);
        strcat(result, "/");
        strcat(result, argv[0]);
        
        // Check if file is executable
        if (access(result, X_OK) == 0) {
            return result;
        }
    }

    free(result);
    return NULL;
}

int main() {
    char *pathv[MAX_PATHS];
    struct command_t command;
    char commandLine[LINE_LEN];

    // Shell initialization
    pathv[0] = "/bin"; // Example PATH - normally you'd parse this from the environment
    pathv[1] = NULL;

    while (1) {
        printPrompt();

        readCommand(commandLine);
        if (parseCommand(commandLine, &command) == -1) continue;

        command.name = lookupPath(command.argv, pathv);
        if (command.name == NULL) {
            fprintf(stderr, "%s: command not found\n", command.argv[0]);
            continue;
        }

        pid_t pid = fork();
        if (pid == 0) { // Child process
            execvp(command.name, command.argv);
            fprintf(stderr, "minishell: error executing %s\n", command.name);
            exit(EXIT_FAILURE);
        } else if (pid > 0) { // Parent process
            wait(NULL); // Wait for the child to terminate
        } else {
            fprintf(stderr, "minishell: error forking\n");
        }
    }

    return 0;
}
