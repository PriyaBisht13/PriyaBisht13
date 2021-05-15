#include<stdio.h>
int find_factorial(int);
int main()
{
    int num,fact;
    printf("enter any number");
    scanf("%d",&num);
    fact=find_factorial(num);
    printf("\nfactorial of %d is:%d",num,fact);
    return 0;
}
int find_factorial(int num)
{
    if(num==0)
    return 1;
    return(num*find_factorial(num-1));

}