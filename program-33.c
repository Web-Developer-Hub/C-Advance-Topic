// two number summation in c program use pointer variable...

#include <stdio.h>
int main() {
    int x = 12, y = 23, sum = 0;

    int *ptr1, *ptr2, *ptr3;

    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &sum;

    *ptr3 = (*ptr1 + *ptr2);
    printf("Total sum is: %d", *ptr3);

return 0;
}
