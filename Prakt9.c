#include <stdio.h>
#include <math.h>
int min_steps(int x, int y) {
    int distance = y - x;
    if (distance == 0) return 0;
    int k = (int)sqrt(distance);

    if (distance == k * k) {
        return 2 * k - 1;
    } else if (distance <= k * (k + 1)) {
        return 2 * k;
    } else {
        return 2 * k + 1;
    }
}
int main() {
    int x, y;
    printf("Введіть x і y (через пробіл): ");
    scanf("%d %d", &x, &y);
    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}
