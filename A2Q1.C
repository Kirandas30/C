#include <stdio.h>

int main() {
    double heading;// Write C code here
    printf("Enter the compass heading");
    scanf("%lf",&heading);
    if(heading >0 && heading <90)
    printf("North %lf degrees east ",heading);
     else if(heading >90 && heading <180)
    printf("South %lf degrees east ",180-heading);
     else if(heading >180 && heading <270)
    printf("South %lf degrees west ",heading);
     else if(heading >270 && heading <360)
    printf("North %lf degrees west ",360-heading);
     else if(heading == 0 && heading ==360)
    printf("North %lf degrees east/west ",heading);
     else if(heading == 180)
    printf("South %lf degrees east/west ",heading);
    else if(heading == 90)
    printf("South/North %lf degrees east ",heading);
    else if(heading == 270)
    printf("South/North %lf degrees west ",heading);
    else
    printf("Invalid input!");

    return 0;
}