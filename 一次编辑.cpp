class Solution {
public:
    bool oneEditAway(string first, string second) {//��һ���������ͬ
    if(first.size()<second.size())
    {
        string temp=first;
        first=second;
        second=temp;
    }
    //first�ǳ��ַ���
    if(first.size()-second.size()>1) return false;
    int i=0,j=0,count=0;
    while(i<first.size()&&j<second.size())
    {
      if(first[i]==second[j]) {
          i++;
          j++;
      }
      else{//���������������һ�������Ȳ�һ��
      if(count>2) return false;
      if(first.size()==second.size())//��Ϊ�滻���
          j++;
      i++;
	  count++;
    // }//else
    }//else
}//while
      return count<2;
}  
};
