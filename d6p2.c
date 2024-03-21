#include <stdio.h>
#include <string.h>
void addNumberToWord(char [], int);
void subtractNumberFromWord(char [], int);
int main() {
    char word[100];
    int number;
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Enter a code number: ");
    scanf("%d", &number);
    addNumberToWord(word, number);
    printf("Encoding word: %s\n", word);
    subtractNumberFromWord(word, number);
    printf("Decoding word: %s\n", word);

    return 0;
}
void addNumberToWord(char word[], int number) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        word[i] += number;
    }
}

void subtractNumberFromWord(char word[], int number) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        word[i] -= number;
    }
}
