#include <stdio.h>

int main(void) {
    int answer=0, guess=0, count = 0;
    
    scanf("%d", &answer);
    
    do {
        scanf("%d", &guess);
        count++;
        
        if (guess > answer) {
            printf("%d>?\n", guess);
        } else if (guess < answer) {
            printf("%d<?\n", guess);
        } else {
            printf("%d==?\n", guess);
        }
    } while (guess != answer);
    
    printf("%d\n", count);
    
    return 0;
}
