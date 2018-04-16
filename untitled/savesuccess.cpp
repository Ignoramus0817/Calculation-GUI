#include "savesuccess.h"
#include "ui_savesuccess.h"

SaveSuccess::SaveSuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveSuccess)
{
    ui->setupUi(this);
}

SaveSuccess::~SaveSuccess()
{
    delete ui;
}
