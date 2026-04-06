#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	
	queue<int> q;

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	// O(N) | vector -> erase ¾µ °æ¿ì O(N^2)
	while (q.size() != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front() << endl;

	return 0;
}