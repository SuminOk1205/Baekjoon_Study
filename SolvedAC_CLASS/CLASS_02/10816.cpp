#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


	int N, M;
	vector<int> cards;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		cards.push_back(temp);
	}

	sort(cards.begin(), cards.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;

		int low = lower_bound(cards.begin(), cards.end(), temp) - cards.begin();
		int up = upper_bound(cards.begin(), cards.end(), temp) - cards.begin();

		cout << up - low << " ";

	}

	/*
	* [Binary Search 이진 탐색 활용]
	* 
	* lower_bound : 내가 찾는 대상이 저장된 인덱스 중 가장 작은 인덱스 반환
	* upper_bound : 내가 찾는 대상이 저장된 인덱스 중 가장 큰 인덱스+1 반환
	*/


	return 0;
}

/*
* int lower_bound(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size(); // 맨 끝 다음 인덱스

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            // target과 같더라도 더 왼쪽(앞쪽)에 같은 값이 있을 수 있음!
            // 범위를 왼쪽으로 좁힘
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low; // 최종적으로 남은 경계선 위치
}
*/

/*
* int upper_bound(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size();

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target) {
            // target보다 큰 값을 찾았으므로 더 왼쪽을 확인해봄
            high = mid;
        } else {
            // arr[mid] <= target 인 경우이므로 무조건 오른쪽을 확인
            low = mid + 1;
        }
    }
    return low;
}
*/