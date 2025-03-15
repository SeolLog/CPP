#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i >= 1; i--){
        for(int z = 5; z>= i; z--){
            cout << z << " ";
        }
        cout << endl;
    }
    return 0;
}

// 5
// 4