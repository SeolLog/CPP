# include <stdio.h>

#: hash mark
include: 포함함
<stdio.h>: standard input output Header file(표준 입출력 헤더 파일 확장자)
-> printf, scanf, return 등의 라이브러리를 꺼내서 사용할 수 있는 냉장고 같은 역할
*라이브러리: 여러 함수를 사용하기 편리하도록 모아놓은 것(like 단축키와 같은 역할)

[비유]
stdio.h: 공구함 or 냉장고
printf, scanf, return: 공구 or 재료

int main(){

    return 0;
}

int: 함수의 반환값이 정수형임을 의미
-> C++에서는 main함수의 반환형이 반드시 int여야 함
main: 프로그램이 실행될 때 가장 먼저 호출되는 함수
return 0; 운영체제에 정상종료(0)를 알림
-> 생략이 가능하지만, 명확성을 위해 기재하는 것이 좋음

0 : 정상종료
1 or 다른 값 : 비정상 종료 