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

int binarysearch(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if (key<=arr.A[mid])
            h=mid-1;
        else
            l=mid+1;

    }
    printf("%d\n","notfound");

}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    //append(&arr,10);
    //insert(&arr,0,9);
    //printf("%d\n" ,delete(&arr,4));
    printf("%d \n",binarysearch(arr,9));
    Display(arr);
    return 0;
}
