#include<iostream>
using namespace std;

int cnt=1000;

int func1(){
    return 2021;
}

int func2(int pos){
    cnt += 1;
    return cnt+pos; 
}

int main(){
    cout << func1() << endl;
    cout << func2(500) << endl;
    cout << func2(500) << endl;
    return 0;
}