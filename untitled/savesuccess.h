#ifndef SAVESUCCESS_H
#define SAVESUCCESS_H

#include <QDialog>

namespace Ui {
class SaveSuccess;
}

class SaveSuccess : public QDialog
{
    Q_OBJECT

public:
    explicit SaveSuccess(QWidget *parent = 0);
    ~SaveSuccess();

private:
    Ui::SaveSuccess *ui;
};

#endif // SAVESUCCESS_H
