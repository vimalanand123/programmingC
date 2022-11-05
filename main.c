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

    ptr2studnt  =   &students[0];

    printf("Hello world!stupid\n");

    for(unint8 lop_var=0;lop_var<MAX_STUDENTS;lop_var++)
    {
        ptr2studnt[lop_var].name            =   "hi";
        ptr2studnt[lop_var].age             =   lop_var;
        ptr2studnt[lop_var].height          =   6+lop_var;
        ptr2studnt[lop_var].exammarks.eng   =   50+lop_var;
        ptr2studnt[lop_var].exammarks.hin   =   60+lop_var;
        ptr2studnt[lop_var].exammarks.tel   =   70+lop_var;

        ptr2studnt[lop_var].ptr2marks       =   &ptr2studnt[lop_var].exammarks;

        printf("addr of ptr2sstudnt[%d].exmmarks is %x\t" ,lop_var,&(ptr2studnt[lop_var].exammarks));
        printf("addr of ptr2studnt[%d].ptr2marks is %x\t\n",lop_var,ptr2studnt[lop_var].ptr2marks);
    }

    //ptr2studnt[0].ptr2marks  =   &students[0].exammarks;
    //ptr2studnt[1].ptr2marks  =   &students[1].exammarks;

    for(unint8 lop_var=0;lop_var<MAX_STUDENTS;lop_var++)
    {
        printf("\addr of ptr2studnt->ptr2marks[lopvar].eng is %x\t",
               (ptr2studnt[lop_var].ptr2marks)); //run time fault

        printf("\value at ptr2studnt->ptr2marks[lopvar].eng is %d\n",
               (ptr2studnt[lop_var].ptr2marks->eng)); //run time fault
        //printf("u is %d\n",students[0].ptr2marks[lop_var]->eng); compile time error
        //printf("u is %d\n",students[lop_var].ptr2marks->eng);run time error
        //printf("u is %d\n",students[lop_var].ptr2marks->eng);
        //printf("name is %d\n",students->ptr2marks[lop_var].eng);
       // printf("name is %d\n",ptr2studnt->exammarks.eng);
        //printf("name is %d\n",(students[lop_var]->exammarks.eng));
    }

    return 0;
}
