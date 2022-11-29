#include <stdio.h>

int main(){
    unsigned short Q;
    unsigned int N,i,j,inp;
    unsigned int arr[100001];
    scanf("%hu",&Q);
    
    for ( j = 0; j < Q; j++)
    {
        scanf("%u",&N);
        for ( i = 0; i < N; i++)
        {
            scanf("%u",&inp);
            if(inp == 2 || inp == 3 || inp == 5 || inp == 7 || inp ==11 || inp ==13 || inp ==17 || inp ==19 || inp == 23 || inp == 29){
                arr[i] = inp;
            }
            else if(inp%2==0 || inp%3==0 || inp%5==0 || inp%7==0 || inp%11==0 || inp%13==0 || inp%17 ==0 || inp%19 ==0 || inp%23 ==0 || inp%29 ==0){
                continue;
            }else if(inp>841){

            }
        }
        
    }
    
    return 0;
}