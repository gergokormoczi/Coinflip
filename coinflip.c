#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    srand(time(NULL));// Initialization, should only be called once.
    int times;
    int head = 0;
    int tail = 0;
    int dif = 0;
    printf("how many times shoud I flip the coin: ");
    scanf("%d", &times);

    //flipping the coin
    for(int i = 0; i < times ; i++){
        int r = rand() % 2; // Returns a pseudo-random integer between 0 and 1.
        if(r == 0){
            head++;
        }
        else{
            tail++;
        }
    }

    printf("\nNumber of heads: %d", head);
    printf("\nNumber of tails: %d", tail);
        if(head > tail){
        printf("\nhead wins");
        dif = head - tail;
    }
    else if(tail > head){
        printf("\ntail wins");
        dif = tail - head;
    }
    else{
        printf("\ndraw");
    }
    printf("\nThe difference was %d", dif);
    return 0;
}