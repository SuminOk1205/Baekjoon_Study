#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int N, cnt = 0;

    cin >> N;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;

        if (temp < 2) continue;
        if (temp == 2){
            cnt++;
            continue;
        }

        bool isPrime = true;
        for(int j =2; j < temp; j++){
            if(temp % j == 0){
                isPrime = false;
                break;
            }
        }
        
        if(isPrime) cnt++;
    }

    cout << cnt << endl;

    return 0;
}