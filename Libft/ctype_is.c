int isalpha(int c)
{
    if (c == -1)
        return (0);
    if (c >= 'A' && c <= 'Z')
        return (1);
    else if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int isdigit(int c)
{
    if (c == -1)
        return (0);
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int isalnum(int c)
{
    if (isalpha(c) > 0 || isdigit(c) > 0)
        return (1);
    return (0);
}

int isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

int isprint(int c)
{
    if (c >= 32 && c < 127)
        return (1);
    return (0);
}