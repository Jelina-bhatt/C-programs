    #include<stdio.h>
      void printradheykrishn(int count);
      int main(){
      printradheykrishn(10);
      return 0;
      }
      void printradheykrishn(int count){
      if (count==0){
      return;
      }
      printf("radheykrishn\n");
      
      printradheykrishn(count-1);
      }