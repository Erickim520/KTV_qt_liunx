#ifndef FRAME_PY_H
#define FRAME_PY_H

#include <QFrame>
#include <QAbstractButton>

namespace Ui {
class Frame_py;
}

class Frame_py : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_py(QWidget *parent = 0);
    ~Frame_py();
public slots:
    void QButtonGroup_py(QAbstractButton *);
signals:
    void  signal_py(QString);
private:
    Ui::Frame_py *ui;
};

#endif // FRAME_PY_H
