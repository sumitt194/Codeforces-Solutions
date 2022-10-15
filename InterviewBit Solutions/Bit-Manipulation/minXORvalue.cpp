//Question : https://www.interviewbit.com/problems/min-xor-value/


int Solution::findMinXor(vector<int> &A) {

int minm=1e9;
int n=A.size();
sort(A.begin(),A.end());
for(int i=0;i<n-1;i++)
{
   
        minm=min(minm,A[i]^A[i+1]);
  
}

return minm;

}
