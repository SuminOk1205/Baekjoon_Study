#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(){

    queue<int> q;
    int N, K;
    int cnt = 1;

    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }

    cout << "<";

    while(!q.empty()){
        if(cnt == K){
            if(q.size() == 1){
                cout << q.front() << ">" << endl;
            }
            else {
                cout << q.front() <<", ";
            }

            q.pop();
            cnt = 1;

            continue;
        }

        // 원형 큐 처럼 사용 (빼서 -> 뒤로 넣기)
        int temp = q.front();
        q.pop();
        q.push(temp);
        cnt++;
    }

    return 0;
}