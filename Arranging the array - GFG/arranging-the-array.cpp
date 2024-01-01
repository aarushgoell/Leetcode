//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n){
        vector<int> pos;
        vector<int> neg;
        for(int i = 0;i<n;i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        int negsize = neg.size();
        for(int i = 0;i<n;i++){
            if(i<negsize){
                arr[i] = neg[i];
            }
            else{
                arr[i] = pos[i - negsize];
            }
        }
        }
    //     int negIndex = 0;

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] < 0) {
    //         if (i != negIndex) {
    //             swap(arr[i], arr[negIndex]);
    //         }
    //         negIndex++;
    //     }
    // }
        // {
        //     int l = 0;
        //     int r = 1;
        //     while(r<n){
        //         if((arr[l]<0 && arr[r]<0 )|| (arr[l]<0 && arr[r]>=0)){
        //             l++, r++;
        //         }
        //         else if(arr[l]>=0 && arr[r]>=0){
        //             r++;
        //         }
        //         else{
        //             swap(arr[l],arr[r]);
        //             l++,r++;
        //         }
        //     }
        // }
        
        
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

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
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends