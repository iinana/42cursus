char    *strchr(const char *s, int c)
{
    while (*s && *s != c)
        s++;
    if (*s == c)
        return ((char *) s);
    return (0);
}

char    *strrchr(const char *s, int c)
{
    char    *res;

    res = 0;
    while (*s)
    {
        if (*s == c)
            res = (char *) s;
        s++;
    }
    if (*s == c)
        return ((char *) s);
    return (res);
}