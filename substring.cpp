#include<iostream>
#include<string.h>
using namespace std;

void printSubstrings(char input[]) {
    int len = strlen(input);

    for (int i = 0; i < len; i++) {

        for (int j = i; j < len; j++) {
            
            for (int k = i; k <= j; k++) {

                cout << input[k];
            }
            cout << endl; // Print a newline to separate substrings
        }
    }
}
int main(){
    printSubstrings("shivam");
}