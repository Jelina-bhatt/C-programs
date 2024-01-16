    #include<stdio.h>
      void printhelloworld(int count);
      int main(){
      printhelloworld(10);  
      return 0;
      }
      void printhelloworld(int count){
      if (count==0){
      return;
      }
      printf("hello world\n");
      printhelloworld(count-1);
      }