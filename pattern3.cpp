//p3
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j =n;j>=i; j--)
        {
            cout<<" ";
        }
        for(int k=i-1;k>=-(i-1);k--){
            cout<<i-abs(k);
        }
        cout<<endl;
    }
    
    return 0;
}