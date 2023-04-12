#include <stdio.h>
#include <string.h>

#define STOP_CODE "!!"

int main() {
    char input[100];
    int unique[256] = {0};

    while (1) {
        printf("Enter a string (enter '!!' to stop): ");
        fgets(input, 100, stdin);

        if (strcmp(input, STOP_CODE) == 0) {
            printf("Exiting program...\n");
            break;
        }

        for (int i = 0; i < strlen(input); i++) {
            if (input[i] != '\n') {
                unique[input[i]] = 1;
            }
        }

        printf("Unique characters: ");
        for (int i = 0; i < 256; i++) {
            if (unique[i] == 1) {
                printf("%c", i);
                unique[i] = 0;
            }
        }
        printf("\n");
    }

    return 0;
}
