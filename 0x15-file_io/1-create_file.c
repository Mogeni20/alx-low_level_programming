#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
	{
	int fd;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
	ssize_t write_status = write(fd, text_content, strlen(text_content));

	if (write_status == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}
