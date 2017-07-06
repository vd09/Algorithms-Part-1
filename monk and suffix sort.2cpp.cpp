/*
3
213456789
169825
123456798
*/
#include <iostream>
#include <stdio.h>
using namespace std ;

void mrgsort(long int a[] ,long int b[] ,long int c[] ,long int d[] ,int lo ,int mid ,int hi )
{
    for (int k = lo; k <= hi; k++)
    {
              b[k] = a[k];
            d[k] = c[k];
    }
    int i = lo, j = mid+1;
    for (int p = lo ; p <= hi ; p++ )
    {
        if (i > mid )
        {
            a[p] = b[j];
            c[p] = d[j];
           j++ ;
        }
        else if (j > hi )
        {
            a[p] = b[i];
            c[p] = d[i];
            i++;
        }
        else if (a[j] <a[i] )
        {
            a[p] = b[j];
            c[p] = d[j];
            j++ ;
        }
        else
        {
            a[p] = b[i];
            c[p] = d[i];
            i++;
        }
    }
}

void msort(long int a[] ,long int b[] ,long int c[] ,long int d[] ,int lo ,int hi )
{
    if (hi <=lo )return ;
    int mid =lo +(hi -lo )/2 ;
    msort(a ,b ,c ,d ,lo ,mid ) ;
    msort(a ,b ,c ,d ,mid+1 ,hi ) ;

    mrgsort(a ,b ,c ,d ,lo ,mid ,hi ) ;
}


int main()
{
    long int num ,i =0 ,r ,x =100000 ,y =1 ;
    long int j =4 ;

    cin >>num ;

    long int a[num] ,b[num] ,e[num] ;
    long int c[num] ,d[num] ;

    cin >>a[0] ;
    r =0 ;
    for (i =1 ;i <num ;i++ )
    {
        cin >>a[i] ;
        if (a[i] >a[r] ) r =i ;
    }

    while (j !=0)
    {
        for (i =0 ;i <num ;i++ )
        {
            b[i] =(a[i] %x ) /y ;
            e[i] =b[i] ;
            c[i] =i ;
            d[i] =i ;
        }

        if (b[r] !=0 )
        {
            msort (b ,e ,c ,d ,0 ,num -1 ) ;
            for (i =0 ;i <num ;i++ )
            {
                cout <<a[c[i]] <<" " ;
            }
        }
        else break ;

        x *=100000 ;
        y *=100000 ;
        j-- ;
        cout <<endl ;
    }
}
