#include "libro.h"

Libro::Libro()
{

}

void Libro::set_titulo(QString tit)
{
    titulo=tit;
}

QString Libro::get_titulo()const
{
    return titulo;
}

void Libro::set_autor(QString aut)
{
    autor=aut;
}

QString Libro::get_autor()const
{
    return autor;
}

void Libro::set_editorial(QString edit)
{
    editorial=edit;
}

QString Libro::get_editorial()const
{
    return editorial;
}

void Libro::set_anio(int ani)
{
    anio=ani;
}

int Libro::get_anio()const
{
    return anio;
}

void Libro::set_tipo(QString tip)
{
    tipo=tip;
}

QString Libro::get_tipo()const
{
    return tipo;
}



Libro::Libro(QString titulo, QString autor, QString editorial,int anio, QString tipo)
{
    this->titulo = titulo;
    this->autor = autor;
    this->editorial = editorial;

    this->anio = anio;

    this->tipo = tipo;

}



