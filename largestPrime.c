# include<stdio.h>
int isPrime(int n){
    int i,counter = 0;
    for(i=2; i<n; i++){
        if(n == 2){
            return 1;
        }
        if (n % i == 0){
            counter++;
        }
    }
    if(counter == 0)
        return 1;
    else
        return 0;
}


int main(){
    long int sayi,i,maxPrime = 2;
    
    printf("Bir sayi gir: ");
    scanf("%ld",&sayi);
    for(i=1; i<sayi; i++){
        if(sayi % i == 0 && isPrime(i) == 1){
            if(i>maxPrime)
                maxPrime = i;

        }
    }
    printf("sayinin tam bolenleri arasındaki en büyük asal sayi  = %ld\n",maxPrime);



    return 0;
}