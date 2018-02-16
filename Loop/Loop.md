#반복문 c언어에서 반복문이란 프로그램이 수행하는 행동을 반복하게 하는 문법이다.

##for\`\``c #include <stdio.h>

int main() { int i = 0; int result = 0; for(i = 1; i <= 100; i++) { result+=i;  
 }

printf("%d", result);

return 0; }

```

다음과 같은 프로그램은 1부터 100까지의 숫자를 모두 더하는 프로그램이다.

이 프로그램에서 볼수있는 for문은 for(init-expression; cond-expression; loop-expression); {

\}

같은 문법으로 만들수있다.

각각 초기화식 조건식 증가식으로 이루어져있다.

##while

while문은 for문보다 간단하다.

```c
#include <stdio.h>

int main()
{
  int i = 1;
  int result = 0;
  while(i <= 100)
  {
    result += i;
  }

  printf("%d", result);
}
```

똑같이 100까지 더하는 코드이다. for문과 다른점은 조건을 만족할때까지 계속해서 반복한다는 특징이 있다.
