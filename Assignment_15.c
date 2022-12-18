#include<stdio.h>
/*1.Write a Function to Find greatest Number from an array
 int greatest(int a[],int s)
    {
        int i,g;
        printf("Enter Values in the Array");
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        g=a[0];
        for(i=0;i<s;i++)
        {
            if(g<a[i])
            g=a[i];
        }
        return g;
    }*/

/*2.Write a Function to find Smallest Number from an array
int smallest(int a[],int s)
    {
        int i,sm;
        printf("Enter Values in the Array");
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        sm=a[0];
        for(i=0;i<s;i++)
        {
            if(sm>a[i])
            sm=a[i];
        }
        return sm;
    }*/

/*3.Write a Function to Sort an Array of any Size.
int* sort(int[],int);
int main()
{
    int a[10];
    int *p;
    p=sort(a,10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",(*(p+i)));
    }
}
int* sort(int a[],int s)
{
    int i,j,temp;
    printf("Enter values in Array");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;

}

/*Function to Rotate Array in a Given Direction.
void rotate();
int main()
{
    int a[5];
    rotate(a,5);
}

void rotate(int a[],int s)
{

    int temp,n;
    printf("Enter Values\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("How many times You Want array to Rotate towards left\n");
    scanf("%d",&n);
 for(int j=1; j<=n; j++)
 { 
    temp=a[0];   
    for(int i=0; i<=4; i++)
    {
        a[i]=a[i+1];
    }
        a[4]=temp;
 }  
     for(int i=0; i<=4; i++)
    {
        printf("Value at %d index %d\n",i,a[i]);
    }
}*/

/*4.Write a Function to rotate an Array by n position in d direction. The d is an indicative
vaue for left and right. 
int main()
{
    int a[6]={40,24,36,61,22,50};
    char d;
        int move;
        printf("In Which Direction You Want To Move the Array\n");
        printf("Press L for Left and R for Right\n");
        scanf("%c",&d);
        printf("How Many Times You want To move the array\n");
        scanf("%d",&move);
        if(d==108||d==76)
            rotatel(a,move);
        if(d==114||d==82)
            rotater(a,move);
    return 0;
}
   void rotatel(int a[],int move)
        {
            int j,i,t;
        for ( j = 0; j < move; j++)
    {
            t=a[0];
            for(i=0;i<=4;i++)
        {
            a[i]=a[i+1];
            if(i==4)
            a[i+1]=t;
        }
    }
        for(i=0;i<=5;i++)
        printf("%d ",a[i]);
}
   void rotater(int a[])
{     
            int j,i,t,move;
            for ( j = 0; j < move; j++)
    {
            t=a[5];
            for(i=4;i>=0;i--)
        {
            a[i+1]=a[i];
            if(i==0)
            a[i]=t;
        }
    }
        for(i=0;i<=5;i++)
        printf("%d ",a[i]);
  }*/

/*5.Program to Find First Occurence of Adjacent Duplicate Values
int adj();
int main()
{
    int a[5],s;
    s=adj(a,5);
    printf("%d",s);
}
int adj(int a[],int s)
{
    int d;
    printf("Enter Values\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0; i<=3; i++)
        {
            if(a[i]==a[i+1])
            {
                d=a[i];
            }
        }
    return d;
}*/

/*6.Function to Display array of size n in reverse order
void display();
int main()
{
    int n;
    printf("Enter The Size Of the Array\n");
    scanf("%d",&n);
    int a[n];
    display(a,n);
}
void display(int a[],int s)
{
    printf("Enter Values\n");
    for(int i=0; i<s; i++)
        scanf("%d",&a[i]);
    for(int i=s-1; i>=0; i--)
        printf("%d ",a[i]);
}*/

/*7.Write a function in C to count a total number of duplicate elements in an array
int nDuplicate(int *p,int s)
{
    int i,j,count=0;
    for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
            if(*(p+i)==*(p+j))
            {
                count++;
                break;
            }
    return count;
}
int main()
{
    int i,n;
    printf("Enter Number of Elements ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",nDuplicate(&a,n));
    return 0;
}*/

/*8.Write a Function in C to print all unique elements in an array.
void sort(int *p, int s)
{
    int i,j,temp;
    for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
        if(*(p+i)==*(p+j))
        {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
}

int unique(int *p,int i,int size)
{
    int j,count=0;
    for(i;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i!=j)
            if(*(p+i)==*(p+j))
            return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    printf("Enter Number of Elements ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter Values of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    for(i=0;i<n;i++)
        if(unique(a,i,n))
            printf("%d ",a[i]);
    return 0;
}*/

/*9.Write a Function in C to merge two arrays of the same size
sorted in Desccending order.
int main()
{
    int i,size;
    printf("Enter Size of Arrays ");
    scanf("%d",&size);
    int a[size],b[size],c[size+size];
    printf("Enter Values in First Array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter Values in Second Array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
        c[size+i]=b[i];
    }
    sort(c,size);
    display(c,size);
    return 0;
}
void sort(int *p, int s)
{
    s*=2;
    int i,j,temp;
    for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
        if(*(p+i)<*(p+j))
        {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
}
void display(int *p,int s)
{   
    int i;
    for(i=0;i<s*2;i++)
        printf("%d ",*(p+i));
}*/

/*10.Write a Function to coutn the frequency of each element of an array.
void input(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    scanf("%d",&p[i]);
}


int unique(int *p,int i,int size)
{
    int j,count=1;
    for(i;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(*(p+i)==*(p+j))
                return 0;
            }
            else
            return 1;
        }
        return 1;
    }
}

int count_frequency(int *p,int index, int size)
{
    int i,count=1;
    for(i=index+1;i<size;i++)
    {
        if(*(p+index)==*(p+i))
        count++;
    }
    return count;
}

int main()
{
    int i,n,count;
    printf("Size of array ");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    for(i=0;i<n;i++)
    {
        if(unique(a,i,n))
        {
            count=count_frequency(a,i,n);
            printf("%d %d\n",a[i],count);
        }
    }
    return 0;
}*/