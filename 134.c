#include <stdio.h>
int main() {
    char str[1000], ch;
    int c=0, a[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        a[str[i]- 'a']++;
    }
int chl = (int) ch - 90;
int p = a[chl];
    printf("Frequency of %c = %d", ch, p);
    return 0;
}