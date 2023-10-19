#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int maxx;
    if (a>b && a>c && a>d){
        maxx=a;}
    else if (b>a && b>c && b>d){
        maxx=b;}
    else if (c>a && c>b && c>d){
        maxx=c;}
    else{
        maxx=d;}
        
    return maxx;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
