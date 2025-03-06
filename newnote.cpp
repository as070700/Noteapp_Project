#include "newnote.h"
#include "ui_newnote.h"

newNote::newNote(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::newNote)
{
    ui->setupUi(this);
}

newNote::~newNote()
{
    delete ui;
}
