#include "principal.h"

Principal::Principal(QObject *parent) : QObject(parent)
{
    inicio = new inicio_dialog();
    recom = new recommend_dialog();

    QObject::connect(inicio, SIGNAL(inicia_recomend(bool)), this, SLOT(start_recom()));

}

void Principal::start()
{
    inicio->exec();
}

void Principal::start_recom()
{
    recom->exec();
}
