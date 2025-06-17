#include <stdio.h>

int main() {
    int number[10]={15,2,2,3,15,2,4,6,7,8};
    int counting=0;
    int max=0;
    int index=0;
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if (number[i]==number[j]) {
                counting++;
            }
        }
        if (counting>max) {
            max=counting;
            index=i;
        }
        counting=0;
    }
    printf("%d\n",number[index]);
    return 0;
}
//Do phuc tap thuat toan:O(n^2)