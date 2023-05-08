#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Null terminated string to add at the end of the file
 * Return: 1 on success and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
int write_holder;
int size = 0;
if (!filename)
	return (-1);
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
	return (-1);
if (text_content != NULL)
{
size = 0;
while (text_content[size])
	size++;
write_holder = write(file_descriptor, text_content, size);
if (write_holder == -1)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
