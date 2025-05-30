#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Clase1.hpp"
using namespace std;

class Clase2{
    private:
        string data;
    public: 
        Clase2(){}
        void asociar_data(Clase1<double> doubles, Clase1<string> str, Clase1<vector<int>> vect_int);
        void make_json(ofstream& out);
        void json_show();
};