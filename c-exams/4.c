#include <stdio.h>

int main() {
    char str[] = "has";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    char reverse[50];
    
    for (int i = 0; i < length; i++) {
        reverse[i] = str[length - i - 1];
    }
    reverse[length] = '\0';  

    printf("%s", reverse);

    return 0;
}
