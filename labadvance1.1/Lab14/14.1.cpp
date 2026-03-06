#include <stdio.h>

int max_v = 0;
int best_x[100];

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x);

int main() {
    int n = 5, wx = 11;
    int w[5] = { 1, 2, 5, 6, 7 };
    int v[5] = { 1, 6, 18, 22, 28 };
    int *x = new int[n], vx;
    vx = KnapsackBT(w, v, n, wx, 0, x);
    printf("Value = %d \n", vx);
    for (int i = 0; i < n; i++) printf("%d ", x[i]);
    return 0;
}
int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {
    if (i == n) {
        int current_v = 0, current_w = 0;
        for (int j = 0; j < n; j++) {
            if (x[j] == 1) {
                current_w += w[j];
                current_v += v[j];
            }
        }
        if (current_w <= wx && current_v > max_v) {
            max_v = current_v;
            for (int j = 0; j < n; j++) best_x[j] = x[j];
        }
        return max_v;
    }

    x[i] = 1; KnapsackBT(w, v, n, wx, i + 1, x);
    x[i] = 0; KnapsackBT(w, v, n, wx, i + 1, x);

    for (int j = 0; j < n; j++) x[j] = best_x[j];
    return max_v;
}
