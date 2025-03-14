# include <iostream>
using namespace std;

int main(){
    // 자료형 (크기 단위, byte)Data Type
    // 정수형 : char(1), short(2), int(4), long(4), long long(8)
    int i =0;

    // 1바이트로 양수만 표현
    //  256가지 -> 0~255
    unsigned char c = 0;  // unsigned 양수만 표현가능
    c = 0;
    c = 255;

    // 1바이트로 양수, 음수 둘다 표현
    // 128~0~127
    char c1 = 0; // signed가 생략되어있음(굳이 적을필요x) 음수,양수 둘다 표현가능
    c1 = -1

    return 0;
}
