#include<stdio.h>
int main()
{
    int num; 
    scanf("%d", &num);
    printf("%d:%d:%d\n", num/3600, (num%3600)/60,num%60);
    return 0;
}