#include <stdio.h>
#include <stdlib.h>

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",a+b);
    return 0;
}