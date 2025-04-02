#include <iostream>
#include <cstring>

int main() {
    
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int k;
        std::cin >> k;

        for (int j = 0; j < k; j++)
        {
            std::cout << "=";
        }
        std::cout << "\n";
    }
   

    return 0;
}