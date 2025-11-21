// 

#include<stdio.h>
#include<string.h>

int vowel(char ch) {
    if (ch =='a' || ch =='A' || ch =='E' || ch== 'e' || ch =='I' || ch =='i' || ch == 'O' || ch == 'o' || ch =='U' || ch =='u') {
        return 1;
    }
    return 0;
}

void reversevowels(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        while (left < right && !vowel(str[left])) {
            left++;
        }
        while (left < right && !vowel(str[right])) {
            right--;
        }
        if (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    char str[100];
    printf("Enter the string:\n");
    gets(str);

    reversevowels(str);

    printf("The string is: %s\n", str);  // FIXED

    return 0;
}
