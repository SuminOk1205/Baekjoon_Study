#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const int& a, const int& b) {
	return a < b;
}

int main() {

	int N;
	vector <int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	/*
	*	endl은 \n 과 출력 버퍼 강제로 비우는 flush() 연산 매번 수행해 느림.
	*	-> \n 사용
	*/

	return 0;
}
