#include "Clase1.hpp"
#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

int main(){
    Clase1<double> ej;
    ej.add(1.3);
    ej.add(2.1);
    ej.add(3.2);
    string new_v = ej.procesar();
    
        cout << new_v <<"\n"<< typeid(new_v).name()<<endl;
    
    Clase1<string> ej2;
    ej2.add("Hola");
    ej2.add("mundo");
    string new_v2 = ej2.procesar();
    cout << new_v2 <<"\n"<< typeid(new_v2).name()<<endl;
    
    /*
    Clase1<vector<int>> ej3;
    vector<int> a = {1,2};
    vector<int> b = {3,4};
    ej3.add(a);
    ej3.add(b);
    vector<string> new_v3 = ej3.procesar();
    for(auto val: new_v3){
        cout << val << typeid(val).name()<<endl;
    }*/
}