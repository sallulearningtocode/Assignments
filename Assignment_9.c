/*1.Program to take month number as input and display days in it.
#include<stdio.h>
int main()
{
    int x;
        printf("Enter a Number");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf("31 Days");
            break;
            case 4:
            case 6:
            case 9:
            case 11:
            printf("30 Days");
            break;
            case 2:
            printf("28/29 Days");
            break;
            default:
            printf("Invalide Choice");
            break;
            if(x==0)
            return 0;
        }
    }*/

/*2.Write a Menu Driven Program.
#include<stdio.h>
int main()
{
    int x,a,b;
    while(1){
    printf("Enter Your Choice\n");
    printf("Press 1 to Addition\n");
    printf("Press 2 to Subtraction\n");
    printf("Press 3 to Multiplication\n");
    printf("Press 4 to Quotient\n");
    printf("Press 5 to Remainder\n");
    printf("Press 0 to Exit...\n");
    scanf("%d",&x);
    if(x==0)
    break;
    switch(x)
    {
    case 1:
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    printf("Sum is %d\n",a+b);
    break;
    case 2:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Difference is %d\n",a-b);
    break;
    case 3:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Product is %d\n",a*b);
    break;
    case 4:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Quotient is is %d\n",a/b);
    break;
    case 5:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Remainder is %d\n",a%b);
    break;
    default:
    printf("Invalid Choice, Choose Between 1-5");
   }
 }
}*/

/*3 Program which takes the day number of a week and displays a unique
greeting message for the day.
#include<stdio.h>
int main()
{
    int day;
    printf("Enter day Number");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Sunday-Funday");
        break;
        case 2:
        printf("Monday-Motivation");
        break;
        case 3:
        printf("Tuesday-WarmUP");
        break;
        case 4:
        printf("Wednesday-WaistDay");
        break;
        case 5:
        printf("Thursday-BicepsDay");
        break;
        case 6:
        printf("Friday-ThighDay");
        break;
        case 7:
        printf("Saturday-ChestDay");
        break;
        default:
        printf("Invalid");
    }
}*/

/*4.Menu-Driven Program to Check Triangle
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
        while(1)
        {
            printf("Enter 1 to Check triangle is equilateral or not\n");
            printf("Enter 2 to Check triangle is Isoceles or not\n");
            printf("Enter 3 to Check triangle is Right-Angled Triangle or not\n");
            printf("Press 4 to exit\n");
            scanf("%d",&x);

            printf("Enter sides of triangle");
            scanf("%d%d%d",&a,&b,&c);
        switch(x)
        {
            
            case 1:
            if(a==b&&b==c&&c==a)
            {
                printf("Equilateral Triangle\n");
            }
            else
            printf("Not Equilateral Triangle\n");
            break;
            case 2:
            if(a==b&&b!=c||b==c&&b!=a||c==a&&c!=b)
            {
                printf("Isoceles Triangle\n");
            }
            else
            printf("Not an Isoceles Triangle\n");
            break;
            case 3:
            if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
            {
                 printf("Right-Angled Triangle\n");
            }            
            else
            printf("Not a Right angled Triangle\n");
            break;

            case 4:
                exit(0);
        }
    }
}*/

/*5. Convert the Following if-else-if Construct into Switch case
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Good");
        break;
        case 2:
        printf("Better");
        break;
        case 3:
        printf("best");
        break;
        default:
        printf("Invalid");
    }
}*/

/*6.Program to Check whether a year is a leap year or not.
Using Switch Statement.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter an Year");
    scanf("%d",&year);
    switch(year%100==0)
    {
       case 1:switch(year%400==0){
        case 1:
       printf("Leap Year");
       break;
       }
       case 0: switch(year%4==0){
        case 1:
       printf("Leap Year");
       break;
       case 0:
       printf("Not a Leap Year");
       break;  
    }
}
}*/

/*7. Calculate Electricity Charges.
#include<stdio.h>
int main()
{
    float amount=0,total=0,x;
    printf("Enter Consumed Units\n");
    scanf("%f",&x);
    switch(x<=50)
    {
        case 1: amount=x*0.5;
                break;
        case 0: switch(x<150)
                    {
                     case 1: amount=25+(x-50)*0.75;
                            break;
                     case 0: switch(x<=250)
                     {
                        case 1:amount=100+(x-150)*1.20;
                            break;
                        case 0: amount=220+(x-250)*1.5;
                            break;
                     }
                    } 
    }
    total=amount+amount*0.20;
    printf("Total amount is %f",total);
    return 0;
}*/

/*8.Program to convert a positive number into negative number and negative number into
a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:
        a=(a*-1);
        break;
        case 0:
        a=(a*-1);
        break;
    }
    printf("%d",a);
}*/

/*9.Program to convert even number into its upper 
nearest odd number using Switch Statement
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a NUmber");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:
        a=a+1;
        printf("%d",a);
        break;
    }
}*/

/*10.C Program to ind all roots of a uadratic euation using switch case

#include <math.h>
int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c); // Calculating discriminant
    switch(discriminant > 0) // Compute roots of quadratic equation based on the nature of discriminant 
    {
        case 1:
            // If discriminant is positive 
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    root1, root2);
            break;

        case 0:
            // If discriminant is not positive 
            switch(discriminant < 0)
            {
                case 1:
                    // If discriminant is negative 
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            root1, imaginary, root2, imaginary);
                    break;
                case 0:
                    // If discriminant is zero
                    root1 = root2 = -b / (2 * a);
                    printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                    break;
            }
    }
    return 0;
}*/