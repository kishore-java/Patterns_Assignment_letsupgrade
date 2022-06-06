//Pattern 2
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the value";
    cin>>n;
    int x=n,y=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j<=x) cout<<j;
            else cout<<" ";
        }
        for(int j=n-1;j>=1;j--){
            if(j<=y) cout<<j;
            else cout<<" ";
        }

        cout<<endl;
        x--;
        y--;
    }
    return 0;
}
