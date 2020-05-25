#include<stdio.h>
#include<stdlib.h>

int main()
{	
	char A[]="finding";
	int h[26],i;


	for(i=0;A[i]!='\0';i++)
	{
		h[i]==0; 
	}
	
	for(i=0;A[i]!='\0';i++)
	{
		h[A[i]-97]+=1; 
	}
	
	for(i=0;i<26;i++)
	{
		if(h[i]>1)
		{
			printf("%c",i+97);
			printf("%d",h[i]);
		}
			
	}
	
}
