#include<stdio.h>
int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
    {
        int i=0, j=0, k=0;
        printf("Enter First Number : \n");
        scanf("%d",&i);
        printf("Enter second Number :\n");
        scanf("%d",&j);
        k = Addition(i,j);
        printf("Addition is : %d",k);
        return 0;
    }
