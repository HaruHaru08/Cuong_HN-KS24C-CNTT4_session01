#include <stdio.h>

int main() {
    int number[5]={1,2,2,5,4};
    int counting=0;
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (number[i]==number[j]) {
                counting++;
            }
        }
        if (counting>1) {
            printf("True\n");
            return 1;
        }
        counting=0;
    }
    if (counting<=1) {
        printf("false\n");
    }
    return 0;
}
//Do phuc tap thuat toan:O(n^2)