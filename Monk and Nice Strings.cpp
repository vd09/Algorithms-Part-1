#include <iostream>
#include <stdio.h>
using namespace std ;

int main()
{
 int num,i ;
 int j ;

    cin >>num ;
    string a[num] ;

    for(i =0 ;i <num ;i++ )
    {
        //scanf("%d", &a[i]);

        cin >>a[i] ;
        int k =i ;
        for (j =i ;j >=0 ;j-- )
        {
            if (a[j] >a[k] ) {swap(a[j] ,a[k] ) ;k =j ; }
            else if (a[j] ==a[k] ){}
            else break ;
        }
        cout <<j+1 <<"\n" ;

    }
}
