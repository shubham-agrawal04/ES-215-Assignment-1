#include <bits/stdc++.h>
using namespace std;

long long fibonacciLoop(int n) {
    if (n <= 1)
        return n;
    
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    for (int i = 0; i < 50; i++) {
        cout << fibonacciLoop(i) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    cout << "Time taken by Loop: " << time_taken << " seconds" << endl;

    return 0;
}
