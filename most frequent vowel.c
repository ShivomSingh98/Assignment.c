#include <stdio.h>
#include <string.h>
int main() {
    int MAX_LENGTH=100;
    char input[MAX_LENGTH];
    int vowels[5] = {0};
    int maxCount = 0;
    char maxVowel;

    printf("Enter a string: ");
    scanf("%99[^\n]", input);

    for (int i = 0; i < strlen(input); i++) {
        char ch = tolower(input[i]);

        if (ch == 'a') {
            vowels[0]++;
            if (vowels[0] > maxCount) {
                maxCount = vowels[0];
                maxVowel = 'a';
            }
        } else if (ch == 'e') {
            vowels[1]++;
            if (vowels[1] > maxCount) {
                maxCount = vowels[1];
                maxVowel = 'e';
            }
        } else if (ch == 'i') {
            vowels[2]++;
            if (vowels[2] > maxCount) {
                maxCount = vowels[2];
                maxVowel = 'i';
            }
        } else if (ch == 'o') {
            vowels[3]++;
            if (vowels[3] > maxCount) {
                maxCount = vowels[3];
                maxVowel = 'o';
            }
        } else if (ch == 'u') {
            vowels[4]++;
            if (vowels[4] > maxCount) {
                maxCount = vowels[4];
                maxVowel = 'u';
            }
        }
    }

    if (maxCount > 0) {
        printf("The most frequent vowel is '%c' occurring %d times.\n", maxVowel, maxCount);
    } else {
        printf("No vowels found in the string.\n");
    }

    return 0;
}
