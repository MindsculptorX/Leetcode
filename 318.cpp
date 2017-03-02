//三个问题：
// 1.a.size()*b.size()不能直接和MAX比，因为size()是size_t 是unsigned int 
// 2.return true 位置放错了！！！所以不会循环下去
// 3.MAX初始为0比-1好。


class Solution {
public:
    bool noShare(vector<bool>a,vector<bool>b){
        for(int i=0;i<26;i++)
            if(a[i] && b[i])
                return false;
        // return true;

        return true;
    }
    int maxProduct(vector<string>& words) {
        vector<vector<bool>> have(words.size(),vector<bool>(26,false));
        for(int i=0;i<words.size();i++)
            for(int j=0;j<words[i].size();j++)
                have[i][words[i][j]-'a']=true;
                
        // int MAX=-1;
        int MAX=0;
        for(int i=0;i<words.size();i++)
            for(int j=i+1;j<words.size();j++)
                if(noShare(have[i],have[j]))
                    if(MAX<(int)(words[i].size()*words[j].size()))
                        MAX=(words[i].size()*words[j].size());
        return MAX;
        
    }
};
