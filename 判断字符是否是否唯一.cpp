class Solution {
public:
    bool isUnique(string astr) {
    set<char> s;
    for(int i=0;i<astr.size();i++)
    {
        if(s.insert(astr[i]).second==false)
        return false;
    }
    return true;
    }
};
