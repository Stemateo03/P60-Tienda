#ifndef ACERCA_H
#define ACERCA_H

#include <QDialog>

namespace Ui {
class acerca;
}

class acerca : public QDialog
{
    Q_OBJECT

public:
    explicit acerca(QWidget *parent = nullptr);
    ~acerca();

    void setVersion(const QString &newVersion);

    int valor() const;

private:
    Ui::acerca *ui;
    QString m_version;
    int m_valor;
};

#endif // ACERCA_DE_H
