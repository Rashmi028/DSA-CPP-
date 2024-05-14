// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int MaximumSum(int N, vector<int>& A) {
//     const int K = N; // K can be up to N (divide each element into its own subarray)
//     vector<vector<int>> dp(N + 1, vector<int>(K + 1, INT_MIN));
    
//     // Base case: dp[i][1] is the sum of A[0] to A[i-1] when having 1 subarray
//     int currentSum = 0;
//     for (int i = 1; i <= N; ++i) {
//         currentSum += A[i - 1];
//         dp[i][1] = currentSum;
//     }
    
//     // Fill the dp table
//     for (int k = 2; k <= K; ++k) { // Number of subarrays
//         for (int i = 1; i <= N; ++i) { // Length of the array considered
//             int max_prev = INT_MIN;
//             for (int j = 0; j < i; ++j) { // Find the best partition before i
//                 max_prev = max(max_prev, dp[j][k - 1]);
//             }
//             dp[i][k] = max(dp[i][k], max_prev + (A[i - 1] - A[0])); // F(1, i)
//         }
//     }
    
//     // The result will be the maximum value in the last column dp[N][K]
//     return dp[N][K];
// }

// int main() {
//     int T;
//     cin >> T;
    
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }
        
//         // Compute the maximum sum
//         int result = MaximumSum(N, A);
//         cout << result << endl;
//     }
    
//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int F(const vector<int>& A, int l, int r) {
  // Handle base case (single element)
  if (l == r) {
    return A[l];
  }
  
  // Calculate alternating sum
  return A[l] - A[r];
}

int MaximumSum(int N, vector<int>& A) {
  // Handle K = 1 case (entire array)
  if (N == 1) {
    return F(A, 0, 0);
  }
  
  int maxSum = INT_MIN;
  // Try all possible division points (i1, i2, ..., i(K-1))
  for (int i = 1; i < N - 1; ++i) {
    int currentSum = F(A, 0, i) + F(A, i + 1, N - 1);
    maxSum = max(maxSum, currentSum);
  }
  
  return maxSum;
}

int main() {
  int T;
  cin >> T;
  
  while (T--) {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
      cin >> A[i];
    }
    
    cout << MaximumSum(N, A) << endl;
  }
  
  return 0;
}
