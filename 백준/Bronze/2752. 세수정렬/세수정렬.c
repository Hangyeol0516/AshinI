#include <stdio.h>

int main() {
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int arr[3] = {a, b, c};
    int temp = 0;
    
    for (int i=0; i < 3; i++) {
        for (int j=0; j < i; j++) {
             if (arr[i] < arr[j]) {
                 temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;
             }
        }      
    }

    for (int i=0; i<3; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}