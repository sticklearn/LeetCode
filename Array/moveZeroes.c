/*	
	from LeetCode
	283. Move Zeroes
	Given an array nums, write a function to move all 0's to the end of it 
	while maintaining the relative order of the non-zero elements.
	For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

*/



void moveZeroes(int* nums, int numsSize) {
    if (0 == numsSize)
        return;
    
    int i, j;
    
    for (i = 0, j = 0; j < numsSize; j++) {
        if (nums[j] != 0)
            nums[i++] = nums[j];
    }
    for (;i < numsSize; i++) 
        nums[i] = 0;
}
