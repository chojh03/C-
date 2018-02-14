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

  int number = 1;
  switch(number) {
    case '1': "1" break;
    case '2': "2"; break;
  }
}
