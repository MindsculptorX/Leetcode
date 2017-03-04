class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {\
    //c++里 NULL==0 会返回true的 所以 只能用find 和 count 找有没有 .如果访问一个不存在的key 会自动调用value的构造函数 返回一个默认值 
        k=min(k,(int)nums.size()-1);
        if(k<=0 or nums.size()<=1) //为什么不加过不了 为什么[1],1不行
            return false;
        unordered_map<int,int> myMap;
        for(int i=0;i<nums.size();i++){

             auto t=myMap.find(nums[i]);
            // if(myMap[nums[i]]==NULL){//这么写不行
            if(t==myMap.end()){
                cout<<"insert"<<endl;
                myMap[nums[i]]=i;
            }
            else if(i-myMap[nums[i]]<=k){
                cout<<"<=k"<<endl;
                return true;
            }
            else{
                myMap[nums[i]]=i;
                cout<<"else"<<endl;
            }
                
            // cout<<myMap[-1];
        }
        return false;
        
    }
};
