#ifndef MAIN_H
#define MAIN_H

/*
 * File: holberton.h
 * Auth: Chidinma Okafor
 * Desc: Header file containing all function prototypes
 * needed for 0x15-file_io tasks.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
