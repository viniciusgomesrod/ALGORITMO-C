#include <stdio.h>
#include <stdlib.h>

int main() {
    float vet[4] = {7.1, 8.4, 9.5, 5.2};
    int i;
    
    for(i = 0; i < 4; i++){
        printf("v[%d] = %.1f\n", i, vet[i]);
    }
    
    return 0;
}
