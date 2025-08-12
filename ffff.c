#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // For Sleep and system("cls")

void printHeart(int size, char ch) {
    int i, j;
    for (i = size / 2; i <= size; i += 2) {
        for (j = 1; j < size - i; j += 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c", ch);
        for (j = 1; j <= size - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c", ch);
        printf("\n");
    }
    for (i = size; i >= 1; i--) {
        for (j = i; j < size; j++)
            printf(" ");
        for (j = 1; j <= (i * 2) - 1; j++)
            printf("%c", ch);
        printf("\n");
    }
}

int main() {
    int beats = 7; // Number of beats
    int size_small = 8; // Small heart size
    int size_large = 12; // Large heart size

    while (beats--) {
        // Big Heart
        system("cls");
        printHeart(size_large, '*');
        Sleep(250); // .25 seconds

        // Small Heart
        system("cls");
        printHeart(size_small, '*');
        Sleep(250);
    }
    return 0;
}