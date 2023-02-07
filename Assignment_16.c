#include<stdio.h>
/*1.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Values For First Array\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("Enter Values For Second Array\n");
    for ( j = 0; j <= 2; j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    
    printf("Sum of Matrices is...\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("%d ",a[j][i]+b[j][i]);
        printf("\n");
   }
}*/

/*2.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Values For First Array\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("Enter Values For Second Array\n");
    for ( j = 0; j <= 2; j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    
    printf("Product of Two matrices is...\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("%d ",a[j][i]*b[j][i]);
        printf("\n");
   }
}*/

/*3.
int main()
{
    int rows,columns;
    scanf("%d %d",&rows,&columns);
 
    int a[rows][columns];
    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
            scanf("%d",&a[i][j]);

        printf("\n");

        for(int i=0;i<columns;i++)
        {
            for(int j=0;j<rows;j++)
            printf("%2d ",a[j][i]);
            printf("\n");
        }
}*/

/*4.
int main()
{
    int size=2,rd=0,matrix[size][size];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        scanf("%d",&matrix[i][j]);
    for(int i=0;i<size;i++)
            rd=rd+matrix[i][i];
    printf("Sum of Right Diagonal is %d",rd);
}*/

/*5.
int main()
{
    int size=3,rd=0,matrix[size][size];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        scanf("%d",&matrix[i][j]);
    for(int i=size-1;i>=0;i--)
            rd=rd+matrix[i][i];
    printf("Sum of Right Diagonal is %d",rd);
}*/

/*6.
int main()
{
    int sr,sc,size=3,matrix[size][size];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            scanf("%d",&matrix[i][j]);
    
    for(int i=0;i<size;i++) //Sum of Rows
    {
        sr=0;
        for(int j=0; j<size; j++)
            sr=sr+matrix[i][j];
            printf("Sum of Row %d is %d ",i+1,sr);
    }

    for(int i=0;i<size;i++) //Sum of Columns
    {
        sc=0;
        for(int j=0; j<size; j++)
            sc=sc+matrix[j][i];
            printf("Sum of Row %d is %d ",i+1,sc);
    }
}*/

/*7.
int main()
{
    int flag=0,size=3,matrix[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        scanf("%d",&matrix[i][j]);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(matrix[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
            if(flag)
                {
                    printf("Not a Lower Triangular Matrix");
                    return 0;        
                }
    }
    printf("Lower  Triangular Matrix");
    return 0;
}*/

/*8.
int main()
{
    int flag=0,size=3,matrix[size][size];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        scanf("%d",&matrix[i][j]);
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        printf("%d ",matrix[i][j]);
        printf("\n");
    }

    for(int i=size-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(matrix[i][j]!=0)
            {
                printf("Not an Upper Triangular Matrix");
                return 0;
            }
        }
    }
    printf("Upper Triangular Matrix");
    return 0;
}*/

/*9.
int main()
{
    int ic=0,zc=0,size=3,matrix[size][size];
    for(int i=0; i<size; i++)
    for(int j=0; j<size; j++)
    {
        scanf("%d",&matrix[i][j]);
        if(matrix[i][j]==0)
        zc++;
        else
        ic++;
    }
    if(zc>ic)
    printf("Sparse Matrix");
    else
    printf("Non Sparse Matrix");
    return 0;
}*/

/*10.
int main()
{
    int k=0,size=3,matrix[size][size],ones[size];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            scanf("%d",&matrix[i][j]);
    
    for(int i=0;i<size;i++)
        ones[i]=0;
    
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(matrix[i][j]==1)
                 ones[i]=ones[i]+1;
    
    for(int i=1;i<size;i++)
        if(ones[k]<ones[i])
        k=i; 
    
    printf("\nRow with most number of 1's is %d",k);
    
}*/


