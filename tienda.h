#ifndef TIENDA_H
#define TIENDA_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QStandardItemModel>

#include "producto.h"
#include "acerca.h"
#include "factura.h"

#define IVA 0.12
#define VERSION "0.1"
#define TIENDA "Mi tienda"

QT_BEGIN_NAMESPACE
namespace Ui { class Tienda; }
QT_END_NAMESPACE

class QStandarItemModel;

class Tienda : public QMainWindow
{
    Q_OBJECT

public:
    Tienda(QWidget *parent = nullptr);
    ~Tienda();

//    int getColumnas() const;
//    int getFilas() const;


private slots:
    void on_inProducto_currentIndexChanged(int index);

    void on_btnAgregar_released();

    void on_actionGuadar_triggered();

//    void on_actionAbrir_triggered();

    void on_actionNuevo_triggered();

    void on_actionAcerca_de_triggered();

    void on_btnFacturar_clicked();


private:
    Ui::Tienda *ui;
//    QStandardItemModel *mModel;
    QList<Producto*> m_productos;
    void cargarProductos();
    float m_subtotal;

    void calcular(float stProducto);
    void setValueAt(int ix, int jx, const QString &value);



};
#endif // TIENDA_H
