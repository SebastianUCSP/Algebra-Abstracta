#include <iostream>
#include <string>

using namespace std;

string invertir(string str){
    string aux;

    for(int i = str.size(); i >= 0; i--){
        aux += str[i];
    }
    return aux;
}

void ocurrencias(string cad1, string cad2){
    int cont = 0;

    for(int i=0; i<cad1.size()-2; i++){
        if(cad2 == cad1.substr(i,cad2.size())){
            cont ++;
        }
    }
    cout << "ocurrencias : " << cont << endl;
}

void rombo(int n, string l){
    for (int j = 0; j < n ; ++j) {
            for (int i = 0; i < n-j-1; ++i)
                cout << " ";
            for (int i = 0; i < 2*j+1; ++i)
                 cout << l ;
            cout << endl ;
        }

    for (int j=n-2; j>=0; --j) {
            for (int i=0; i<n-j-1; ++i)
                cout << " " ;
            for (int i=0; i<2*j+1; ++i)
                cout << l ;
            cout << endl ;
    }
}

void separar(string str, string sep){

    for (int i =0;i<str.length();i++){
        if(str[i] == sep[0]){
            str.replace(i,1,"\n");
        }
    }

    cout << str;
}

void palindrome(string pal){
    int cont = 0;
    for(int i=0; i<(pal.size()/2); i++){
        if(pal[i] == pal[pal.size() -i -1]){
              cont++;
        }
    }
    if(cont == pal.size()/2)
        cout << "SI" <<endl;
    else
        cout << "NO" <<endl;
}

int main() {

    //1

    string str;
    cout << "ingrese cadena a invertir: " << endl;
    getline(cin, str);
    cout << "cadena invertida:" << invertir(str) << endl;

    //2

    cout << "Ocurrencias: " << endl;
    ocurrencias("abaabbababababbba","aba");
    cout << endl;

    //3

    cout << "Rombo: " << endl;
    rombo(5, "p");

    cout << endl;

    //4

    cout << "Cadena con separador: " << endl;
    separar("hola.como.estas",".");

    cout << endl;

    //5

    cout << "Palindrome: " << endl;
    palindrome("anitalavalatina");

    cout << endl;

    //6


    return 0;


}
