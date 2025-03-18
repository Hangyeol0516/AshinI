#define _CRT_SECURE_NO_WARNINGS // C4996 오류 방지
#include <stdio.h>

int main() {

    while (1) {

        int arr[3] = {0};

        for (int i = 0; i < 3; i++)
        {
            int num;
            scanf("%d", &num);
            arr[i] = num;
        }

        // 0 인지 확인
        if (arr[0]==0 && arr[1]==0 && arr[2]==0)
        {
            return 0;
        }
    
        // 중간값 구하기 (배열에 입력받은 수 3개를 집어넣고 오름차순으로 정렬하여 그 중 두 번째에 있는 같이 두 번째로 큰 수)
        int temp = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        // 삼각형이 맞는가?
        if (arr[2] >= (arr[0] + arr[1]))
        {
            printf("Invalid\n");
        }

        // 세변의 길이가 모두 같은가?
        else if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            printf("Equilateral\n");
        }

        // 두 변의 길이만 같은가?
        else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
        {
            printf("Isosceles\n");
        }

        // 세 변의 길이가 모두 다른가?
        else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2])
        {
            printf("Scalene\n");
        }
    }

    return 0;
}