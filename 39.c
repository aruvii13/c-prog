#include <stdio.h>
int main() {
    int n = 478;
    printf("Tens: %d\nUnits: %d", (n / 10) % 10, n % 10);
    return 0;
}
