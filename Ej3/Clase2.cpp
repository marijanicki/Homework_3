#include "Clase2.hpp"
#include <fstream>
void Clase2::asociar_data(Clase1<double> doubles, Clase1<string> str, Clase1<vector<int>> vect_int){
    data = "{ \"vec_doubles\" : " + doubles.procesar()+ "\n  \"palabras\" : "+str.procesar()+"\n  \"listas\" : "+ vect_int.procesar() + "\n}\n";
    /*cout += "\n  \"palabras\" : " <<  str.procesar();
    cout << "\n  \"listas\" : " << vect_int.procesar() <<"\n}"<<endl;*/
}

void Clase2::make_json(ofstream& out){
    out << data ;
}

void Clase2::json_show(){
    cout << data;
}