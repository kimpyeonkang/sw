#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

// ���� ����ü ����
typedef struct {
    int items[MAX_SIZE]; int top;
} Stack;

// ���� �ʱ�ȭ
void initialize(Stack* stack) {
    stack->top = -1;
}

// ������ ����ִ��� Ȯ��
bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}
// ������ ���� á���� Ȯ��
bool isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}
// ���ÿ� ������ ����
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("������ ���� á���ϴ�.\n");
        return;
    }

    stack->top++;
    stack->items[stack->top] = value;
}

// ���ÿ��� ������ ���� �� ��ȯ
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("������ ����ֽ��ϴ�.\n");
        return -1;  // ���� ��
    }

    int poppedItem = stack->items[stack->top];
    stack->top--;

    return poppedItem;
}
// ������ �� �� ������ Ȯ��
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("������ ����ֽ��ϴ�.\n");
        return -1;  // ���� ��
    }

    return stack->items[stack->top];
}
int main() {
    Stack stack; initialize(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("������ �� �� ������: %d\n", peek(&stack));
    printf("���ÿ��� ������ ����: %d\n", pop(&stack));
    printf("���ÿ��� ������ ����: %d\n", pop(&stack));

    printf("������ �� �� ������: %d\n", peek(&stack));

    return 0;
}