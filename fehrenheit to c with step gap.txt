// Online C++ compiler to run C++ program online
#include <iostream>
void printTable(int start , int end , int step)
{
    for(int fahrenheit = start; fahrenheit <= end; fahrenheit+=step){
        int cel=5 * (fahrenheit - 32) / 9;
        std::cout<< fahrenheit <<"\t"<<cel<<std::endl;
    }
}
int main() {
    int start, end , step;
    std::cin>>start>>end>>step;
    printTable(start, end, step);

    return 0;
}