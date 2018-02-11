C언어의 기본구성
================

C언어는 include (헤더파일), main() (메인 함수) 로 이루어져있음.

```C
#include <stdio.h>

int main()
{
  ....
  return 0;
}
```

헤더파일이란 우리가 실행할수있는 기초적인 함수들을 담아놓은 상자와 같은것이다. 그리고 `int main()`이란 잇어야할 가장 기본적인 함수이고 컴파일(실행) 시키면 main안의 내용들이 실행된다.

그리고 `return 0;`이란 프로그램을 정상적으로 종료시킨다는 뜻이고

`;(세미콜론)` 이건 코드의 마침을 뜻한다. <br> 무조건 세미콜론을 붙어야 컴파일이 되므로 세미콜론을 잊지말자!