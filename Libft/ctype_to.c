int toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

int tolower(int c)
{
    if (c >= 'A' &&  c <= 'Z')
        return (c + 32);
    return (c);
}