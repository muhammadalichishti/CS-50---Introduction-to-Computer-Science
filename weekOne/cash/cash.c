#include<stdio.h>
#include<math.h>

void minChangef(int change);

int main() {
    int change;
    int ch;
    int result;
    do {
        printf("Change owed: ");
        result = scanf("%d", &change);
        if(result != 1) {
            while((ch = getchar()) != '\n' && ch != EOF);
        }

    } while (change < 0 || change > 100);
    minChangef(change);
}

void minChangef(int change) {
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;


    printf("Owed: %d\n", change);

    int quarterNeeded = change / quarter;
    printf("quarter: %d\n", quarterNeeded);   
    int leftAQ = change % quarter; // left after quarters
    printf("Left Amount: %d\n", leftAQ);

    int dimeNeeded = leftAQ / dime;
    printf("Dime: %d\n", dimeNeeded);
    int leftAD =  leftAQ % dime; // left after dimes
    printf("Left Amount: %d\n", leftAD);

    int nickelNeeded = leftAD / nickel;
    printf("Nickel: %d\n", nickelNeeded);
    int leftAN = leftAD % nickel; // left after nickels
    printf("Left Amount: %d\n", leftAN);

    int pennyNeeded =  leftAN / penny;
    printf("Penny: %d\n", pennyNeeded);
    int leftAP = leftAN % penny; // left after penny
    printf("Left Amount: %d\n", leftAP);

    printf("%d", quarterNeeded + dimeNeeded + nickelNeeded +pennyNeeded);
}