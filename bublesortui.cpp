#include "bublesortui.h"
#include "ui_bublesortui.h"

BubleSortUI::BubleSortUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BubleSortUI)
{
    ui->setupUi(this);
}

BubleSortUI::~BubleSortUI()
{
    delete ui;
}
