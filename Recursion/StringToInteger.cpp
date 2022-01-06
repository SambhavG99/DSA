#include <iostream>
#include <string.h>
using namespace std;

int length(char input[]){
    int i = 0, count = 0;
    while(input[i] != '\0'){
        count++;
        i++;
    }
    return count;
}


int StringToInteger(char input[], int n){
    if(n == 0){
        return 1;
    }

    int smallAns = StringToInteger(input, n -1);
    int lastInteger = input[n] - '0';
    return (smallAns*10) + lastInteger;
}

int StringToInteger(char input[]){
   int len = length(input);
   if(len == 0) return 0;
   return StringToInteger(input, len - 1); 
}


int main(){
    char input[10000];
    cout << "Enter String : " << endl;
    cin.getline(input,10000);
    cout << StringToInteger(input) + 1;
    return 0;
}