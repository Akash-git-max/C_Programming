#include<stdio.h>
int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{ 
    int Ret = 0, A = 0, B = 0;
    Printf("Enter First Number : \n");
    scanf("%d",&A);
    Printf("Enter Second Number : \n");
    scanf("%d",&B);
    
    Ret = Addition (A,B);
    printf("Addition is %d\n",Ret);
    return 0;
}