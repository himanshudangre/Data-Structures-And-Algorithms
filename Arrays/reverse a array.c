#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void reverse(struct Array *arr)
{
    int i,j;
    int *B ;
    B=(int *)malloc(arr->length*sizeof(int));

    for(i=arr->length-1,j=0 ; i>=0 ; i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(i=0 ; i<arr->length ; i++)
    {
        arr->A[i]=B[i];
    }
}

int display(struct Array *arr)
{
    int i;
    for(i=0 ; i<arr->length; i++)
    {
        printf("%d \n",arr->A[i]);
    }
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    //printf("%d\n",reverse(&arr));
    reverse(&arr);
    display(&arr);
    return 0;
}
