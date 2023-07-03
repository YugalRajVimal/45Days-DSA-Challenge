//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        // code here
        // Using Map TLE at 192 Test Case
        
        /*
        
        unordered_map<int, int> mp;
        int first=INT_MAX;
        int second=INT_MAX;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]<first){
                second=first;
                first=arr[i];
            }
            else if(arr[i]<second && arr[i] != first){
                second=arr[i];
            }
            
            mp[arr[i]]++;
        }
        
        if(mp.size()==1 && mp[arr[0]]==n){
            return true;
        }
        
        int diff=second-first;
        
        for(int i=1;i<n;i++){
            if (mp.count(second)>0){
                second += diff;
            }
            else{
                return false;
            }
        }
        return true;
        
        */
        
        //Brute Force - Using Sorting Time- O(nlogn) Space- O(1)
        sort(arr,arr+n);
        int a=arr[0];
        int d=arr[1]-a;
        int k=2;
        for(int i=2;i<n;i++){
            if(arr[i]!=(a+(k*d))){
                return false;
            }
            k++;
        }
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
         (ob.checkIsAP(arr, n))? (cout << "YES" << endl) :
                       (cout << "NO" << endl);   
    }
 
  return 0;
}

// } Driver Code Ends