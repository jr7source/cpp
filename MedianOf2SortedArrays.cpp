// Solution to leetcode Hard problem 4. Median of Two Sorted Arrays
// Author: Jatin 

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int size1 = nums1.size();
        int size2 = nums2.size();
        int totalSize = size1 + size2;
        temp.reserve(totalSize);

        int i = 0, j = 0;

        while (i < size1 && j < size2) {
            if (nums1[i] < nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while (i < size1) {
            temp.push_back(nums1[i]);
            i++;
        }

        while (j < size2) {
            temp.push_back(nums2[j]);
            j++;
        }

        double median;
        if (totalSize % 2 == 0) {
            median = (temp[totalSize / 2 - 1] + temp[totalSize / 2]) / 2.0;
        } else {
            median = temp[totalSize / 2];
        }
        return median;
    }
};
