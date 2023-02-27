/*PROBLEM14*/

# include<stdio.h>

//en uzun collatz zincirini bul ornek: 13 >> 40 >> 20 >> 10 >> 5 >> 16 >> 8 >> 4 >> 2 >> 1

int collatz(int n){
    int counter = 1;
    while(n>1){
        if(n % 2 == 0){
            n = n/2;
        }
        else if(n % 2 != 0){
            n = 3*n + 1;
        }
        counter++;
    }
    return counter;
}

int main(){
    int terimSayisi,i,sayi,max = 0,m;
    //m = collatz(13);
    //printf("%d\n",m);
    for(i=1; i<1000000; i++){ 
        terimSayisi = collatz(i);
        if(terimSayisi>max){
            max = terimSayisi;
            sayi = i;
        }
    }
    printf("%d %d\n",max,sayi);

    // sayi degiskeni ile baslayan zincirin uzunlugu max degerine esit
    


    return 0;
}