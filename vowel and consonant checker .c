#include <stdio.h>
int main() {
    char ch;
    printf("Input a character: ");
    scanf(" %c", &ch);  // notice the space before %c to skip newline

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is a consonant\n", ch);
    }
    return 0;
}
