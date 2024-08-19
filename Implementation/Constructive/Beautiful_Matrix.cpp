#include<iostream>
using namespace std;
int main()
{
    int r,c,m;
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
       
    }
     m=abs(r-2)+abs(c-2);
     cout<<m<<endl;
    
    return 0;
}