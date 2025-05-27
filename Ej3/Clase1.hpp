#include <iostream>
#include <string>
#include <vector>
#include <type_traits>
using namespace std;
//double, string, vector int

using vect = vector<int>;

template<typename T>
class Clase1{
    private:
        vector<T> datos;
    public:
        Clase1(){};
        void add(T new_data){datos.push_back(new_data);}
        vector<string> procesar(){
            if constexpr(is_floating_point<T>::value){
               vector<string> str_vect;
                for(auto val: datos){
                    str_vect.push_back(to_string(val));
                }
                return str_vect;
            }
            else if constexpr(is_same<T, string>::value){
                return datos;
            }
            else if constexpr(is_same<T,vect>::value){
                vector<string> str_vect;
                for(auto val: datos){
                    str_vect.push_back(to_string(val));  
                }
                 return str_vect;
            }
            
        }
      
};