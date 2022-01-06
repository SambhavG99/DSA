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

// "xabx"
void removeX(char input[]){
    int len = length(input);
    if(len == 0){
        return;
    }

    removeX(input+1);
    if(input[0] == 'x'){
        for(int i = 0; i < len; i++){
            input[i] = input[i+1];
        }
    }
}


int main(){
    char input[10000];
    cout << "Enter String : " << endl;
    cin.getline(input,10000);
    removeX(input);
    cout << input;
    return 0;
}