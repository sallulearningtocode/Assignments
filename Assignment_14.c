#include<stdio.h>
/*1. Calculate Sum of Numbers Stored in an Array of 10 Size.
int main()
{
    int arr[10],s=0,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        s=s+arr[i];
    }
     printf("%d",s);
}*/

/*2. Calculate Average of numbers stored in array of 10 size.
int main()
{
    int arr[10],s=0,i;
    float avg;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        s=s+arr[i];
    }
    avg=(s/i);
    printf("Average is %2f",avg);
}*/

/*3. Calculate Sum of All even and odd numbers in an array of size 10.
int main()
{
    int arr[10],so=0,se=0,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<=9;i++)
    {
        if(arr[i]%2==0)
        {
            se=se+arr[i];
        }
        else
        {
            so=so+arr[i];
        }
    }
    printf("Sum of Eve Numbers in the array %d\n Sum of all Odd Numbers in The Array %d",se,so);
}*/

/*4. Write a program to find Greatest Number in an array.
int main()
{
    int arr[10],g,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    g=arr[0];
    for(i=1;i<=9 ;i++)
    {
        if(g<arr[i])
        g=arr[i];
    }
    printf("%d",g);
}*/

/*5. Program to find Smallest number in an array.
int main()
{
    int arr[10],g,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    g=arr[0];
    for(i=1;i<=9 ;i++)
    {
        if(g>arr[i])
        g=arr[i];
    }
    printf("%d",g);
}*/

/*6. Sort elements of an array of size 10. 
int main()
{
    int a[10],i,temp,g;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
    for(int j=i+1;j<10;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
}
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

}*/

/*7. Find second Largest Element of an array of size 10.
int main()
{
    int a[5],i,temp,g;
    printf("Enter Values\n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    {
    for(int j=i+1;j<=4;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
}
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Second Largest Element of the array is %d",a[3]);

}*/

/*8. Find second Smallest Element of an array of size 5.
int main()
{
    int a[5],i,temp,g;
    printf("Enter Values\n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    {
    for(int j=i+1;j<=4;j++)
    {
    if(a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
}
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Second Smallest Element of the array is %d",a[1]);

}*/

/*9. Take N Number of Values in array and Display it in reverse order
int main()
{
    int n,i;
    printf("Enter Size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array in Reverse Order\n");
    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);
}*/

/*10.Program to Copy elements of one array into another Array. 
int main()
{
    int n,i;
    printf("Enter size of Array");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}*/