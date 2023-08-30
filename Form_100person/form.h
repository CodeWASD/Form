#ifndef FORM_H
#define FORM_H

#include <QDialog>
#include <QVector>



class Person{
public:
    QString name        {""};
    QString lastname    {""};
    QString address     {""};
    int     age         {0};
    int     number      {0};
    int     id          {0};
};
namespace Ui {
class Form;
}

class Form : public QDialog
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    QString str();

    const Person &getPerson() const;
    void setPerson(Person pr);
    void changToString(int r);


private slots:

    void on_bnt_accept_clicked();

    void on_btn_cancel_clicked();


private:
    Ui::Form *ui;
    Person d;



};


#endif // FORM_H
