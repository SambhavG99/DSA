#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter Num of Rows and Columns : " ;
    cin >> m >> n;
    int* *p = new int*[m];
    for(int i = 0; i < m; i++){
        p[i] = new int[n];
        for(int j = 0; j < n; j++){
            p[i][j] = 20;
        }
    }
    
    cout << "2D Array is : " << endl;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0; i<m; i++){
        delete [] p[i];
    }
    delete [] p;
    
    return 0;
}
