#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints the output
 * @filename: Name of the file
 * @letters: number of letters it should print
 * open(pathname, flags(Read only, write etc..), mode(when creating a file))
 * read(description of the file, where the text is stocked, what it reads)
 * write(where to write, where its stocked, what it writes)
 * Return: The text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    if (!filename)
    {
        return(0);
    }
    char *buf = malloc(letters);
}