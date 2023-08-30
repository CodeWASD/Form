#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class QLabel;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_btn_add_clicked();

    void on_btn_edit_clicked();

    void on_btn_delete_clicked();
    void on_table_show_itemSelectionChanged();

    void on_list_input_itemSelectionChanged();

    void on_btn_search_clicked();

    void on_line_search_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    int            index {0};
    QVector<Person> listData;
    Person d;

    QString convertToString(const Person& data);
    void insertRowToTable(const Person& data);
    QLabel *makeLable(const QVariant &text);
    void on_btn_update_clicked();
    void Find_Search();

};
#endif // MAINWINDOW_H
