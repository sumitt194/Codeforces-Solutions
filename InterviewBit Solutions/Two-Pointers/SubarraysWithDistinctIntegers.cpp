 int Solution::solve(vector<int> &a, int b) {
   
    map<int, int> m;
    int n = a.size();
    int ans =0;
    int ans2 =0;
    int i=0;
    int j=0;
    while(i<n)
    {
        m[a[i]]++;
        while(m.size() > b)
        {
            m[a[j]]--;
            if(m[a[j]] ==0)
            {
                m.erase(a[j]);
            }
            j++;
        }
       
        ans+=(i-j+1);
        i++;
    }
    i=0;
    j=0;
    m.clear();
    while(i<n)
    {
        m[a[i]]++;
        while(m.size() > b-1)
        {
            m[a[j]]--;
            if(m[a[j]] ==0)
            {
                m.erase(a[j]);
            }
            j++;
        }
       
        ans2+=(i-j+1);
        i++;
    }
   
    return ans - ans2;
   
}
