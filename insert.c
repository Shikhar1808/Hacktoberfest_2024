#include <stdio.h>
int main()
{
    int len,insert,pos;
    printf("Input the size of array : ");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Input the elements : ");
        scanf("%d",&arr[i]);
    }
    printf("Input the element to be inserted : ");
    scanf("%d",&insert);
    printf("Input the position : ");
    scanf("%d",&pos);
    for(int i=len-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=insert;
    printf("New Array is : ");
    for(int i=0;i<=len;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}