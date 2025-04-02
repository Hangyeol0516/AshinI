#include <iostream>
#include <cstring>

int main() {
    
    char arr[102];
    std::cin >> arr;

    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A, B;
        std::cin >> A;
        std::cin >> B;
            
        char temp;
        temp = arr[A];
        arr[A] = arr[B];
        arr[B] = temp;
    }
    
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}