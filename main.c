#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS    10

typedef unsigned short int unint8;

typedef struct{
int tel;
int hin;
int eng;
}marks;

typedef struct{

char *name;
int age;
int height;
marks exammarks;
marks *ptr2marks;
}pinfo;

pinfo students[MAX_STUDENTS], *ptr2studnt;

int main()
{

   printf("Hello world!stupid\n");

    for(unint8 lop_var=0;lop_var<MAX_STUDENTS;lop_var++,ptr2studnt++)
    {
        ptr2studnt->name =   "hi";
        (ptr2studnt->age)   =   lop_var;
    (ptr2studnt->height)   =   6+lop_var;
    (ptr2studnt->exammarks.eng)    =   50+lop_var;
    (ptr2studnt->exammarks.hin)    =   60+lop_var;
    ptr2studnt->exammarks.tel   =   70+lop_var;

    }

    ptr2studnt  =   &students[0];

    for(unint8 lop_var=0;lop_var<MAX_STUDENTS;lop_var++)
    {
        //printf("u is %d\n",students[0]->ptr2marks[lop_var].eng); //run time fault
        //printf("u is %d\n",students[0].ptr2marks[lop_var]->eng); compile time error
        //printf("u is %d\n",students[lop_var].ptr2marks->eng);run time error
        //printf("u is %d\n",students[lop_var].ptr2marks->eng);
        //printf("name is %d\n",students->ptr2marks[lop_var].eng);
        printf("name is %d\n",ptr2studnt->exammarks.eng);
        //printf("name is %d\n",(students[lop_var]->exammarks.eng));
    }

    return 0;
}
