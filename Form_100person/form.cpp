#include "form.h"
#include "ui_form.h"


Form::Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}
Form::~Form()
{
    delete ui;
}
///
/// \brief Form::on_bnt_accept_clicked
///  sabt dade hay vared shode form to method class d
void Form::on_bnt_accept_clicked()
{
    d.name = ui->line_name->text();
    d.lastname=ui->line_lastname->text();
    d.id= ui->line_id->text().toUInt();
    d.number= ui->line_number->text().toUInt();
    d.age= ui->sbox_age->text().toUInt();
    d.address= ui->line_addres->text();
    QDialog::accept();
}
///
/// \brief Form::on_btn_cancel_clicked
/// bastan Form
void Form::on_btn_cancel_clicked()
{
    QDialog::reject();

}
///
/// \brief Form::getPerson
/// \return
///estefade kardan az dade hay private ye class to class dige
const Person &Form::getPerson() const
{
    return d;
}
///
/// \brief Form::setPerson
/// func setPerson baray  set kardan dade to form ->on_btn_edit

void Form::setPerson(Person pr)
{
    ui->line_name->setText(pr.name);
    ui->line_lastname->setText(pr.lastname);
    ui->line_id->setText(QString::number(pr.id));
    ui->line_number->setText(QString::number(pr.number));
    ui->line_addres->setText(pr.address);
}


