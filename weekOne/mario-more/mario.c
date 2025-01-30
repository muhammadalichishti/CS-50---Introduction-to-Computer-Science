#include<stdio.h>

void marioPyramids(int n);

int main() {
    int times;
    int result;
    char ch;
    do {
        printf("Hight: ");
        result = scanf("%i", &times);
        if (result != 1) {
            while((ch = getchar()) != '\n' && ch != EOF); // Still need to understand it. 
        }
    } while (times < 1 || times > 8);

    marioPyramids(times);
}

void marioPyramids(int n) {
    int total = 0;
    int space = 0;
    for(int row = 0; row < n; row++) {
        total = total + 1;
        space = n - row;

        for(int colHash = 0; colHash < space; colHash++) {
        printf(" ");
        }

        for(int colSpace = 0; colSpace < total; colSpace++) {
            printf("#");
            
        }

        printf("  ");

        for(int colSpace = 0; colSpace < total; colSpace++) {
            printf("#");
            
        }
        
        printf("\n");
    }
}