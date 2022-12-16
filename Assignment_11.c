#include<stdio.h>
/*1.Write a Function to calculate LCM of Two Numbers.
int LCM(int a, int b)
{
    int max;
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0&&max%b==0)
            return max;
        ++max;    
    }
}
int main()
{
    printf("%d",LCM(10,20));
}*/

/*2.Write a Function to calculate HCF of Two Numbers
int hcf(int a, int b)
{
    int h,i;
    for(i=2;i<a;i++)
    {
        if(a%i==0&&b%i==0)
            h=i;
    }
    return h;
}
int main()
{
    printf("%d",hcf(50,20));
}*/

/*3.Write a Function to check whether a given number
    is prime or not.
int isPrime(int n)
{
    int flag=0,i;
    for(i=2;i<n;i++)
        if(n%i==0)
        flag=1;
    if(flag) return 0;
    else return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isPrime(n))
    printf("Prime Number");
    else 
    printf("Not a Prime Number");
}*/

/*4.Write a Function to find the next prie number of given number
int isPrime(int n)
{
    int flag=0,i;
    for(i=2;i<n;i++)
        if(n%i==0)
        flag=1;
    if(flag) return 0;
    else return 1;
}

int nextPrime(int n)
{
    int i,count=0;
    for(i=n+1;count!=1;i++)
    {
        if(isPrime(i))
        {
            count=1;
            break;
        }
    }
    printf("%d",i);
}

int main()
{
    int n;
    scanf("%d",&n);
    nextPrime(n);
}*/

/*5.Write a Function to print First N Prime Numbers
int isPrime(int n)
{
    int flag=0,i;
    if(n==1||n==2)
    return 1;
    for(i=2;i<n;i++)
        if(n%i==0)
        flag=1;
    if(flag) return 0;
    else return 1;
}

void printNPrime(int n)
{
    int i=1;
    while(n!=0)
    {   if(isPrime(i))
        {
            printf("%d ",i);
            n--;
        }   
            i++;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printNPrime(n);
    return 0;    
}*/

/*6.Write a Function to print all Prime Numbers between two 
    given Numbers.
int isPrime(int n)
{
    int flag=0,i;
    if(n==1||n==2)
    return 1;
    for(i=2;i<n;i++)
        if(n%i==0)
        flag=1;
    if(flag) return 0;
    else return 1;
}
void printPrimeNtoM(int n, int m)
{
    while(n!=m)
    {
        if(isPrime(n))
        {
            printf("%d ",n);
        }
            n++;
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printPrimeNtoM(n,m);
}*/

/*7.Write a Function to print first N terms of Fibonacci Series
void fib(int n)
{   
    int i,a=0,b=1,c;
    printf("%d ",a+b);
    for(i=0;i<n-1;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
}*/

/*8.Write a Function to print PASCAL triangle.
#include <stdio.h>
long Factorial(int);
void pascalTriangle(int Number)
 {
    int i,j;
    for (i = 0; i < Number; i++)
   {
      for (j = 0; j <= (Number - i - 2); j++)
      {
      	printf(" ");
	  }
      for (j = 0; j <= i; j++)
      {
      	printf("%ld ", Factorial(i) / (Factorial(j) * Factorial(i-j)));
	  } 
      printf("\n");
   }
 }
 
long Factorial(int Number)
{
   int i;
   long Fact = 1;
   for (i = 1; i <= Number; i++)
         Fact = Fact * i;
   return Fact;
}
int main()
{
   int i, Number, j;
   printf("\n Please Enter the Number of rows you wish to see \n");
   scanf("%d", &Number);
   pascalTriangle(Number);
   return 0;
}*/

/*9.Write a program to find the sum of any number using functions
int square(int n)
{return n*n;}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",square(n));
    return 0;
}*/

/*10.Write a Program in C to find the sum of the Series 1!/1+2!/2+3!/3+4!/4+5!/5
    using the function.
float fact(int n)
{
    int f=1,i;
    for(i=1;i<=n-1;i++)
        f=f+f*i;
        return f*1.0;
}
float sumSeries()
{
    return fact(1)/(1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5);
}
int main()
{
 float sum;
 sum=sumSeries();
 printf("%f",sum);   
}*/

