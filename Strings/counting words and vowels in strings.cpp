#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	char A[]= "hoW are you";
	int i;
	int vcount = 0 ;
	int ccount = 0;
	for (i=0;A[i]!='\0';i++)
	{	
		if( (A[i]=='a') :: (A[i]=='e') :: (A[i]=='o' ):: (A[i]=='u' )::(A[i]=='E' ):: ( A[i]=='I' )::(  A[i]=='O') :: ( A[i]=='U' ))
		{
			vcount++;
		}
		
		else if((A[i]>=65 && A[i]<=90) ::(A[i]>=97 && A[i]<=122))
		{
			ccount ++;
		}
		
		
	}
	
	printf("%s \n",vcount);
	printf("%s \n",ccount);
}
