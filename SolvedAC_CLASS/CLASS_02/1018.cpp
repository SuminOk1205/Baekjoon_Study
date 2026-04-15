#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 8x8 체스판을 검사하는 함수
int check(int y, int x, const vector<string>& board) {
	int countW = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// (i+j)가 짝수면 시작점과 색이 같아야 하고, 홀수면 달라야 함
			char correctColor;
			if ((i + j) % 2 == 0) correctColor = 'W';
			else correctColor = 'B';

			if (board[y + i][x + j] != correctColor) countW++;
		}
	}
	// W로 시작할 때 countW개면, B로 시작할 때는 (64 - countW)개임
	// 시작점을 아예 갈아엎고 시작할 수도 있음을 *주의*
	return min(countW, 64 - countW);
}


int main() {

	int N, M;
	
	cin >> N >> M;

	vector<string> board(N); // N개의 행을 가진 string 벡터 (메모리 미리 할당)

	for (int i = 0; i < N; i++) cin >> board[i];

	int min_val = 64;

	// 모든 8x8 시작점을 탐색 (브루트 포스)
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			min_val = min(min_val, check(i, j, board));
		}
	}

	cout << min_val << endl;

	return 0;
}