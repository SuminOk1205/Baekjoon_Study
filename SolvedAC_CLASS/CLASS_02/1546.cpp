#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    float score[1000];

    cin >> N;

    int max = 0;

    for(int i = 0; i < N; i++){
        cin >> score[i];
        if(score[i] > max){
            max = score[i];
        }
    }

    double sum = 0.0;

    for(int i = 0; i < N; i++){
        score[i] = (score[i]/max) * 100;
        sum += score[i];
    }

    cout << sum / N << endl;

    return 0;
}