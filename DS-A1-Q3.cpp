#include <stdio.h>

int main() {
    int i;
    int numbers[5] = {1};  // first element initialized to 1

    for (i = 0; i < 5; i++) {
        printf("%d", numbers[i]);
    }
    return 0;
}
