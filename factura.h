#ifndef FACTURA_H
#define FACTURA_H

#include <QDialog>
#include "tienda.h"


namespace Ui {
class Factura;
}

class Factura : public QDialog
{
    Q_OBJECT

public:
    explicit Factura(QWidget *parent = nullptr);

    ~Factura();

    QString tienda() const;

    void setTienda(const QString &tienda);


private:
    Ui::Factura *ui;
    QString m_tienda;
};

#endif // FACTURA_H
