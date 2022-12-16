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

/*2.Write a Recursive Function to print first N Natural Numbers in reverse order.
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

/*3.Write a Recursive Function to print first N odd natural Numbers

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

/*4.Write a Recursive Function to print first N odd natural numbers in reverse order

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

/*5.Write a Recursive function to print first N even natural numbers

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

/*6.Write a Recursive Function to print first N even natural numbers in reverse order

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

/*7.Write a Recursive Function to print squares of first N natural numbers
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

/*8.Write a Recursive Function to calculate binary of a given decimal number. 
void bin(int n)
{
    if(n>0)
    {
        printf("%d ",n%2);
        bin(n/2);
    }
}
int main()
{
    int i,a[10],n;
    scanf("%d",&n);
    bin(n);
    return 0;    
}*/

/*9.Write a Recursive Function to print octal of a given number
int oct(int n)
{
    if(n>0)
    {
        oct(n/8);
        printf("%d ",n%8);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    oct(n);    
}
*/

/*10.Write a Recursive function to print a number in reverse
int rev(int n)
{
    if(n==0)
    return 0;
    printf("%d",n%10);
    rev(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    rev(n);
}*/

