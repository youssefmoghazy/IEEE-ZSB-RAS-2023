#include <stdbool.h>
#include <stdio.h>
bool isNumber(char *s) {
    bool hasDigit = false;
    bool hasDot = false;
    bool hasE = false;

    while (*s == ' ')
        s++;

    if (*s == '-' || *s == '+')
        s++;
    while (*s) {
        if (*s >= '0' && *s <= '9') {
            hasDigit = true;
        } else if (*s == '.') {
            if (hasDot || hasE)
                return false;
            hasDot = true;
        } else if (*s == 'e' || *s == 'E') {
            if (hasE || !hasDigit)
                return false;
            hasE = true;
            hasDigit = false;
        } else if (*s == '-' || *s == '+') {
            if (*(s - 1) != 'e' && *(s - 1) != 'E')
                return false;
        } else if (*s != ' ') {
            return false;
        }

        s++;
    }

    return hasDigit;
}
int main() {
    char s[] = "3.";

    if (isNumber(s))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
