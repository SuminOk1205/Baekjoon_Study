#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		stack<char> stack;
		bool isValid = true; // flag

		string line;
		cin >> line;

		for (char c : line) {
			if (c == '(') {
				stack.push(c);
			}
			else if (c == ')') {
				if (stack.empty()) {
					isValid = false; // 로직 수정
					break;
				}
				else stack.pop();
			}
		}

		if (isValid && stack.empty()) cout << "YES" << endl; // 정확한 검사
		else cout << "NO" << endl;
	}

	return 0;
}