#include <stdio.h>
#define MOD 12345
#define MAX_N 10000
int main() {
    int n;
    printf("Введіть довжину послідовності n (1 < n < 10000): ");
    scanf("%d", &n);

    if (n <= 1 || n >= MAX_N) {
        printf("Помилка: n повинно бути в межах від 2 до 9999.\n");
        return 1;
    }
    int dp[MAX_N][3] = {0};
    dp[1][0] = 1; 
    dp[1][1] = 1; 
    dp[1][2] = 0; 
    for (int i = 2; i <= n; ++i) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD;
        dp[i][1] = dp[i - 1][0] % MOD;
        dp[i][2] = dp[i - 1][1] % MOD;
    }
    int result = (dp[n][0] + dp[n][1] + dp[n][2]) % MOD;
    printf("Кількість шуканих послідовностей: %d\n", result);
    return 0;
}
