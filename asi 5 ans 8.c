#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter how many no.s square you want");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}
