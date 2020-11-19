#include "principal.h"


Principal::Principal(QObject *parent) : QObject(parent)
{

    ini = new inicio_dialog();
    reg = new registro_dialog();
    men = new menu_dialog();

    QObject::connect(ini, SIGNAL(registrar()), this, SLOT(abrirRegistro()));

    QObject::connect(reg, SIGNAL(enviaRevisaUsuario(QString,QString)),this,SLOT(recibeRevisaUsuario(QString,QString)));

    QObject::connect(this,SIGNAL(regresaBool(int)),reg,SLOT(recibeBool(int)));

    QObject::connect(reg, SIGNAL(enviaRegistro(Cuenta)), this, SLOT(agregaRegistro(Cuenta)));

    //QObject::connect(ini, SIGNAL(validar(QString,QString)),men, SLOT(recibe(QString, QString)));

    QObject::connect(ini, SIGNAL(enviaUsuario(QString,QString)), this, SLOT(recibeUsuario(QString,QString)));

    QObject::connect(this,SIGNAL(enviaDatosUsuario(QString,QString,QString)),men,SLOT(recibeDatosUsuario(QString,QString,QString)));

    //QObject::connect(men, SIGNAL(enviaEditDatos(QString,QString,QString,QString)),this,SLOT(recibeEditDatos(QString,QString,QString,QString)));

}



void Principal::comenzar()
{
    ini->exec();
}

void Principal::abrirRegistro()
{
    ini->setVisible(false);
    reg->exec();
}

void Principal::abrirMenu()
{
    men->cargarLibros();
    men->exec();


}

void Principal::recibeRevisaUsuario(QString name, QString mail)
{

    conBase();
    if(!database.isOpen()){

        qDebug()<<"Error.";
        return;

    }
    QSqlQuery query;


    query.prepare("select*from usuario where usuario='"+name+"'or correo='"+mail+"'");

    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;
        }
        if(count==1){

            qDebug()<<"Usuario o correo existente, por favor eliga otro.";
            /*QMessageBox e;
            e.setWindowTitle("        ");
            e.setText("Usuario o correo existente, por favor eliga otro.");
            e.exec();*/

            emit regresaBool(1);
        }

    }


}

void Principal::recibeUsuario(QString name, QString password)
{

    conBase();
    QSqlQuery query;
    query.prepare("select*from usuario where usuario='"+name+"'and pass='"+password+"'");

    if(query.exec()){
        int count=0;
        while(query.next()){
            count++;

            QString correo, usuario, password;
            correo= query.value(0).toString();
            usuario= query.value(1).toString();
            password= query.value(2).toString();
            emit enviaDatosUsuario(usuario,correo,password);
        }
    if(count==1){

        qDebug()<<"Access";

        desconBase();
        ini->setVisible(false);
        abrirMenu();

    }
    else if(count<1)
    {
        QMessageBox e;
        e.setWindowTitle("        ");
        e.setText("Error. Usuario o contraseña incorrectos");//si no se encontró usuario
        e.exec();

    }
    desconBase();
}

}

void Principal::agregaRegistro(Cuenta cuenta)
{
    cuenta.getMail();
    cuenta.getPassword();
    cuenta.getName();

    conBase();
    if(!database.isOpen()){
        qDebug()<<"Error.";
        return;
    }

    QSqlQuery query;
    query.prepare("insert into usuario (correo,usuario,pass) values ('"+cuenta.getMail()+"','"+cuenta.getName()+"','"+cuenta.getPassword()+"')");
    if(query.exec()){
        qDebug()<<"Guaradado";
    }
    desconBase();

    ini->setVisible(true);
}






/*
void Principal::recibeEditDatos(QString name, QString mail, QString password, QString user)
{



    for(int i=0; i<listaUsuarios.size();i++)
    {
      qDebug()<<"INFO:"<<listaUsuarios[i].getMail();//obtienen datos para guardar en arreglo (array)
      qDebug()<<"INFO:"<<listaUsuarios[i].getName();
      qDebug()<<"INFO:"<<listaUsuarios[i].getPassword();

      if(listaUsuarios[i].getName()==user)
      {
          listaUsuarios[i].setName(name);
          listaUsuarios[i].setMail(mail);
          listaUsuarios[i].setPassword(password);
      }

    }

    guardarEnDisco();




    //Regresar a este método después para ver sobre guardar directamente con listas
    //Acá una página donde lo explican: http://www.davideling.it/2014/02/qt5-json-serialization/

    /*QFile jsonFile("users.json");


    if(jsonFile.open(QIODevice::ReadWrite))
    {


        QByteArray jsonFileData = jsonFile.readAll();
        jsonFile.close();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFileData);

        QJsonObject rootObject = jsonDocument.object(); //Se transforma el documento entero en un objeto

        //QJsonValue usersObj = rootObject.value("users");//Busca la llave del arreglo del objeto

        QJsonValueRef ArrayRef = rootObject.find("users").value();

        QJsonArray Array = ArrayRef.toArray();
        //Se asigna a arreglo la llave en memoria

        int i = 0;

        int value = 0;



        QJsonArray::iterator ArrayIterator = Array.begin();
        foreach (const QJsonValue & v, Array) //Busca en el arreglo por los valoresJSON del arreglo
        {



            if(v.toObject().value("name").toString()==user)
            {
                qDebug()<<"POSICION ENCONTRADO:"<<i;

                value = i;

            }

            qDebug()<<"POSICION:"<<i;

            i++;

        }

        QJsonValueRef ElementOneValueRef = ArrayIterator[11];


        QJsonObject ElementOneObject = ElementOneValueRef.toObject();


        ElementOneObject.insert("mail", QJsonValue(mail));
        ElementOneObject.insert("name", QJsonValue(name));
        ElementOneObject.insert("password", QJsonValue(password));
        //ElementOneObject.insert("name", QJsonValue(QString("David")));


        // Make modifications to ElementOneObject

        ElementOneValueRef = ElementOneObject;

        ArrayRef = Array;

        jsonDocument.setObject(rootObject);

        //QByteArray finalData = jsonDocument.toJson();
        //jsonDocument.setObject(rootObject);

        jsonFile.open(QIODevice::ReadWrite);

        jsonFile.write(jsonDocument.toJson());

        jsonFile.close();*/

/*

        QByteArray jsonFileData = jsonFile.readAll();
        jsonFile.close();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFileData);
        QJsonObject rootObject = jsonDocument.object(); //Se transforma el documento entero en un objeto

        QJsonValue usersArrayValue = rootObject.value("users");//Busca la llave del arreglo del objeto
        QJsonArray usersArray = usersArrayValue.toArray(); //Se asigna a arreglo la



       QJsonObject newObject;

        newObject["mail"] = mail;
        newObject["name"] = name;
        newObject["password"] = password;

        int i =0;



        foreach (const QJsonValue & v, usersArray) //Busca en el arreglo por los valoresJSON del arreglo
        {



            if(v.toObject().value("name").toString()==user)
            {
                qDebug()<<"POSICION ENCONTRADO:"<<i;


                usersArray.removeAt(i);

                usersArray.replace(i,newObject);

            }

            qDebug()<<"POSICION:"<<i;

            i++;

        }





        rootObject.remove("users");

        rootObject.insert("users", usersArray);

        QJsonDocument newDoc(rootObject);

        QByteArray finalData = newDoc.toJson();

        jsonFile.open(QIODevice::ReadWrite);

        jsonFile.write(finalData);

        jsonFile.close();










}*/




/*
void Principal::imprimirLista()
{
    for(int i=0; i<listaUsuarios.size(); i++)
    {

        qDebug()<<"Mail:"<<listaUsuarios[i].getMail();
        qDebug()<<"Name:"<<listaUsuarios[i].getName();
        qDebug()<<"Password:"<<listaUsuarios[i].getPassword();
    }
}*/



/*void Principal::cargarDesdeDisco(QString r)
{

    QFile jsonFile(r);


    if(jsonFile.open(QIODevice::ReadOnly| QIODevice::Text))
    {


        QByteArray jsonFileData = jsonFile.readAll();
        jsonFile.close();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFileData);
        QJsonObject jsonObject = jsonDocument.object(); //Se transforma el documento entero en un objeto

        QJsonValue usersArrayValue = jsonObject.value("users");//Busca la llave del arreglo del objeto
        QJsonArray usersArray = usersArrayValue.toArray(); //Se asigna a arreglo la llave en memoria

        foreach (const QJsonValue & v, usersArray) //Busca en el arreglo por los valoresJSON del arreglo
        {
            Cuenta c;

            c.setMail(v.toObject().value("mail").toString());//Indexa y transforma de objeto a cadena
            c.setName(v.toObject().value("name").toString());
            c.setPassword(v.toObject().value("password").toString());

            listaUsuarios.push_back(c);


            qDebug() << v.toObject().value("mail").toString();//Indexa y transforma de objeto a cadena
            qDebug() << v.toObject().value("name").toString();
            qDebug() << v.toObject().value("password").toString();



            qDebug() << "\n";




        }

    }
    else
    {
        qDebug()<<"Archivo no existe o se encuentra corrupto.";
    }

}



void Principal::guardarEnDisco()
{

    //Regresar a este método después para ver sobre guardar directamente con listas
    //Acá una página donde lo explican: http://www.davideling.it/2014/02/qt5-json-serialization/

    QFile jsonFile("users.json");


    if(jsonFile.open(QIODevice::ReadWrite))
    {


        QByteArray jsonFileData = jsonFile.readAll();
        jsonFile.close();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFileData);
        QJsonObject rootObject = jsonDocument.object(); //Se transforma el documento entero en un objeto

        QJsonValue usersObj = rootObject.value("users");//Busca la llave del arreglo del objeto
        QJsonArray usersArray = usersObj.toArray(); //Se asigna a arreglo la llave en memoria



        QJsonObject newObject;

        newObject["mail"] = cuenta.getMail();
        newObject["name"] = cuenta.getName();
        newObject["password"] = cuenta.getPassword();

        usersArray.push_back(newObject);



        QJsonObject userObject;

        userObject["users"] = usersArray;

        QJsonDocument newDoc(userObject);

        QByteArray finalData = newDoc.toJson();

        jsonFile.open(QIODevice::ReadWrite);

        jsonFile.write(finalData);

        jsonFile.close();





    QFile jsonFile("users.json");


    if(jsonFile.open(QIODevice::ReadWrite))
    {






    QJsonObject u;//objeto principal

    QJsonArray usersArray;//arreglo principal

    for(int i=0; i<listaUsuarios.size();i++)
    {
      qDebug()<<"INFO:"<<listaUsuarios[i].getMail();//obtienen datos para guardar en arreglo (array)
      qDebug()<<"INFO:"<<listaUsuarios[i].getName();
      qDebug()<<"INFO:"<<listaUsuarios[i].getPassword();



        u["mail"] = listaUsuarios[i].getMail();//obtienen datos para guardar en arreglo (array)
        u["name"] = listaUsuarios[i].getName();
        u["password"] = listaUsuarios[i].getPassword();


        usersArray.append(u);// inserta en arreglo JsonObject

    }




    QJsonObject obj;//se define un nuevo objeto para encapsular los demás objetos

    obj["users"] = usersArray;//define el nombre del objeto y se asigna el arreglo


    QJsonDocument newDoc(obj);//se crea el documento con el nuevo objeto

    QByteArray finalData = newDoc.toJson();// comprime a JSON

    jsonFile.write(finalData);//Escribe QByteArray

      }
}






void Principal::posicionObjeto()
{

    QFile jsonFile("users.json");


    if(jsonFile.open(QIODevice::ReadWrite))
    {


        QByteArray jsonFileData = jsonFile.readAll();
        jsonFile.close();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFileData);
        QJsonObject rootObject = jsonDocument.object(); //Se transforma el documento entero en un objeto

        QJsonValue usersObj = rootObject.value("users");//Busca la llave del arreglo del objeto
        QJsonArray usersArray = usersObj.toArray(); //Se asigna a arreglo la llave en memoria


        foreach (const QJsonValue & v, usersArray) //Busca en el arreglo por los valoresJSON del arreglo
        {


            v.toObject().value("mail").toString();//Indexa y transforma de objeto a cadena
            v.toObject().value("name").toString();
            v.toObject().value("password").toString();

        }



        /*QJsonObject newObject;

        newObject["mail"] = mail;
        newObject["name"] = name;
        newObject["password"] = password;

        usersArray.removeAt(0);

        usersArray.insert(0,newObject);

        rootObject.remove("users");

        rootObject.insert("users", usersArray);

        QJsonDocument newDoc(rootObject);

        QByteArray finalData = newDoc.toJson();
        //jsonDocument.setObject(rootObject);

        jsonFile.open(QIODevice::ReadWrite);

        jsonFile.write(finalData);

        jsonFile.close();


    }*/




/*QByteArray jsonFileData = jsonFile.readAll();
        jsonFile.close();

        QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonFileData);
        QJsonObject jsonObject = jsonDocument.object(); //Se transforma el documento entero en un objeto

        //QJsonValue usersArrayValue = jsonObject.value("users");//Busca la llave del arreglo del objeto
        //QJsonArray usersArray = usersArrayValue.toArray(); //Se asigna a arreglo la llave en memoria
        */





