class Solution {
public:
    static bool cmp(int a,int b)
    {
        return ((to_string(a)+to_string(b))<(to_string(b)+to_string(a)));//Ç°ÕßĞ¡
    }
    string PrintMinNumber(vector<int> numbers) {
        sort(numbers.begin(),numbers.end(),cmp);
        string str;
        for(int i=0;i<numbers.size();i++)  str+=to_string(numbers[i]);
        return str;
    }
};
