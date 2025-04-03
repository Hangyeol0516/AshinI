#include <iostream>
#include <cstring>
#pragma warning(disable:4996) //

int main() {

    char str[1000002];
    fgets(str, 1000002, stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n' || str[len - 1] == ' ') {
        len--;
    }

    int c = 1;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            if (str[strlen(str) - 2] == ' ' && i == (strlen(str) - 1))
            {
                c--;
            }

            if (str[i + 1] == ' ')
            {
                c++;
            }
        }
    }

    printf("%d", c);

    return 0;
}