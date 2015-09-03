#ifndef POPUP_LIVE_H
#define POPUP_LIVE_H

#include <QWidget>

namespace Ui {
class popup_live;
}

class popup_live : public QWidget
{
    Q_OBJECT

public:
    explicit popup_live(QWidget *parent = 0);
    ~popup_live();

private:
    Ui::popup_live *ui;
};


#endif // POPUP_LIVE_H
