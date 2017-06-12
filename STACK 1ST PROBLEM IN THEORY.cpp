#include <iostream>
using namespace std;
int n=0;


void push (long int qre[], int i)
{
    qre[n]=i;
    n++;
}

void pop(long int qre[])
{
    if(n>0){cout<<qre[--n]<<endl;}
    else cout<<"No Food"<<endl;
}

int main()
{
   int i,j,k;long int r;
   cin>>i;

   long int qre[i];

   for (j=0 ;j<i ;j++)
   {
       cin>>k;
       qre[j]=k;
       if(k==1){pop(qre);}
       else {cin>>r; push(qre,r);}
   }

}
