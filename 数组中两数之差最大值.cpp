#include<stdio.h>
#include<math.h>
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
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int j;
	int q,w=0;
	for(j=1;j<n;j++){
		q=fabs(arr[j]-arr[j-1]);
		w=max(q,w);
	}
	printf("%d",w);
	return 0;
}

