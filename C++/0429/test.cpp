#include <iostream>
using namespace std;

void Calculator(){
    double num1, num2, result;  
    cout << "첫번째 숫자를 입력하세요." << endl;
    cin >> num1;

    cout << "두번째 숫자를 입력하세요." << endl;
    cin >> num2;

    result = num1 + num2;
    cout << "결과: " << result << endl;
}

int main(){
    Calculator();
    return 0;
}