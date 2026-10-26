#include<stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

void celsiusToFahr(int lower, int upper, int step){
    float celsius, fahr;
    for(celsius = lower; celsius <= upper; celsius = celsius + 20){
        fahr = (celsius * 9 / 5) - 32;
        printf("%3.0f %6.1f \n", celsius, fahr);
    }
}

void fahrToCelsius(int lower, int upper, int step){
    float celsius, fahr;
    for(fahr = lower; fahr <= upper; fahr = fahr + 20){
        celsius = (5 / 9) * (fahr - 32);
        printf("%3.0f %6.1f \n", fahr, celsius);
    }
}
void reverseFahrToCelsius(int lower, int upper, int step){
    float celsius, fahr;
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - 20){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}
int main(int argc, char  *argv[])
{
    // printf("\nFahrenheit to Celius \n\n");
    // fahrToCelsius(LOWER, UPPER, STEP);
    // printf("\nCelsius to Fahrenheit \n\n");
    // celsiusToFahr(LOWER, UPPER, STEP);
    printf("\nFahrenheit to Celsius in reverse order: \n\n");
    reverseFahrToCelsius(LOWER, UPPER, STEP);
    return 0;
}
