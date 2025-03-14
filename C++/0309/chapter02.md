visual studio 작업 후 압축전 지워도 되는 파일
. vs
. user
x 64

새로만들기 - 폴더 - chapter02(폴더명)) 
- 솔루션 카피 붙여넣기 chapter02.sin으로 솔루션 명 변경

비쥬얼스튜디오 sin솔루션 눌러서 열고 
왼쪽 목록 파일들 지우기 

솔루션 - 우클릭 - 추가 - 기존 프로젝트 클릭 - .vcx 파일 클릭 

ctrl + f5: 실행


<!-- 검증 -->
압축 후 다른 컴퓨터에서 다운 후 컴파일해보기


chapter 02
자료형:


식별자(identifier): 대상을 유일하게 구별할 수 있는 이름
- 시작은 문자나, 'ㅡ', 대소문자로 구별

키워드: 특별한 의미가 주어진 식별자


파이썬과 c++ 차이
- 파이썬은 자료형이 없음
- c++에서는 자료형을 적고 변수를 적어주어야함



# c++에서 변수를 초기화하는 여러가지 방법
double interestRate = 0.05;

double interestRate = (0.05);

double interestRate = {0.05};

double a [] =   


상수(constant)
const double PI = 3.14

<!-- auto -->
auto ch = 'A' //A가 char형 리터럴이므로 ch는 char형


auto x = 10;// 10이 int형 리터럴이므로 x는 int형
auto pi = 3.14
auto p2 = 3.14f
auto isReady = true
autos= short(10)



ex)

3.14 = double

<!-- 시험에 나옴 -->
자료형 매우 중요!!
3.14f = float

int a = 3;
auto a = 3; a는 int임

short으로 하고 싶으면 타입캐스팅 필요
auto a = (short) 10;

파이썬에서는 
1/2 1/0.3 든 양 변에 상관없이 나누기가 들어가면 무조건 float

c++에서는 
1/2 인 경우 좌변 우변 int / int이면 자료형은 integer 


"3"의 자료형?
char * or const char*


<!-- 대입 연산자 -->
i = 7 //int형 변수 i에 7을 대입(박스 i에 7을 넣음)
= 대입의 의미로 사용
== 같음의 의미로 사용

수식과 연산자

* 
곱셈
ex) 3*4

포인터의 내용
ex) *p

포인터선언
ex) int*p

<!-- 중요 -->
연산 결과의 자료형을 생각할 것:
3+4, 3,0 +4.0
둘다 integer


## p.10 연산자에서 주의할 점
정수는 무조건 int, short이런 거 없음

while(1){
// 1이라고 넣으면 안됨, true라고 해야함
}

x < 0 의 자료형은 bool

증감 연산자의 위치
-> 굳이 증감 연산자를 사용하기 보다는 두줄로 풀어서 사용할 것(파이썬처럼 코딩하기)

<!-- 셤 -->
단락논리(short circuit logic) && 
 ex) if(p! = null ) && p->real>0
앞에 조건이 맞지 않으면 뒤에 조건은 의미가 없음, 실행시킬 필요 x

if(0<x<10) // c++에서는 사용할 수 없음


<!-- 중요 -->
## p.10 연산자 우선순위와 결합 방향
연산자가 처리되는 순서를 표시해라
y = x + y * z / 3;

1. y*z
2. ((y*z)/3)
3. (x + (y*z)/3)
4. y = (x + (y*z)/3)


ppt chapter 02) p.10_14 번째줄
x = y = z = w = 10
1. w = 10
2. z = w = 10
3. y = z = w = 10
4. x = y = z = w = 10
=> x = 10;
x에 대입된 최종 자료형이 x의 자료형이다.
* c++의 핵심은 자료형


# 연산자들의 우선 순위가 생각나지 않으면 괄호를 이용

<!-- quiz 페이지 시험에 나옴 -->


getchar()의 반환값
int get char(void)
# get char함수는 한글자를 입력받는 함수로 반환 타입이 int임


# int는 정수(양수,0,음수포함)
bool은 참(true=1) 거짓(false=0)만 저장가능 