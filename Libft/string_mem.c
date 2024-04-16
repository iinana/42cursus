#include "common.h"

void    *memset(void *b, int c, size_t len)
{
    unsigned char   uc;
    size_t          i;
    unsigned char   *str_b;

    i = 0;
    uc = (unsigned char) c;
    str_b = (unsigned char *) b;
    while (i < len)
        str_b[i++] = uc;
    return (b);
}

void    *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t                  i;
    unsigned char           *str_dst;
    const unsigned char     *str_src;

    i = 0;
    str_dst = (unsigned char *) dst;
    str_src = (const unsigned char *) src;
    while (i < n)
    {
        str_dst[i] = str_src[i];
        i++;
    }
    return (dst);
}

void    *memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *str_dst;
    unsigned char   *str_src;
    size_t          i;

    str_dst = (unsigned char *) dst;
    str_src = (unsigned char *) src;
    if (str_dst < str_src)
    {
        i = 0;
        while (i  < len)
        {
            str_dst[i] = str_src[i];
            i++;
        }
    }
    else
    {
        i = len - 1;
        while (i >= 0)
        {
            str_dst[i] = str_src[i]; 
            i--;
        }
    }
    return (dst);
}

void    *memchr(const void *s, int c, size_t n)
{
    
}