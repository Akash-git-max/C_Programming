#include<stdio.h>
int main()
    {
        int i = 100;
        float f = 2.0f;
        double d= 3.3;
        char ch = 'a';
        printf("Values of Variable : \n");
        printf("Value of i : %d\n",i);
        printf("Value of f : %f\n",f);
        printf("Value of d : %lf\n",d);
        printf("Value of ch : %c\n",ch);
         printf("Size And address of each variable\n ");

         printf ("Size of i : %d \n address of i : %d\n",sizeof(i),&i);
         printf ("Size of f : %d \n address of f : %d\n",sizeof(f),&f);
         printf ("Size of d : %d \n address of d : %d\n",sizeof(d),&d);
         printf ("Size of ch : %d \n address of ch : %d\n",sizeof(ch),&ch);
    
         return 0;
        }
