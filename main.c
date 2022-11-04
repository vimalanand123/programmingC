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

pinfo students[MAX_STUDENTS];

int main()
{

    printf("Hello world!stupid\n");

    for(unint8 lop_var=0;lop_var<MAX_STUDENTS;lop_var++)
    {
        students[lop_var].name =   "hi";
        students[lop_var].age   =   lop_var;
        students[lop_var].height   =   6+lop_var;
        students[lop_var].exammarks.eng    =   50+lop_var;
        students[lop_var].exammarks.hin    =   60+lop_var;
        students[lop_var].exammarks.tel    =   70+lop_var;

    }
    for(unint8 lop_var=0;lop_var<MAX_STUDENTS;lop_var++)
    {
        //printf("name is %d\n",students.ptr2marks[lop_var].eng);
        //printf("name is %d\n",students->ptr2marks[lop_var].eng);
        //printf("name is %d\n",students->ptr2marks[lop_var]->eng);
        printf("name is %d\n",students[lop_var].exammarks.eng);
    }

    return 0;
}
