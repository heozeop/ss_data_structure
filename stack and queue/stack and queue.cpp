#include <iostream>

typedef struct _node {
    // 다음 노드가 무엇인지 이전 노드는 알아요
    struct _node* next;

    // 비교할 수 있는 값
    int value;
} node;

// 추가할 수 있어요
node* insert_node(int value, node* to) {
    node* next = to->next;
    to->next = (node*)malloc(sizeof(node)); // 왜 malloc을 썼을까요?
    to->next->value = value;
    to->next->next = next;
    return to->next;
}

// 삭제할 수 있어요
int delete_node(int value, node* from) {
    node* temp;
    while (from->next != NULL) {
        if (from->next->value == value) {
            temp = from->next;
            from->next = from->next->next;
            free(temp);
            return 1;
        }
        else {
            from = from->next;
        }
    }
    return 0;
}

// 찾을 수 있어요
node* find_node_by_value(int value, node* from) {
    while (from->value == value) {
        from = from->next;
    }

    return from;
}

// 몇개 있는지 알 수 있어요
int count_node(node* start) {
    int count = 0;
    while (start->next != NULL) {
        count += 1;
        start = start->next;
    }
    return count;
}

// 어디서 부터 찾아야 하는 지 알아요
node* init() {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->next = NULL;
    new_node->value = NULL;
    return new_node;
}

void linked_list_train() {
    node* train = init();
    node* first_class = insert_node(1, train);
    node* second_calss = insert_node(2, train);
    node* third_class = insert_node(3, train);

    printf("전체 칸 수는 %d개 입니다.\n", count_node(train));

    delete_node(1, train);

    printf("전체 칸 수는 %d개 입니다.\n", count_node(train));

    node* fourth_class = find_node_by_value(4, train);

    const char* is_fourth_class_exist = (fourth_class == NULL ? "있어요" : "없어요.");

    printf("4등 칸은 %s\n", is_fourth_class_exist);
}

//노드를 맨 뒤에 넣어요.
node* stack_push(int value, node* stack) {
    while(stack->next != NULL){
        stack = stack->next;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp->next = NULL;
    temp->value = value;
    stack->next = temp;
    return temp;
}

//노드를 맨 뒤에서 빼요.
node* stack_pop(node* stack) {
    while (stack->next->next != NULL) {
        stack = stack->next;
    }
    node* temp = stack->next;
    stack->next = NULL;
    return temp;
}

//스택의 맨 뒤를 봐요.
node* stack_peek(node* stack) {
    while(stack->next != NULL){
        stack = stack->next;
    }
    return stack;
}

//스택이 비었는지 확인해요.
int stack_is_empty(node* stack) {
    return stack->next == NULL ? 1 : 0;
}

//노드가 몇개 있는지 알 수 있어요.
int stack_count(node* stack) {
    int temp = 0;
    while (stack->next != NULL) {
        temp++;
        stack = stack->next;
    }
    return temp;
}


void stack_of_subjects_to_study() {
    node* stack = init();
    stack_push(1, stack);
    stack_push(2, stack);
    stack_push(3, stack);
    stack_pop(stack);
}

// 노드를 맨 뒤에 넣어요.
node* queue_push(int value, node* queue) {
    while (queue->next != NULL) {
        queue = queue->next;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp->next = NULL;
    temp->value = value;
    queue->next = temp;
    return temp;
}
// 노드를 맨 앞에서부터 빼요.
node* queue_pop(node* queue) {
    node* temp = queue->next;
    queue->next = queue->next->next;
    return temp;
}
// 큐의 맨 앞를 봐요.
node* queue_peek(node* queue) {
    return queue->next;
}

// 큐가 비었나요 ?
int queue_is_empty(node* queue) {
    return queue->next == NULL ? 1 : 0;
}

// 노드가 몇개 있는지 알 수 있어요.
int queue_count(node* queue) {
    int temp = 0;
    while (queue->next != NULL) {
        temp++;
        queue = queue->next;
    }
    return temp;
}

void queue_line_for_hamburger() {

}

int main()
{
    linked_list_train();
    // stack_of_subjects_to_study();
    // queue_line_for_hamburger();
}
