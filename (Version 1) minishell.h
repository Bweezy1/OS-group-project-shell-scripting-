/*
Authors: Brandon Nguyen, Tien Nguyen, Peter Phuc Phan
Course: CPSC 4317
Assignment: Simple Shell Project
Instructor: Bo Sun

This is a header program file which contains the interface of the program. 
This interface is responsible providing a backbone for a .c file (Version 1) minishell.c to work with. (Access to any functions and global variables present)
When the shell first starts, it will put out "minishell> " to indicate that it is online and ready to take input commands from the user.
Whether or not the shell execute a command or put out a "command not found" message after reading an input command depends on if the command is valid or not.
Should the command be valid, the shell will create a child process to execute the command using fork().
*/

#ifndef MINISHELL_H
#define MINISHELL_H

#define LINE_LEN    80
#define MAX_ARGS    64
#define MAX_ARG_LEN 16
#define MAX_PATHS   64
#define MAX_PATH_LEN 96
#define WHITESPACE  " .,\t\n"

struct command_t {
    char *name;
    int argc;
    char *argv[MAX_ARGS];
};

#endif // MINISHELL_H
