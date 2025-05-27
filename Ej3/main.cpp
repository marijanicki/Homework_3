#include "Clase1.hpp"
#include <iostream>
#include <typeinfo>
#include <vector>
using namespace std;

int main(){
    Clase1<double> ej;
    ej.add(2.3);
    ej.add(5.5);
    vector<string> new_v = ej.procesar();
    for(auto val: new_v){
        cout << val << typeid(val).name()<<endl;
    }
    Clase1<string> ej2;
    ej2.add("Hola");
    ej2.add("mundo");
     vector<string> new_v2 = ej2.procesar();
    for(auto val: new_v2){
        cout << val << typeid(val).name()<<endl;
    }
    Clase1<vector<int>> ej3;
    vector<int> a = {1,2};
    vector<int> b = {3,4};
    ej3.add(a);
    ej3.add(b);
    vector<string> new_v3 = ej3.procesar();
    for(auto val: new_v3){
        cout << val << typeid(val).name()<<endl;
    }
}