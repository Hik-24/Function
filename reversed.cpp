#include <iostream>
using namespace std;
int reserve_N(int N){
    int reserved = 0 ;
    while (N > 0){
        int digit = N % 10;
        if(digit != 0 || reserved != 0 ){
            reserved = reserved *10 + digit;
        }
    N/=10;
    }
    return reserved;
}
int main(){
    int N;
    cin >> N;
    int hasil = reserve_N(N);
    cout << hasil << endl;
    return 0;
}