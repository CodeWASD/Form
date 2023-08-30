#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
///
/// \brief MainWindow::on_btn_add_clicked
/// add kardan qt form class va call kardensh vaghti btn_add click shod form open she
void MainWindow::on_btn_add_clicked()
{
    Form *f = new Form(this);

    if(f->exec() == QDialog::Accepted)
    {
        listData.append(f->getPerson());
        on_btn_update_clicked();
        ui->lbl_number->setText(QString::number(100-listData.length()));
        //i++;

    }
    delete f;
}
///
/// \brief MainWindow::convertToString
/// \param data
/// \return
///change kardan dade hay vorody be QString baray chap kardan to list
QString MainWindow::convertToString(const Person &data)
{
    QString str{""};;
    str+=data.name + " ";
    str+=data.lastname + " ";
    str+=QString::number(data.id)+ " ";
    str+=QString::number(data.number)+" ";
    str+= QString::number(data.age) + " ";
    str+= data.address + " ";
    return str;
}
///
/// \brief MainWindow::makeLable
/// \param text
/// \return
///
QLabel * MainWindow::makeLable(const QVariant &text)
{   ///QVariant change kardan har type be type dige to qt
    QLabel *lable = new QLabel(text.toString());
    lable->setAlignment(Qt::AlignCenter);
    return lable;

}
///
/// \brief MainWindow::insertRowToTable
/// \param data
///insert  kardan dade ha  to table
void MainWindow::insertRowToTable(const Person &data)
{
    ui->table_show->insertRow(index);

    ui->table_show->setCellWidget(index, 0, makeLable(data.name));
    ui->table_show->setCellWidget(index, 1, makeLable(data.lastname));
    ui->table_show->setCellWidget(index, 2, makeLable(data.id));
    ui->table_show->setCellWidget(index, 3, makeLable(data.number));
    ui->table_show->setCellWidget(index, 4, makeLable(data.age));
    ui->table_show->setCellWidget(index, 5, makeLable(data.address));
}
///
/// \brief MainWindow::on_btn_update_clicked
///update kardan table va list
void MainWindow::on_btn_update_clicked()
{
    ui->list_input->clear();
    for(int j=0;j<listData.size();j++){
        ui->list_input->addItem(convertToString(listData[j]));
    }

    if(listData.length() > 0)
        insertRowToTable(listData.last());
}
///
/// \brief MainWindow::on_btn_edit_clicked
/// \arg noting
///
void MainWindow::on_btn_edit_clicked()
{
    int cuIndex = ui->list_input->currentRow();
    if(cuIndex < 0)
        return;

    Person pa = listData.at(cuIndex);
    Form *f = new Form(this);
    f->setPerson(pa);
    if(f->exec() == QDialog::Accepted)
    {
        listData[cuIndex] = f->getPerson();
    }
    delete f;
    on_btn_update_clicked();
}

///
/// \brief MainWindow::on_btn_delete_clicked
/// vaghti ye line table ya list select kardim on line pak she
void MainWindow::on_btn_delete_clicked()
{
    int cuIndex = ui->table_show->currentRow();
    if(cuIndex < 0){
        return;}
    listData.pop_back();
    ui->lbl_number->setText(QString::number(100-listData.length()));
    ui->table_show->removeRow(cuIndex);
    ui->list_input->takeItem(cuIndex);
}
///
/// \brief MainWindow::on_table_show_itemSelectionChanged
///age line table select shode hamon line to list select she
void MainWindow::on_table_show_itemSelectionChanged()
{
    int r = ui->table_show->currentRow();
    ui->list_input->setCurrentRow(r);
}
///
/// \brief MainWindow::on_list_input_itemSelectionChanged
///age  line list select shod hamon line to table select she
void MainWindow::on_list_input_itemSelectionChanged()
{
    ui->table_show->setCurrentCell(ui->list_input->currentRow(), 0);
}
///
/// \brief MainWindow::Find_Search
///peyda kardan QString zade shode to line_search
void MainWindow::Find_Search(){
    for(int i=0;i <ui->list_input->count();i++){
        if(ui->list_input->item(i)->text().contains(ui->line_search->text())){
            ui->list_input->setCurrentRow(i);
            ui->table_show->setCurrentCell(i,0);
        }
    }
}
///
/// \brief MainWindow::on_btn_search_clicked
/// call kardan fun Find_search
void MainWindow::on_btn_search_clicked()
{
    Find_Search();
}
///
/// \brief MainWindow::on_line_search_textChanged
/// \param arg1
///  vaghti search mikonim bedon inke dokme search bezanim line table va line list neshon bede
void MainWindow::on_line_search_textChanged(const QString &arg1)
{
    for(int i=0;i <ui->list_input->count();i++){
            if(ui->list_input->item(i)->text().contains(ui->line_search->text())){
                ui->list_input->setCurrentRow(i);
                ui->table_show->setCurrentCell(i,0);
            }
        }
}

