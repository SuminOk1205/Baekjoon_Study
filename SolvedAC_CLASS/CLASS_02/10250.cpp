#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int T;
    int H, W, N;
    int h,w;

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> H >> W >> N;

        h = 1, w = 1;
        for(int j = 0; j < N-1; j++){
            //cout << "h = " << h << " w = " << w << " j = " << j << endl;

            if(h == H){
                h = 1;
                w++;
                continue;
            }

            h++;

        }
        cout << h*100 + w << endl;
    }

    return 0;
}