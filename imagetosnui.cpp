#include "imagetosnui.h"
#include "ui_imagetosnui.h"

ImageToSNUI::ImageToSNUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageToSNUI)
{
    ui->setupUi(this);
}

ImageToSNUI::~ImageToSNUI()
{
    delete ui;
}
