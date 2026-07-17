#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *max=max_element(arr,arr+n);
    int *min=min_element(arr,arr+n);
    swap(*max,*min);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
