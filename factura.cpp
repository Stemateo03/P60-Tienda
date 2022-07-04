#include "factura.h"
#include "ui_factura.h"

Factura::Factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Factura)
{
    ui->setupUi(this);

}

Factura::~Factura()
{
    delete ui;
}

QString Factura::tienda() const
{
    return m_tienda;
}

void Factura::setTienda(const QString &tienda)
{
    m_tienda = tienda;
    ui->outTitulo->setText(m_tienda);
}



