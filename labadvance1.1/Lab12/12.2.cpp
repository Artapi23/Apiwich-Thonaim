#include <stdio.h>

int *KnapsackGreedy(int *w, int *v, int n, int wx) ;

int main() {
    int n = 5, wx = 11;
    int w[5] = { 1, 2, 5, 6, 7 };
    int v[5] = { 1, 6, 18, 22, 28 };
    int *x = KnapsackGreedy(w, v, n, wx);
    for (int i = 0; i < n; i++) printf("%d ", x[i]);
    return 0;
}
int *KnapsackGreedy(int *w, int *v, int n, int wx) {
    int *x = new int[n];
    float *ratio = new float[n];
    bool *selected = new bool[n];

    for (int i = 0; i < n; i++) {
        x[i] = 0;
        selected[i] = false;
        ratio[i] = (float)v[i] / w[i];
    }

    int current_w = 0;
    for (int count = 0; count < n; count++) {

        int best_idx = -1;
        float max_ratio = -1.0;

        for (int i = 0; i < n; i++) {
            if (!selected[i] && ratio[i] > max_ratio) {
                max_ratio = ratio[i];
                best_idx = i;
            }
        }

        if (best_idx == -1) break;
        selected[best_idx] = true;

        if (current_w + w[best_idx] <= wx) {
            x[best_idx] = 1;
            current_w += w[best_idx];
        }
    }

    return x;
}