#include <stdio.h>

int main() {
	int t, n, i, k, in;
	int arr[101];
	scanf("%d", &t);
	while(t--)
	{
	    in = -1;
	    scanf("%d", &n);
	    for(i = 0; i<n; i++)
	        scanf("%d", &arr[i]);
        scanf("%d", &k);
	    for(i = 0; i<n; i++)
	    {
	        if(arr[i] == k)
	            in = i+1;
	    }
	    if(in == -1)
	        printf("-1\n");
	    else
	        printf("%d\n", in);
	}
}
