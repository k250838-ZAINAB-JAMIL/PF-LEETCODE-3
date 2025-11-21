#include<stdio.h>
#include<string.h>
int palindrome(char str[]){
    int left =0;
    int right = strlen(str) - 1;
    while(left < right){
        if (str[left] != str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main() {
int n ,i;
char words[100][100];
printf("Enter the number of words: \n ");
scanf("%d" , &n);
printf("Enter %d words :\n", n);
for(i =0; i< n ; i++){
    scanf("%s" , &words[i]);
}
char result[100] = "";
for(i = 0; i<n; i++){
    if(palindrome(words[i])){
        strcpy(result, words[i]);
        break;
    }
}
printf("First palindorme string: %s \n", result);
    return 0;
}