// write your code here cpp
#include<iostream>
#include<vector>
#include<string>
using namespace std;
char arr[20][22];
bool Result() {
    for (int i = 0;i < 20;++i) {
        for (int j = 0;j < 20;++j) {
            if (arr[i][j] == '.')
                continue;
            int count = 1;
            for (int k = j + 1;k < 20;++k) {
                if (arr[i][j] == arr[i][k])
                    count++;
                else break;
            }
            if (count >= 5)
                return true;
            count = 1;
            for (int k = i + 1;k < 20;++k) {
                if (arr[i][j] == arr[k][j])
                    count++;
                else break;
            }
            if (count >= 5)
                return true;
            count = 1;
            for (int k = 1;i + k < 20 && j + k < 20;++k) {
                if (arr[i][j] == arr[i + k][j + k])
                    count++;
                else break;
            }
            if (count >= 5)
                return true;
            count = 1;
            for (int k = 1;i + k >= 0 && j - k >= 0;++k) {
                if (arr[i][j] == arr[i + k][j - k])
                    count++;
                else break;
            }
            if (count >= 5)
                return true;
        }
    }
    return false;
}

int main()
{ 
    while(cin>>arr[0])
    {
        for(int i=1;i<20;i++)
            cin>>arr[i];
        Result()==true?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
    return 0;
}
