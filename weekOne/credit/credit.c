#include<stdio.h>

int checkCard(int numbers);

int main() {
    int cardNumbers;

    printf("Enter credit card numbers to identify its validity: ");
    scanf("%d", &cardNumbers);
    printf("%d", checkCard(cardNumbers));
}

int checkCard(int numbers) {
    char str[100];
    sprintf(str, "%i", numbers);

    int sum = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        int digit = str[i] - '0';
        sum = sum + digit;
    }

    return sum;
}