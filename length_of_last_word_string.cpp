#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello world"; //we need to find the lenght of the last word -> world =5
    int siz=s.size()-1;
    int length=0;

    while(siz >= 0 && s[siz] == ' '){
        siz--;
    }

    while(siz >= 0 && s[siz] != ' '){
        length++;
        siz--;
    }

    cout<<"length of the last word is :->" << length<<endl;



    return 0;
}