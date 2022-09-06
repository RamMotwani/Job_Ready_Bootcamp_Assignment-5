#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter how many odd no.s you want");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*2-1);
        i++;

    }
    return 0;
}
