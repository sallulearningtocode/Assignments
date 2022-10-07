#include<stdio.h>
/*1.Print Unit Digit Of A given Number
    int main()
    {
        int a;
        printf("Enter a Number\n");
        scanf("%d",&a);
        printf("Unit Digit is %d",(a%10));
}*/

/*2.Printing Number Without Last Digit
    int main()
    {      int a;
        printf("Enter a Number\n");
        scanf("%d",&a);
        printf("last Digit is %d",(a/10));

}*/

/*3.Swapping Two Values of Two Variables
int main()
{
    int a,b,c;
    printf("Enter Two Values");
    scanf("%d%d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping %d %d\n",a,b);

}*/

/*4.Swapping Values of Two Variables Without taking third Variable
int main()
{
    int a,b;
    printf("Enter Two Values");
    scanf("%d%d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping %d %d\n",a,b);

}*/

/*5.Input a Three-digit number and display the sum of the digits
int main()
{
    int r1=0,r,n;
    scanf("%d",&n);
    r=n%10;
    r1=r1+r;
    n=n/10;
    r=n%10;
    r1=r1+r;
    n=n/10;
    r=n%10;
    r1=r1+r;
    printf("%d",r1);
}*/

/*6.Program which takes a charachter as an input and displays the ASCII code.
int main()
{
    char a='A';
    printf("%d",a);
}*/

/*7.Program to find position of 1 in LSB
int main()
{
    int a,n,lsb=0;
    printf("Enter a Number");
    scanf("%d",&a);
    while(n!=1)
    {
        n=a%2;
        lsb++;
        a=a/2;
    }
        printf("%d",lsb);
}*/

/*8.Program to Check whether a number is even or odd using Bitwise Operator
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a&1)
    printf("odd Number");
    else
    printf("Even Number");
}*/

/*9.Program to print size of variables of different data types
int main()
{
    int a;
    char b;
    float c;
    double d;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
}*/

/*10.Program to store last value of a variable as 0
int main()
{
    int a,r;
    scanf("%d",&a);
    r=a%10;
    a=a/10;
    r=r*0;
    printf("%d%d",a,r);
}*/

/*11.Write a program to input a number from the user and also
input a digit. Append a digit in the number and print the resulting number.
int main()
{
    int a,d;
    printf("Enter a Number");
    scanf("%d",&a);
    printf("Enter a Digit");
    scanf("%d",&d);
    a=a*10;
    a=a+d;
    printf("%d",a);

}*/

/*12.Take input in rupees and convert in dollars
int main()
{
    float dol,rup;
    printf("Enter in Rupees");
    scanf("%f",&rup);
    printf("%f Dollar",rup*(1/76.23));
}*/

/*13.Program to take three digit number from the user and 
rotate its digit by one position towards the right. 
int main()
{
    int a,r,q;
    printf("Enter a Number");
    scanf("%d",&a);
    r=a%10;
    q=a/10;
    a=r*100+q;
    printf("Reverse Number %d",a);
}*/

