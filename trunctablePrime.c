/*PROBLEM37
The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits 
from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work 
from right to left: 3797, 379, 37, and 3.
Find the sum of the only eleven primes that are both truncatable from left to right and right to left.
*/


# include<stdio.h>

//3797 trunctable cunku 3797, 797, 97 ve 7 bunlar asal 3797, 379, 37 ve 3. bunlar da asal



int isPrime(int);
int len(int);
int ters(int);

int main(){
    int i=10,a,b,n,temp,uzn,cntr1=0,cntr2=0;
    printf("Sayi: ");
    scanf("%d",&n);
    temp = n;
    uzn = len(n);
    while(uzn != 0){
        a = n%i;
        printf("%d ",a);
        if(isPrime(a) == 0){
            cntr1++;
        }
        uzn--;
        i*=10;
    }
    printf("\n");
    
    i= i/100;
    printf("%d\n",i);
    uzn = len(temp);
    while(uzn != 0){
        a = temp/i;
        printf("%d ",a);
        if(isPrime(a)==0){
            cntr2++;
        }
        uzn--;
        i= i /10;
    }
    if(cntr2 == 0 && cntr1 == 0){
        printf("Trunctable\n");
    }
    else{
        printf("NonTrunctable\n");
    }
    
    

    return 0;
}
int isPrime(int n){
    int i,counter = 0;
    
    if(n == 2) return 1;

    else if(n > 2){
        for(i=2; i<n; i++){
            if(n%i == 0){
                counter++;
            } 
        }

        if (counter == 0) return 1; 
        else return 0;
    }
    else return 0;

}
int len(int n){
    int l = 0;
    while(n != 0){
        l++;
        n = n/10;
    }
    return l;
}
int ters(int n){
    int a,sum = 0,i = 0;
    
    while(n != 0){
        a = n%10;
        sum = sum*10 + a;
        n = n / 10;
    }
    return sum;
}



