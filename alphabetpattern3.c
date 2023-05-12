#include<stdio.h>
void main()
{
    int i,j;
     char string[12]="Programming";
     printf("%s\n",string);
     for(i=0;i<=5;i++)
     {
        for(j=i+1;j<=10-2*i;j++)
        {
            printf("%c",string[j]);
        }
        printf("\n");
     }

}