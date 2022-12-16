#include<stdio.h>
/*1.Write a Recursive Function to print first N Natural Numbers.
void printN(int);
int main()
{
    printN(6);
}
void  printN(int n)
{
    if(n>=0)
    printN(n-1);
    printf("%d\n",n);
}*/

/*2.Write a Function to print first N Natural Numbers in reverse order.

void printn(int n);
int main()
{
    printn(10);
}

void printn(int n)
{
    if(n>=1)
    printf("%d\n",n);
    printn(n-1);
}*/

/*3.Write a Function to print first N odd natural Numbers

void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>1)
    printodd(n-1);
    printf("%d",2*n-1);
}*/

/*4.Write a Function to print first N odd natural numbers in reverse order

void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>=1)
    printf("%d\n",2*n-1);
    printodd(n-1);
}*/

/*5.Write a function to print first N even natural numbers

void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>1)
    printodd(n-1);
    printf("%d\n",2*n);
}*/

/*6.Write a Function to print first N even natural numbers in reverse order

void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>=1)
    printf("%d\n",2*n);
    printodd(n-1);
}*/

/*7.Write a Function to print squares of first N natural numbers
void printodd(int);
int main()
{
    printodd(10);
}

void printodd(int n)
{  
    if(n>1)
    printodd(n-1);
    printf("%d ",n*n);
}*/

/*8.Write a Function to calculate binary of a given decimal number. 
void bin(int n)
{
    int i;
    for(i=0;n>0;i++)
    {a[i]=n%2;n=n/2;}
    for(i=(i-1);i>=0;i--)
    printf("%d ",a[i]);
}
int main()
{
    int i,a[10],n;
    scanf("%d",&n);
    bin(n);
    return 0;    
}*/

/*9.Write a Function to print octal of a given number
void oct(int n)
{
    int octal=0,i=1;
    while(n!=0)
    {
        octal+=(n%8)*i;
        n/=8;
        i*=10;
    }
    printf("%d",octal);
}
int main()
{
    int n;
    scanf("%d",&n);
    oct(n);    
}*/

/*10.Write a function to print a number in reverse
void rev(int n)
{
    while(n>0)
    {
        printf("%d",n%10);
        n=n/10;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    rev(n);
}*/

