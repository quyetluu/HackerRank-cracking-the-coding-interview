#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    scanf("%d",&s);
    for(int a0 = 0; a0 < s; a0++){
        int n; 
        scanf("%d",&n);
        int arr[] = {1,2,4};
        if (n < 4) {
            printf("%d\n", arr[n - 1]);            
        }else{
            for (int i = 5; i <= n; i++){
                arr[(i + 1) % 3] = arr[0] + arr[1] + arr[2];
            }
            printf("%d\n", arr[0] + arr[1] + arr[2]);  
        }
    }
 
    return 0;
}
