/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char fname[2];
    char sname[2];
    char tname[2];
    char frname[2];
    char ftname[2];

    printf("enter First letter: ");
    scanf("%s", fname);

    printf("enter Second letter: ");
    scanf("%s", sname);

    printf("enter Third letter: ");
    scanf("%s", tname);

    printf("enter Fourth letter: ");
    scanf("%s", frname);

    printf("enter Fifth letter: ");
    scanf("%s", ftname);

    printf("\n %s", fname);
    printf("\n \t %s", sname);
    printf("\n \t \t %s", tname);
    printf("\n \t \t \t  %s", frname);
    printf("\n \t \t \t \t  %s", ftname);

    return 0;
}
