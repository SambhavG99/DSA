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
void removeDuplicates(char input[]){
    if(input[0] == '\0'){
        return;
    }

    removeDuplicates(input + 1);
    if(input[0] == input[1]){
        int i = 0;
        while (input[i] != '\0') {
            input[i] = input[i + 1];
            i++;
        }
    }
}


int main(){
    char input[10000];
    cout << "Enter String : " << endl;
    cin.getline(input,10000);
    removeDuplicates(input);
    cout << input;
    return 0;
}