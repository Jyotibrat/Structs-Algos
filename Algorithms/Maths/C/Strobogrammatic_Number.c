#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValidDigit(char digit) {
    return (digit == '0' || digit == '1' || digit == '6' || digit == '8' || digit == '9');
}

char getRotatedDigit(char digit) {
    switch(digit) {
        case '0': return '0';
        case '1': return '1';
        case '6': return '9';
        case '8': return '8';
        case '9': return '6';
        default: return '?';
    }
}

bool isStrobogrammatic(char* num) {
    int left = 0;
    int right = strlen(num) - 1;
    
    while (left <= right) {
        char leftDigit = num[left];
        char rightDigit = num[right];
        
        if (!isValidDigit(leftDigit) || !isValidDigit(rightDigit)) {
            return false;
        }
        
        if (getRotatedDigit(leftDigit) != rightDigit) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

bool isStrobogrammaticInt(int num) {
    char str[20];
    sprintf(str, "%d", num);
    return isStrobogrammatic(str);
}

void getRotatedNumber(char* num, char* rotated) {
    int len = strlen(num);
    
    for (int i = 0; i < len; i++) {
        if (!isValidDigit(num[i])) {
            strcpy(rotated, "Invalid - contains non-strobogrammatic digits");
            return;
        }
    }
    
    for (int i = len - 1; i >= 0; i--) {
        rotated[len - 1 - i] = getRotatedDigit(num[i]);
    }
    rotated[len] = '\0';
}

int main() {
    char input[100];
    
    printf("Enter the Number: ");
    scanf("%s", input);
    
    bool isStrobo = isStrobogrammatic(input);
    
    if (isStrobo) {
        char rotated[100];
        getRotatedNumber(input, rotated);
        
        if (strcmp(input, rotated) == 0) {
            printf("The Entered Number is a Strobogrammatic Number.\n");
        } else {
            printf("The Entered Number is not a Strobogrammatic Number.\n");
        }
    } else {
        printf("The Entered Number is not a Strobogrammatic Number.\n");
    }
    
    return 0;
}