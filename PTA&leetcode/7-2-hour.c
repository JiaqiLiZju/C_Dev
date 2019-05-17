#include<stdio.h>
int main(void){
    int time, time_hour, time_min, pstm, pstm_hour, pstm_min, crtm_hour, crtm_min;
    printf("Enter time");
    scanf("%d", &time);
    time_hour = time/100;
    time_min = time%100;
    printf("Enter pass time");
    scanf("%d", &pstm);
    pstm_hour = pstm/60;
    pstm_min = pstm%60;
    crtm_min = time_min+pstm_min;
    if (crtm_min>60){
        crtm_min = crtm_min-60;
        pstm_hour += 1;
    }
    crtm_hour = time_hour + pstm_hour;
    printf("%d%d", crtm_hour, crtm_min);
    return 0;
}
    
