#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a value that you want cube of how many no.s");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}
