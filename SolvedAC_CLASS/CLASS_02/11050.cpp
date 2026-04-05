#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int N, K;

    cin >> N >> K;

    int result = 1; // long long 권장 (정수 오버플로우 방지)

    for(int i = 1; i <= N; i++){
        result *= i;
    }

    for(int i = 1; i <= K; i++){
        result /= i;
    }

    for(int i = 1; i <= N-K; i++){
        result /= i;
    }

    /*
    nCk = nC(n-k) 성질 이용
    if(K > N/2) K = N-K;

    for(int i= 1; i <= K; i++){
        result *= (N - i +1); // 분자
        result /= i;
    }
    */

    /*
    파스칼의 삼각형 [DP]
    : 전체 경우의 수는 [특정 원소를 포함한 경우 + 특정 원소를 제외한 경우]

    vector<vector<long long>> dp(N + 1, vector<long long>(N + 1, 0));

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) {
                dp[i][j] = 1; // 양 끝은 1
            } else {
                // 파스칼의 삼각형 공식 적용
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    cout << dp[N][K] << endl;

    */

    cout << result << endl;

    return 0;
}