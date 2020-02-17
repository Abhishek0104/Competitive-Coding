#include<stdio.h>
int main()
{
    int size, i, j;
    printf("Enter the size of array.\n");
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < size - 1; i++)
    {
        int min = i;
        for(j = i + 1; j  < size; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted Array:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
