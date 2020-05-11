#include <stdio.h>

void toh(int n,char a, char b, char c)
{
    char p,q,r;
    if(n>0)
    {
        toh(n-1,p,r,q);
        printf("(%d,%d)\n",p,r);
        toh(n-1,q,p,r);
    }
}
int main()
{

    toh(3,'a','b','c');
    return 0;
}

