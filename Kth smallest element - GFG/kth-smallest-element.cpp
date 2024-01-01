//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    
    int partition(int arr[], int l, int r) {
    int pivot = arr[l];
    int i = l;
    int j = r;

    while (i < j) {
        while (arr[i] <= pivot && i <= r - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= l + 1) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

int quickselect(int  arr[], int l, int r, int k) {
    if (l <= r) {
        int partitionIndex = partition(arr, l, r);
        if (partitionIndex == k - 1) {
            return arr[partitionIndex];
        } else if (partitionIndex > k - 1) {
            return quickselect(arr, l, partitionIndex - 1, k);
        } else {
            return quickselect(arr, partitionIndex + 1, r, k);
        }
    }
    return -1; // or any other appropriate base case value
}
        
    
    int kthSmallest(int arr[], int l, int r, int k) {
        return quickselect(arr,l,r,k);     
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends