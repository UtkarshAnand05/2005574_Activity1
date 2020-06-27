#include<stdio.h>
//Author name : Utkarsh Anand
//Unique id   : 2005574
//Program     : To find Computation of nCr
int main()
{
    printf("Enter the values of n and r respectively\n");
    int n,r;
    scanf("%d %d",&n,&r);
    int nf=factorial(n);
    int rf=factorial(r);
    int nmrf=factorial(n-r);
    int comb=nf/(rf*nmrf);
    printf("The computation of nCr is %d",comb);
    return 0;
}
int factorial(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
        f=f*i;
    return f;
}
