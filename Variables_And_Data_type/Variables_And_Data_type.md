변수
====

C언어 에서의 변수란, 데이터를 저장하는 하나의 상자와 같은것이다.

그 변수를 선언하기위한 타입은 여러가지가 있다.

#### C언어 기본 변수 타입

| Type   | Byte  | Maximum and Minumum                    |
|:-------|:------|:---------------------------------------|
| char   | 1byte | -128 이상 127 이하                     |
| short  | 4byte | -32768 이상 32767 이하                 |
| int    | 8byte | -2,147,483,648 이상 2,147,483,647 이하 |
| long   | 8byte | -2,147,483,648 이상 2,147,483,647 이하 |
| float  | 4byte | 3.4E+/-38(7개의 자릿수)                |
| double | 8byte | 1.7E+/-308(15개의 자릿수)              |

### 상수

#### 정수, 실수

정수형 상수는 int 형으로 선언한다.

```c
#include <stdio.h>

int main()
{
  int a = 1;
}
```

실수형 상수는 double, float, long 등등..여러가지 타입으로 선언 할수 있다.

```c
#include <stdio.h>

int main()
{
  double a = 1.2313123;
  float b = 1.4412;
  long c = 3.141592;
}
```

### 문자열

#### 문자, 문자열

문자 혹은 문자열들은 char 형으로 선언한다.

```c
#include <stdio.h>
int main()
{
  char a = "a";
}
```

C언어 에서 char형으로 문자, 문자열을 저장할경우 <br>문자열을 구분하기위해서 마지막에는 Null을 추가한다.

| H | E | L | L | O | W | O | R | L | D | \0 | 
|:- |:- |:- |:- |:- |:- |:- |:- |:- |:- |:- | 
| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |

그리고 출력을 할때는 각 데이터 타입마다 지정되어있는 서식문자를 이용해서 출력해야한다.

### 출력

```c
#include <stdio.h>

int main()
{
  int a = 1;
  char b = "a";
  float c = 1.5;
  double d = 1.53;
  long f = 123323;
  printf("int : %d\n", a);
  printf("char : %s\n", b)
  printf("float : %f\n", c);
  printf("double : %lf\n", d);
  printf("long : %ld\n", f);
}
```
