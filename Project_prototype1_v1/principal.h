#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <inicio_dialog.h>
#include <recommend_dialog.h>

class Principal
{
public:
    Principal();

    inicio_dialog *inicio;
    recommend_dialog *recom;

    void Start();
};

#endif // PRINCIPAL_H
