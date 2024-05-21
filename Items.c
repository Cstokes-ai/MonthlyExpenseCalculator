//
// Created by corne on 5/21/2024.
//
#include <stdio.h>
#include <string.h>
#include <math.h>

void monthly(char item[], float price);

void items(){
    char item[100];
    float price;
    int flag = 1;
    // this will ask the user for the items and the price for the items
    do{
        printf("Enter a item\n");
        scanf("%50s",item);
        // Check if the user wants to exit
        if (strcmp(item, "exit") == 0) {
            flag = 0;
            continue; // Exit the loop
        }
        printf("Enter the price\n");
        scanf("%f",&price);
        monthly(item,price);

    }
    while (flag==1);

}
void monthly(char item[], float price){
    //This is to calculate the monthly expense for all of the items that were given by the user.
    static  float total=0;
    total += price;
    // Optionally, print the current total expense for debugging
    printf("Current total expense: %.2f\n", total);

}



