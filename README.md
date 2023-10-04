README for Simple Shell Project

This project is to implement a simple shell in C. The shell should support the following features:

Interactive mode: The shell should prompt the user for input and execute the commands entered.
Non-interactive mode: The shell should read commands from a file and execute them one by one.
Built-in commands: The shell should implement the following built-in commands:
exit: Exits the shell.
cd: Changes the current working directory.
env: Prints the environment variables.
setenv: Sets an environment variable.
unsetenv: Unsets an environment variable.
External commands: The shell should be able to execute external commands.
Redirection: The shell should support input and output redirection.
Piping: The shell should support piping.
Requirements

The shell should be implemented in C.
The shell should use the Betty style.
The shell should not have any memory leaks.
No more than 5 functions per file.
All header files should be include guarded.
Use system calls only when you need to (why?).
Write a README with the description of your project.

More Info

Output: Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output. The only difference is when you print an error, the name of the program must be equivalent to your argv[0].
List of allowed functions and system calls: See the project description on the intranet.
Compilation: Your shell will be compiled this way: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh.
Testing: Your shell should work like this in interactive mode:
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
But also in non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
Checks

The Checker will be released at the end of the project (1-2 days before the deadline). We strongly encourage the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task.

Additional Notes

Please read the project description on the intranet carefully before starting work on the project.
Please do not copy and paste code from other sources. This is a plagiarized project.
Please work with your partner on the project. This is a group project.
Please test your code thoroughly before submitting it.
Good luck!

Getting Started

To get started on this project, you can clone the following repository:

git clone https://github.com/the-username/simple-shell.git
Once you have cloned the repository, you can compile the shell with the following command:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
To run the shell in interactive mode, simply type the following command:

./hsh
To run the shell in non-interactive mode, you can redirect a file of commands to the shell with the following command:

echo "/bin/ls" | ./hsh
Built-in Commands

The shell implements the following built-in commands:

exit: Exits the shell.
cd: Changes the current working directory.
env: Prints the environment variables.
setenv: Sets an environment variable.
unsetenv: Unsets an environment variable.
To use a built-in command, simply type the command name followed by any arguments. For example, to change the current working directory to the /home/user/ directory, you would type the following command:

cd
