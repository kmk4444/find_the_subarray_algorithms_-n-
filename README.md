# find_the_subarray_algorithms_-n-
Given an array with n elements, each element being a number. We want to find the number of subarrays (not these subarrays) contained within this array, starting with 1 and ending with 9, and consisting of consecutive elements of the array.
For example, if our array is 3,2,1,5,9,1,1,2,4,7,9,3, the answer would be 4. (this is because there are 4 substrings satisfying the condition 1,5,9 substring, 1,5,9,1,1,2,4,7,9 substring, 1,1,2,4,7,9 substring and 1,2,4,7,9 subsequence)
Question 1. Design an algorithm that can find the number of substrings satisfying the condition in θ(n2) processing time. (You can do this with 2 nested for loops.)
Question2. Design an algorithm that can find the number of substrings satisfying the condition in θ(n) processing time. (You can do this with a single for loop.)
