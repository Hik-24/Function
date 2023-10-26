#include <iostream>
using namespace std;
int maxof(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << maxof(n,m) << endl;
    return 0;
}