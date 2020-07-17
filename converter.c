#include <stdio.h>

float kilo_mile(char);
float meter_feet(char);
float cent_inch(char);
float temperature(char);

int main() {

    int inp;
    char direction;

    //Initial menu
    printf("1 - Kilometer and Mile\n"
           "2 - Meter and Feet\n"
           "3 - Centimeter and Inch\n"
           "4 - Celsius and Fahrenheit\n"
           "5 - Quit\n"
           "Please input one of the above integers: ");
    scanf(" %i", &inp);


    //Kilometer to mile
    if (inp == 1){
        printf("Kilometer to Mile (K), Mile to Kilometer (M): ");
        scanf(" %c", &direction);
        if (direction == 'k' || direction == 'K'){
            kilo_mile('k');
        }
        else if (direction == 'm' || direction == 'M'){
            kilo_mile('m');
        }
        else{
            printf("\n Invalid input. \n");
            printf("\n");
            main();
        }
    }
    //Meter to feet
    else if (inp == 2){
        printf("Meter to Feet (M), Feet to Meter (F): ");
        scanf(" %c", &direction);
        if (direction == 'm' || direction == 'M'){
            meter_feet('m');
        }
        else if (direction == 'f' || direction == 'F'){
            meter_feet('f');
        }
        else{
            printf("\n Invalid input. \n");
            printf("\n");
            main();
        }
    }
    //Centimeter to inch
    else if (inp == 3){
        printf("Centimeter to Inch (C), Inch to Centimetre (I): ");
        scanf(" %c", &direction);
        if (direction == 'c' || direction == 'C'){
            cent_inch('c');
        }
        else if (direction == 'i' || direction == 'I'){
            cent_inch('i');
        }
        else{
            printf("\n Invalid input. \n");
            printf("\n");
            main();
        }
    }
    //Celsius to Fahrenheit
    else if (inp == 4){
        printf("Celsius to Fahrenheit (C), Fahrenheit to Celsius (F): ");
        scanf(" %c", &direction);
        if (direction == 'c' || direction == 'C'){
            temperature('c');
        }
        else if (direction == 'f' || direction == 'F'){
            temperature('f');
        }
        else{
            printf("\n Invalid input. \n");
            printf("\n");
            main();
        }
    }
    //Quit
    else if (inp == 5){
        printf("Quitting Program. \n");
        return 0;
    }
    // Wrong Character - retry
    else if (inp != 1 && inp != 2 && inp != 3 && inp != 4 && inp != 5){
        printf("\n Invalid input. \n");
        printf("\n");
        main();
    }

    return 0;
}

//////////////////////////////////////Conversion functions

//Kilometer/Mile Conversion Function
float kilo_mile (char dir){
    float val;
    //K to M
    if (dir == 'k'){
        printf("Enter a kilometer value: ");
        scanf(" %f", &val);
        printf("\n %f kilometers converts to %f miles. \n", val, val * 0.62137);
        printf("\n");
        main();
    }
    //M to K
    if (dir == 'm'){
        printf("Enter a mile value: ");
        scanf(" %f", &val);
        printf("\n %f miles converts to %f kilometers. \n", val, val * 1.60934);
        printf("\n");
        main();
    }
    return 0;
}

//Meter/Foot Conversion Function
float meter_feet (char dir){
    float val;
    //M to F
    if (dir == 'm'){
        printf("Enter a meter value: ");
        scanf(" %f", &val);
        printf("\n %f meters converts to %f feet. \n", val, val * 3.28084);
        printf("\n");
        main();
    }
    //F to M
    if (dir == 'f'){
        printf("Enter a feet value: ");
        scanf(" %f", &val);
        printf("\n %f feet converts to %f meters. \n", val, val * 0.3048);
        printf("\n");
        main();
    }
    return 0;
}

//Cenitmeter/Inch Conversion Function
float cent_inch (char dir){
    float val;
    //C to I
    if (dir == 'c'){
        printf("Enter a centimeter value: ");
        scanf(" %f", &val);
        printf("\n %f centimeters converts to %f inches. \n", val, val * 0.393701);
        printf("\n");
        main();
    }
    //I to C
    if (dir == 'i'){
        printf("Enter an inch value: ");
        scanf(" %f", &val);
        printf("\n %f inches converts to %f centimeters. \n", val, val * 2.54);
        printf("\n");
        main();
    }
    return 0;
}

//Celsius/Fahrenheit Conversion Function
float temperature (char dir){
    float val;
    //C to F
    if (dir == 'c'){
        printf("Enter a temperature in Celsius: ");
        scanf(" %f", &val);
        printf("\n %f degrees Celsius converts to %f degrees Fahrenheit. \n", val, (val * 9.0/5.0) + 32.0 );
        printf("\n");
        main();
    }
    //F to C
    if (dir == 'f'){
        printf("Enter a temperature in Fahrenheit: ");
        scanf("%f", &val);
        printf("\n %f degrees Fahrenheit converts to %f degrees Celsius. \n", val, (val - 32.0) * 5.0/9.0 );
        printf("\n");
        main();
    }
    return 0;
}