#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Coordinate {
	int x;
	int y;

	Coordinate(int x, int y) {
		this->x = x;
		this->y = y;
	}
}typedef Coordinate;

bool compare(const Coordinate& a, const Coordinate& b) {
	if (a.x != b.x)
		return a.x < b.x;
	return a.y < b.y;
}

int main() {

	vector<Coordinate> coor;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp_x;
		int temp_y;

		cin >> temp_x >> temp_y;

		coor.emplace_back(temp_x, temp_y);
	}

	sort(coor.begin(), coor.end(), compare);

	for (int i = 0; i < coor.size(); i++) {
		cout << coor[i].x << " " << coor[i].y << "\n";
	}

	return 0;
}