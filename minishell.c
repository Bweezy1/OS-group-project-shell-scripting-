#include ...
#include "minishell.h"

char *lookupPath(char **, char **);
int parseCommand(char *, struct command_t *);
int parsePath(char **);
void printPrompt();
void readCommand(char *);
...
int main() {
	...
	/* Shell initialization */
	...
	parsePath(pathv); /* Get directory paths from PATH */

	while(TRUE) {
		printPrompt();

	/* Read the command line and parse it */
		readCommand(commandLine);
		...
		parseCOmmand(commandLine, &command);
		...

	/* Get the full pathname for the file */
		command.name = lookupPath(command.argv, pathv);
		if(command.name == NULL) {
		/* Report error */
		continue;
		}
	/* Create child and execute the command */
	...

	/* Wait for the child to terminate */
	...
	}

	/* Shell termination */
	...
}
