#include <stdio.h>

int main() {
    int apple, orange, strawberry;
    int total;

    printf("りんご(100円)の個数: ");
    scanf("%d", &apple);
    printf("オレンジ(88円)の個数: ");
    scanf("%d", &orange);
    printf("苺(398円)のパック数: ");
    scanf("%d", &strawberry);

    total = (apple * 100) + (orange * 88) + (strawberry * 398);

    printf("合計金額: %d円\n", total);
    return 0;
}