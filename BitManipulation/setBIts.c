/*count number of set bits in a number (32 bit representation format)*/

int numSetbits(int n)
{
	uint mask;
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

//More optimal method
int numSetbits(int n)
{
	int count = 0;
	while(n != 0)
	{
		n = n & (n -1);
		count ++;
	}
	return count;
}