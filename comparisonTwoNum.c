#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a value for a:");
    scanf("%d", &a);
    printf("Enter a second value for b:");
    scanf("%d", &b);

    if(a>b) {
        printf("A buyuktur b");
    } else if (a == b) {
        printf("A ve B değerleri eşittir.");
    } else {
        printf("A kucuktur b");
    }

    return 0;

}