#include <stdio.h>

#define CHECK(x,y,n) (((x)>=0)&&((x)<=(n-1))&&((y)>=0)&&((y)<=(n-1))?1:0)
#define MEDIAN(x,y,z) ((x)<(y)?((y)<(z)?(y):(x)<(z)?(z):(x)):((y)>(z)?(y):(x)>(z)?(z):(x)))
#define POLYNOMIAL(x) (((((3*(x)+2)*(x)-5)*(x)-1)*(x)+7)*(x)-6)

int main(void)
{
  /* (a) */
  printf("%d\n", CHECK(1, 2, 3));
  printf("%d\n", CHECK(4, 2, 3));
  printf("%d\n", CHECK(0, 3, 3));

  /* (b) */
  printf("%d\n", MEDIAN(1, 2, 3));
  printf("%d\n", MEDIAN(4, 9, 2));

  /* (c) */
  printf("%d\n", POLYNOMIAL(1));
  printf("%d\n", POLYNOMIAL(2));

  return 0;
}

