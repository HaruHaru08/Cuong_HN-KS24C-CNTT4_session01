#include <stdio.h>

int main() {
    int number[5]={1,2,2,4,5};
    int counting=0;
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (number[i]==number[j]) {
                counting++;
            }
        }
        printf("%d\n",counting);
        counting=0;
    }
    return 0;
}
//Do phuc tap thuat toan:O(n^2)