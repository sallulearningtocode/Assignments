#include<stdio.h>
#include<stdio.h>
#include<string.h>
/*1.Function to calculate length of the String
#include<stdio.h>
int main()
{
    char str[]="JavascriptHackathon";
    printf("%d",len(str));
    return 0;
}
int len(char str[])
{
    int i,l;
    for(i=0;str[i];i++);
    return i;
}*/
/*2.Function to Reverse String
 #include<stdio.h>
int main()
{
    char a[4]="aman";
    rev(a,4);
    return 0;
}
void rev(char a[],int size)
{
    int i,temp;
    for(i=0;i<(size/2);i++)
    {
        temp=a[size-i-1];
        a[size-i-1]=a[i];
        a[i]=temp;
    }
    for(i=0;i<size;i++)
        printf("%c",a[i]);
    
}*/   
/*3.Function to Compare two Strings
#include<stdio.h>
int main()
{
    char a[20],b[20];
    printf("Enter First String\n");
    fgets(a,20,stdin);
    printf("Enter Second String\n");
    fgets(b,20,stdin);
    cmp(a,b);
    return 0;
}
int cmp(char a[],char b[])
{
    int i,count=0,length=0;
    for(i=0;a[i];i++)
    {
        if(a[i]==b[i])
        count++;
        length++;
    }
    if(count==length)
    printf("Both Strings are equal");
    else
    printf("Different Strings");
}*/
/*4.Function to transform string in uppercase
 #include<stdio.h>
int main()
{
    char a[10];
    printf("Enter A String\n");
    fgets(a,10,stdin);
    uppr(a);
    return 0;
}
void uppr(char a[])
{
    int i;
    for(i=0;a[i];i++)
    {
        if(96<a[i]&&a[i]<123)
        a[i]=a[i]-32;
    }
    for(i=0;a[i];i++)
    printf("%c",a[i]);
}*/
/*5.Function to transform Sting in lowercase
#include<stdio.h>
int main()
{
    char a[10];
    printf("Enter A String\n");
    fgets(a,10,stdin);
    lowr(a);
    return 0;
}
void lowr(char a[])
{
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>64&&a[i]<91)
        a[i]=a[i]+32;
    }
    for(i=0;a[i];i++)
    printf("%c",a[i]);
}*/
/*6.Function to Check if a string is ALphanumeric or not
 #include<stdio.h>
 int main()
 {
    char a[20];
    printf("Enter a String");
    fgets(a,20,stdin);
    alphan(a);
    return 0;
 }
 void alphan(char a[])
 {
    int i,ac=0,an=0;
    for(i=0;a[i];i++)
    {
        if(a[i]>64&&a[i]<91||a[i]<123&&a[i]>96)
        {
            ac++;
            break;
        }
    }
    for(i=0;a[i];i++)
    {
        if(a[i]>47&&a[i]<58)
        {
        an++;
        break;
        }
    }

    if(ac==an)
    printf("Alphanumeric");
    else
    printf("Not Alpha Numeric");
 }*/
/*7.Function to check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char a[25],i,s;
    printf("Enter a String\n");
    fgets(a,25,stdin);
    printf("\n\n\n%d\n\n\n\n",strlen(a));
    palin(a,strlen(a));
    return 0;
}
void palin(char a[],int s)
{
    int i;
    for(i=0;i<s/2;i++)
    {   
        if(a[i]==a[s-i-1]);
        else break;
    }
    if(i==s/2)
     printf("Palindrome");
}*/
/*8.Function to Count Words in The String
#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter A String\n");
    fgets(a,100,stdin);
    chkwrds(a,strlen(a)-1);
    // printf("%d",strlen(a)-1);
    return 0;
}
void chkwrds(char a[],int s)
{
    int i,count=0;
    for(i=0;i<s;i++)
    {
        if(a[i]==32)
        count++;
    }
    printf("Words in the string is: %d",++count);
}*/
/*9.
void swap(char a[],int i, int j)
{   
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    char a[20]=" salman khan";
    int i=0,start=0,end=0,flag=0;
    while(a[i]!='\0')
    {
        while(a[i]!=' ')
        {
            if(a[i]=='\0')
            {
                flag=1;
                break;
            }
            end++;
            i++;
        }
            swap(a,start,end-1);
            if(flag==1)
            break;
            start = end++;
            i++;
    }
    swap(a,0,i-1);
    printf("%s",a);
    return 0;
}*/
/*10.
int main()
{
    char str[100],c;
    int count=0;
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter a Character to fins its freuency:");
    scanf("%c",&c);
    for(int i=0;str[i];i++)
    {
        if(toupper(c)==toupper(str[i]))
        count++;
    }
    printf("\nFrequency of %c is %d",c,count);
    return 0;
}