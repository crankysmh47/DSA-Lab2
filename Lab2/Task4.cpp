#include<iostream>
#include<cstring>
using namespace std;   
int main(){
    string *ptr=new string;
    cout<<"Enter a string to reverse : ";
    getline(cin,*ptr);
    cout<<"Reversed string is : ";
    for(int i=(*ptr).length()-1;i>=0;i--){
        cout<<(*ptr)[i];
    }
    cout<<endl;
    
    delete ptr;
    return 0;
}