#include <cstdio>
using namespace std;
    

void myFun(){
       int a[] = {1,2,3,4,5,6};
       int i = 0;
       while(i < 6){
       printf("element %d is %d\n", i, a[i]);
       ++i;
      }
}

   void myFun2(){
      char s[] = "string";
      for(char * cp = s; *cp; ++cp){
      printf("element %c\n", *cp);
     }
}

    
	int main(){
    
      myFun();

	  int b = 56;
	  printf ("this is an integer %d\n", b);

	  int x = 233;
      printf("%d\n", x);

	  int *ip = &x;
	  printf("this is as %d\n", *ip);

      x = 89;
	  int &z = x;
	  printf("%d\n", z);  


      myFun2();
         
       
	return 0;
}















