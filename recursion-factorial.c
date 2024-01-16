    #include<stdio.h>
      int fact(int n);
      int main(){
      printf("fact is : %d", fact(10));
      return 0;
      }
      int fact(int n){
      if(n==1){
      return 1;
      }
      int factNm1=fact(n-1);
      int factN=factNm1*n;
      return factN;
      }