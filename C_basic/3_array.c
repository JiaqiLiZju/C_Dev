#include <stdio.h>
#define MONTHS 12
int main(void){
    int days[MONTHS]={20,22,12,12,32,12,3,45,45,56,22,13};
    for(int index=0;index<MONTHS;index++){
        printf("Month %2d has %d days.\n", index+1, *(days+index));
        /*days = &days[0]*/
    }
    return 0;
}