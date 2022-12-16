#include<stdio.h>
/*1.Write a function to Calculate the area of a circle.
float circ(float r)
{
    return 3.14*r*r;
}*/

/*2.Function to Calculate Simple Interest.
float si(float p, float r, float t)
{
    return (p*r*t)/100;
}*/

/*3.Write a Function to Check whether a given number is odd oreven.
int iseven(int a)
{
    if(a%2==0)
    return 0;
    return 1;
 }*/

/*4.Write a Function to Print First N Natural Numbers
void nNumbers(int n)
{
    int i;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}*/

/*5.Write a Function to print n odd natural
 void nNumbers(int n)
{
    int i;
    while(i<=n)
    {
        printf("%d\n",i*2-1);
        i++;
    }
}*/

/*6.Write a Function to calculate Factorial of a number.
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    fact=fact*i;
    return fact;
}*/

/*7.Write a Function to calculate the number of combinations one
can make from n items and r selected at a time.
int fact(int);
int per(int n,int r)
{return (fact(n)/(fact(r)*fact(n-r)));}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int i,nCr,r,n;;
    scanf("%d %d",&n,&r);
    nCr=per(n,r);
    printf("%d",nCr);
}*/

/*8.Write a function to check whether a given number contains a given digit
    or not. 
int fact(int);
int per(int n,int r)
{return (fact(n)/fact(n-r));}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int i,nPr,r,n;
    scanf("%d %d",&n,&r);
    nPr=per(n,r);
    printf("%d",nPr);
}*/

/*9.Write a Function to check whether a given number contains
a given digit or not.
int ifthere(int a)
{
    int i,k,r=0,flag=0;
    printf("Enter a Number");
    scanf("%d",&a);
    printf("Enter the number you want to find");
    scanf("%d",&k);
    for(i=0;i<=a;i++)
    {
        r=a%10;
        if(r==k){
        flag=1;
        return k;
        break;
        }
        a=a/10;
    }
    if(flag!=1)
    return flag;
}*/

/*10.Write to print all prie factors of a given number.
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
            i--;
        }
    }
}*/
