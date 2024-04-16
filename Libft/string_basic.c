#include "common.h"

size_t strlen(const char *s)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}

size_t  strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (src[i] && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = 0;
    while (src[i])
        i++;
    return (i);
}

size_t  strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (dst[i])
        i++;
    while (*src && i < (dstsize - 1))
        dst[i++] = *(src++);
    dst[i]= 0;
    return (i + 1);
}

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n && *s1 == *s2)
    {
        i++;
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}