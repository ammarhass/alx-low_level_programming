#ifndef MAIN
#define MAIN

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t l);
int create_file(const char *filename, char *ptr);
int append_text_to_file(const char *filename, char *ptr);

#endif

