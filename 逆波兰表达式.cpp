class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int>s;
        int i=0,num1=0,num2=0,result=0;
        for(int i=0;i<tokens.size();i++)
        {
        if(s.empty()||(tokens[i]!="+")&&(tokens[i]!="-")&&(tokens[i]!="*")&&(tokens[i]!="/"))
            s.push(atoi(tokens[i].c_str()));
        else{//Óö¼û²Ù×÷·û
            num1=s.top();s.pop();
            num2=s.top();s.pop();
            if(tokens[i]=="+")
                result=num2+num1;
            else if(tokens[i]=="-")
                result=num2-num1;
            else if(tokens[i]=="*")
                result=num2*num1;
            else//³ý
                result=num2/num1;
            s.push(result);
        }
    }
        return s.top();
    }
};
