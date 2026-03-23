// 다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자
//* SimpleFunc()를 호출 할 때 인자가 없다면 아래의 두 함수를 동작시키기에 문제가 발생한다
// Copliot: 두 함수 모두 호출 가능하기 때문에 컴파일러가 어느 함수를 선택할지 결정할 수 없습니다.
// 컴파일 오류 발생: "error: call of overloaded 'SimpleFunc()' is ambiguous"
int SimpleFunc(int a=10)
{
    return a+1;
}
int SimpleFunc(void)
{
    return 10;
}
