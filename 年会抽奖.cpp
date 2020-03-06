// write your code here cpp
#include <iostream>
#include <stdio.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int n;
    long data[21] = {1, 0, 1}, fac = 2;
    double arr[21] = {0.00, 0.00, 50.00};
    for(int i=3; i<=20; i++) {
        data[i] = (i-1)*(data[i-1]+data[i-2]);
        fac *= i;
        arr[i] = (double)data[i]/fac*100;
    }
    while(cin>>n) {
        cout << fixed << setprecision(2) << arr[n] << "%" << endl;
    }
    return 0;
}
