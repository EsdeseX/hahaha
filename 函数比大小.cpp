#include<stdio.h>
int max(int x,int y){
	int t;
	if(x>y){
		t=x;
	}
	else{
		t=y;
	}
	return t;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c;
	c=max(a,b);
	printf("%d",c);
	return 0;
}
