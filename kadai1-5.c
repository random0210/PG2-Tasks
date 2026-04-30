#include <stdio.h>

int main() {
    double base, height, area;

    printf("底辺の長さを入力してください: ");
    scanf("%lf", &base);
    printf("高さを入力してください: ");
    scanf("%lf", &height);

    // 面積を計算
    area = (base * height) / 2.0;

    if (area < 0) {
        // 面積がマイナスになった場合の処理
        printf("エラー: 面積が負の値になりました。入力数値を確認してください。\n");
    } else {
        // 0以上の場合は通常通り表示
        printf("三角形の面積: %f\n", area);
    }

    return 0;
}