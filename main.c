#include <stdio.h>
#include <stdlib.h>
int fibonacci(int sayi){
    if(sayi==0)
        return 0;
    else if(sayi==1)
        return 1;
    else
        return fibonacci(sayi-1)+fibonacci(sayi-2);
}
int asalSayi(int sayi,int yarisi){
    if(sayi<2)
        return 0;
    else if(yarisi==1)
        return 1;
    else if(sayi%yarisi==0)
        return 0;
    else
     return asalSayi(sayi,yarisi-1);


}



int main()
{
  int sayi;
  int sonuc1,sonuc2;
  printf("Fibonacci eleman sayisi:");
  scanf("%d",&sayi);
  for(int i=0;i<sayi;i++){
    sonuc1=fibonacci(i);
    printf("%d ",sonuc1);
    sonuc2=asalSayi(sonuc1,sonuc1/2);
    if(sonuc2==1){
        printf("(asal) ");
    }

  }




}
