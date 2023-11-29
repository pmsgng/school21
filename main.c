#include <stdio.h>

int sum(int,int);
int sub(int, int);
int mul(int, int);
double div(int, int);

int sum(int a, int b) {
    return a + b;
};

int sub(int a, int b) {
    return a - b;
};

int mul(int a, int b) {
    return a * b;
};

double div(int a, int b) {
    return a / b;
};

int main() {
    printf("sum: %i\n", sum(5826,17));
    printf("sub: %i\n", sub(2,1));
    printf("mul: %i\n", mul(1,2));
    printf("div: %lf\n", div(5826,17));
    return 0;
}
