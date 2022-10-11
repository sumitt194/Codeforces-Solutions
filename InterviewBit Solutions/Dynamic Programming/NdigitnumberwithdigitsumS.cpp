//https://www.interviewbit.com/problems/n-digit-numbers-with-digit-sum-s-/

int Solution::solve(int A, int B) {
    int l[A+1][B+1];
    memset(l,0,sizeof(l));
    long long m=1e9+7;
    for(int i=0;i<=A;i++)
    l[i][0]=1;
    for(int i=1;i<=B&&i<=9;i++)
    { l[1][i]=1;
    }
    for(int i=2;i<=A;i++)
    {
        for(int j=1;j<=B;j++)
        {
            // if(j==0)
            // l[i][j]=1;
            // if(i=0)
            // l[i][j]=0;
            for(int k=0;(k<10&&j-k>0);k++)
            {
                //cout<<l[i][j]<<" ";
                l[i][j]=(l[i-1][j-k]+l[i][j])%m;
            }
        }
    }
    return l[A][B];
    
}
