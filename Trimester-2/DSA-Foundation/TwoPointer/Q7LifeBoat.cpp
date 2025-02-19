/**
 * Question refer Q7LifeBoat.jpg 
 * Sample Input : 
2
4 5
3 5 3 4
4 3
1 2 2 3
 * Sample Output : 
4
3
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void lifeboats(int n, int k, vector<int> &arr) 
{
  sort(arr.begin(),arr.end()); //Sorting the array O(nlog n)
  
  int left=0,right=n-1;
  
  int boatCount=0;
  
  while(left <= right) //Till left and right pointers are same
  {
    if(arr[left]+arr[right]<=k)
    {
      left++;
    }
    boatCount++;
    right--;
  }
  cout<<boatCount<<endl;
}

int main() {  // do not make any changes in the 'main' function
	int t;  cin >> t;
	while(t--) {
	    int n, k;  cin >> n >> k;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    lifeboats(n, k, arr);
	}
	
}
