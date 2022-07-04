#include "acerca.h"

#include "ui_acerca.h"

acerca::acerca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acerca)
{
    ui->setupUi(this);
    m_version = "v 0.0";
    m_valor = 7; // Valor random xd
}

acerca::~acerca()
{
    delete ui;
}

void acerca::setVersion(const QString &newVersion)
{
    m_version = newVersion;
    ui->outVersion->setText("v" + m_version);
}

int acerca::valor() const
{
    return m_valor;
}
