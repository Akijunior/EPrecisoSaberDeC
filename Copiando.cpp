
#include <iostream>
#include <string>

using namespace std;

int main() {

string s1, s2("valor inicial"), s3[10];

s1 = s2 + " copiado de s2\n"; // concatenacao e atribuicao

cout << "tamanho de s2 e: " << s2.size() << "\n";

int sz= s2.size();

for (int i=0; i < sz; i++) cout << s2[i] << ""; // acesso a caracter

cout << endl;

}
