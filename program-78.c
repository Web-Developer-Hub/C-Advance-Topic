//recursion in c program...

#include <stdio.h>

void recursion(int count) {
    if(count > 5){
        return;
    }
    else{
        recursion(count += 1);
        printf("Count = %d \n", count);
    }
}

int main() {
    recursion(1);

return 0;
}

