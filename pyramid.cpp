#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int starcount=n;
    for(int currentrow=1;currentrow<=n;currentrow++){
        for(int space=1;space<currentrow-1;++space){
            cout<<" ";
        }
        for(int col=1;col<=starcount;++col){
            cout<<" * ";
        }
        cout<<endl;
        starcount=starcount-1;
    }
    return 0;
}
