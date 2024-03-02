#include <stdio.h>

int main(){
    int balance, amount;
    balance = 1000;

    printf("Welcome to Maybank ATM \n");
    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &amount);
    printf("The amount you wish to withdraw is %d \n", amount);

    if(balance < amount) {
        printf("Insufficient fund. \n");
    } else {
        printf("Successful withdraw of %d \n", amount);
        printf("Your new balance is %d \n", balance - amount);
    }
}