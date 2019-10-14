/*#include<stdio.h>
int main()
{
    int *ptr[2];
    int a[10] = {};
    int b[5] = {};
    *ptr[0] = a;
    *ptr[1] = b;
    printf("%d", sizeof(ptr[0]));
}*/
#include <stdio.h>

int main()
{
int arr[] = {10, 20, 30, 40, 50, 60};
int *ptr = arr;
printf("arr[2] = %d\n", arr[2]);
printf("*(arr + 2) = %d\n", *(arr + 2));
printf("ptr[2] = %d\n", ptr[2]);
printf("*(ptr + 2) = %d\n", *(ptr + 2));
printf("Size: %d", sizeof(*ptr));
return 0;
}
