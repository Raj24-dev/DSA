#include <stdio.h>

#define MAX 100

struct List {
    int arr[MAX];
    int size;
};
void init(struct List *l) {
    l->size = 0;
}

void insert(struct List *l, int pos, int value) {
    if (l->size == MAX) {
        printf("List is full\n");
        return;
    }
    if (pos < 0 || pos > l->size) {
        printf("Invalid position\n");
        return;
    }

    for (int i = l->size; i > pos; i--) {
        l->arr[i] = l->arr[i - 1];
    }

    l->arr[pos] = value;
    l->size++;
}
void delete(struct List *l, int pos) {
    if (l->size == 0) {
        printf("List is empty\n");
        return;
    }
    if (pos < 0 || pos >= l->size) {
        printf("Invalid position\n");
        return;
    }

    for (int i = pos; i < l->size - 1; i++) {
        l->arr[i] = l->arr[i + 1];
    }

    l->size--;
}
void sort(struct List *l) {
    for (int i = 0; i < l->size - 1; i++) {
        for (int j = 0; j < l->size - i - 1; j++) {
            if (l->arr[j] > l->arr[j + 1]) {
                int temp = l->arr[j];
                l->arr[j] = l->arr[j + 1];
                l->arr[j + 1] = temp;
            }
        }
    }
}
void display(struct List *l) {
    for (int i = 0; i < l->size; i++) {
        printf("%d ", l->arr[i]);
    }
    printf("\n");
}
int search(struct List *l, int key) {
    for (int i = 0; i < l->size; i++) {
        if (l->arr[i] == key)
            return i;
    }
    return -1;
}
int get(struct List *l, int pos) {
    if (pos < 0 || pos >= l->size) {
        printf("Invalid position\n");
        return -1;
    }
    return l->arr[pos];
}
void set(struct List *l, int pos, int value) {
    if (pos < 0 || pos >= l->size) {
        printf("Invalid position\n");
        return;
    }
    l->arr[pos] = value;
}

int main() {
    struct List l;
    init(&l);

    insert(&l, 0, 10);
    insert(&l, 1, 20);
    insert(&l, 1, 15);

    display(&l);

    delete(&l, 1);
    display(&l);

    printf("Search 20 at index: %d\n", search(&l, 20));

    return 0;
}