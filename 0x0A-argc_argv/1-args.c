#include<stdio.h>
#include"main.h"
/**
*main-Functionthaprintsargcount
*@argc:numberofarguments
*@argv:arrayofargc
*Return:Alwayszero(success)
*/
intmain(intargc,char*argv[])
{
(void)argv;
printf("%d\n",argc-1);
return(0);
}

