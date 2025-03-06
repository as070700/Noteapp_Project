/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *addNoteButton;
    QPushButton *displayNotesButton;
    QPushButton *deleteNoteButton;
    QPushButton *editNoteButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 20, 281, 81));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        addNoteButton = new QPushButton(centralwidget);
        addNoteButton->setObjectName("addNoteButton");
        addNoteButton->setGeometry(QRect(100, 170, 181, 51));
        displayNotesButton = new QPushButton(centralwidget);
        displayNotesButton->setObjectName("displayNotesButton");
        displayNotesButton->setGeometry(QRect(100, 250, 181, 51));
        deleteNoteButton = new QPushButton(centralwidget);
        deleteNoteButton->setObjectName("deleteNoteButton");
        deleteNoteButton->setGeometry(QRect(100, 410, 181, 51));
        editNoteButton = new QPushButton(centralwidget);
        editNoteButton->setObjectName("editNoteButton");
        editNoteButton->setGeometry(QRect(100, 330, 181, 51));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Willkommen bei Noteapp!", nullptr));
        addNoteButton->setText(QCoreApplication::translate("MainWindow", "Neue Notiz hinzuf\303\274gen", nullptr));
        displayNotesButton->setText(QCoreApplication::translate("MainWindow", "Notizen ansehen", nullptr));
        deleteNoteButton->setText(QCoreApplication::translate("MainWindow", "Notizen l\303\266schen", nullptr));
        editNoteButton->setText(QCoreApplication::translate("MainWindow", "Notizen bearbeiten", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
