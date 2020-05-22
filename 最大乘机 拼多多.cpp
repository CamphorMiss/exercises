#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
 
#include <iostream>
#include <vector>
using namespace std;
 
#define MALLOC(num,type) (type*)malloc((size_t)num * sizeof(type))
 
long long n,a[10000000];
 
int main()
{
    //前k个最大值------时间复杂度为：O(n)
     
    //输入数组
    long n=0;scanf("%ld",&n);
    long *a = MALLOC(n,long);
    for(int i=0;i<n;i++)
    {
        scanf("%ld",a+i);
    }
 
    //对前K个进行排序，插入排序方法
    long *mem = MALLOC(n,long);
    int Temp,j,K=3;
    mem[0] = a[0];
    for(int P=1; P<K; P++)
    {
        Temp = a[P];
        for(j = P; j>0 && mem[j-1] > Temp; j--)
        {
            mem[j] = mem[j-1];
        }
        mem[j] = Temp;
    }
 
 
    //对新读入数据排序，插入到正确位置
    for(int i = 3;i<n;++i)
    {
        Temp = a[i];
        if(Temp > mem[K-1])
        {
            for(j = K-1; j>0 && mem[j-1] < Temp; j--)
                mem[j] = mem[j-1];
            mem[j] = Temp;
        }
    }
    long ans = mem[0]*mem[1]*mem[2];
    long a1=mem[0],a2=mem[1],a3=mem[2];
    if(a[0]==a1) {
        a2 = a[1];
        a3 = a[2];
    }
    else if(a[1]==a1)
    {
        a2=a[0];
        a3=a[2];
    }
    else
    {
        a2=a[0];
        a3=a[1];
    }
    if(a2>a3) swap(a2,a3);
    for(int i=2;i<n;i++)
    {
        if(a[i]<a3)
        {
            if(a[i]<a2)
            {
                a3=a2;
                a2=a[i];
            }
            else
            {
                a3=a[i];
            }
        }
    }
    ans = max(ans,a1*a2*a3);
    //printf("%lld\n",ans);
    cout<<ans;
    return 0;
}

