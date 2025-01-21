#include<stdio.h>
int num[20], k, n;
int recall(int i, int sum) {
    if(sum >= k || i == n){
        if(sum == k)
            return 1;  
        else
            return 0; 
    }
    return recall(i + 1, sum + num[i]) + recall(i + 1, sum); 

} 
int main()
{ 
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    printf("%d\n", recall(0, 0)); 
    return 0; 
}