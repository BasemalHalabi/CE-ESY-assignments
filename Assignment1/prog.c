#include <stdio.h>
#include <string.h>
#define SIZE 10

typedef struct {
    char buffer[SIZE];
    int head;
    int tail;
    int count;
} 
CircularBuffer;
void init(CircularBuffer *cb) {
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}
int isFull(CircularBuffer *cb) {
    return cb->count == SIZE;
}
int isEmpty(CircularBuffer *cb) {
    return cb->count == 0;
}
void writeCB(CircularBuffer *cb, char data) {
    if (isFull(cb)) {
        printf("Overflow\n");
        return;
    }
    cb->buffer[cb->tail] = data;
    cb->tail = (cb->tail + 1) % SIZE;
    cb->count++;
}
char readCB(CircularBuffer *cb) {
    if (isEmpty(cb)) {
        printf("Underflow\n");
        return '\0';
    }
    char data = cb->buffer[cb->head];
    cb->head = (cb->head + 1) % SIZE;
    cb->count--;
    return data;
}

int main() {
    CircularBuffer cb;
    init(&cb);
    char name[50];
    printf("Enter name: ");
    scanf(" %[^\n]", name);
    strcat(name, "CE-ESY");
    for (int i = 0; name[i] != '\0'; i++) {
        writeCB(&cb, name[i]);
    }
    printf("Output: ");
    while (!isEmpty(&cb)) {
        printf("%c", readCB(&cb));
    }
    printf("\n");
    if (isEmpty(&cb)) {
        printf("Empty buffer\n");
    }
    return 0;
}
