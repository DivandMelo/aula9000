#include <iostream>

using namespace std;


int main(){
    int num;
    cout << "informe um numero para a tabuada " << endl;
    cin >> num;
    for(int i=1; i<=10; i++){
       int tabuada = i * num;  
       cout << num << " x " << i << " = " << tabuada << std::endl;
    }
    return 0;
    
}