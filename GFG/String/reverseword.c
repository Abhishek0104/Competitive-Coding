#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char s[2010];
        char ch;
        int i = 0;
        int j, k, l;

        while((ch = getchar()) != '\n')
            s[i++] = ch;
        s[i]= '\0';
        for(j = i-1; j>=0;)
        {
            k = j;
            while(s[k] != '.' && k>=0)
                k--;
            for(l = k+1; l <= j; l++)
                printf("%c", s[l]);
            if(s[k] == '.')
                printf(".");
            j = k-1;

        }
        printf("\n");
    }
}
