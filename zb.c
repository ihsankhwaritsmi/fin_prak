#include <stdio.h>
#include <math.h>
// 1000000007
#define ull unsigned long long int
// ull sum_two=0;

ull g(ull a, ull b)
{

    ull temp;

    while (b != 0){
        temp = (a%(b%1000000007))%1000000007;

        a = b%1000000007;
        b = temp%1000000007;
    }
    return a;
}

// ull n_two(ull K){
//     sum_two = (sum_two + (K%1000000007))%1000000007;
//     if(K==1) return sum_two;
//     return n_two(K-1);
// }

int main(){
    ull N,k,sum,tot=0, power;
    scanf("%llu %llu",&N,&k);

    // if(N==1){
    //     printf("%llu\n",k);

    // }else if(N==2){
    //     printf("%llu\n",n_two(k));

    // }else{
         for (int i = 0; i < N; i++)
        {
        power = g(i,N)%1000000007;
        //printf("%lld",power);
        // for (int j = 0; j < power; j++)
        // {
        //     sum = (sum * (k%1000000007))%1000000007;
            
            
        // }
        // tot =(tot + (sum%1000000007))%1000000007;
        sum = pow(k,power);
        tot =(tot + (sum%1000000007))%1000000007;
        // sum = 1;
        }
    
    tot = (tot / (N%1000000007))%1000000007;

    printf("%llu\n",tot);
    // }
   

    return 0;
}