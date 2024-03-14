#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int max_subarray_sum(vector<int>& arr) {
    int max_ending_here = 0; 
    int max_so_far = arr[0]; 

    for (int i = 0; i < arr.size(); ++i) {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far; 
}
int main() {
    int n;
    cin >> n; 

    vector<int> arr(n); 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }
    cout << max_subarray_sum(arr) << endl;
    return 0;
}
