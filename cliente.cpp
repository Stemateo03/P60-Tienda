#include "cliente.h"

const QString &Cliente::nombre() const
{
    return m_nombre;
}

void Cliente::setNombre(const QString &newNombre)
{
    m_nombre = newNombre;
}

const QString &Cliente::email() const
{
    return m_email;
}

void Cliente::setEmail(const QString &newEmail)
{
    m_email = newEmail;
}

const QString &Cliente::direccion() const
{
    return m_direccion;
}

void Cliente::setDireccion(const QString &newDireccion)
{
    m_direccion = newDireccion;
}

int Cliente::cedula() const
{
    return m_cedula;
}

void Cliente::setCedula(int newCedula)
{
    m_cedula = newCedula;
}

int Cliente::telefono() const
{
    return m_telefono;
}

void Cliente::setTelefono(int newTelefono)
{
    m_telefono = newTelefono;
}

Cliente::Cliente(QObject *parent) : QObject(parent)
{

}

Cliente::Cliente(const QString &nombre, int cedula, int telefono, const QString &email, const QString &direccion, QObject *parent) : QObject(parent),
    m_nombre(nombre),
    m_email(email),
    m_direccion(direccion),
    m_cedula(cedula),
    m_telefono(telefono)
{

}
