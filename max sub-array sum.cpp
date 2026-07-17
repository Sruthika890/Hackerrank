#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
     int currsum=a[0];
     int maxsum=a[0];
     for(int i=1;i<n;i++){
        currsum=max(a[i],currsum+a[i]);
        maxsum=max(maxsum,currsum);
     }
     cout<<maxsum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
