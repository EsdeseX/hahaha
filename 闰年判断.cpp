#include <stdio.h>
int main() 
{
    int year;
	scanf("%d",&year); 
    if(year%4==0||year==0)
    printf("今年是闰年");
    else
    printf("今年是平年");
    return 0;
}
