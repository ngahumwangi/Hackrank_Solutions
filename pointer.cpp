#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
    // Complete this function    
    int sum, abv, x, y;
    sum = *a + *b;
    x = *a;
    y = *b;
    abv = std::abs(x - y);
     (*a) = sum;     
     (*b) = abv;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}