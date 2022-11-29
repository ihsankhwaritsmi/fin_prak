#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

int main(){
    unsigned short Q;
    unsigned int N,i,j,k,l=0,inp;
   
    bool check, check2;


    scanf("%hu",&Q);
    for (j = 0; j < Q; j++)
    {
        scanf("%u",&N);
       unsigned int arr[100001];
        check2 = 1;
        for (i = 0; i < N; i++)
        {
            scanf("%u",&inp);
            check = 1;
            if(inp<=7){
                switch (inp)
                {
                case 0:
                    check=0;
                    break;
                case 1:
                    check=0;
                    break;
                case 2:
                    check=1;
                    break;
                case 3:
                    check=1;
                    break;
                case 4:
                    check=0;
                    break;
                case 5:
                    check=1;
                    break;
                case 6:
                    check=0;
                    break;
                case 7:
                    check=1;
                    break;
                }

            }else if(inp>7 && inp<=120){
                if(inp%2==0||inp%3==0||inp%5==0||inp%7==0){
                    check = 0;
                }
            }
            else{

                for (k= 2; k<= inp/2; ++k)
                {
                    if(inp%k==0){
                        check = 0;
                        break;
                    }
                }
                
            }
            if(check){
                        arr[l]=inp;
                        l++;
                        check2 = 0;
                }
                
        }
       
        if(check2){
            printf("Unable to send Fever Slot Buckle.");

        }else{
            for ( i = 0; i < l; i++)
            {
                printf("%u ",arr[i]);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}