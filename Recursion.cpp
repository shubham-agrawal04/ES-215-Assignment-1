#include <bits/stdc++.h>
using namespace std;

long long fibonacciRecursion(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
}

int main() {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    for (int i = 0; i < 50; i++) {
        cout << fibonacciRecursion(i) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    cout << "Time taken by Recursion: " << time_taken << " seconds" << endl;

    return 0;
}
