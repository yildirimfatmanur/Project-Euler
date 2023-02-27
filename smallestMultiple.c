# include<stdio.h>

int main(){
    int sayi,i,j,counter;
    for(i=1; ;i++){
        counter = 0;
        for(j=1; j<=20; j++){
            if(i>=j && i%j == 0){
                counter++;
            }
        }
        if(counter == 10){
            printf("%d \n",i);
            break;
        }
    }


    return 0;
}
