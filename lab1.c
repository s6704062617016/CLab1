#include <stdio.h>

int main() {
  int num1;
  int num2;
  print("n1 n2:");
  scarf("%d%d",&num1,&num2);
  if (num1 > num2) {
     printf("num1 is greater num2");
     //diff of num1 and num2
     printf("\n%d",(num1-num2));
 }else{
  	 printf("num2 is greater num1");
     //diff of num2 and num1
     printf("\n%d",(num2-num1));
  }
     
 }

