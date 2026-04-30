#include <stdio.h>

int main() {
    int a, b, c, remaining;

    printf("クラスの人数(a): ");
    scanf("%d", &a);
    printf("野球チーム数(b): ");
    scanf("%d", &b);
    printf("バレーチーム数(c): ");
    scanf("%d", &c);

    remaining = a - (9 * b + 6 * c);

    if (remaining < 0) {
        printf("エラー: チームを作るための人数が足りません。（不足分: %d人）\n", -remaining);
    } else {
        printf("参加できない人数: %d人\n", remaining);
    }

    return 0;
}