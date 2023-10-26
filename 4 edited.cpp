#include <iostream>
using namespace std;
int max_of_first_k(int arr[], int n, int k){
    int max_value = arr[0];
    for (int i=1;i<k;i++){
        if (arr[i]>max_value){
            max_value = arr[i];
        }
    }
    return max_value;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int max = max_of_first_k(arr, n, k);
    if (max != -1) {
        cout << max << endl;
    }
    return 0;
}