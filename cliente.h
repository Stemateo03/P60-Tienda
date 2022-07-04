#ifndef CLIENTE_H
#define CLIENTE_H

#include <QObject>

class Cliente : public QObject
{
    Q_OBJECT
private:
    QString m_nombre;
    QString m_email;
    QString m_direccion;
    int m_cedula;
    int m_telefono;
public:
    explicit Cliente(QObject *parent = nullptr);
    Cliente(const QString &nombre, int cedula, int telefono, const QString &email, const QString &direccion, QObject *parent);


    const QString &nombre() const;
    void setNombre(const QString &newNombre);

    const QString &email() const;
    void setEmail(const QString &newEmail);

    const QString &direccion() const;
    void setDireccion(const QString &newDireccion);

    int cedula() const;
    void setCedula(int newCedula);

    int telefono() const;
    void setTelefono(int newTelefono);

signals:

};

#endif // CLIENTE_H
