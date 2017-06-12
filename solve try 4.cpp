#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    long int i ,t ,r ,scr ,k ,j ,n=0 ;
    cin >>t ;

    for (k =0 ;k <t ;k++ )
    {
        cin >>i ;
        long int a[i] ,b[i] ;
        cin >>r ;
        cout <<"1 " ;
        a[n] =r ;
        b[n] =1 ;n++ ;
        for (j =1 ;j <i ;j++ )
        {
            scr =1;
            cin >>r ;

            while(r >a[n-1] && n >0)
            {
                scr +=b[n-1];
                n--;
            }

            a[n] =r ;
            b[n] =scr ;
            n++;

            cout <<scr <<" ";
        }
        cout<<endl;

    }

}
