#ifndef HIP_WIDGET_H
#define HIP_WIDGET_H

#include <QBrush>
#include <QFont>
#include <QPen>
#include <QGLWidget>

QT_BEGIN_NAMESPACE
class QPainter;
class QPaintEvent;
class QWidget;
QT_END_NAMESPACE

class HipWidget : public QGLWidget
{
	Q_OBJECT
    enum CurrentMode{HIP, CURRENT, APHOTIC};
    const static int MAX_FONT = 50;
public: 
	HipWidget( QWidget *parent);
    void paint(QPainter *painter, QPaintEvent *event);

public slots:
	void animate();

protected:
	void paintEvent(QPaintEvent *event);
    void switchMode();

private: 
	QBrush background;
	QFont textFont;
	QPen hipPen;
	QPen aphoticPen;
	QPen currentPen;
	int elapsed;
	float curFontSize;
	CurrentMode currentMode;
    QString text;
};

#endif
