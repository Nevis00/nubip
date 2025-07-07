#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 15
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;
    return result;
}
int main() {
    char word[MAX_LEN];
    int freq[26] = {0};
    int len = 0;
    printf("Введіть слово: ");
    scanf("%s", word);
    for(int i = 0; word[i] != '\0'; i++) {
        if (isalpha(word[i])) {
            char upper = toupper(word[i]);
            freq[upper - 'A']++;
            len++;
        }
    }
    unsigned long long total = factorial(len);
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 1)
            total /= factorial(freq[i]);
    }
    printf("Кількість анаграм: %llu\n", total);
    return 0;
}
