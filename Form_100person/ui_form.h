/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QFormLayout *formLayout;
    QLabel *lbl_name;
    QLineEdit *line_name;
    QLabel *lbl_lastname;
    QLineEdit *line_lastname;
    QLabel *lbl_id;
    QLineEdit *line_id;
    QLabel *lbl_number;
    QLineEdit *line_number;
    QLabel *lbl_age;
    QSpinBox *sbox_age;
    QLabel *lbl_address;
    QLineEdit *line_addres;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancel;
    QPushButton *bnt_accept;

    void setupUi(QDialog *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(318, 376);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);"));
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 17, 189);"));

        verticalLayout->addWidget(label);

        line = new QFrame(Form);
        line->setObjectName(QString::fromUtf8("line"));
        QFont font1;
        font1.setPointSize(15);
        line->setFont(font1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lbl_name = new QLabel(Form);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));
        lbl_name->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lbl_name);

        line_name = new QLineEdit(Form);
        line_name->setObjectName(QString::fromUtf8("line_name"));
        line_name->setMinimumSize(QSize(0, 30));
        line_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_name);

        lbl_lastname = new QLabel(Form);
        lbl_lastname->setObjectName(QString::fromUtf8("lbl_lastname"));
        lbl_lastname->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lbl_lastname);

        line_lastname = new QLineEdit(Form);
        line_lastname->setObjectName(QString::fromUtf8("line_lastname"));
        line_lastname->setMinimumSize(QSize(0, 30));
        line_lastname->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_lastname);

        lbl_id = new QLabel(Form);
        lbl_id->setObjectName(QString::fromUtf8("lbl_id"));
        lbl_id->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbl_id);

        line_id = new QLineEdit(Form);
        line_id->setObjectName(QString::fromUtf8("line_id"));
        line_id->setMinimumSize(QSize(0, 30));
        line_id->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_id);

        lbl_number = new QLabel(Form);
        lbl_number->setObjectName(QString::fromUtf8("lbl_number"));
        lbl_number->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lbl_number);

        line_number = new QLineEdit(Form);
        line_number->setObjectName(QString::fromUtf8("line_number"));
        line_number->setMinimumSize(QSize(0, 30));
        line_number->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, line_number);

        lbl_age = new QLabel(Form);
        lbl_age->setObjectName(QString::fromUtf8("lbl_age"));
        lbl_age->setStyleSheet(QString::fromUtf8("color: rgb(28, 113, 216);"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lbl_age);

        sbox_age = new QSpinBox(Form);
        sbox_age->setObjectName(QString::fromUtf8("sbox_age"));
        sbox_age->setMinimumSize(QSize(0, 30));
        sbox_age->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, sbox_age);

        lbl_address = new QLabel(Form);
        lbl_address->setObjectName(QString::fromUtf8("lbl_address"));
        lbl_address->setStyleSheet(QString::fromUtf8("color: rgb(0, 17, 189);\n"
"color: rgb(28, 113, 216);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lbl_address);

        line_addres = new QLineEdit(Form);
        line_addres->setObjectName(QString::fromUtf8("line_addres"));
        line_addres->setMinimumSize(QSize(0, 30));
        line_addres->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, line_addres);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_cancel = new QPushButton(Form);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 5, 115);"));

        horizontalLayout->addWidget(btn_cancel);

        bnt_accept = new QPushButton(Form);
        bnt_accept->setObjectName(QString::fromUtf8("bnt_accept"));
        bnt_accept->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 17, 189);\n"
"background-color: rgb(33, 5, 115);"));

        horizontalLayout->addWidget(bnt_accept);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(bnt_accept, line_name);
        QWidget::setTabOrder(line_name, line_lastname);
        QWidget::setTabOrder(line_lastname, line_id);
        QWidget::setTabOrder(line_id, line_number);
        QWidget::setTabOrder(line_number, sbox_age);
        QWidget::setTabOrder(sbox_age, line_addres);
        QWidget::setTabOrder(line_addres, btn_cancel);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QDialog *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Form", "Form:", nullptr));
        lbl_name->setText(QCoreApplication::translate("Form", "Name:", nullptr));
        line_name->setText(QString());
        lbl_lastname->setText(QCoreApplication::translate("Form", "Lastname:", nullptr));
        line_lastname->setText(QString());
        lbl_id->setText(QCoreApplication::translate("Form", "Id:", nullptr));
        line_id->setText(QString());
        lbl_number->setText(QCoreApplication::translate("Form", "Number:", nullptr));
        line_number->setText(QString());
        lbl_age->setText(QCoreApplication::translate("Form", "Age:", nullptr));
        lbl_address->setText(QCoreApplication::translate("Form", "Address:", nullptr));
        line_addres->setText(QString());
        btn_cancel->setText(QCoreApplication::translate("Form", "Cancel", nullptr));
        bnt_accept->setText(QCoreApplication::translate("Form", "Accept", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
