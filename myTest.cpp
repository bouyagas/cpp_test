#include <cstdio>
using namespace std;

	int main(){
	  int i = 56;
	  printf ("this is an integer %d\n", i);

	  int x = 233;
      printf("%d\n", x);

	  int *ip = &x;
	  printf("this is as %d\n", *ip);

      x = 89;
	  int &y = x;
	  printf("%d\n", y);
	return 0;
}

