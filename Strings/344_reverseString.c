char* reverseString(char* s) {
    int length = 0,i,j;
    length = strlen(s);
    char *start = s[0];
    char *end = s[length - 1];
    char * temp;
    if (length == 0 || s == NULL)
    {
        return;
    }
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
    return s;
}
