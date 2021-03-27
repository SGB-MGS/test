#include<stdio.h>
#include<ctype.h>
void main(int a,char* b[])
{
    printf("the number of arguement is:%d\n",a-1);
    int i;
    for(i=0;i<a;i++)
    {
        printf("%s    ",b[i]);
    }
}