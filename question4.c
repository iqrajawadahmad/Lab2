#include <stdio.h>
int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    gets(sentence);  
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - 'a' + 'A'; 
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] - 'A' + 'a'; 
        }
    }
    printf("Converted sentence: %s\n", sentence);
    return 0;
}


