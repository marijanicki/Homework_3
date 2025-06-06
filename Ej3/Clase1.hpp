#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <type_traits>
#include <sstream>
using namespace std;

using int_vect = vector<int>;

template<typename T>
class Clase1{
    private:
        vector<T> datos;
    public:
        Clase1(){};
        void add(T new_data){datos.push_back(new_data);}
        
        string procesar(){
            if constexpr(is_floating_point<T>::value){
               ostringstream str_vect;
               str_vect << "[";
                for(size_t i=0; i<2; i++){
                    str_vect << datos[i] << ',';
                }
                str_vect << datos[2] << "],";
                return str_vect.str();
            }
            else if constexpr(is_same<T, string>::value){
                return "[\""+datos[0]+"\", \""+datos[1]+"\"],";
                
            }  
            else if constexpr(is_same<T, int_vect>::value){
                ostringstream str_mtx;
                str_mtx << "[\n";
                for(size_t i = 0; i<datos.size();i++){
                    str_mtx << "\t   [";
                    for(size_t j = 0; j < datos[i].size();j++){
                        str_mtx << datos[i][j];
                        if(j==0){
                            str_mtx << ",";
                        } 
                    }
                    str_mtx << "]";
                    if(i ==0){
                        str_mtx << ",\n";
                    }
                }
                str_mtx << "\n\t  ]";
                return str_mtx.str();
            }
        }
};
