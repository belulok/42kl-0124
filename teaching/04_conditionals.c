#include <stdio.h>

int main(){
    int age;

    printf("How old are you? \n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("I am %d years old \n", age);

    if(age < 18) {
        printf("You are underage. \n");
    } else {
        printf("You are in a legal age. \n");
    }
}