#include<stdio.h>

int main() {

    int v;

    scanf( "%d", &v );

    if( v == 0 ) {
        printf("zero");
    } else if( v > 0 ) {
        printf("positive");
    } else {
        printf("negative");
    }

    return 0;
}