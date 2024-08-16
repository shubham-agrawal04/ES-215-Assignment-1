#include <bits/stdc++.h>
using namespace std;

vector<long long> dp(50, -1);

long long fibonacciLoopMemo(int n) {
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    for (int i = 0; i < 50; i++) {
        cout << fibonacciLoopMemo(i) << " ";
    }
    cout << endl;

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_taken = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    cout << "Time taken by Loop with Memoization: " << time_taken << " seconds" << endl;

    return 0;
}
