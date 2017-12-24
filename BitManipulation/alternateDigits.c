
/*Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.
Input: 5
Output: True
Explanation:
The binary representation of 5 is: 101

Input: 7
Output: False
Explanation:
The binary representation of 7 is: 111.*/

bool hasAlternatingBits(int n) {
    int lastBit = n % 2;
    n = n / 2;
    while (n != 0)
    {
        if (lastBit == (n % 2))
            return false;
        lastBit = n % 2;
        n = n / 2;
    }
    return true;
}