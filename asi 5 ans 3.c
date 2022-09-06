#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a how many natural no. you want to print in reverse");
    scanf("%d",&n);
    while(n>=i)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}
