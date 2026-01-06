#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
long long int fibonacci (int a){
    if (a==0 || a==1) {return a;}
    else {return fibonacci(a-1)+fibonacci(a-2);}
}
