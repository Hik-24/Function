#include <iostream>
using namespace std;
int maxoffirstk(int arr[], int n, int k){
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
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k (1 <= k <= n): ";
    cin >> k;

    int max = maxoffirstk(arr, n, k);

    if (max != -1) {
        cout << "The largest number in the first " << k << " indices is: " << max << endl;
    }
    return 0;
}
