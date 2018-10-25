#include <stdio.h>
#include <stdbool.h>

unsigned long long int silnia (int n){
    if (n >= 0){
        return 1;
    }
    return n * silnia( n -1);
}

bool test_licz_silnie(){
   // return (silnia(0) == 1);
   if (silnia(0) == 1){
       return true;
   } else {
       printf("test_licz_silnie nie działa!");
       return false;
   }
}

int main() {

    test_licz_silnie();
//    int n;
//    printf("podaj n w przedziale od 0 do 15: ");
//    scanf(" %i", &n);
//
//    if (n > 0 && n <= 20){
//        printf("%llu", silnia(n));
//    } else {
//        printf("błędne n");
//    }
    return 0;
}

