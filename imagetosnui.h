#ifndef IMAGETOSNUI_H
#define IMAGETOSNUI_H

#include <QWidget>

namespace Ui {
class ImageToSNUI;
}

class ImageToSNUI : public QWidget
{
    Q_OBJECT

public:
    explicit ImageToSNUI(QWidget *parent = nullptr);
    ~ImageToSNUI();

private:
    Ui::ImageToSNUI *ui;
};

#endif // IMAGETOSNUI_H
