#include<stdio.h>
int main ()
{
	double a,b,c,d,m,n;
	printf("������x yǰ��ϵ���Լ�m n��ֵ.\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m,&n);
	int x,y;
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);
	printf("xֵΪ%lf��yֵΪ%lf\n",x,y); 
    return 0;
 } 
