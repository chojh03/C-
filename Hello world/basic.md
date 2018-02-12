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

출력
====

C언어 에서의 출력은 printf()라는 함수로 출력이 가능하다.

```C
#include <stdio.h>

int main()
{
  printf("Hello, World!");

  return 0;
}
```

다음과 같은 코드를 실행시키면 출력이 되는것을 알수있다.

이스케이프 시퀀스
=================

이스케이프 시퀀스란

```C
#include <stdio.h>

int main()
{
  printf("Hello, World!");
  printf("Hello, World!");
}
```

다음과 같이 다음 줄에 출력을 받고싶을때 `\n` 를 사용해주면 된다.

```C
#include <stdio.h>

int main()
{
  printf("Hello, World!\n");
  printf("Hello, World!");
}

또한 탭(Tab) 을 쓰고싶을때도 `\t` 를 사용하면 된다.

```C
#include <stdio.h>

int main()
{
  printf("\tHello, World!);
}
```
