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
const int *p1=&n1;//���3
p1++;//����
n1=20;//����
//(*p1)=10;//������
int const *p2=&n2;//���4
p2++;//����
n2=20;//����
//(*p2)=10;//������
int *const p3=&n3;//���5
//p3++;//������
n3=20;//����
(*p3)=10;//����
register int j=7;
printf("%d\n",&j);
	return 0;
}
