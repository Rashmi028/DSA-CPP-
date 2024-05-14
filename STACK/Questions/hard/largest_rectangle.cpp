#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int i ,count=0   ,j ;
        int n=heights.size();
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cout<<heights[i]<<endl;
            for(int j=i;j<n;j++){
                cout<<heights[j]<<endl;
                if(heights[j+1]>heights[i]){
                    count++;
                    j++;
                }
                else{
                    // cout<<heights[i];
                  
                    arr[i]=heights[i]*(count+1);
                    cout<<"count:"<<count<<" "<<endl;
                 cout<<arr[i]<<" "<<endl;
                    i++;  
                }
               
            }
           
        }

    }
};

int main() {
    // Test your Solution class here
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    Solution sol;
    cout << sol.largestRectangleArea(heights) << endl;

    return 0;
}
