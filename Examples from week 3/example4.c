#include <stdio.h>

int grade = 3;

int main() {

switch (grade) {
case 4: printf("Excellent");
break;
case 3: printf("Good");
break;
case 2: printf("Average");
break;
case 1: printf("Poor");
break;
case 0: printf("Failing");
break;
default: printf("Not a grade");
break;
}

printf("\n");

switch (grade) {
case 4:
case 3:
case 2:
case 1: printf("Passing");
break;
case 0: printf("Failing");
break;
default: printf("Not a grade");
break;
}


    return 0;
}