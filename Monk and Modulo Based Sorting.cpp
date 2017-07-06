#include <iostream>
#include <stdio.h>
using namespace std ;
int k ;

void mrgsort(int a[] ,int b[] ,int lo ,int mid ,int hi )
{
    int i = lo, j = mid+1 ;
    for (int p = lo ; p <= hi ; p++ )
    {
        if (i > mid ) a[p] = b[j++];
        else if (j > hi ) a[p] = b[i++];
        else if (b[j] %k <b[i] %k ) a[p] = b[j++];
        else a[p] = b[i++];
    }
}

void msort(int a[] ,int b[] ,int lo ,int hi )
{

    if (hi <=lo )return ;
    int mid =lo +(hi -lo )/2 ;
    msort(b ,a ,lo ,mid ) ;
    msort(b ,a ,mid+1 ,hi ) ;

    mrgsort(a ,b ,lo ,mid ,hi ) ;
}


int main()
{
 int num,i ;

    cin >>num >>k ;
    int a[num] ,b[num] ;

    for(i=1;i<=num;i++)
    {
        scanf("%d", &a[i]);
        b[i] =a[i] ;
    }
    msort(a ,b ,1 ,num ) ;
    for(i =1 ;i <=num ;i++ )
    {
        printf("%d " ,a[i] ) ;
    }

}
