#include<stdio.h>
void fun()
{
	const int f=10;
}
int main()
{
	float a1;
	//printf("%f",a);
	/*char c = -1; 
    if (c < 200) {
        printf("signed\n");
    } else {
        printf("unsigned\n");
    }   */
    enum{
    	a,
    	b=5,
    	c,	
	}e;
	//printf("%d %d %d",a,b,c);
	fun();
	int n1=2,n2=5,n3=8;
const int *p1=&n1;//语句3
p1++;//可以
n1=20;//可以
//(*p1)=10;//不可以
int const *p2=&n2;//语句4
p2++;//可以
n2=20;//可以
//(*p2)=10;//不可以
int *const p3=&n3;//语句5
//p3++;//不可以
n3=20;//可以
(*p3)=10;//可以
register int j=7;
printf("%d\n",&j);
	return 0;
}
