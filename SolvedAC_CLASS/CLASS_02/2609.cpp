#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n1, n2;

    cin >> n1 >> n2;

    int result = 0;

    for(int i = 1; i <= min(n1, n2) ; i++){
        if(n1 % i == 0 && n2 % i == 0){
            result = i;
        }
    }

    int result2 = result * (n1 / result) * (n2 / result);
    cout << result << endl;
    cout << result2 << endl;


    /*
    Euclidean Algorithm

    int gcd(int a, int b){
        while (b != 0){
            int r = a % b;
            a = b;
            b = r;
        }
    }

    */

    return 0;
}