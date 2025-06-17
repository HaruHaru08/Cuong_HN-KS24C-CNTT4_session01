#include <stdio.h>

int main() {
     int number[5]={15,2,8,6,11};
     for (int i=0;i<5;i++) {
          for (int j=0;j<5-i;j++) {
               if (number[j]>number[j+1]) {
                    int temp=number[j];
                    number[j]=number[j+1];
                    number[j+1]=temp;
               }
          }
     }
     for (int i=0;i<5;i++) {
          printf("%d\n",number[i]);
     }
     return 0;
}
//Do phuc tap thuat toan:O(n^2)