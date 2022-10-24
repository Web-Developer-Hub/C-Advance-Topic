//dynamic memory allocation in c program...

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *marks;
    int i, n;
    printf("please enter the number of students: ");
    scanf("%d", &n);

    //now allocated memory...
    marks = (int *) malloc(sizeof(int) * n);
    printf("Enter the marks for each student: ");

    for(i = 0; i < n; i++){
        scanf("%d", &marks[i]);
    }
    printf("\n");
    printf("Now here you can see the value: \n");

    //now prints the marks array...
    for(i = 0; i < n; i++){
        printf("%d \n", marks[i]);
    }

return 0;
}
