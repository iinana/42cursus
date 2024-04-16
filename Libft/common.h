#ifndef COMMON_H
# define COMMON_H

# include <stddef.h>

// ctype_is.c
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);

// ctype_to.c
int toupper(int c);
int tolower(int c);

// string_basic.c
size_t strlen(const char *s);
size_t  strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int strncmp(const char *s1, const char *s2, size_t n);

// string_mem.c
void    *memset(void *b, int c, size_t len);
void    *memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *memmove(void *dst, const void *src, size_t len);

// string_chr.c
char    *strchr(const char *s, int c);
char    *strrchr(const char *s, int c);

// strings.c
void    bzero(void *s, size_t n);

#endif