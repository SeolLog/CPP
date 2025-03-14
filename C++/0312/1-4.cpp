#include <iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = n; i>= 1; i--){
        for(int j = 1; j>= n + i; j++){
            cout << j;
        }
        cout << endl;
    }
    cout << "5" << endl;

    return 0;
}