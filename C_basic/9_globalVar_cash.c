#include<stdio.h>
float cash;
void income(float num), expend(float num);
int main(void){
    int choice;
    float num;
    cash = 0;
    printf("Enter operation(0--end; 1--income; 2--expend):\n");
    scanf("%d", &choice);
    while (choice!=0){
        if (choice==1||choice==2){
            printf("Enter num:\n");
            scanf("%f", &num);
            switch (choice){
                case 1:                    
                    income(num);
                    printf("current cash=%.2f\n", cash);
                    break;
                case 2:
                    expend(num);
                    printf("current cash=%.2f\n", cash);
                    break;
            }
        }
        else{
            printf("invalid operation\n");
        }
        printf("Enter operation(0--end; 1--income; 2--expend):\n");
        scanf("%d", &choice);
    }
    return 0;
}
void income(float num){
    cash = cash+num;
}
void expend(float num){
    cash = cash-num;
}
