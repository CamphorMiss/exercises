class Solution {
public:
bool isFlipedString(string s1, string s2) {
   //²»½èÖú¶îÍâ¿Õ¼ä
   if(s1.size()!=s2.size()) return false;
   if(s1=="") return true;
   for(int i=0;i<s1.size();i++)
   {
       if(s2.find(s1.substr(0,i))!=-1&&s2.find(s1.substr(i))!=-1)
       return true;
   }
   return false;
}
};
