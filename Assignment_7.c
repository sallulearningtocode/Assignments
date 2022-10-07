#include<stdio.h>
/*1.Program to print Nth term of the Fibonacci Series
int main()
{
    int prev=0,curr=0,next=1,n;
    printf("Enter a Number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        curr=prev+next;
        
        prev=next;
        next=curr;
    }
    printf("%d ",curr);
}*/

/*2.Program to print N terms of Fibonacci Series
int main()
{
    int prev=0,curr=0,next=1,n;
    printf("Enter a Number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        curr=prev+next;
        printf("%d ",curr);
        prev=next;
        next=curr;
    }
}*/

/*3.Program to print Nth term of the Fibonacci Series
int main()
{
    int prev=0,curr=0,next=1,a,flag=0;
    printf("Enter a Number to find");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
    {
        curr=prev+next;
        if(a==curr){
            flag=1;
        printf("Number %d Found at %dth position",a,i);
        break;
        }
        prev=next;
        next=curr;
    }
    if(flag==0)
    printf("Number not found");
}*/

/*4. Program to Calculate H.C.F of Two Numbers
int main()
{
    int i,a,b,hcf=0,max;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    for(i=2;i<=max/2;i++)
    {
        if(a%i==0&&b%i==0)
        {
          hcf=i;
        }
    }
    printf("%d\n",hcf);
}*/

/*5.Program to Check Whether two given numbers are co-prime numbers or not
int main()
{
    int a,b,i,max=0;
    printf("Enter First Number\n");
    scanf("%d",&a);
    printf("Enter Second Number\n");
    scanf("%d",&b);
    max=(a>b)?a:b;
    while(i)
    {
        if( max%a==0 && max%b==0)
        {
            printf("L.C.M of %d and %d is %d\n",a,b,max);
            break;
        }
        ++max;
    }
    
    if(max==a*b)
    printf("Numbers are Co-Primes");
    else
    printf("Numbers are not Co-Primes");
}*/

/*6. Program to print all prime numbers Under 100 numbers
int main()
{
    int i,a,count;
    for(a=1;a<=100;a++)
    {
        count=0;
        for(i=2;i<=a/2;i++)
   {
       if(a%i==0){
        count++;
        break;
    }
    }
         if(count==0 && a!=1)
    printf("%d\n",a);
 }
}*/

/*7. Write a Program to find the all Prime Numbers between two given number.
int main()
    int i,a,count,k,s;
    printf("Enter Starting and Ending Class Interval");
    scanf("%d%d",&s,&k);
    for(s;s<=k;s++)
    {
        count=0;
        a=s;
        for(i=2;i<=a/2;i++)
   {
       if(a%i==0){
        count++;
        break;
    }
         if(count==0 && a!=1)
        {
            printf("%d ",a);
            break;
        }
    }
 }
}*/

/*8.Write a Program to find next Prime Number of a given number.
int main()
{
    int i,a,count,k=0,s;
    printf("Enter a Number");
    scanf("%d",&s);
    a=s;
    while(1)
    {
        count=0;
        a++;
        for(i=2;i<=a/2;i++)
   {
        if(a%i==0)
    {
        count++;
        break;
    }
    }
        if(count==0)
    {
        k++;
        printf("%d ",a);
        break;
    }
    if(k!=0)
    break;
 }
}*/

/*9.Write a program to check whether a given number is an armstrong number or not.
int main()
{
    int n,r,sum=0,temp;
    printf("Enter the number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("ARMSTRONG NUMBER");
    else 
    printf("NOT AN ARMSTRONG NUMBER");
    return 0;
}*/

/*10.Write a Program to print all Armstrong numbers under 1000 
int main()
{
    int sum, d1, d2, d3;
    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for(int n=1;n<=1000;n++)
    {
        if(n<=9)
        {
            printf("%d ",n);
        }
        else
        {
            d1 = n % 10;   
            d2 = (n % 100 - d1) / 10;      
            d3 = (n % 1000 - d2) /100;
            sum = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3); 
	        if (sum == n)
            printf("%d ", sum);
        }
    }
    return 0;
}*/