#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int int_cmp(const void *a, const void *b) 
{ 
    const int *ia = (const int *)a;
    const int *ib = (const int *)b;
    return *ia  - *ib; 
} 
int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    qsort(a,n,sizeof(int),int_cmp );
    int i;
    for(i = 0 ; i < n; i++){
        if (i == 0 && a[i] != a[i+1]){
            break;
        } else if (i == (n-1) && a[i] != a[i-1]){
             break;
        } else if (a[i-1] != a[i] && a[i] != a[i +1]) {
             break;
        }   
    }
    printf("%d",a[i]);
    return 0;
}
