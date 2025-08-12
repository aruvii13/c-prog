#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n >= -9 && n <= 9) printf("Single digit");
    else printf("Double digit");
    return 0;
}