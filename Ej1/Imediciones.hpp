#pragma once
#include <fstream>

using namespace std;
class Imediciones{
    public:
        virtual void serializar(ofstream& out)= 0;
        virtual void deserializar(ifstream& in)= 0;
        virtual ~Imediciones();
};