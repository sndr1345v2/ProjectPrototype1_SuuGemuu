#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QDebug>
#include <QApplication>
#include <principal.h>

QSqlDatabase data;
bool conBase();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Principal principal;
    principal.Start();

    return a.exec();




}


bool conBase(){

    data=QSqlDatabase::addDatabase("QPSQL");
    data.setHostName("localhost");
    data.setPort(5432);//Set the port to specify where it's running on
    data.setDatabaseName("postgres");
    data.setPassword("1234");
    data.setUserName("postgres");


    if(!data.open()){

        qDebug()<<"Error al abrir base de datos";
        return false;
    }
    else{

        qDebug()<<"Conectado";
        return true;
    }

}

void desconBase()
{
    data.close();
    //data.removeDatabase(QSqlDatabase::defaultConnection);

}
