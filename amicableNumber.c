# include<stdio.h>

/*
PROBLEM 21
proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220)=284. 
The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.
*/

int bolenToplam(int n){
    int sum =0,i;
    for(i=1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}


int main(){
    int num1,num2,bolen1,bolen2;
    printf("Sayi1: ");
    scanf("%d",&num1);
    printf("Sayi2: ");
    scanf("%d",&num2);
    bolen1 = bolenToplam(num1);
    bolen2 = bolenToplam(num2);

    if(num1 == bolen2 && num2 == bolen1){
        printf("Amicable\n");
    }
    else{
        printf("Not amicable\n");
    }



    return 0;
}