struct person
{
    char fname[100];
    char mname[100];
    char lname[100];

};
struct DOB
{
    int day;
    char month[20];
    int year;
    
};
struct display {
    struct person p1,p2;
    struct DOB d1,d2;
};
int main(){
    struct display b1;
    printf("Enter  the first name, middle name , last name , day, month, year : ");
    scanf("%s%s%s%d%s%d",&b1.p1.fname, &b1.p1.mname, &b1.p1.lname,&b1.d1.day,&b1.d1.month,&b1.d1.year);
    printf(" name of the person : %s %s %s \n DOB : %d %s %d ",&b1.p1.fname, &b1.p1.mname, &b1.p1.lname,&b1.d1.day,&b1.d1.month,&b1.d1.year);
return 0;
}