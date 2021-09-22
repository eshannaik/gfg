// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays#

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        return *max_element(arr.begin(),arr.end());
    }
};
