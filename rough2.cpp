#include <iostream>
using namespace std;


    int main()
{
    ios::sync_with_stdio(false);

        long int t ,k;
        cin >>t;
        for (k=0; k<t; k++)
        {
            long int i ,n=1 ,j ;
            //cout<<k<<endl;
            cin >>i;
            long int a[i+1] ,b[i];

            for(j=1; j<=i; j++)
            {
                cin >>a[j] ;

                  if(a[j] <a[j-1] )
                    b[j] =n ;

                else b[j] =b[j-1] ;

                while(a[j] >a[j-b[j]])
                    b[j] +=b[j-b[j]];



                cout <<b[j] <<" " ;
            }


            /*for(j=1; j<=i; j++)
            {
                cout <<b[j] <<" ";
            }*/
            cout <<endl ;
        }


}
