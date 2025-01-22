//解gcd，要記得最後的結果是n = 0就回傳m。
#include<stdio.h>
#include<limits.h>
int num[1000] = {0}; 
int gcd(int m, int n) {
    if(m < n) {
        gcd(n, m); 
    }
    if(n == 0) {
        return m; 
    }
    return gcd(n, m % n); 
}
int main()
{
    int t; 
    scanf("%d", &t); 
    while(t--) {
        int n; 
        scanf("%d", &n);
        int max = INT_MIN; 
        for(int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int gcdres = gcd(num[i], num[j]); 
                if(gcdres > max)
                    max = gcdres; 
            }
        }
        printf("%d\n", max);
    }
    return 0;
}