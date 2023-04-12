#include <stdio.h>

int main() {
    int hours, minutes, seconds, time;

    printf("Enter a time in the format [hh:mm:ss]: ");
    scanf("%d:%d:%d", &hours, &minutes, &seconds);

    time = hours * 3600 + minutes * 60 + seconds;

    printf("Time stored in a single integer variable: %d\n", time);

    int restored_hours = time / 3600;
    int restored_minutes = (time % 3600) / 60;
    int restored_seconds = time % 60;

    printf("Restored time: %2d:%2d:%2d\n", restored_hours, restored_minutes, restored_seconds);

    return 0;
}
