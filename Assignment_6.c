#include<stdio.h>
/*1.Program to calculate Sum offirst N Natural Nubers
int main()
{
    int s=0,n,i;
    printf("Enter a Number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
printf("%d",s);
}*/

/*2.Program to Calculate Sum of First N Even Natural Numbers
int main()
{
    int i,a,s=0;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+i*2;
    }
    printf("%d",s);
}*/

/*3.Program to Calculare First N odd Natural Numbers 
int main()
{
    int a,i,s=0;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=1;i<=a*2;i++)
    {
        if(i&1)
        s=s+i;
    }
    printf("%d",s);
}*/

/*4.Program to Calculate Squares of First N Natural Number
int main()
{
    int a,i,sq=0;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sq=sq+i*i;
    }
    printf("%d",sq);

}*/

/*5.Program to Calculate Cubes of First N Natural Numbers
int main()
{
    int a,i,cube=0;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        cube=cube+i*i*i;
    }
    printf("%d",cube);
}*/

/*6.Program to Calculate factorial Of a Number
int main()
{
    int a,i,fact=1;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
            fact=fact*i;
    }
    printf("%d",fact);
}*/

/*7.Count Digits in a given number
int main()
{
    int a,count=0;
    printf("Enter a Number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        
        count++;
        a=a/10;
    }
    printf("%d",count);
}*/

/*8.Progarm to Check whether a given number is prime or not.
int main()
{
    int a,i;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=2; i<=a/2; i++)
    {
        if(a%i!=0){
        printf("Prime Number");
        break;
        }
        else 
        {
            printf("Not Prime Number");
            
            break;
            }
    }
}*/

/*9.Program to Calculate L.C.M of Two Numbers
int main()
{
    int a,b,max,i=1;
    printf("Enter two Numbers");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    while(i)
    {
        if( max%a==0 && max%b==0)
        {
            printf("L.C.M of %d and %d is %d",a,b,max);
            break;
        }
        ++max;

  }
}*/

/*10.Programt to Reverse  a Given Number.
int main()
{
    int a,r=0,r1;
    printf("Enter a Number");
    scanf("%d",&a);
    while(a!=0)
    {
        r1=a%10;
        r=r*10;
        a=a/10;
        r=r1+r;
    }
    printf("%d",r);
}*/