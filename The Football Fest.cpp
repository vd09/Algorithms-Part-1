#include <iostream>
using namespace std;

int i, top=0;

void push(int ar[], int r)
{
    ar[top++]=r;

}

void Swap(int ar[])
{
    int temp;
    temp=ar[top-1];
    ar[top-1]=ar[top-2];
    ar[top-2]=temp;
}

int main()
{
    int r,t;
    cin >>t;
    for(int p=0; p<t; p++)
    {
        top=0;
        cin >>i;

        int ar[i];char a;

        cin >>r;
        ar[top++]=r;

        for(int j=0; j<i; j++)
        {
            cin >>a;
            switch(a)
            {
            case 'P':{cin >>r;push(ar,r);break;}
            case 'B':{Swap(ar);break;}
            }
        }
        cout <<"Player "<<ar[top-1]<<endl;
    }
}
