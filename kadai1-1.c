#include <stdio.h>

int main() {
    double a, b, c, average;
    printf("3つの実数を入力してください: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    average = (a + b + c) / 3.0;

    printf("平均（実数）: %f\n", average);
    return 0;
}