# Operating Systems Group Project Fall 2023 (shell scripting)

The goal of this project is to display basic skills in shell scripting. 
There will be two versions of the program for this project.
The first version will use fork() to execute commands through a child process.
The second version will use pthread_create() to execute commands on a separate thread.

## Table of contents
- Getting Started (1st version)
- What to expect (1st version)
- Getting Started (2nd version)
- What to expect (2nd version)

## Getting Started (1st version)
1. Clone the MiniShell repository to your local machine.
2. To compile this program, use a C compiler like gcc:

```bash
 gcc -o minishell minishell.c
```

3. Run the shell with..

```bash
  ./minishell
```

## What to expect (1st version)

1. **Shell Prompt Display**: When you run MiniShell, it will display a prompt similar to `minishell>`, indicating that it's ready to accept a command.

2. **Command Input**: You can enter commands just like you would in a regular shell. For example, you can type `ls` to list directory contents or `pwd` to print the working directory.

3. **Command Execution**: If the entered command is recognized and found in the directories specified in your PATH variable (or the hardcoded path in the shell), MiniShell will execute the command. The output of the command will be displayed on the screen. For example, if you use `ls`, you'll see a list of files and directories in your current working directory.

4. **Error Handling**: MiniShell provides error handling for various scenarios:
   - If you enter an unrecognized command or one that is not in the specified path, the shell will display an error message like `<command>: command not found`.
   - Any errors that occur during the execution of a command, such as trying to execute a non-executable file, will result in an appropriate error message.

5. **Continuous Operation**: After executing a command or encountering an error, MiniShell will display the prompt again, waiting for the next command. You can continue to enter commands as needed.

6. **Exiting the Shell**: To exit MiniShell, you can use Ctrl+C or close the terminal window. MiniShell does not explicitly handle a command to exit the shell like `exit`, so closing the terminal is the recommended way to exit.


## Getting Started (2nd version)
1. Clone the MiniShell repository to your local machine.
2. To compile this program, use a C compiler like gcc:

```bash
 gcc -o minishell main.c -lpthread
```

3. Run the shell with..

```bash
  ./minishell
```

## What to expect (2nd version)
1. ...
