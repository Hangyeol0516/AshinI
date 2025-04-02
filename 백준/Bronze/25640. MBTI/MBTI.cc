#include <iostream>
#include <cstring>

int main() {

    char mbti[6];
    std::cin >> mbti;

    int N;
    std::cin >> N;

    int result = 0;
    for (int i = 0; i < N; i++)
    {
        char another_mbti[6];
        std::cin >> another_mbti;

        if (!strcmp(mbti, another_mbti))
        {
            result++;
        }
    }

    std::cout << result;
   
    return 0;
}