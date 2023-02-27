/*PROBLEM 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

# include<stdio.h>

int isPrime(int n){
    int i,counter = 0;
    if(n<2) return 0;
    
    else if(n == 2) return 1;
    
    else if(n>2)
    {
        for(i=2; i<n; i++){
            if(n%i == 0) counter++;
        }
        if(counter == 0) return 1;

        else if(counter > 0) return 0;
    }
}

int main(){
    int i,num,sum = 0;
    printf("upper limit: ");
    scanf("%d",&num);
    for(i=2; i<num; i++){
        if(isPrime(i) == 1)
            sum += i;
    }
    printf("%d\n",sum);



    return 0;
}