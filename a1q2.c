#include <stdio.h>


int main() {
  double population;
  printf("Enter the number of population") ;
  scanf("%lf",&population);
  
  double toilets = population/3;
  double old_flush  = (15*toilets)*14;
   double new_flush = (2*toilets)*14;
  double water_saved =  old_flush - new_flush;
  double total_cost = toilets*150;
  printf("Water saved is : %.2lf  \n ", water_saved);
    printf("Total cost : %.2lf   ", total_cost);
  
   return 0;
}