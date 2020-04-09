#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s, s0;
    if (n == 1){
        cin >> s;
        string s0 = s;
        for(int i = 0; i < s.size(); i++){
            s0[i] = s[s.size()-i-1];
        }
        cout << s0;
        return 0;
    }
    for(int i = 0; i < n; i++){
        cin >> s;
        if (i == 0) {
            s0 = s;
        } else {
            for (int j = 0; j < s.size(); j++){
                s0[j] = s0[j] ^ s[j];
            }
        }
    }
    cout << s0;
    return 0;
}
