#include "Clase1.hpp"
#include "Clase2.hpp"
#include <fstream>
#include <typeinfo>
#include <vector>
#include <string>
using namespace std;

int main(){
    Clase1<double> ej;
    ej.add(1.3);
    ej.add(2.1);
    ej.add(3.2);

    Clase1<string> ej2;
    ej2.add("Hola");
    ej2.add("Mundo");

    Clase1<vector<int>> ej3;
    vector<int> a = {1,2};
    vector<int> b = {3,4};
    ej3.add(a);
    ej3.add(b);

    Clase2 Ca;
    Ca.asociar_data(ej, ej2,ej3);
    Ca.json_show();
    ofstream out("Datos.json");
    if (out.is_open()) { 
        Ca.make_json(out);  
        out.close();
    }
    
}