#include <iostream>
using namespace std ;


int main()
{
 int num ,t  ;

 cin >>t ;
 while (t-- >=1 )
{
    int a[1000000] ={0} ;
    cin>>num;

 int i ,v ,r ;
    cin >>r ;
    a[r]++ ;
    for(i=2;i<=num;i++)
    {
        cin >>v ;
        a[v]++ ;

//cout <<v <<" ";
        if (v >r )r =v ;

    }

    int p =r ;
    int q =1 ;
    for(i=1;i<=r;i++)
    {
        if (a[i] >a[q] )q =i ;
        if (a[i] <a[p] && a[i] !=0 )p =i ;
    }

    if (q ==p )cout <<"-1" ;
    else cout <<a[q] - a[p] ;
    cout <<endl ;

}


}
