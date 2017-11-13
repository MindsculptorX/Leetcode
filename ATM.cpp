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
        cout<< "We have $" <<bankBalance <<endl;
    }

    void depositCash() {
        int temp;
        cout<< "How many you want to deposit?"<<endl;
        cin>>temp;
        bankBalance += temp;
    }

    void withdrawCash() { 
        int temp;
        cout<< "How many you want to withdraw?"<<endl;
        cin>>temp;
        if(temp > bankBalance || temp % 20!=0){
            cout<< "Not enough money or can't be devided by 20"<<endl;
        }else{
            bankBalance -= temp;
            cout<<"You get $"<<temp;
        }
    }
};

int main(){
    ATM myMachine;
    int choice; 
    
    while(1) { 
        cout << "Press 1 to show the balance" << endl;
        cout << "Press 2 to deposit" << endl;
        cout << "Press 3 to withdraw" << endl;
        cout << "Anything else to quit" << endl;
        cin >> choice;
        
        switch(choice) { 
            case 1 : myMachine.checkBalance();
                     break; 
                     
            case 2 : myMachine.depositCash();
                     break;
                     
            case 3 : myMachine.withdrawCash();
                     break;
                
            default: exit(1);
        }
    }
    
    return 1;

}
