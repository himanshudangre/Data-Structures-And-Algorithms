#include <stdio.h>

int F[10];
int fib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if (F[n-2]==-1)
            F[n-2]==fib(n-2);
        if (F[n-1]==-1)
            F[n-1]==fib(n-1);
        return fib(n-2) + fib(n-1);
    }

}

int main()
{
    int i;
    int n;
    for(i=0;i<n;i++)
        F[i]=-1;

    printf("%d \n",fib(5));
    return 0;
}
