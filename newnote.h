#ifndef NEWNOTE_H
#define NEWNOTE_H

#include <QDialog>

namespace Ui {
class newNote;
}

class newNote : public QDialog
{
    Q_OBJECT

public:
    explicit newNote(QWidget *parent = nullptr);
    ~newNote();

private:
    Ui::newNote *ui;
};

#endif // NEWNOTE_H
