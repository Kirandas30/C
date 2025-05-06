#include <stdio.h>


struct auto_t{
    char make[100],model[100];
    int odo_read;
    struct  date_t d1 d2;
    struct tank_t t;
};
struct date_t{
    int day,month,year;
};
struct tank_t{
    int fuel_read, fuel_cap;
}
struct auto_t a;
    struct date_t d;
    struct tank_t t;

    struct auto_t scan_auto();
    struct date_t scan_date();
    struct tank_t scan_tank();

    void print_date(struct date_t d);
    void print_auto(struct auto_t a);
    void print_tank(struct tank_t t);
int main(){
    printf("Enter the details :");
    a = scan_auto();
    printf("Display the details : ");
    print_auto(a);
    return 0 ;

    
}
 struct auto_t scan_auto(){
    scanf("%s%s%d",&a.make,$a.model,$a.odo_read);
    a.d1 = scan_date();
    a.d2 = scan_date();
    a.t = scan_date();
    return a;
 }
 struct date_t scan_date(){
    scanf("%d%d%d",&d.day,&d.month,&d.year);
    return d;
    }
     struct tank_t scan_tank(){  
     scanf("%d%d",&t.fuel_read,&t.fuel_cap);
     return t ;
     }
     void print_auto(struct auto_t a){
        printf("%s%s%d",a.make,a.model,a.odo_read);
         void print_date(a.d1);
         void print_date(a.d2);
         void print_date(a.t);
     }
     void print_auto(struct date_t d){
     printf("%d%d%d",d.day,d.month,d.year);
     }
      void print_tank(struct tank_t t){ 
printf("%d%d",t.fuel_read,t.fuel_cap);
    
}