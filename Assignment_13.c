#include<stdio.h>
/*1.Write a Recursive Function to calculate sum of first N Natural Numbers
int sumN(int n)
{
    int sum=0;
    if(n==1)
    return 1;
    sum=n+sumN(n-1);
    return sum;
}
int main()
{
    printf("%d",sumN(100));

}*/

/*2.Write a Recursive Function to sum of first N odd Natural Numbers.
int sumNodd(int n)
{
    int sum=0;
    if(n==1)
    return 1;
    if(n%2!=0)
    {
        sum=n+sumNodd(n-1);
        return sum;
    }
    else
    sumNodd(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumNodd(n));
}*/

/*3.Write a Recursive function to calculate sum of square of first n natural numbers
int square(int n)
{
    if(n==1)
    return 1;
    return (n*n+square(n-1));
}
int main()
{
    printf("%d",square(10));
}*/

/*4.Write a Recursive Function to calculate sum of digits of a given number
int sumdigit(int n)
{
    int sum=0;
    if(n==0)
    return 0;
    return n%10+sumdigit(n/10);
}
int main()
{
    printf("%d",sumdigit(173));
}*/

/*5.Write a Recursive Function to calculate Factorial Of a given Number
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    printf("%d",fact(6));
}*/

/*6.Write a Recursive Function to Calculate HCF of two numbers.
int HCF(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        return HCF(a-b,b);
        else
        return HCF(a,b-a);
    }
    return a;
}
int main()
{
    printf("%d",HCF(150,250));
}*/

/*7.Write a Recursive Function to print first N terms of Fibonacci Series.
void printFibonacci(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
} 
int main()
{
/*9.Write a Program in C to Count the Digits of a given Number using Recursion.
int fun(int n)
{
    int count=1;
    if(n)
    return count+fun(n/10);
    else
    return 0;

}
int main()
{
    printf("%d",fun(2153));
}*/

/*10.Write a Program in C to calculate the power of any number using Recursion
int power(int x, int y)
{
    return (y>1)?x*power(x,--y):x;
}
int main()
{
    printf("%d",power(7,2));
    return 0;
}*/

