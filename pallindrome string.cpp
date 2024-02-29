#include<iostream>
using namespace std;

bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch>='A' && ch<='Z')){
        return 1;
    }
    return 0;
}

char tolower(char ch){
    if((ch>='a' && ch<='z') || (ch>=0 && ch<=9)){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    } 
}

bool checkPallindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1; 
}

bool isPalindrome(string s) {
    int i=0;
        
    string temp ="";
    //removing unneccesary elements/characters
    for(int j =0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);       
        }
    }
    //lower case conversion
    for(int j=0;j<temp.length();j++){
        temp[j]=tolower(temp[j]);
    }
    return checkPallindrome(temp);
}

int main(){
    string str="a_MAN_Nama";
    cout<<str<<endl;

    cout<<str.length()<<endl;
    
    if(isPalindrome(str)==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}