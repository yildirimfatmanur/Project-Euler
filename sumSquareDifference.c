/*PROBLEM6
The sum of the squares of the first ten natural numbers is 385
The square of the sum of the first ten natural numbers is 3025
3025-385 = 2640
*/

# include<stdio.h>

int kareToplam(int n){
    int i,sum = 0;
    for(i=1; i<= n; i++){
        sum += i*i;
    }
    return sum;

}
int toplamKaresi(int n){
    int i,sum = 0;
    for(i=1; i<=n; i++){
        sum += i;
    }
    return sum*sum;
}

int main(){
    int a,b,sayi;
    printf("Sayi: ");
    scanf("%d",&sayi);
    a = kareToplam(sayi);
    b = toplamKaresi(sayi);
    printf("%d\n",b-a);


    return 0;
}