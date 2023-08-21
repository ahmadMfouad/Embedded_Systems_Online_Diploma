#include <stdio.h>
#include <stdlib.h>

void reverse();

int main(void) {
    printf("Enter a sentence: ");
    fflush(stdout);
    reverse();
    printf("\n");
    return 0;
}

void reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}
