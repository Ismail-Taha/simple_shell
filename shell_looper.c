#include "shell.h"
/*
 * shell_loop - Main loop for the simple shell
 *
 * argv: list of arguments
 *
 * Return: exit status
 */
int shell_looper(char **argv)
{
	char *line = NULL, **cmd = NULL;
	int status = 0, indx = 0;

	while (1)
	{
		line = return_line();
		if (line == NULL)/* EOF ctr + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			fflush(stdout);
			return (status);
		}

		indx++;
		cmd = get_token(line);
		if (!cmd)
			continue;
		if (is_builtcmd(cmd[0]))
			handl_builtcmd(cmd, argv, &status, indx);
		else
		{
			status = _executer(cmd, argv, indx);
		}
	}
}
