#include <stdio.h>

int main() {
    int sum = 0, a;
    int cards[5] = {1,2,4,8,16};

    printf("Think of a number between 1 and 31.\n");

    for(int i=0;i<5;i++){
        printf("Is your number in card starting with %d? (1=Yes 0=No): ", cards[i]);
        scanf("%d",&a);
        if(a==1) sum += cards[i];
    }

    printf("Your number is %d\n", sum);

    return 0;
}