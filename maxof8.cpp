#include <iostream>
using namespace std;
int maxof (int x, int y){
    if (y<x){
        return x;
    } else {
        return y;
    }
}
int maxof8 (int a, int b, int c, int d, int e, int f, int g, int h){
    int max1 = maxof(a, b);
    int max2 = maxof(c, d);
    int max3 = maxof(e, f);
    int max4 = maxof(g, h);
    int max5 = maxof(max1, max2);
    int max6 = maxof(max3, max4);
    return maxof (max5, max6);
}
int main(){
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int result;
    result = maxof8(a, b, c, d, e, f, g, h);
    cout << result << endl;
    return 0;
}
