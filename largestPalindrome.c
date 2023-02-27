/*PROBLEM4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers 
is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers.
*/

# include<stdio.h>


int isPal(int n){
    int gecici,sum = 0,a;
    gecici = n;
    while(gecici != 0){
        a = gecici % 10;
        sum = sum*10 + a;
        gecici = gecici/10;
    }
    if(n == sum){
        return 1;
    }
    else if(n != sum){
        return 0;
    }

}

int main(){

        int max,i,j,res,a,b;
        max = 1;
        for(i=100; i<1000; i++){
            for(j=100; j<1000; j++){
                res = i*j;
                if(isPal(res) == 1){
                    if(res > max){
                        max = res;
                        a = i;
                        b = j;
                    }
                }
            }
        }
        printf("%d\n",a*b);



    return 0;
}