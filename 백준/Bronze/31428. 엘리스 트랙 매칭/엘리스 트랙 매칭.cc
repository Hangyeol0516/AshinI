#include <iostream>
#include <cstring>

int main() {

    int N;
    std::cin >> N;

    char track[10002];
    for (int i = 0; i < N; i++)
    {
        std::cin >> track[i];
    }

    char E;
    std::cin >> E;

    int result = 0;
    for (int i = 0; i < N; i++)
    {
        if (track[i] == E) {
            result++;
        }
    }

    std::cout << result;
   
    return 0;
}