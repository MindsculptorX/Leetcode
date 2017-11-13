#include<iostream>
using  namespace std; 

class ATM {
    public:
    float bankBalance; 

    ATM(){ 
        bankBalance = 100;
    }

    //check balance 
    void checkBalance() { 
        cout<<"We have :"<< bankBalance << endl;
    }

    void depositCash() {
        int temp;
        cout<<"How many Dollar?"<<endl;
        cin>>temp;
        bankBalance += temp;
    }

    void withdrawCash() { 
        int temp;
        cout<<"How many Dollar?"<<endl;
        cin>>temp;
        if(temp>bankBalance || temp%20!=0 ){return;}
        bankBalance -= temp;
    }
};

int main(){
    ATM myMachine = new ATM;
    //implement the rest…  
}
