#ifndef BUBLESORTUI_H
#define BUBLESORTUI_H

#include <QWidget>

namespace Ui {
class BubleSortUI;
}

class BubleSortUI : public QWidget
{
    Q_OBJECT

public:
    explicit BubleSortUI(QWidget *parent = nullptr);
    ~BubleSortUI();

private:
    Ui::BubleSortUI *ui;
};

#endif // BUBLESORTUI_H
