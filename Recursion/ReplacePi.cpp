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

// "xpix"
void replacePi(char input[]){
    int len = length(input);
    if(len == 0){
        return;
    }

    replacePi(input+1);
    if(input[0] == 'p' && input[1] == 'i'){
        int len = length(input); // Length has changed
        input[len+2] = '\0';
        for(int i = len; i >= 0; i--){
            input[i+2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }
}


int main(){
    char input[10000];
    cout << "Enter String : " << endl;
    cin.getline(input,10000);
    replacePi(input);
    cout << input;
    return 0;
}