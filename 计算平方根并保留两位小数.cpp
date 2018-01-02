#include<stdio.h>
int as(int x){
	int y;
	y=x*(x+1)/2;
	return y;
}
int main(){
	int a,i;
	scanf("%d",&a);
	int b=0;
	for(i=a;i>0;i--){
		b+=as(i);
	}
	printf("%d",b);
	return 0;
}
