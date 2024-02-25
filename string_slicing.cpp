#include <iostream>
#include<string>
using namespace std;
string sub(string str, int start, int length){
    string result;
    for(int i=start; i<start+length; i++){
        result+=str[i];
    }
    return result;
}
int main() {
    string myString = "Hello, World!";
    cout<<sub(myString, 7,5);
    
    //This is an alternate we can also use .substr(starting position, total_kitne);
    // string substring = myString.substr(7, 5);
    // cout << substring << endl;
  
}