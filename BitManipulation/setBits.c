/*count number of set bits in a number (32 bit representation format)*/
#include <stdio.h>

int numSetbits(int);

int main()
{
    int num = 15, result;
    result = numSetbits(num);
    printf("Number of 1s are %d\n", result);
    return 0;
}

int numSetbits(int n)
{
    unsigned int mask;
    int count;
    for (mask = 1; mask != 1 << 31; mask = mask << 1)
    {
        if (mask & n)
        {
            count++;
        }
    }
    return count;
}
