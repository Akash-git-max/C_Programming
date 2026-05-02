#include<stdio.h>
int no=11;
(Data)
void fun()
{
    int i=51;
    (stack)
    printf("Inside fun : %d\n", i);
    printf("Inside fun : %d\n", no);

}

int main()
{
    int i = 21;// Local variable
    (stack)
    printf("Inside ain : %d\n", i);
    printf("Inside main : %d\n", no);

    fun ();
    return 0;
}