#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#define FATAL_ERROR printf("Fatal error: %s %s() called\n\r", __FILE__, __func__)

#define HEAP_SIZE 8*1024*1024
char heap_start[HEAP_SIZE];
char *heap_end = heap_start + HEAP_SIZE;
char *freespace = heap_start;

char *_sbrk(int bytes) {
  char *base = NULL;

  if (freespace + bytes <= heap_end) {
    base = freespace;
    freespace += bytes;
  } else
    FATAL_ERROR;

  return base;
}

int _getpid(void) {
  FATAL_ERROR;
  for (;;);

  return 1;
}

int _kill(int pid, int sig) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

void exit(int status)
{
  FATAL_ERROR;
  for (;;);
}

void _exit (int status) {
  FATAL_ERROR;
  for (;;);
}

int _write(int file, char* ptr, int len) {
  FATAL_ERROR;
  for (;;);

  return 0;
}

int _close(int file) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _fstat(int file, struct stat* st) {
  st->st_mode = S_IFCHR;

  FATAL_ERROR;
  for (;;);

  return 0;
}

int _isatty(int file) {
  FATAL_ERROR;
  for (;;);

  return 1;
}

int _lseek(int file, int ptr, int dir) {
  FATAL_ERROR;
  for (;;);

  return 0;
}

int _read(int file, char* ptr, int len) {
  FATAL_ERROR;
  for (;;);

  return 0;
}

int open(char* path, int flags, int mode) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _open(char* path, int flags, int mode) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _wait(int* status) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _unlink(char* name) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _stat(char* file, struct stat* st) {
  st->st_mode = S_IFCHR;

  FATAL_ERROR;
  for (;;);

  return 0;
}

int _link(char* old, char* new) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _fork(void) {
  FATAL_ERROR;
  for (;;);

  return -1;
}

int _execve(char* name, char** argv, char** env) {
  FATAL_ERROR;
  for (;;);

  return -1;
}
