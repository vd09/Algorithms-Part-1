#include <iostream>
using namespace std ;

void qsort(int a[] ,int lo ,int hi )
{

    if (hi <=lo )return ;
    int it =lo ,gt =hi ;
    int v =a[lo] ;
    int i =lo ;
    while (i <=gt)
    {
        if (a[i] <v )
        {
            int temp =a[i] ;
            a[i] =a[it] ;
            a[it] =temp ;

            it++ ;i++ ;
        }

        else if (a[i] >v )
        {
            int temp =a[i] ;
            a[i] =a[gt] ;
            a[gt] =temp ;

            gt-- ;
        }

        else i++ ;
    }

    qsort(a ,lo ,it -1 ) ;
    qsort(a ,gt +1 ,hi ) ;

}


int main()
{
 int num,i ,t  ;

 cin >>t ;
 while (t-- >=1 )
{
    cin>>num;
    int a[num] ;


    for(i=1;i<=num;i++)
    {
        cin >>a[i] ;
    }

    qsort(a ,1 ,num ) ;

    int cnt =1 ,x =1 ,y =num ,v =1 ;

    for(i =2 ;i <=num ;i++ )
    {
        if (a[i] ==a[v] )cnt++ ;
        else
        {
            v =i ;
            if (cnt >x )x =cnt ;
            if (cnt <y )y =cnt ;
            cnt =1 ;
        }
    }

    if (cnt >x )x =cnt ;
    if (cnt <y )y =cnt ;

    if (x ==y )cout <<"-1" ;
    else cout <<x -y ;

    cout <<endl ;

}


}
