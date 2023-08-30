/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *list_input;
    QTableWidget *table_show;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLineEdit *line_search;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *lbl_number;
    QPushButton *btn_add;
    QPushButton *btn_edit;
    QPushButton *btn_delete;
    QPushButton *btn_search;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(36, 31, 49);\n"
"color:white;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 17, 189);\n"
"color: rgb(26, 95, 180);\n"
""));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        list_input = new QListWidget(centralwidget);
        list_input->setObjectName(QString::fromUtf8("list_input"));
        list_input->setStyleSheet(QString::fromUtf8("color : #adadad"));
        list_input->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout->addWidget(list_input, 4, 0, 1, 7);

        table_show = new QTableWidget(centralwidget);
        if (table_show->columnCount() < 6)
            table_show->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_show->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_show->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_show->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_show->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_show->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_show->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        table_show->setObjectName(QString::fromUtf8("table_show"));
        table_show->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"selection-background-color: darkblue;\n"
"}"));
        table_show->setSelectionMode(QAbstractItemView::SingleSelection);
        table_show->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_show->horizontalHeader()->setCascadingSectionResizes(false);
        table_show->horizontalHeader()->setMinimumSectionSize(125);
        table_show->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_show->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(table_show, 2, 0, 1, 7);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	\n"
"	color: rgb(28, 113, 216);\n"
"}\n"
""));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 3, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 7, 4, 1, 3);

        line_search = new QLineEdit(centralwidget);
        line_search->setObjectName(QString::fromUtf8("line_search"));

        gridLayout->addWidget(line_search, 0, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 17, 189);"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 6, 1, 1);

        lbl_number = new QLabel(centralwidget);
        lbl_number->setObjectName(QString::fromUtf8("lbl_number"));
        lbl_number->setStyleSheet(QString::fromUtf8("color:#adadad;"));

        gridLayout->addWidget(lbl_number, 7, 1, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 5, 115);"));

        gridLayout->addWidget(btn_add, 15, 5, 1, 1);

        btn_edit = new QPushButton(centralwidget);
        btn_edit->setObjectName(QString::fromUtf8("btn_edit"));
        btn_edit->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	background-color: rgb(33, 5, 115);\n"
"	color:white\n"
"}\n"
""));

        gridLayout->addWidget(btn_edit, 15, 4, 1, 1);

        btn_delete = new QPushButton(centralwidget);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	background-color: rgb(33, 5, 115);\n"
"	color:white\n"
"}"));

        gridLayout->addWidget(btn_delete, 15, 2, 1, 1);

        btn_search = new QPushButton(centralwidget);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	background-color: rgb(33, 5, 115);\n"
"	color:white\n"
"}"));

        gridLayout->addWidget(btn_search, 0, 5, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " List", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table_show->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table_show->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Lastname", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table_show->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table_show->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table_show->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table_show->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Table", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Remain number = ", nullptr));
        lbl_number->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_edit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btn_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
