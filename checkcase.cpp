//Check Case by 
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    char p;
    cin>>p;
    int I=int(p);
    if(I<65){
        cout<<-1<<endl;
    }
    else if(I>=65 && I<=90){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
	
}