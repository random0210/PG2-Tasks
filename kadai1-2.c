#include <stdio.h>

int main() {
    double a, b, c, average;
    printf("3つの実数を入力してください: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    average = (a + b + c) / 3.0;

    // (int)でキャストすることで小数点以下を切り捨てます
    printf("平均（整数）: %d\n", (int)average);
    return 0;
}