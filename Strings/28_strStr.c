int strStr(char* haystack, char* needle) {
    int lengthHay = strlen(haystack), lengthNeedle = strlen(needle);
    int i,j;
    
    if (lengthHay == 0 && lengthNeedle == 0)
    {
        return 0;
    }
    
    else if (lengthHay && lengthNeedle == 0)
    {
        return 0;
    }
    
    else if (lengthHay == 0 && lengthNeedle != 0)
    {
        return -1;
    }
    
    for(i = 0; i < lengthHay; i++){
        if(haystack[i] == needle[0]){
            j=0;
            while(j < lengthNeedle && haystack[j + i] == needle[j]) 
            {
                j++;
            }
            if(j == lengthNeedle)
                return i;
        }
    }
    return -1;
}