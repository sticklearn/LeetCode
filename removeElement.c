/*	
	from LeetCode.com
	27. Remove Element
	Given an array and a value, remove all instances of that value in place and return the new length.
	Do not allocate extra space for another array, you must do this in place with constant memory.	
	The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/


int removeElement(int* nums, int numsSize, int val) {
    if (0 == numsSize) 
        return 0;
        
    int i, j;
    
    for (i = 0, j = 0; j < numsSize; j++) {
        if ( val != nums[j]) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
