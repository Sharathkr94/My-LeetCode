/*return 1 if power of 2 or else return 0*/

int pow2(int n)
{
	if(n & n - 1)
	{
		return 1;
	}
	return 0;
}