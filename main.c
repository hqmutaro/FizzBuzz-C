#include <stdio.h>

void start(void);
char *getResult(int num);

int main(void) {
    start();
    return 0;
}

void start(void) {
    int num;
    printf("Please enter a number.\n");
    scanf("%d", &num);

    printf("Result: %s", getResult(num));
}

char *getResult(int num) {
    if (num % 15 == 0) {
        return "FizzBuzz";
    }

    if (num % 5 == 0) {
        return "Buzz";
    }

    if (num % 3 == 0) {
        return "Fizz";
    }

    return (char*) num;
}