#조건문

C언어에서 조건문이란 프로그래머가 제시한 조건이 <br> 참, 거짓인지 판단하여 코드를 실행하는 문법 이다.

###if else

c언어에서는 if를 이용하여 조건문을 만들수있다.

```c
#include <stdio.h>

int main()
{
  int a = 1;
  int b = 5;

  if(a == b) // 만약 a가 b랑 같다면
  {
    printf("a equal b\n");
  }

  else // 아니라면
  {
    printf("a is not equal b\n");
  }
}

```

또한 조건문을 여러개 쓰고싶다면 else if문과 casw, switch문 이 존재한다.

```c
#include <stdio.h>

int main()
{
  int a = 1;
  int b = 3;


  if(a == b)
  {
    printf("a equal b\n");
  }

  else if(a > b)
  {
    printf("a is bigger than b\n");
  }
  else if(a < b)
  {
    printf(" a is smaller than b\n");
  }
  else
  {
    printf("what the\n");
  }
}
```

case,switch문은 지정된 상수값을 비교하여 실행하는 조건문이다.

```c
#include <stdio.h>

int main()
{
  int number = 1;
  switch(number) {
    case '1': "1" break;
    case '2': "2"; break;
  }
}
```
