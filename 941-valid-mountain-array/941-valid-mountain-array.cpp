class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
                bool ans1, ans2;
        int j=0;
        
        if(arr.size()<3)
            return false;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
                j=i;
        }
        
        
        for(int i=1;i<j;i++)
        {
            if(arr[i-1]>=arr[i] || j==arr.size()-1)
                {ans1=false;
                break;}
            else
                ans1=true;
        }
        
        for(int k=j+1;k<arr.size();k++)
        {
            if(arr[k-1]<=arr[k] || j==0)
                {ans2=false;
                break;}
            else
                ans2=true;
        }
        
        if(ans1 && ans2)
            return true;
        else
            return false;
        
    }
};