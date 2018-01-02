#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[100],s2[100];
	gets(s1),gets(s2);
	int l1=strlen(s1),l2=strlen(s2);
	for(int i=0,j=0;i<l1,j<l2;i++,j++)
	{
		if(s1[i]!=s2[j])
		{
		    printf("%d",s1[i]-s2[j]);
		}
		else{
			printf("0"); 
		}
	}
	return 0;
} 
