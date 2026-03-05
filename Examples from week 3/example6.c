#include <stdio.h>
int main() {


for(int i = 0; i < 90; i++) {

    if (i == 34) {
        continue;
    }
    printf("%d\n", i);

}


ending: printf("Loop ended.\n");




    return 0;
}