#include <stdio.h>
#define NMAX 10

int input(int *a, int *flag);
void sort(int *a);
void output(int *a);

int main() {
    int n, data[NMAX];
    int isWorking = 1;

    input(data, &isWorking);

    if (isWorking) {
        sort(data);
        output(data);
    } else {
        printf("n/a");
    }

    return 0;
}

int input(int *a, int *flag) {
    char second_char;

    // if (scanf("%d%c", n, &second_char) != 2 || *n <= 0 || *n > NMAX || second_char != '\n') {
    //     *flag = 0;
    // } else {
    for (int *p = a; p - a < NMAX; p++) {
        if (scanf("%d%c", p, &second_char) != 2 || (second_char != ' ' && second_char != '\n')) {
            *flag = 0;
            break;
        }
    }
    // }

    return 0;
}

void sort(int *a) {
    int i, j;
    for (i = 0; i < NMAX - 1; i++) {
        for (j = 0; j < NMAX - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void output(int *a) {
    for (int i = 0; i < NMAX; i++) {
        if (i == NMAX - 1) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
}
