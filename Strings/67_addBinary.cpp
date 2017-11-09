class Solution {
public:
    string addBinary(string a, string b) {
    string A= a, B = b;
    int length = equalizeString(A, B);
    int carry = 0;
    string result;
    for (int i = length - 1; i >= 0; i--)
    {
        //Start adding from LSB, which is actually the end of the string
        int LSB_A = A.at(i) - '0';
        int LSB_B = B.at(i) - '0';
 
        // boolean expression for sum of 3 bits
        int sum = (LSB_A ^ LSB_B ^ carry) + '0';
 
        result = (char)sum + result;
 
        // boolean expression for 3-bit addition
        carry = (LSB_A & LSB_B) | (LSB_B & carry) | (LSB_A & carry);
        
    }
        //Overflow
    if (carry == 1)
    {
        result = '1' + result;
    }
    return result;
}
    int equalizeString(string &A, string &B)
{
    int len_a = A.length();
    int len_b = B.length();
    if (len_a > len_b)
    {
        for (int i = 0; i < len_a - len_b; i++)
        {
            B = '0' + B;
        }
        return len_a;
    }
    else
    {
        for (int i = 0; i < len_b - len_a; i++)
        {
            A = '0' + A;
        }
        return len_b;
    }
}
};