# Code-Chef-in-cpp
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int A,B;
        cin>>A>>B;
        if(A>B)
        {
            cout<<B<<endl;
        }
        else if(A<B)
        {
            cout<<A<<endl;
        }
        else if(A==B)
        {
            cout<<A<<endl;
        }
    }
	return 0;
}
