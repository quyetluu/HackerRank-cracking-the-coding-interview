#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    int a_i;
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int count, m, j,i;
    for ( m=0,  count=0; count!=n; m++) {
        int t=a[m];
        for (i = m , j=m+k; j!=m;i=j, j = j+k<n ? j+k : j+k-n, count++)
            a[i]=a[j];
            a[i]=t; 
            count++;
        }
    for(a_i = 0; a_i < n; a_i++){
       printf("%d ",a[a_i]);
    }
    return 0;
}
