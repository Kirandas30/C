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
struct Time st, et ;
struct Car C1;
struct Time scan_time1();
struct Time scan_time2();

struct Car scan_car();
void print_time1(struct Time st);
void print_time2(struct Time et);
void print_car(struct Car C1);
int main()
{
    C1= scan_car();
    print_car(C1);
    printf("During the start if travel:\n");
    st= scan_time1();
    printf("Displaying starting time: ");
    print_time(st);
    printf("During the End if travel:\n");
    et= scan_time2();
    printf("Displaying ending time: ");
    print_time(et);
    return 0;
}
struct Time scan_time1()
{
    printf("Enter the time in Seconds, Minutes, Hours: ");
    scanf("%d%d%d", &C1.st.seconds, &C1.st.minutes, &C1.st.hours);
    return st;
}
struct Car scan_car()
{
    printf("Enter the car number: ");
    scanf("%d", &C1.numberplate);
    return C1;
}
void print_time(struct Time st)
{
    printf("%d:%d:%d\n", C1.st.minutes, C1.st.minutes, C1.st.hours);
}
void print_car(struct Car C1)
{
    printf("Car Number: %d\n", C1.numberplate);
}