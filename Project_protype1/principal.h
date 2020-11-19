#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include <iostream>
#include "cuenta.h"
#include "inicio_dialog.h"
#include "menu_dialog.h"
#include "registro_dialog.h"
#include <QMessageBox>


using namespace std;




class Principal : public QObject
{
    Q_OBJECT


private:



    inicio_dialog *ini;
    registro_dialog*reg;
    menu_dialog *men;


    QString name;
    QString password;
    QString mail;

    //QList <Cuenta> listaUsuarios;


public:

    explicit Principal(QObject *parent = nullptr);
    void comenzar();
    void abrirMenu();


    QSqlDatabase database;

    bool conBase(){

        database=QSqlDatabase::addDatabase("QPSQL");
        database.setHostName("localhost");
        database.setPort(5431);//Set the port to specify where it's running on
        database.setDatabaseName("biblioteca");
        database.setPassword("1234");
        database.setUserName("sandra");


        if(!database.open()){

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
        database.close();
        //database.removeDatabase(QSqlDatabase::defaultConnection);

    }
    //void imprimirLista();

    //void cargarDesdeDisco(QString);
    //void guardarEnDisco();


    //void posicionObjeto();


signals:
    void enviaDatosUsuario(QString,QString,QString);
    void regresaBool(int);

public slots:

    void abrirRegistro();
    void recibeUsuario(QString,QString);
    void recibeRevisaUsuario(QString,QString);

    //void recibeEditDatos(QString,QString,QString,QString);
    void agregaRegistro(Cuenta);



};




#endif // PRINCIPAL_H
