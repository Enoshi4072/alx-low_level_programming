#include "main.h"

/**
 * read_textfile - The function reads a text file and prints it to the
 * POSIX standard output
 * @filename: ponter to the file to be opened
 * @letters: number of letters to be printed
 * Return: The actual numbers it could read and print
 * If the file cannot be opened, return 0
 * I the filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file_desc;
int byte_count;

/* Check if the filename is NULL*/
if (filename == NULL)
	return (0);
/*Allocate memory for the buffer*/
char_buffer = malloc(sizeof(char) * letters);
if (!char_buffer)
	return (0);
/*Open the file for reading*/
file_desc = open(filename, O_RDONLY);
if (file_desc == -1)
{
free(char_buffer);
	return (0);
}
/*Read from the file into the buffer*/
byte_count = read(file_desc, char_buffer, letters);
if (byte_count == -1)
{
free(char_buffer);
close(file_desc);
return (0);
}
/* Write the contents of the buffer to stdout */
if (write(STDOUT_FILENO, char_buffer, byte_count) != byte_count)
{
free(char_buffer);
close(file_desc);
return (0);
}
/*Free the memory anf close the file descriptor*/
free(char_buffer);
close(file_desc);
/* Return the actual number of letters read and printed */
return (byte_count);
}

