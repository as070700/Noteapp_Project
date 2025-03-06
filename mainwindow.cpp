#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addNoteButton_clicked() {
    bool ok;
    QString title = QInputDialog::getText(this, tr("Titel der Notiz"), tr("Titel:"), QLineEdit::Normal, "", &ok);
    if (ok && !title.isEmpty()) {
        QString content = QInputDialog::getText(this, tr("Inhalt der Notiz"), tr("Inhalt:"), QLineEdit::Normal, "", &ok);
        if (ok) {
            Note note;
            note.title = title.toStdString();
            note.content = content.toStdString();
            if (notebook.addNote(note)) {
                QMessageBox::information(this, tr("Erfolg"), tr("Notiz hinzugefügt."));
            } else {
                QMessageBox::warning(this, tr("Fehler"), tr("Fehler beim Hinzufügen der Notiz."));
            }
        }
    }
}

void MainWindow::on_displayNotesButton_clicked() {
    QString notesText;
    for (const auto& note : notebook.getNotes()) {
        notesText += QString::fromStdString(note.title) + "\n" + QString::fromStdString(note.content) + "\n\n";
    }
    QMessageBox::information(this, tr("Notizen"), notesText);
}

void MainWindow::on_editNoteButton_clicked() {
    bool ok;
    int index = QInputDialog::getInt(this, tr("Notiz bearbeiten"), tr("Nummer der Notiz:"), 1, 1, notebook.getNotes().size(), 1, &ok);
    if (ok) {
        Note note = notebook.getNotes()[index - 1];
        QString title = QInputDialog::getText(this, tr("Neuer Titel"), tr("Titel:"), QLineEdit::Normal, QString::fromStdString(note.title), &ok);
        if (ok) {
            QString content = QInputDialog::getText(this, tr("Neuer Inhalt"), tr("Inhalt:"), QLineEdit::Normal, QString::fromStdString(note.content), &ok);
            if (ok) {
                note.title = title.toStdString();
                note.content = content.toStdString();
                if (notebook.editNote(index - 1, note)) {
                    QMessageBox::information(this, tr("Erfolg"), tr("Notiz bearbeitet."));
                } else {
                    QMessageBox::warning(this, tr("Fehler"), tr("Fehler beim Bearbeiten der Notiz."));
                }
            }
        }
    }
}

void MainWindow::on_deleteNoteButton_clicked() {
    bool ok;
    int index = QInputDialog::getInt(this, tr("Notiz löschen"), tr("Nummer der Notiz:"), 1, 1, notebook.getNotes().size(), 1, &ok);
    if (ok) {
        if (notebook.deleteNote(index - 1)) {
            QMessageBox::information(this, tr("Erfolg"), tr("Notiz gelöscht."));
        } else {
            QMessageBox::warning(this, tr("Fehler"), tr("Fehler beim Löschen der Notiz."));
        }
    }
}
