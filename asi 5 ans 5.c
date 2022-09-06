#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter how many odd no.s you want in reverse");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n*2-1);
        n--;
    }
    return 0;
}
