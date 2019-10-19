#include<stdio.h>
int main()
{
int inputTaker, i, sum[10];
scanf("%d",&inputTaker);



    for(i = 0 ; i < 10; i++)
    {
           sum[i] = inputTaker;
           printf("N[%d] = %d\n",i,sum[i]);
           inputTaker *= 2; // inputTaker = 2* inputTaker
    }
        }




