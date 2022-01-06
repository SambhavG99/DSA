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

// "hello"
void PairStar(char input[]){
    int len = length(input);
    if(len == 0) return;

    PairStar(input+1);
    if(input[0] == input[1]){
        input[len + 1] = '\0';
        for(int i = len; i >= 0 ; i--){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
}


int main(){
    char input[10000];
    cout << "Enter String : " << endl;
    cin.getline(input,10000);
    PairStar(input);
    cout << input;
    return 0;
}