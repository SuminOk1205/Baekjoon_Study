#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b){
    if(a.length() != b.length()) //길이 비교
        return a.length() < b.length();
    return a < b; //사전 순
}

void quickSort(vector<int>& v, int start, int end){
    if(start >= end) return;  // 원소가 1개인 경우 종료 (Base Case)

    int pivot = start;
    int i = start + 1; // pivot보다 큰 값
    int j = end; // pivot보다 작은 값

    while(i <= j){
        while(i <= end && v[i] <= v[pivot]) i++;
        while(i > start && v[j] >= v[pivot]) j--;

        if(i > j) // 엇갈렸으면
            swap(v[pivot], v[j]); //pivot과 작은 값 교체
        else
            swap(v[i], v[j]);
        
    }

    // pivot을 기준으로 왼쪽과 오른쪽 각각 재귀적으로 정렬
    quickSort(v, start, j-1);
    quickSort(v, j+1, end);

}

int main(){

    int N;
    vector<string> str;

    cin >> N;

    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;

        bool is_repeated = false;

        for(int j = 0 ; j < str.size(); j++){
            if(str[j] == temp){
                is_repeated = true;
                break;
            }
        }

        if(is_repeated) continue;

        str.push_back(temp);

    }

    sort(str.begin(), str.end(), compare);

    for(int i = 0; i < str.size(); i++){
        cout << str[i] << "\n";
    }

    /*
    중복 제거 효율 높이는 법 | O(N)
    vector<string> result; // 중복 제외하고 담을 새 벡터

    if (!str.empty()) {
        result.push_back(str[0]); // 첫 번째 원소는 무조건 포함
    
        for (int i = 1; i < str.size(); i++) {
            // 현재 원소가 바로 직전 원소와 다를 때만 push_back
            if (str[i] != str[i - 1]) {
                result.push_back(str[i]);
            }
        }
    }
    */

    /*
    --- unique 함수 ---
    : 중복되지 않은 데이터가 끝나는 지점의 다음 주소 반환
    
    str.erase(unique(str.begin(), str.end()), str.end());

    */

    return 0;
}