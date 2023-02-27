/*PROBLEM 9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which a^2 + b^2 = c^2
3*3 + 4*4  = 5*5 
*/
# include<stdio.h>

int main(){
    int a,b,c;
    int sum=0;
    int finish=0;
    for(a=1; a<=1000; a++){
        if(finish==1){
            break;
        }
        for(b =1; b<=1000; b++){
            if(finish==1){
                break;
            }
            for(c = 1; c<= 1000; c++){
                if(c*c == a*a+b*b){
                    sum = a+b+c;
                    if(sum == 1000){
                        finish=1;
                        printf("%d\n",(a*b*c));
                        break;
                    }
                }
            }
        }
    }

    

    return 0;
}