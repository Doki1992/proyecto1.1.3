#ifndef PRODUCCION_INSTRUCCION3_H
#define PRODUCCION_INSTRUCCION3_H
#include"produccion_instruccion.h"
#include"produccion_lista_asignacion.h"
class produccion_instruccion3:public produccion_instruccion
{
public:
    produccion_lista_asignacion*pl;
    produccion_instruccion3(produccion_lista_asignacion*pl);
    virtual QString accept(visitor *v);
};

#endif // PRODUCCION_INSTRUCCION3_H
