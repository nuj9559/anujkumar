#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"\n Enter the number: ";
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}