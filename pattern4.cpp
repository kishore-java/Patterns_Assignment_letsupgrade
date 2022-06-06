//p4
#include<iostream>
using namespace std;
int main ()
{
    int z=1;
    int n;
    cout<<"enter the value";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j =n-1;j>=i ; j--) {
            cout<<" ";
        }
        for (int k = z; k>=1; k--)
        {
            if(k&1) cout<<"1";
            else cout<<"0";
        }
        z+=2;
        cout<<endl;
        
    }
    
    return 0;
}