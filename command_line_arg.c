#include<stdio.h>

void main(int args , char*argv[])
{
printf("Program name is: %s\n",argv[0]);
if(argv<2)
{
    printf("No argument passed through command line. \n");
}
else{
    printf("First argument is: %s \n",argv[1];)
}
}