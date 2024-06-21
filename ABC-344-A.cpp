#include<stdio.h>

#include <string.h>

int main() {
    char S[101];
    scanf("%s", S);

    int firstBarIndex = -1, secondBarIndex = -1;
    int len = strlen(S);
    
    for (int i = 0; i < len; i++) {
        if (S[i] == '|') {
            if (firstBarIndex == -1) {
                firstBarIndex = i;
            } else {
                secondBarIndex = i;
                break;
            }
        }
    }
    
    for (int i = firstBarIndex; i <= secondBarIndex; i++) {
        S[i] = ' ';
    }

    for (int i = 0; i < len; i++) {
        if (S[i] != ' ') {
            printf("%c", S[i]);
        }
    }
    return 0;
}