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

int get(struct Array arr,int index)
{
    if (index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}
int set(struct Array arr,int index,int x)
{
    if (index>=0 && index<arr.length)
    arr.A[index]=x;
}

int max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++);
    {
            if(arr.A[i]>max)
                max=arr.A[i];
    }
    return max;
}
int min(struct Array arr)
{
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
            if(arr.A[i]<min)
                min=arr.A[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int s=0;
    int i;
    for(i=0;i<arr.length;i++)
        {
            s+=arr.A[i];
        }
    return s;
}
int main()
{
    struct Array arr={{1,3,14,115,6},10,5};

    printf("%d \n",get(arr,2));
    printf("%d \n",set(arr,4,2));
    printf("%d \n",max(arr));
    printf("%d \n",min(arr));
    printf("%d \n",sum(arr));
    Display(arr);
    return 0;
}
