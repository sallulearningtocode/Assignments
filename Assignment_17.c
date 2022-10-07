#include<stdio.h>
/*1.Program to calculate length of the string
int main()
{
    char a[10]="Salman";
    int i,count=0;
    for(i=0;a[i];i++)
    {
        printf("%c",a[i]);
        count++;
    }
    printf("\nLength of the String is %d",count);
    return 0;
}*/

/*2.Program to find occurence of a character in a string
#include<stdio.h>
int main()
{
    char b,s[]="saurabh";
    printf("Which Character you want to find in string\n");
    scanf("%c",&b);
    for(int i=0;s[i];i++)
    {
        if(b==s[i])
       { printf("Character found at %d position",i);
        break;
        }
    }
    return 0;
}*/

/*3.Program to Calculate Vowels in a String
int main()
{
    char a[] = "INEURON";
    int vowels = 0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            vowels++;
        }
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            vowels++;
        }
   }
    if (vowels > 0)
        printf("There are %d Vowels in the String", vowels);
    return 0;
}*/

/*4.Progarm to Convert a String in Uppercase
int main()
{
    char a[4]="aman";
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>96){
        a[i]=a[i]-32;
        printf("%c",a[i]);
        }
    }    
    return 0;
}*/

/*5.Program to Convert a String in Lowercase
int main()
{
    char a[4]="AMAN";
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]<96){
        a[i]=a[i]+32;
        printf("%c",a[i]);
        }
    }    
    return 0;
}*/

/*6.Program to Reverse a String
int main()
{
    char b[7],a[7]="Saurabh";
    int i,temp;
    for(i=0;i<=6;i++)
    {
        b[i]=a[6-i];
    }
    for(i=0;b[i];i++)
    printf("%c",b[i]);
    return 0;
}*/

/*7.Program to Calculate Number of Alphabets,Digits and special Characters 
int main()
{
    char s[]="12456873abcSalmanKHAn@$#&6)()(*&^$#@!<>:;'][}{}-_++=~`.,";
    int i,no=0,a=0,sn=0;
    for(i=0;s[i];i++)
    {
        if(s[i]>47&&s[i]<58)
        no++;
        if(s[i]>64&&s[i]<91||s[i]>96&&s[i]<123)
        a++;
        if(s[i]>31&&s[i]<48 || s[i]>57&&s[i]<65 || s[i]>90&&s[i]<97|| s[i]>122&&s[i]<127)
        sn++;
    }
    printf("Total Numbers = %d\n",no);
    printf("Total Characters = %d\n",a);
    printf("Total Special Characters = %d\n",sn);
    return 0;
}*/

/*8.Program to Copy one string into another
int main()
{
    char b[12],a[12]="GoodListener";
    int i;
    for(i=0;a[i];i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<=11;i++)
    printf("%c",b[i]);
    return 0;
}*/

/*9.Program to Sort a String array in ascending order
int main()
{
    char s[26]="qwertyuiopasdfghjklzxcvbnm";
    int i,j,temp;
    for(i=1;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            if(s[i]<s[j])
           { temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            }
        }
    }
    for(i=0;s[i];i++)
    printf("%c",s[i]);
    return 0;
}*/

/*10.Program to find frequency of a character
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
        if(c==str[i])
        count++;
    }
    printf("\nFrequency of %c is %d",c,count);
    return 0;
}*/

