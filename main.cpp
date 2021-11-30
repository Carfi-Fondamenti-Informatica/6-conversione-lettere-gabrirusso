#include <iostream>

using namespace std;
#include "lib.h"


int main() {
    char carattereinserito;
    char stampa;
    cin >> carattereinserito;

    if (funzione(carattereinserito)==true){
        if(carattereinserito>=65&&carattereinserito<=90) {
            stampa=carattereinserito + 32;
        } else{stampa=carattereinserito -32;
    } }
        else {
        cout << "errore" <<endl ;
    }
        cout<< stampa<<endl;
    return 0;

}
