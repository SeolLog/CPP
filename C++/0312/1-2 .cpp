#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    
    for (int i = n; i >= 2; i--) { 
        for (int j = n; j >= n - i + 1; j--) { 
            cout << j;
        }
        cout << endl;
    }
    
    cout << "5" << endl;
    
    return 0;
}
