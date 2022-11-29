#include <stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        
        scanf("%d",&k);
        if(k%2==0)printf("%d\n",(2*k)-1);
        else printf("%d\n",(2*k)+1);
    }
    
    return 0;
}