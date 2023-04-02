#include<iostream>
using namespace std;
void printpattern(int m){
    if(m>0){
        cout<<m<<"\n";
        printpattern(m-5);
    }
    cout<<m<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    printpattern(n);
    
    return 0;
}