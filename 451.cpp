//1.'0'在'A'之前
//2.注意return的位置,不要放在循环里
//3.注意要是max开始设为-1的话 会遍历整个256数组 
//4.要在置0之前就append string 否则就会append(0,curr);


class Solution {
public:
    int findMax(vector<int>&have,string &answer){
        int curr=-1;
        int MAX=0;
        for(int i=0;i<have.size();i++){
            if(have[i]>MAX){
                MAX=have[i];
                curr=i;
            }
           
            // return curr;
        }
        answer.append( have[curr],(char)curr);
        have[curr]=0;
        return curr;
    }
    string frequencySort(string s) {
        vector<int>have(256,0);
        for(int i=0;i<s.size();i++){
            have[s[i]]++;
        }
        
        string answer;
        cout<<"1"<<endl;
        int curr;
        while(true){
            curr=findMax(have,answer);
            if(curr==-1)break;//找不到了

            // answer.append(have[curr],'A');//放在这里have[curr]已经置零了
        }
        return answer;
    }  
};


