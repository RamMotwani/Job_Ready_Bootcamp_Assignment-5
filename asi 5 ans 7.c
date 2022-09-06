#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter how many even no you want in reverse");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",n*2);
        n--;
    }
    return 0;

}
