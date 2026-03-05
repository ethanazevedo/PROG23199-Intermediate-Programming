#include <stdio.h>

#define MIN_CHARGE 39
int trade;
int size;
float rate;
int n;


int main(void){
    int m = 30000 * 0.0022;
    printf("%d", m);

    printf("Enter value of the trade: ");
    scanf("%d", &trade);

    if (trade < 2500){
        size = 30;
        rate = 0.017;
        n = (trade * rate);
    }
    else if(trade >= 2500 && trade < 6250){
        size = 56;
        rate = 0.0066;
        n = (trade * rate);
    }
    else if(trade >= 6250 && trade < 20000){
        size = 76;
        rate = 0.0034;
        n = (trade * rate);
    }
    else if(trade >= 20000 && trade < 50000){
        size = 100;
        rate = 0.0022;
        n = (trade * rate);
        printf("%d", n);
    }
    else if(trade >= 50000 && trade < 500000){
        size = 155;
        rate = 0.0011;
        n = (trade * rate);
    }
    else{
        size = 255;  
        rate = 0.009;
        n = (trade * rate);
    }

    int commission = (size + n);
    if(commission < 39){
        commission = 39;
        printf("Commission: %d\n\n", commission);
    }
    else {
        printf("Commission: %d\n\n", commission);
    }

    return 0;

}