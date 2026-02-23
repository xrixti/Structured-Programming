#include <stdio.h>

int main()
{
    int a=5; // value, memory address

    int* p = &a; //  memory address store

    printf("pointer ADDRESS %p, pointer saved: %p\n saved location value: %d\n",&p,p,*p); // value of memory address

    return 0;
}
