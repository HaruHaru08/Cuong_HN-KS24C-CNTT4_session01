#include <stdio.h>

int main() {
    int number[10]={15,6,2,13,2,9,1,21,5,10};
    int counting=0;
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if (number[j]>number[j+1]) {
                int temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
    for (int i=0;i<10;i++) {
        if(number[i]==number[i+1]){
            counting++;
        }
    }
    if (counting>0) {
        printf("True\n");
    }else {
        printf("false\n");
    }
    return 0;
}
//Do phuc tap cua thuat toan:O(n)+O(n^2)