#include<stdio.h>
/*1.program to check whether a given number is positive or non-positive.
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a>0)
    printf("Positive");
    else
    printf("Non-Positive");
}*/

/*2.Program to check whether a given number is divisible by 5 or not
    int main()
    {
        int a;
        printf("Enter a Number");
        scanf("%d",&a);
        a%5==0?printf("Divisible by 5"):printf("Not Divisible");
}*/

/*3.Program To Check whether a number is Even or Odd.
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a%2==0)
    printf("Even Number");
    else
    printf("Odd Number");
}*/

/*4.program to check whether a given number is an even number or an odd
number without using % operator.
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a&1)
    printf("ODD Number");
    else
    printf("Even Number");
}*/

/*5.Program to Check whether a given number is a three digit number or not.
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a>99&&a<1000)
    printf("Three Digit Number");
    else 
    printf("Not a Three Digit Number");
}*/
    
/*6.Program to check greater number between two numbers
int main()
{
    int a,b;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is greater",a);
    else
    printf("%d is Greater",b);
}*/

/*7.write a program to check whether roots of a given quadratic euation are real 
& distinct, real & equal or imaginary roots.
#include<math.h>
int main()
{
    double a,b,c,disc,real,imag,root1,root2;
    printf("Enter Coefficients a, b and c ");
    scanf("%lf %lf %lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>0){
      root1 = (-b + sqrt(disc))/(2*a);
      root2 = (-b - sqrt(disc))/(2*a);
      printf("Root1 = %.2lf and Root2 = %.2lf\n",root1,root2);
      printf("Roots are Real and Distinct");
    }
    else if(disc==0)
    {
        root1=root2=-b/(2*a);
        printf("Root1 = Root2 = %.2lf\n;",root1);
        printf("Roots are real and equal");
    }
    else{
        real = -b/(2*a);
        imag = sqrt(-disc)/(2*a);
        printf("Root1 = %.2lf+%.2lfi and Root2 = %.2lf-%.2lfi\n",real,imag);
         printf("Both Roots are real and imaginary");     
}
        return 0;
}*/

/*8.Program to check whether a given year is leap or not
int main()
{
    int year;
    printf("Enter a Year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        printf("Leap Year");
        else
        printf("Not a Leap Year");
    }
    else if (year%4==0)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
}*/

/*9. Program to find greatest among three given numbers.
int main()
{
    int a,b,c;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
      printf("%d is greater",a);
    else if(b>c)
    printf("%d is Greater",b);
    else
    printf("%d is Greater",c);
}

/*10.Calculate Profit or Loss Percentage.
int main()
{
    float cp,sp;
    float loss,profit;
    printf("Enter Selling Price\n");
    scanf("%f",&sp);
    printf("Enter Cost Price\n");
    scanf("%f",&cp);
    if(cp>sp){
    loss=cp-sp;
    printf("You have made loss of %.2f percent",(loss*100)/cp);
 }
    else if (sp>cp)
    {
    profit=sp-cp;
    printf("You have made profit of %.2f percent",(profit*100)/cp);
    }
    else
    printf("Neither profit Nor Loss");
}*/

/*11-Program to check whether a student is passed or not
int main()
{
    int e,h,m,s,ss,total;
    float p;
    printf("Enter 5 Subjects Marks\n");
    scanf("%d%d%d%d%d",&e,&h,&m,&s,&ss);
    total=e+h+m+s+ss;
    p=total/5.0;
    if(p>=33&&p<=100)
    {
        printf("You Have Passed The Examintaion\nAnd You Got %.2f percentage",p);

    }
    else
        printf("Better Luck Next time");
}*/

/*12-Check Whether an Alphabet is in Upper case or Lowercase
int main()
{
    char a;
    printf("Enter an alphabet");
    scanf("%c",&a);
    if(a>64&&a<91)
    {
        printf("Upper Case Alphabet");
    }
    else if(a>96&&a<123)
    {
        printf("Lowercase  Case Alphabet");
    }
    else
        printf("Not An alphabet");
}*/


/*13-Check Whether a number is divisible by 3 and 2.
int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    if(a%3==0)
     {  
        if(a%2==0)
            printf("Divisible By 3 and 2 both");
        else
        printf("Divisible by 3");
    }
    else if(a%2==0)
        printf("Divisible by 2 Only");
    else
        printf("Non-Divisible by 3 or 2");
}*/


/*14-Check Whether a number id Divisible by 7 or 3.
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%7==0)
    {
        if(a%3==0)
        printf("Divisible by 7 and 3 both\n");
        else
        printf("Divisible bY 7");
    }
    else if(a%3==0)
    {
        printf("Divisible by 3");
    }
    else
    printf("Non-Divisible By Both");
    
}*/

/*15-Check Whether a Number is positive negative or Zero.
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0)
        printf("Positive\n");
    else if(a<0)
        printf("Negative");
    else
       printf("Zero");
}*/


/*16-Check whether a character is Uppercase alphabet, lowercase alphabet, number, digit or a special character
int main()
{
    char a;
    printf("Enter an alphabet");
    scanf("%c",&a);
    if(a>64&&a<91)
    {
        printf("Upper Case Alphabet");
    }
    else if(a>96&&a<123)
    {
        printf("Lowercase  Case Alphabet");
    }
    else if(a>47&&a<58)
        printf("Digit");
    else if(a>31&&a<48 || a>57&&a<65 || a>90&&a<97 || a>122&&a<127)
    printf("Special Charachter");
}
*/

/*17-Write a program which takes the length of the sides of a triangle as an input.
Display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int f,b,s;
    printf("Enter First Side of the triangle ");
    scanf("%d",&f);
    printf("Enter base of the triangle ");
    scanf("%d",&b);
    printf("Enter Second Side of the triangle ");
    scanf("%d",&s);
    if(f+s>b)
    {
        printf("This Triangle is Valid");
    }
    else
        printf("Invalid Triangle");
}*/

/*18-Write a program which takes the month 
number as an input and display number of days in that month
int main()
{

    int m;
    printf("Enter a Month Number\n");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("31 Days in this month");
        else if(m==4||m==6||m==9||m==11)
            printf("30 Days");
        else if(m==2)
            printf("28/29 Days");
        else
            printf("Invalid Number");
}*/
