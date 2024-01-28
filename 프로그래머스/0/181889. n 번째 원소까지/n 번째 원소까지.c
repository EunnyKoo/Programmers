#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    // n이 배열의 길이를 벗어나는 경우 빈 배열을 반환
    if (n <= 0 || n > num_list_len) {
        int* answer = (int*)malloc(1);
        *answer = 0;
        return answer;
    }

    // 반환할 배열의 길이 계산
    size_t answer_len = n;

    // 동적 할당
    int* answer = (int*)malloc(answer_len * sizeof(int));

    // 배열 복사
    for (size_t i = 0; i < answer_len; ++i) {
        answer[i] = num_list[i];
    }

    return answer;
}

int main() {
    // 예시 입력
    int num_list[] = {1, 2, 3, 4, 5};
    size_t num_list_len = sizeof(num_list) / sizeof(num_list[0]);
    int n = 3;

    // 함수 호출 및 결과 출력
    int* result = solution(num_list, num_list_len, n);

    // 결과 배열 출력
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", result[i]);
    }

    // 할당된 메모리 해제
    free(result);

    return 0;
}
