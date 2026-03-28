#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N, M;
    vector<int> cards;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        cards.push_back(num);
    }

    int sum = 0;

    // Brute Force
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                int result = cards[i] + cards[j] + cards[k];
                if(result > sum && result <= M)
                    sum = result;
            }
        }
    }
    
    cout << sum << endl;

    return 0;
}