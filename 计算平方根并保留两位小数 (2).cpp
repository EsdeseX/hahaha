#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	float arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
		if(arr[i]>=0)
		{
		    printf("%.2f\n",sqrt(arr[i]));
		}
		else
		{ 
			printf("ERROR\n");
		} 
	} 	
}
