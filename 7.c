#include <stdio.h>

int main() {
    int minutes, seconds;

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    printf("%d minutes = %d seconds\n", minutes, seconds);
    return 0;
}
