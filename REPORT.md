# MiniShell Project Report
## Introduction
This report details the creation of MiniShell, a simple Unix shell implementation, completed as part of our coursework in Operating Systems. The project is divided into two parts:

1. Part 1 uses fork() to create child processes for command execution.
2. Part 2 employs pthread_create() to create threads for executing commands.
The objective is to demonstrate an understanding of process and thread management in Unix-like operating systems, along with practical application in shell programming.

## Technical Content
### Overview of Shell Functionality
A shell in Unix is an interface used by users to access the services of the operating system. It interprets and executes the commands entered by the user.

### Part 1: Process-Based Command Execution
In Part 1, the shell creates a separate process for each command using the fork() system call. This process isolation ensures that the main shell program remains unaffected by the execution of individual commands.

### Part 2: Thread-Based Command Execution
Part 2 modifies the approach by using threads instead of processes. Here, pthread_create() is used to create a new thread for each command. Threads share the same process space, making this approach more efficient in terms of resource usage, albeit with added complexity in synchronization and concurrency handling.

## Key Components
- Command Parsing: The shell parses user input into executable commands and arguments.
- Environment Path Resolution: It locates the executable corresponding to a command by searching directories listed in the PATH environment variable.
- Execution: The identified command is executed either as a separate process (Part 1) or within a thread (Part 2).

## Implementation
### Structure
The implementation is split into two main files:

- minishell.h: Defines constants and structures used by the shell.
- minishell.c: Contains the main logic for command parsing, execution, and the shell's interactive loop.
### Key Functions
- main(): Initializes the shell and enters an interactive loop to handle user inputs.
- parseCommand(): Breaks down the user input into commands and arguments.
- lookupPath(): Searches for the command in the system paths.
- executeCommand(): Handles the execution of the command (differently in Part 1 and Part 2).
## Running the Projects
### Part 1 (Process-Based)
1. Compile with gcc -o minishell minishell.c.
2. Run using ./minishell.
3. Enter Unix commands at the prompt.
### Part 2 (Thread-Based)
1. Compile with gcc -o minishell minishell.c -lpthread.
2. Run using ./minishell.
3. Enter Unix commands at the prompt.

## Conclusion
MiniShell serves as a practical application of process and thread management in Unix-like systems. Through this project, we gained insights into the complexities of system programming, particularly in handling concurrent executions and isolating command executions from the main program.

