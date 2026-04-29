 #include<stdio.h>
 int main()
 {
    char cArr[4] = {'a', 'b', 'c', 'd'};
    int iArr[4] = {1, 2, 3, 4};
    float fArr[4] = {10.1f, 10.2f, 10.3f, 10.4};
    double dArr[4] = {8.9, 9.9, 9.8, 6.9};

    printf("Size of cArr is %lu\n",sizeof(cArr));
    printf("Size of cArr is %lu\n",sizeof(iArr));
    printf("Size of cArr is %lu\n",sizeof(fArr));
    printf("Size of cArr is %lu\n",sizeof(dArr));
    return 0;
 }