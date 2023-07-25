#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * multiply(char * num1, char * num2) {
    if (num1[0] == '0' || num2[0] == '0') return "0";
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    char* result = (char*)calloc(len1 + len2 + 1, sizeof(char));

    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            int idx = i + j + 1;
            int product = (num1[i] - '0') * (num2[j] - '0');
            while (product) {
                product += result[idx];
                result[idx] = product % 10;
                product /= 10;
                idx--;
            }
        }
    }

    for (int i = 0; i < len1 + len2; i++) {
        result[i] += '0';
    }

    if (result[0] == '0') return result + 1;
    return result;
}

int main() {
    char num1[] = "123";
    char num2[] = "456";

    char* result = multiply(num1, num2);
    printf(" %s\n", result);

    free(result);
    return 0;
}

