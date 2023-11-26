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
 gcc -o minishell minishell.c -lpthread
```

3. Run the shell with..

```bash
  ./minishell
```

## What to expect (2nd version)

1. **Shell Prompt Display**: The program will display a prompt, something like `minishell>`, indicating that it's ready to accept a command.

2. **Command Input**: You can enter a command, just like you would in a regular shell. For example, typing `ls` will list directory contents, or `pwd` to print the working directory.

3. **Command Execution**: If the command is recognized and found in the directories specified in your PATH variable (or the hardcoded path in the shell), the program will execute the command using a new thread.
The output of the command will be displayed on the terminal. For instance, using `ls` will show the list of files and directories in the current working directory.

4. **Error Handling** If you enter an unrecognized command or one that is not in the specified path, the shell will display an error message like `<command>: command not found`. Any errors during the execution of a command, such as trying to execute a non-executable file, will result in an appropriate error message.

5. **Continuous Operation**: After executing a command (or encountering an error), the shell will display the prompt again, waiting for the next command. This continues until the shell is exited.

6. **Exiting the Shell**: Since a command to exit the shell (`exit` or similar) is not explicitly handled in the provided code, you'll need to use Ctrl+C or close the terminal window to exit the shell.



#### Commands to Test



|   Input   |          Type          |         Description         |
| :-------- | :--------------------- | :-------------------------- |
|   `ls`    | File Directory Management | Lists directory contents     |
|  `mkdir`  | File Directory Management | Creates a new directory      |
|  `rmdir`  | File Directory Management | Removes an empty directory   |
|   `rm`    | File Directory Management | Removes files or directories (use `rm -r` for recursive deletion) |
|   `cp`    | File Directory Management | Copies files and directories |
|   `mv`    | File Directory Management | Moves or renames files and directories |
|  `touch`  | File Directory Management | Creates an empty file or updates the timestamp of existing files |
|   `cat`   | File Directory Management | Concatenates and displays file contents |
| :---------- | :------------------------- | :----------------------------- |
|    `pwd`    | System Information & Management | Prints the current working directory |
|  `whoami`   | System Information & Management | Displays the current user |
|   `date`    | System Information & Management | Shows the current date and time |
|   `echo`    | System Information & Management | Displays a line of text |
|    `ps`     | System Information & Management | Displays information about active processes |
|    `top`    | System Information & Management | Displays real-time information about running processes |
|    `kill`   | System Information & Management | Sends a signal to a process, often used to terminate processes |
| :---------- | :------------------------- | :----------------------------- |
|    `ping`   | Networking                  | Checks connectivity with another network host |
| `ifconfig/ip` | Networking                  | Displays or configures network interfaces |
| :---------- | :------------------------- | :----------------------------- |
|   `nano`    | File Viewing and Editing     | Text editor (availability depends on what's installed) |
|    `vi`     | File Viewing and Editing     | Text editor (availability depends on what's installed) |
|    `vim`    | File Viewing and Editing     | Text editor (availability depends on what's installed) |
|   `emacs`   | File Viewing and Editing     | Text editor (availability depends on what's installed) |
| :---------- | :------------------------- | :----------------------------- |
|    `gcc`    | Compilation and Script Execution | Compiler for C (if installed) |
|   `g++`     | Compilation and Script Execution | Compiler for C++ (if installed) |
|   `javac`   | Compilation and Script Execution | Compiler for Java (if installed) |
|  `python`   | Compilation and Script Execution | Runs Python scripts (if Python is installed) |
|   `perl`    | Compilation and Script Execution | Runs Perl scripts (if Perl is installed) |
|   `ruby`    | Compilation and Script Execution | Runs Ruby scripts (if Ruby is installed) |
|   `bash`    | Compilation and Script Execution | Runs Bash scripts (if Bash is available) |
|    `sh`     | Compilation and Script Execution | Runs Shell scripts (if Shell is available) |
| :---------- | :------------------------- | :----------------------------- |
|   `users`   | User and Group Management    | Displays users currently logged in |
|  `groups`   | User and Group Management    | Displays groups a user is in |
|  `passwd`   | User and Group Management    | Allows changing the user password |
| :---------- | :------------------------- | :----------------------------- |
|    `df`     | System Monitoring and Maintenance | Displays disk space usage |
|    `du`     | System Monitoring and Maintenance | Displays disk usage of files and directories |
|   `free`    | System Monitoring and Maintenance | Displays the amount of free and used memory in the system |
| :---------- | :------------------------- | :----------------------------- |
|    `tar`    | Archiving and Compression    | Tool for file archiving |
|   `gzip`    | Archiving and Compression    | Tool for file compression |
|  `gunzip`   | Archiving and Compression    | Tool for decompressing gzip files |
|    `zip`    | Archiving and Compression    | Tool for creating zip archives |
|   `unzip`   | Archiving and Compression    | Tool for extracting zip archives |
