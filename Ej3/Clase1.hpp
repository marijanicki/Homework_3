#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
class Clase1{
    private:
        vector<T> datos;
    public:
        void add(T new_data){datos.push_back(new_data);}
        void show(){
            for(auto val : datos){
                cout <<val<<endl;}
        }
};