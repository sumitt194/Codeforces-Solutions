// https://www.interviewbit.com/problems/trailing-zeroes
int Solution::trailingZeros(int A) {
  
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
 // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  
     // Map a bit value mod 37 to its position
     static const int lookup[] = {32, 0, 1,
     26, 2, 23, 27, 0, 3, 16, 24, 30, 28, 11,
     0, 13, 4, 7, 17, 0, 25, 22, 31, 15, 29,
     10, 12, 6, 0, 21, 14, 9, 5, 20, 8, 19,
     18};
 
     // Only difference between (x and -x) is
     // the value of signed magnitude(leftmostbit)
     // negative numbers signed bit is 1
     return lookup[(-A & A) % 37];

}
