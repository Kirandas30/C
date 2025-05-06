#include <stdio.h>
struct Time
{
    int seconds, minutes, hours;
};
struct Car
{
    int numberplate;
    struct Time t1;
};
struct Time t1;
struct Car C1;
struct Time scan_time();
struct Car scan_car();
void print_time(struct Time t1);
void print_car(struct Car C1);
int main()
{
    C1= scan_car();
    print_car(C1);
    printf("During the start if travel:\n");
    t1= scan_time();
    printf("Displaying starting time: ");
    print_time(t1);
    printf("During the End if travel:\n");
    t1= scan_time();
    printf("Displaying ending time: ");
    print_time(t1);
    return 0;
}
struct Time scan_time()
{
    printf("Enter the time in Seconds, Minutes, Hours: ");
    scanf("%d%d%d", &C1.t1.seconds, &C1.t1.minutes, &C1.t1.hours);
    return t1;
}
struct Car scan_car()
{
    printf("Enter the car number: ");
    scanf("%d", &C1.numberplate);
    return C1;
}
void print_time(struct Time t1)
{
    printf("%d:%d:%d\n", C1.t1.minutes, C1.t1.minutes, C1.t1.hours);
}
void print_car(struct Car C1)
{
    printf("Car Number: %d\n", C1.numberplate);
}