#include <stdio.h>

void printElement(int a[], int position)
{
    printf("%d", a[position]);
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    printElement(a, 3);

    return 0;
}