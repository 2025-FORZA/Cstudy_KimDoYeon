#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  for (int i=1; i<=a; i++){ //전체의 기둥 횟수를 나타냄
      for (int j=1; j<=a-i; j++){
          printf(" "); //공백의 갯수를 나타낸다,공백은 가운데 정렬을 만들어 줌.
          
      }
      for (int k=1; k<=2*i-1; k++){
          printf("*");//공백 안에 별을 넣는다.
      }
      printf("\n");//줄바꿈
  }
  for (int i=a-1; i>=1; i--){
      for (int j=1; j<=a-i; j++){
          printf(" ");
      }
      for (int k=1; k<=2*i-1; k++){
          printf("*");
         
      }
      printf("\n");
  }
    
    
    
    
    
    return 0;
}