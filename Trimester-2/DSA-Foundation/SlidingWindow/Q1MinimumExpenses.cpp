/**
 * 
 */
#include <iostream>
using namespace std;

void solve(int n, int k, int* arr) 
{
  int sum=0,minSum=0;
  
  for(int i=0;i<n-k;i++)
  {
    sum=0;
    for(int j=i;j<i+k;j++)
    {
      sum+=arr[j];
    }
    if(minSum<sum)
    {
      minSum=sum;
    }
  }
  cout<<minSum;
}

int main() {
    int t;  cin >> t;
    while(t-- > 0) {
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        solve(n, k, arr);
    }
    return 0;
}
