#include "shell.h"

/**
 * main -simple shell main function.
 *
 * @con -count of args.
 * @argv -list of arguments.
 *
 * return - always 0 succes.
*/
int main(int con, char **argv)
{
	int status = 0;

	(void) con;

	status = shell_looper(argv);

	return (status);
}
