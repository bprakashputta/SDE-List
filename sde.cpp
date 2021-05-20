#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    //Dutch National Flag Algorithm 
    void sortColors(vector<int>& arr) {
        int left = 0;
        int mid = 0;
        int right = arr.size()-1;
        while(mid <= right){
            if(arr[mid] == 0){
                swap(arr[left], arr[mid]);
                left++;
                mid++;
            } else if(arr[mid] == 1){
                mid++;
            } else if(arr[mid] == 2) {
                swap(arr[mid], arr[right]);
                right--;
            }
        }
    }

    vector<int> twoSum(vector<int> arr, int target){
        vector<int> res(2);
        map<int, int> m;
        for(int i=0; i<arr.size(); i++){
            if(m.find(target - arr[i]) != m.end()){
                res.push_back(m[target-arr[i]]);
                res.push_back(i);
            }
            m[arr[i]] = i;
        }
    return res;
    }
};