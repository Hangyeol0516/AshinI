#include <stdio.h>

int main() {
    
    char str[101];    

    scanf("%s", str);

    int cnt=0;
    
    for (int i=0; i<101;i++ ) {
        if (str[i]=='\0') {
            break;
        }
        cnt++;
    }

    printf("%d", cnt);
        
    return 0;
}