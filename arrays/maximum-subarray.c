/*
 * Problem: Maximum Subarray
 * Topic: Arrays
 * Pattern: Kadane's Algorithm
 * Difficulty: Medium
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * Date: 2026-09-02
 */

int maxSubArray(int *nums, int numsSize)
{
    int maxSum = nums[0];
    int current = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (current < 0)
            current = nums[i];
        else
            current += nums[i];
        if (current > maxSum)
            maxSum = current;
    }
    return maxSum;
}