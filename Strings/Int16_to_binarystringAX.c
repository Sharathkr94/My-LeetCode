char *Int16toBinary(int val)
{
    int bits = 8;
    int i, j;
    int length_of_bit_stream = bits * sizeof(char) * sizeof(int); // or hardcode it to 16 in this question
    char *result = (char *)malloc(length_of_bit_stream);
    for (i = length_of_bit_stream; i >= 0; i--)
    {
    	j = 1 & val;
    	*(result + i) = ((j == 1) ? '1' : '0');
    	val = val >> 1;
    }

    int length = strlen(result);
    strcat(result, '\0');
    for (i = 0; i < length; i++)
    {
    	if (result[i] != '0')
    	{
    		break;
    	}
    }

    if (i != 0)
    {
    	strcpy(result, result + i);
    }
    return result;
}
