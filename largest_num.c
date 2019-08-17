#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int largest;
    largest = a;
    if(b>a && b>c && b>d)
    largest = b;
    else if(c>b && c>d)
    largest = c;
    else 
    largest = d;
    return largest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
