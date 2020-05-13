#include <stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
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
void append(struct Array *arr,int x)
{
   if(arr-> length < arr->size)
      arr->A[arr->length++] = x;
}

int main()
{
    struct Array arr;
    int n,i;
    printf("Enter size of array");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int)); //created in heap
    arr.length=0;

    printf("enter no of numbers \n");
    scanf("%d",&n);

    printf("enter all elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr.A[i]);
    arr.length=n;

    Display(arr);
    append(&arr,10);

    return 0;
}
