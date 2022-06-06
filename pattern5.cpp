
//p5
#include<iostream>
using namespace std;
int main ()
{
    int z=1;
    int n;
    cout<<"enter the value";git remote add origin https://github.com/kishore-java/Patterns_Assignment_letsupgrade.git
git branch -M main
git push -u origin main
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j =n-1;j>=i ; j--) {
            cout<<" ";
        }
        for (int k = z; k>=1; k--)
        {
            cout<<abs(k-i)+1;
        }
        z+=2;
        cout<<endl;
        
    }
    
    return 0;
}