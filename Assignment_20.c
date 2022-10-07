#include<string.h>
#include<stdio.h>
/*1. Program to Swap Value of Two Numbers usin pointers.
int main()
{
    int a,b;
    printf("Enter Two Numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;
}
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}*/

/*2.Swap strings of two cha rarrays of calling functions
int main()
{
    int s;
    char a[20],b[20],c[20];
    printf("Enter Your First Name\n");
    fgets(a,20,stdin);
    printf("Enter Your Last Name\n");
    fgets(b,20,stdin);
    s=strlen(a);
    if(swap(a,b,s))
    printf("\n%s\n%s",a,b);
}

//Method 1
void swap(char *a,char *b)
{
    char c[20];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("\n%s\n%s",a,b);
    return 1;
}
//Method 2
 int swap(char *a,char *b,int s)
{
    char *c;
    int i;
    for(i=0;i<s;i++)
    {
        *(c+i)=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=*(c+i);
    }
    return 1;
}*/

/*3.Function to Sort an Array of int type values.
void sort(int *,int s);
int main()
{
    int a[12]={0,40,15,78,2,3,45,1,4,9,55,20};
    sort(a,12);
}
void sort(int *a,int s)
{
    int i,j,t;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s-1;j++)
        if(a[i]<a[j])
        {
            t=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=t;
        }
    }
        for(i=0;i<s;i++)
        printf("%d ",a[i]);
}*/

/*4.Write a Program in C to Demonstrate how to handle the pointers in the program
int main()
{
    int n,*p,**q;//Declaring an int(Ordinary) Variable and an Pointer Variable of Int type 
    p=&n; //Assigning Address of n variable to p(pointer) variable.
    q=&p; //q is a pointer pointing to a pointer which is considered by the number of asterisk while declaring.

    printf("Enter A Number");
    scanf("%d",&n);

    printf("%d\n",*p);//Accessing n's value by p because p is pointing n variable.
    printf("%d\n",**q);//Accessing n's value by q because q is pointing to q variable which is pointing to n variable.
    printf("%d\n",p);// this is how we can print n's address
    printf("%d",&n);// this is another method how we can print n's address
}*/

/*5.Program to Find Maximum of Two Variables Using Pointers

int main()
{
    int a=122,b=21;
    printf("%d",swap(&a,&b));
    
}
int swap(int *p,int *q)
{
    if(*p>*q)
    return *p;
    return *q;
}*/

/*6.Program to Find Length of string using Pointer
int main()
{
    char s[]="Beautiful";
    printf("%d",length(s));
    return 0;
}
int length(char *s)
{
    int i;
    for(i=0;i<*(s+i);i++)
    {
        if(*(s+1)==0)
        break;
    }
    return i;
}*/

/*7.Calculate Vowels and Consonants in a program
int main()
{
    int v=0,c=0;
    char str[]={'a','w','q','s','e','d','r','t','f','g','y','i','n','h','b','v','c','x','z','o','p','e','r','t','y','u','i','o','p'};
    count(str,&v,&c);
    printf("Vowels are %d and Consonants are %d",v,c);
    return 0;
}

void count(char *str,int *v,int *c)
{
    int i;
    for(i=0;*(str+i);i++)
    {
        if((*(str+i)=='a')||(*(str+i)=='e')||(*(str+i)=='i')||(*(str+i)=='o')||(*(str+i)=='u'))
        *v=*v+1;
        else
        *c=*c+1;
    }
}*/

/*8.Program to Sum all elements of array using pointer
int sum(int *,int);
int main()
{
    int a[7]={20,41,12,3,4,5,6};
    printf("%d",sum(a,7));
    return 0;
}
int sum(int *a,int s)
{
    int i,sum=0;
    for(i=0;i<s;i++)
        sum=sum+*(a+i);
        return sum;
}*/

/*9.Program to Print all elements of an array in reverse order 
int main()
{
    int a[8]={10,20,30,40,50,60,70,80};
    rev(a,8);
    return 0;
}
 void rev(int *a,int s)
 {
    int i,j,t;
    for(i=0;i<s-4;i++)
    {
        t=*(a+s-1-i);
        *(a+s-1-i)=*(a+i);
        *(a+i)=t;
    }
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
 }*/

/*10.Program to Reverse a String Using Pointer
int main()
{
    char str[]="Salman";
    rev(str,6);
    return 0;
}
void rev(char *str,int s)
{
    int i;
    for(i=s-1;i<s;i--)
    {
        printf("%c",*(str+i));
        if(*(str+i)==*(str+0))
        break;
    }
}*/