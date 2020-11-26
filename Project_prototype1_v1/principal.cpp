#include "principal.h"

Principal::Principal()
{
    inicio= new inicio_dialog();
    recom = new recommend_dialog();


}

void Principal::Start()
{
    inicio->exec();
}
