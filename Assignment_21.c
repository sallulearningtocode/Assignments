#include<stdio.h>
/*1.Define a structure Employee with member variables id, name, salary
int main()
{
    struct Employee{
        int id;
        char name[20];
        float salary;
    };
}*/

/*2.Write a Function to take input employee data from the user.     
   struct Employee input(struct Employee emp1)
    {
        printf("Enter Details of Employee 1");
        scanf("%d",&emp1.id);
        fflush(stdin);
        fgets(emp1.name,20,stdin);
        scanf("%f",&emp1.salary);
        return emp1;
    }*/

/*3. Write a Function to display employee data.
    struct Employee{
        int id;
        char name[20];
        float salary;
    };
    void display(struct Employee emp1)
    {
        printf("Id = %d\n",emp1.id);
        printf("Name = %s\n",emp1.name);
        printf("Salary = %0.2f\n",emp1.salary);
    }*/

/*4.Write a function to Find the Highest salary employees. 
 struct Employee{
        int id;
        float salary;
    };
    int main()
    {
        int i,j;
        float temp;
        struct Employee E[10];
        for(i=0;i<10;i++)
    {  
        printf("Enter ID of Employee %d\n",i+1);
        scanf("%d",&E[i].id);
        printf("Enter Salary of Employee %d\n",i+1);
        scanf("%f",&E[i].salary);
    }
    j=findG(E,10);
    printf("%d\n",E[j].id);
    printf("%f",E[j].salary);
}
    int findG(struct Employee *e,int s)
    {
        int i,g;
        g=0;
        for(i=0;i<s;i++)
        {
            if(e[g].salary<e[i].salary)
            g++;
        }
        return g;
    }*/

/*5.Write a function to sort employees according to their salaries
struct Employee{
        int id;
        float salary;
    };
    int main()
    {
        int i,j;
        float temp;
        struct Employee E[10];
        for(i=0;i<10;i++)
    {  
        printf("Enter ID of Employee %d\n",i+1);
        scanf("%d",&E[i].id);
        printf("Enter Salary of Employee %d\n",i+1);
        scanf("%f",&E[i].salary);
    }
    j=sort_Salary(E,10);

    for(i=0;i<10;i++)
    {
        printf("ID = %d\n",E[i].id);
        printf("Salary = %f\n",E[i].salary);
    }
}
    int sort_Salary(struct Employee *e,int s)
    {
        struct Employee g;
        int i,j;
        for(i=0;i<s;i++)
    {
            for(j=0;j<s-1;j++)
        {
            if(e[j].salary>e[j+1].salary)
            {
                g=e[j];
                e[j]=e[j+1];
                e[j+1]=g;
            }
        }
    }
    }*/

/*6.write a Function to sort employess according to their names

    struct Employee{
        int id;
        char name[20];
        float salary;
    }e[3],emp;
void sort_names(struct Employee *e,int s){
            int i;
            for(i=0;i<s-1;i++)
        {
            if(strcmp(e[i].name,e[i+1].name))
                {
                    emp=e[i];
                    e[i]=e[i+1];
                    e[i+1]=emp;
                }
        }
}
int main()
    {
        int i;
        char temp[20];
        for(i=0;i<3;i++)
        {
            printf("Enter Name of Employee ");
            fflush(stdin);
            fgets(e[i].name,20,stdin);
            printf("Enter ID of Employee ");
            scanf("%d",&e[i].id);
            printf("Enter Salary of Employee ");
            scanf("%f",&e[i].salary);
        }
        sort_names(e,3);
        for(i=0;i<3;i++)
        {
            printf("\n%s",e[i].name);
            printf("%d\n",e[i].id);
            printf("%f\n\n",e[i].salary);
        }
        return 0;
}*/

/*7.Write a Function to calculate the difference between two time periods
#include<stdio.h>
#include<stdlib.h>
struct Time{
    int hour;
    int min;
    int sec;
};

void settime(struct Time *t)
{
    printf("Set Hour\n");
    scanf("%d",&t->hour);
    printf("Set Minute\n");
    scanf("%d",&t->min);
    printf("Set Second\n");
    scanf("%d",&t->sec);
}

void findgap(struct Time *t1, struct Time *t2)
{   int *gh,*gm,*gs;
     gh=(int *)malloc(sizeof(int));
     gm=(int *)malloc(sizeof(int));
     gs=(int *)malloc(sizeof(int));
        if((t1->hour-t2->hour)<0)
        *gh=(t1->hour-t2->hour)*(-1);
        else
        *gh=(t1->hour-t2->hour);
        
        if((t1->min-t2->min)<0)
        *gm=(t1->min-t2->min)*(-1);
        else
        *gm=(t1->min-t2->min);
        
        if((t1->sec-t2->sec)<0)
        *gs=(t1->sec-t2->sec)*(-1);
        else
        *gs=(t1->sec-t2->sec);
        printf("Difference Between Time 1 and Time 2:-\n%dh %dm %ds",*gh,*gm,*gs);
        free(gh);
        free(gm);
        free(gs);
}
int main()
{
   struct Time *t1,*t2;
    t1=malloc(sizeof(struct Time));
    t2=malloc(sizeof(struct Time));
    settime(t1);
    settime(t2);
    findgap(t1,t2);
    free(t1);
    free(t2);
}
*/

/*8.Write a program to store information of 10 students and display them using structure.
struct students{
    char name[20];
    int class;
    int roll_no;
};

int main()
{
    struct students *p;
    int i;
    for(i=0;i<10;i++)
    {
        fflush(stdin);
        printf("Enter Name");
        fgets((p+i)->name,20,stdin);
        printf("Enter Class and Roll NO");
        scanf("%d %d",&(p+i)->class,&(p+i)->roll_no);
    }
    for(i=0;i<10;i++)
    {
        printf("\nName is %s",p[i].name);
        printf("Class %d Roll No %d\n",p[i].class,p[i].roll_no);
    }
}*/

/*9.Write a program to store information of n students and display them using structure.
struct students{
    char name[20];
    int class;
    int roll_no;
};

int main()
{
    struct students *p;
    int i,n;
    printf("How many Students' information you want to input");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter Name");
        fgets((p+i)->name,20,stdin);
        printf("Enter Class and Roll NO");
        scanf("%d %d",&(p+i)->class,&(p+i)->roll_no);
    }
    for(i=0;i<n;i++)
    {
        printf("\nName is %s",p[i].name);
        printf("Class %d Roll No %d\n",p[i].class,p[i].roll_no);
    }
}*/

/*10.Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
struct students{
    char name[20];
    int roll_no,chem_marks,maths_marks,phy_marks;
    int total;
    float per;
};

int main()
{
    struct students *p;
    int i;
    for(i=0;i<3;i++)
    {
        fflush(stdin);
        printf("\nEnter Name");
        fgets((p+i)->name,20,stdin);
        printf("\nEnter Roll NO");
        scanf("%d",&(p+i)->roll_no);
        printf("\nEnter Chemistry Marks");
        scanf("%d",&(p+i)->chem_marks);
        printf("\nEnter Maths Marks");
        scanf("%d",&(p+i)->maths_marks);
        printf("\nEnter Physics Marks");
        scanf("%d",&(p+i)->phy_marks);
        (p+i)->total=(p+i)->chem_marks+(p+i)->maths_marks+(p+i)->phy_marks;
    }
    for(i=0;i<3;i++)
    (p+i)->per=((p+i)->total/300)*100;

    for(i=0;i<3;i++)
    {
        printf("\nName is %s",p[i].name);
        printf("Roll No %d\n",p[i].roll_no);
        printf("Chemistry = %d Maths = %d Physics = %d\n",p[i].chem_marks,p[i].maths_marks,p[i].phy_marks);
        printf("Percentage of is %f\n",p[i].per);
    }


}*/