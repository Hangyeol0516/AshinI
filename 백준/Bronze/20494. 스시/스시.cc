#include <iostream>
#include <cstring>

int main() {
    
    int N;
    std::cin >> N;

    int result = 0;

    for (int i = 0; i < N; i++)
    {
        char arr[102];
        std::cin >> arr;

        result += strlen(arr);
    }
       
    std::cout << result;

    return 0;
}