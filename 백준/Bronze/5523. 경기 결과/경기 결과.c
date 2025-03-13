#include <stdio.h>

int main() {

    int N;
    int AWin=0, BWin=0;
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        int A=0, B=0;
        scanf("%d %d", &A, &B);
        
        if (A > B) {
            AWin = AWin + 1;
        } else if (A < B) {
            BWin = BWin + 1;
        }
    }

    printf("%d %d", AWin, BWin);
       
    return 0;
}