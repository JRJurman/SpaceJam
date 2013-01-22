#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class GLWidget;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

private slots:

private:
    enum { NumRows = 2, NumColumns = 3 };

    GLWidget *currentGlWidget;
};

#endif // WINDOW_H
