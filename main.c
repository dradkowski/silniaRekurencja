#include <stdio.h>

int silnia (int n){
    if (n == 1){
        return 1;
    }
    return n * silnia( n -1);
}

int main() {
    int n;
    printf("podaj n w przedziale od 0 do 15: ");
    scanf(" %i", &n);

    if (n > 0 && n < 15){
        printf("%d", silnia(n));
    } else {
        printf("błędne n");
    }
    return 0;
}