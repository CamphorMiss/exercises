class Solution {
public:
    bool oneEditAway(string first, string second) {//有一个或零个不同
    if(first.size()<second.size())
    {
        string temp=first;
        first=second;
        second=temp;
    }
    //first是长字符串
    if(first.size()-second.size()>1) return false;
    int i=0,j=0,count=0;
    while(i<first.size()&&j<second.size())
    {
      if(first[i]==second[j]) {
          i++;
          j++;
      }
      else{//分两种情况，长度一样，长度不一样
      if(count>2) return false;
      if(first.size()==second.size())//则为替换情况
          j++;
      i++;
	  count++;
    // }//else
    }//else
}//while
      return count<2;
}  
};
