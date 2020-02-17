#include<stdio.h>
#include<limits.h>
void merge_sort(int* , int , int );
void merge(int* , int , int , int );
int main()
{
    int si;
    printf("Enter the size of array to be sorted.\n");
    scanf("%d", &si);
    int arr[si];
    printf("Enter the array.\n");
    for(int i =0;i < si; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, si-1);
    printf("Sorted Array.\n");
    for(int i =0;i < si; i++)
    {
        printf("%d ", arr[i]);
    }
}
void merge_sort(int arr[],int s,int e)
{
    if(s<e)
    {
        int m = (s+e)/2;
        merge_sort(arr, s, m);
        merge_sort(arr, m+1, e);
        merge(arr, s, m, e);
    }
}
void merge(int arr[], int s, int m, int e)
{
    int n1 = m-s+1;
    int n2 = e-m;
    int arr1[n1+1], arr2[n2+1];
    for(int i = 0; i < n1; i++)
    {
        arr1[i] = arr[s+i];
    }
    arr1[n1] = INT_MAX;
    for(int i = 0; i < n2; i++)
    {
        arr2[i] = arr[m+1+i];
    }
    arr2[n2] = INT_MAX;
    int x = 0;
    int y = 0;
    for(int i = s; i <= e; i++)
    {
        if(arr1[x]<arr2[y])
        {
            arr[i] = arr1[x];
            x++;
        } else
        {
            arr[i] = arr2[y];
            y++;
        }
    }
}
