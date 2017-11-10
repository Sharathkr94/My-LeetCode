class Solution {
public:
    string countAndSay(int n) {
    
    // Trivial Case
    if (n == 1)
    {
        return "1";
    }
    if (n == 2)
    {
        return "11";
    }
    
    string temp = countAndSay(n - 1);
    string result = "";
    int count = 1;
    for(int i = 1; i < temp.size(); i++)
    {
        if(temp[i]!=temp[i - 1]){
            result.push_back('0'+ count);
            result.push_back(temp[i -1]);
            count = 1;
        }
        else
        {
            count++;
        }
        if(i == temp.size() - 1){
            result.push_back('0'+ count);
            result.push_back(temp[i]);
        }
    }
    return result;
}
};