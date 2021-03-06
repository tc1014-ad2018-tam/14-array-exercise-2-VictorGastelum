/*
   This program will read n number of real values in an array and then shows a menu, that calculates the sum of the
   numbers, average, shows the biggest value and the minimum.
   
   Author: Victor Manuel Gastelum Huitzil
   Mail: A01411985@itesm.mx
   Date: 15/10/18
 */

#include<stdio.h>
#include<stdlib.h>

// Menu for the options
void Menu(){
    printf("\nMenu \n");
    printf("1. Sum \n");
    printf("2. Average \n");
    printf("3. Smallest value \n");
    printf("4. Biggest value \n");
    printf("0. Exit \n");
    printf("0ption: \n");
}

// Function for the sum
double Sum(double numbers[], int n){
    double sum = 0;
    printf("\n");
    for(int i = 0; i < n; i++){
        sum += numbers[i];
    }
    return sum;
}

// Function that uses the sum for calculating the average.
double Average(double numbers[], int n){
	printf("\n");
    return Sum(numbers, n)/n;
}

// Functiojn for the minimum value.
double Minimum(double numbers[], int n){
    double min = numbers[0];
    
    printf("\n");
    for(int i = 0; i < n; i++){
        if(min > numbers[i]){
            min = numbers[i];
        }
    }
    return min;
}

// Function for the maximum value.
double Maximum(double numbers[], int n){
    double max = numbers[0];
    
    printf("\n");
    for(int i = 0; i < n; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }
return max;
}

int main() {
    int k;
    int option;
    double numbers[k]; //Variable for the array

    printf("How many numbers are you going to enter?\n");
    scanf("%d", &k);

    // Loop to ask the numbers
    for(int i = 0; i < k; i++){
        printf("\nGive me the number: \n");
        scanf("%lf", &numbers[i]);
    }

       system("cls");
       
    // "Do While" to show the menu
    do{
       system("cls");
        Menu();
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("Sum: %lf\n\n", Sum(numbers, k));
                system("pause");
                break;
            case 2:
                printf("Average: %lf\n\n", Average(numbers, k));
                system("pause");
                break;
            case 3:
                printf("Minimum value: %lf\n\n", Minimum(numbers, k));
                system("pause");
                break;
            case 4:
                printf("Maximum value: %lf\n\n", Maximum(numbers, k));
                system("pause");
                break;
            case 0:
                printf("See you later");
                break;
            default:
                printf("That's an invalid value'");
                break;
        }
    } while(option!=0);

    return 0;
}
