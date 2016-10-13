/*	
	from LeetCode.com
	396. Rotate Function
	Given an array of integers A and let n to be its length.
	Assume Bk to be an array obtained by rotating the array A k positions clock-wise, 
	we define a "rotation function" F on A as follow:
	F(k) = 0 * Bk[0] + 1 * Bk[1] + ... + (n-1) * Bk[n-1].
	Calculate the maximum value of F(0), F(1), ..., F(n-1).
*/


/*
  sum = sum(A[i])
  f(m) - f(m - 1) = n * A[m - 1] - sum
  f(0) = sum(A[i] * i)
*/
int maxRotateFunction(int* A, int ASize) {
	if (0 == ASize || 1 == ASize)
    	return 0;
    
    int i, sum, f, max;
    
    sum = f = 0;
    
    for (i = 0; i < ASize; i++) {
        sum += A[i];
        f += i * A[i];
    }
    
    max = f;
    
    for (i = 0; i < ASize; i++) {
        f = ASize * A[i] - sum + f;   
        if (f > max)
            max = f;   
    }
	
    return max;
}
