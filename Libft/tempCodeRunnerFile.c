int main()
{
    printf("%d\n", toupper(-382));
    printf("%d\n", toupper(EOF));
    for (int c = 10; c <= 130; c++) {
        printf("%c: %c\n", c, toupper(c));
    }
}