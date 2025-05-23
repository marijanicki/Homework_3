#include "Imediciones.hpp"
#include <memory>

using namespace std;

class MedicionBase : public Imediciones{
    protected:
        unique_ptr<float> tiempoMedicion;
    public:
        MedicionBase();
        float getTiempo();
        virtual void imprimir();
};