//factorial function how many time are call this program find it....

#include <stdio.h>
int f_call = 0;

int factorial(int n) {
    f_call += 1;
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Undefined! \n");
        return 0;
    }
    else{
        printf("Factorial of %d! is %d \n", n, factorial(n));
        printf("Number of function calls: %d \n", f_call);
    }

return 0;
}
