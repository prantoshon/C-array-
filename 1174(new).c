#include<stdio.h>
int main()
{
float inputTaker[100] ;
int i;
for(i = 0 ; i < 100 ; i++)
    {
    scanf("%f",&inputTaker[i]);
    if(inputTaker[i] <= 10 )
        {

         printf("A[%d] = %.1f\n",i,inputTaker[i]);
        }
    }
}
