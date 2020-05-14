#include <stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;

};

void Display(struct Array arr)
{
    int i;
    printf("\n elements are \n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);

}

void swap(int *x,int *y)
{
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}

int linearsearch (struct Array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key ==arr->A[i])
        {
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }

    }
    return -1;

}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    //append(&arr,10);
    //insert(&arr,0,9);
    //printf("%d\n" ,delete(&arr,4));
    printf("%d \n",linearsearch(&arr,5));
    Display(arr);
    return 3;
}
