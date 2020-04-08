#include<iostream>
#include<map>
using namespace std;
int main(){
    int T;
    cin>>T;
    map<char,char> table;
    table['1']='1';
    table['2']='5';
    table['3']='8';
    table['4']='7';
    table['6']='9';
    table['5']='2';
    table['8']='3';
    table['7']='4';
    table['9']='6';
    cin.ignore();
    while(T--){
        string s;
        getline(cin,s);
        bool flag=true;
        int left=0,right=s.size()-1;
        while(left<=right){
            if(table[s[left]]!=s[right]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        left++;
        right--;
    }
     
    return 0;
}
