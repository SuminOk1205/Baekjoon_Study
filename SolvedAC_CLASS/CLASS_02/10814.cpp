#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct People {
	int age;
	string name;

	// int join_order; // 가입 순서 저장 -> 만약 그냥 sort를 쓰고 싶을 경우 -> compare 함수도 수정해야 함.

	//Constructor
	People(int a, string n) : age(a), name(n) {}

}typedef People;

bool compare(const People& p, const People& q) {
	return p.age < q.age;
}

int main() {

	vector<People> people;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		string tmp;

		cin >> temp >> tmp;

		people.push_back(People(temp, tmp));

		// 벡터 안에서 자동으로 People 객체 만들어줌
		// people.emplace_back(temp, tmp);
	}

	stable_sort(people.begin(), people.end(), compare);

	/*
	* std::sort : 불안정 정렬
	* std::stable_sort : 상대적 순서 보장
	*/

	for (int i = 0; i < people.size(); i++) {
		cout << people[i].age << " " << people[i].name << "\n";
	}

	return 0;
}