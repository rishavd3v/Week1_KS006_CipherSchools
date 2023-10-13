#include<iostream>
using namespace std;
int main(){
    int password;
    do{
        cin>>password;
    }
    while(password<999999);
    cout<<"Enter the password: ";
    cin>>password;
    while(password<999999){
        cout<<"The password does not meet the required conditions,Please enter the password again";
        cin>>password;
    }
    cout<<"The user has now entered a correct password "<<endl;
    return 0;

    
    int count=0;
    while(password<99){
        cout<<"chocolate"<<endl;
    }
     while(1){
        cout<<"chocolate"<<endl;
        count++;
        if(count>100)break;
    }
    int i;
    for(i=0; ;i++){
        cout<<i;
        if(i>100)break;
    }
    return 0;
}