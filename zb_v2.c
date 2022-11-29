#include <stdio.h>
// 1000000007

typedef   long long v;
// v g(v a, v b)
// {

//      v temp;

//     while (b != 0){
//         a %= 1000000007;
//          b %= 1000000007;
//         temp = (a%b)%1000000007;

//         a = b%1000000007;
//         b = temp%1000000007;
       
//     }
//     return a;
// }

int main(){
    v N;
    v K;
    v sum=1,tot=0, power, i, j, temp, b;
    scanf("%lld %lld",&N,&K);
    for ( i = 0; i < N; i++)
    {
           
        // power = g(i,N)%1000000007;

        power = i;
        b = N;
        while (b != 0){
            // b %= 1000000007;
            // power %= 1000000007;
            temp = (power%b);
            temp %= 1000000007;
            power = b;
            b = temp;
        
        }
        for ( j = 0; j < power; j++)
        {
            sum = ((sum%1000000007) *(K%1000000007))%1000000007;
            
            
        }
        // sum = pow(K%1000000007,power%1000000007);
       

        
        // tot =((tot%1000000007) + (sum%1000000007))%1000000007;
        tot =(tot + sum)%1000000007;
        sum = 1;
        }
   
    //tot = (tot/ N)%1000000007;
    // tot = ((tot%1000000007)/ (N%1000000007))%1000000007;
    tot = (tot / N)%1000000007;
    printf("%lld\n",tot);

   //99534558
   //99534558

    return 0;
}