bool detectCapitalUse(char* word) {
    int length = strlen(word);
    int i, count = 0, flag = 0;
    if (isupper(word[0]))
    {
        flag = 1;
    }
       
    for (i = 0; i < length; i++)
    {
        if(isupper(word[i]))
        {
            count++;
        }
    }
    
    if ( (count == 0) && !flag)
       return true;
    else if ((count == 1 || count == length) && flag)
        return true;
    else
        return false;
}