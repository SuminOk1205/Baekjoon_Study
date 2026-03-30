#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int number;

    cin >> number;

    while(number != 0){
        int temp = number;
        int num = 0;

        while(temp > 0){
            num *= 10;
            num += (temp % 10);
            temp /= 10;
        }

        //cout << "num = " << num << endl;

        if(num == number)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

        cin >> number;
    }


    return 0;
}