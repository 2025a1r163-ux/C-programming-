#include <stdio.h>
int main(){
  int a,b,c;
  printf("Enter a number A: ");
  scanf("%d",&a);
  printf("Enter a number B: ");
  scanf("%d",&b);
  printf("Enter a number C: ");
  scanf("%d",&c);
if ( a>=b && a>=c){
printf("largest number is %d\n",a);
 }
else if ( b>=a && b>=c){
printf("largest number is %d\n",b);
 }
else {
printf("largest number is %d\n",c);
 }
return 0;
}
