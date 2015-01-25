/* 
 * File:   payroll.c
 * Author: Morris
 *
 * Created on December 7, 2014, 8:22 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

float getTax(float grossPay);
float getHoursBonus(float hours);
int main(int argc, char** argv) {
    char jobGrade[1];
    int hoursWorked;
    char married[1];
    printf("Hello, What's your job Group?(A,B OR C) ");
    scanf("%s", &jobGrade);
    printf("\nAre you married? (Y or N)");
    scanf("%s", &married);

    printf("\nHow many hours have you worked? ");
    scanf("%d", &hoursWorked);
    float basicPay = getPayByHour(jobGrade, hoursWorked);
    float hourlyAdditions = getHoursBonus(hoursWorked);
    float houseAllowance = 5000; //All employees get five thousand house allowance
    float marriageAllowancePercent = 5; //give five percent discount on the gross for married employees
    float marriageAllowance = basicPay * (marriageAllowancePercent / 100);
    float grossPay = basicPay + hourlyAdditions + houseAllowance + marriageAllowance;

    float tax = getTax(grossPay);
    float netPay = grossPay - tax;

    printf("\nYour Basic pay is %.2f", basicPay);
    printf("\nYour Hours bonus is %.2f", hourlyAdditions);
    printf("\nYour House allowance is %.2f", houseAllowance);
    printf("\nYour Marriage allowance is %.2f", marriageAllowance);
    printf("\nYour Gross Pay is %.2f", grossPay);
    printf("\nYour Tax deduction is %.2f", tax);

    printf("\nYour Net Pay is %.2f\n", netPay);

    return (EXIT_SUCCESS);
}

int getPayByHour(char jobGrade[1], int hoursWorked) {
    int hoursMultiplier = 0;

    if (strcmp(jobGrade, "A") == 0) {
        hoursMultiplier = 100;
    } else if (strcmp(jobGrade, "B") == 0) {
        hoursMultiplier = 200;
    } else if (strcmp(jobGrade, "C") == 0) {
        hoursMultiplier = 300;
    }
    float payDue = hoursWorked * hoursMultiplier;
    return payDue;
}

float getHoursBonus(float hours) {
    float bonusShifts = hours / 15; //get the number of 15 hrs shifts qualified
    return bonusShifts * 2000;
}

float getTax(float grossPay) {
    //float netpay = (float) grossPay;
    float taxPercent, tax;
    if (grossPay >= 30000) {
        taxPercent = 0.2f; //0.2 is the same as 20% 
    } else if (grossPay >= 20000) {
        taxPercent = 0.15f; //0.15 is the same as 15% 
    } else if (grossPay >= 10000) {
        taxPercent = 0.1f; //0.1 is the same as 10% 
    } else {

        taxPercent = 0.0f;
    }
    tax = (float) grossPay * taxPercent;

    return tax;
}

