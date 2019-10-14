#include <stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main() {
	int t, n;
	int i;
	scanf("%d", &t);
	while(t--)
	{
	    int k = 0;
	    i = 0;
	    scanf("%d", &n);
	    char ch[n+1];
	    scanf("%s", ch);
	    for(i; i< n; i++)
        {
            if(ch[i] == '1')
                k++;
        }
        printf("%d\n", fact(k)/(fact(k-2)*2));
	}
	return 0;
}

