    int pivotIndex(vector<int>& nums) {
        int sz = nums.size();
        if(sz==0){return -1;}
        if(sz==1){return 0;}
        vector<int>v1(N);//L->R
        vector<int>v2(N);//R->L
        v1[0] = nums[0];
        v2[N-1] = nums[N-1];
        
        for(int i=1;i<N;i++){
            v1[i] = v1[i-1] + nums[i];
        }
        for(int i=N-2;i>=0;i--){
            v2[i] = v2[i+1] + nums[i];
        }
        if(v2[1]==0){return 0;}
        for(int i =1;i<N-1;i++){
            if(v1[i-1] == v2[i+1]){
                return i;
            }
        }
        if(v1[N-2]==0){return N-1;}
        return -1;
    }
