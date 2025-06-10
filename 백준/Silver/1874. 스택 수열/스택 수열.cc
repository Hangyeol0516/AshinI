#include <iostream>
#include <stack>
#include <vector>
#pragma warning(disable:4996) // Visual Studio scanf 오류 방지

int main() {
    int N;
    scanf("%d", &N);
    int arr[100000];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    std::stack<int> stack;
    std::vector<char> operations;

    int num = 1;
    bool result = true;

    for (int i = 0; i < N; i++) {
        int su = arr[i];

        if (su >= num) {
           
            while (num <= su) {
                stack.push(num++);
                operations.push_back('+');
            }
       
            stack.pop();
            operations.push_back('-');
        }
        else {
        
            if (stack.empty() || stack.top() != su) {
                printf("NO\n");
                result = false;
                break;
            }
            else {
                stack.pop();
                operations.push_back('-');
            }
        }
    }

    if (result) {
        for (char op : operations) {
            printf("%c\n", op);
        }
    }

    return 0;
}