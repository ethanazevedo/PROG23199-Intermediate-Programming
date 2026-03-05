#include <stdio.h>
//precision

int main(){
float num = 123.456789f;
printf("%.2f \n", num);

int num2 = 45;
printf("%.5d \n", num2);



// minimum width

int num3 = 45;
printf("%8d \n", num3);

int num4 = 45;
printf("%-8d \n", num4);

return 0;
}
