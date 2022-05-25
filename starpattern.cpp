#include<iostream>
using namespace std;

//
////
//
//
Removed
int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int gap=n-i;
        for(int j=1;j<=gap;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int t=1;t<=i-1;t++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
  
}
