#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N;

bool binary_search(vector<int>& arr, int low, int high, int target){
	if (low > high) return false; // Base Case
	
	int mid = (low + high) / 2;

	if (arr[mid] == target) return true;

	if (arr[mid] > target)
		return binary_search(arr, low, mid - 1, target);
	else
		return binary_search(arr, mid + 1, high, target);

}


int main() {
	//	C++의 ios와 C의 stdio(printf, scanf 등) 사이의 동기화를 끊기
	//  이로 인해 C++ 전용 버퍼를 사용하게 되어 입출력 속도가 비약적으로 향상됨 
	//  (주의: 이 코드를 쓰면 printf, scanf를 섞어 쓰면 안됨)
	ios::sync_with_stdio(0);

	// cin과 cout의 묶음(tie)을 품
	// 기본적으로 cin으로 입력을 받을 때마다 cout 버퍼를 비우는 과정 생략 -> 입력 속도 향상
	cin.tie(0);

	int M;

	vector <int> A;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;

		A.push_back(temp);
	}

	sort(A.begin(), A.end());

	cin >> M;

	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;

		if (binary_search(A, 0, (int)A.size()-1, temp)) cout << "1" << '\n'; // 인덱스 범위 0 ~ size-1
		else cout << "0" << '\n';
	}

	/*
	* Binary Search
	* std::binary_search
	* 
	* binary_search(A.begin(), A.end(), temp)
	*/


	return 0;
}