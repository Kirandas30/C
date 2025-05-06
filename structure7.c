struct time{
    double min;
    double sec;
    double hour;
};
struct car {
    int numberplate;
    struct time t1,t2;
};
int main(){
    struct car c[3];
    for(int i =1; i<=3;i++){
        printf("Enter the car number , starting time in secs, mins nad hours  and ending time in secs,mins and hours ")
scanf("%d%d%d%d%d%d%d",&c.numberplate ,&c[i].t1.sec,&c[i].t1.min,&c[i].t1.hour,&c[i].t2.sec) ;   }
}