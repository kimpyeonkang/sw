﻿#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

// 스택 구조체 정의
typedef struct {
    int items[MAX_SIZE]; 
    int top;
} Stack;

// 스택 초기화
void initialize(Stack* stack) {
    stack->top = -1;
}

// 스택이 비어있는지 확인
bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}
// 스택이 가득 찼는지 확인
bool isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}
// 스택에 데이터 삽입
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("스택이 가득 찼습니다.\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
        
}

// 스택에서 데이터 삭제 및 반환
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어있습니다.\n");
        return -1;  // 오류 값
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;
    

    return poppedItem;
}
// 스택의 맨 위 데이터 확인
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("스택이 비어있습니다.\n");
        return -1;  // 오류 값
    }

    return stack->items[stack->top];
}
int main() {
    Stack stack;
    int x, cnt = 0;
    int fullcnt = 0;
    int emptycnt = 0;
    initialize(&stack);
    srand((unsigned)time(NULL));
   
    while (1) {
        x = rand() % 2;
        if (x == 0) {
            push(&stack, rand() % 100);
            printf("스택의 맨 위 데이터: %d\n", peek(&stack));
            fullcnt++;
        }
        
        else if (x == 1) {
            pop(&stack);
            printf("스택에서 데이터 삭제: %d\n", pop(&stack));
            emptycnt++;
        }

        cnt++;
        if (cnt > 99) break;  
    }
    printf("fullcnt 횟수 = %d\n", fullcnt);
    printf("emptycnt 횟수 = %d", emptycnt);
  
    return 0;
}