/*PROBLEM7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

# include<stdio.h>
int isPrime(int n){
    int i,counter = 0;
    if(n<2){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else if(n>2){
        for(i=2; i<n; i++){
            if(n%i == 0){
                counter++;
            }
        }
        if(counter == 0){
            return 1;
        }
        else if(counter > 0){
            return 0;
        }
    }
}

int main(){
    int i,counter = 0;
    for(i=2; counter< 10000; i++){
        if(isPrime(i) == 1){
            counter++;
        }
        if(counter == 10000){
            printf("%d\n",i);
        }
    }




    return 0;
}