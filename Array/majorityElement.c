/*
	From LeetCode.com
	
	169. Majority Element
	
	Given an array of size n, find the majority element. 
	The majority element is the element that appears more than ⌊ n/2 ⌋ times.
	You may assume that the array is non-empty and the majority element always exist in the array.

	how:
		Erase the different element of the array, to leave the majority element.
*/


int majorityElement(int* nums, int numsSize) {

    if (numsSize == 1)
        return nums[0];
    
	int i, j;
    
	for (i = 0, j = 1; j < numsSize; ) {
		if (nums[i] != nums[j]) {
			nums[i] = nums[--numsSize];			
			nums[j] = nums[--numsSize];
		}
		else {
			i++;
			j++;			
		}
	}
    
	return nums[numsSize / 2];
}
