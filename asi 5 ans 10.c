#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a value which table you want");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }
    return 0;
}
