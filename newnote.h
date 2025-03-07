#ifndef NEWNOTE_H
#define NEWNOTE_H

#include <QDialog>

namespace Ui {
class NewNote;
}

class NewNote : public QDialog {
    Q_OBJECT

public:
    explicit NewNote(QWidget *parent = nullptr);
    ~NewNote();

    QString getTitle() const;
    QString getContent() const;

private:
    Ui::NewNote *ui;
};

#endif // NEWNOTE_H
