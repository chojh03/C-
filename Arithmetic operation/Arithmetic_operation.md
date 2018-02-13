#사칙연산

C언어에서는 사칙연산을 지원한다. 또한 비트연산 진수연산도 같이 지원한다.

```c
#include <stdio.h>
int main()
{
  int a = 1;
  int b = 1;

  printf("a + b = %d\n", a+b);
  printf("a - b = %d\n", a-b);
  printf("a * b = %d\n", a*b);
  printf("a / b = %d\n", a/b);
  printf("a % b = %d\n", a%b);
}
```

다음과 같은 코드는 각각 다음과 같다

덧셈, 뺄셈, 곱하기, 나누기, 나머지 (mod 연산)

비트연산
--------

비트 (bit) 란 데이터를 나타내는 최소 단위를 뜻한다.

2bit = 1byte 이다. 비트 연산에는 or(|), and(&), xor(^) 이 있다.

```c
#include <stdio.h>

int main()
{
  int num1 = 1; // 0000 0001
  int num2 = 2; // 0000 0010

  printf("%d\n", num1 | num2); // 0000 0001 | 0000 0010 = 0000 0011
  printf("%d\n", num1 & num2); // 0000 0001 & 0000 0010 = 0000 0000
  printf("%d\n", num1 ^ num2); // 0000 0011
}
```

and, or, xor 연산은 모두다 특성을 가지고있다.

#####and |bit1|bit2|result| |:-|:-|:-| |0|0|0| |0|1|0| |1|0|0| |1|1|1| #####or |bit1|bit2|result| |:-|:-|:-| |0|0|0| |0|1|1| |1|0|1| |1|1|1| #####xor |bit1|bit2|result| |:-|:-|:-| |0|0|0| |0|1|1| |1|0|1| |1|1|0|

다음과 같은 특성을 외어놓고 있으면 편하게 비트연산을 할수있다.

또한 not 연산자도 있는데, 이것은 ~를 사용한다.

#####not |bit1|result| |0|1| |1|0|

```c
#include <stdio.h>

int main()
{
  int num1 = 123; // 0111 1011
  int num2;
  num2 = ~num1;

  printf("%d", num2);
}
```

다음 코드는 0111 1011의 각 비트를 뒤집는다.

그러면 1000 0100 이 되므로 132 를 출력한다.

#####shift

쉬프트연산이란 각비트의 자리를 이동시키는 연산자이다.

```C
#include <stdio.h>

int main()
{
  int a = 1; // 0000 0001

  printf("%d\n", a << 3) // 0000 1000 = 8
}
```

또한 이 역도 성립한다. ( >> )
