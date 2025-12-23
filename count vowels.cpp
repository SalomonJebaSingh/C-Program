#include <stdio.h>

int main() {
    char str[100];
    int cc = 0, cv = 0;
    int i, j;

    printf("Enter the string: ");
    scanf("%s", str);

    
    for (j = 0; str[j] != '\0'; j++);

    
    for (i = 0; i < j; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            cv++;
        } else {
            cc++;
        }
    }

    printf("Count of Vowels : %d\n", cv);
    printf("Count of Consonants : %d\n", cc);

    return 0;
}
