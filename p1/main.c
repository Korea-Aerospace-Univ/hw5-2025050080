#include <stdio.h>

int main(void)
{
    int N;
    int a=1, b=2, c=1;
    bool x = false;
    scanf("%d", &N);
    for(a=1;a<N/900;a++){

        for(b=2; b<N/750;b+=2){

            for(c=1;c<N/200;c++){
                if(a*900+b*750+c*200==N)
                if(c<a || c<b){
                x = true;
                printf("%d %d %d\n", a, b, c);
                }
                    
                }
            
            }
        
        }
        if(!x)
         printf("none\n");
    return 0;
}
