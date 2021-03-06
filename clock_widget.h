#ifndef CLOCK_H
#define CLOCK_H

#include <QWidget>

class Clock : public QWidget
{
	Q_OBJECT
	public:
		Clock(QWidget* parent = 0);

		void paintEvent(QPaintEvent*);
		void timerEvent(QTimerEvent*);
        void drawHand(int value, Qt::GlobalColor color,
                      QPainter* p, int size);

	private:
		int _hours; 
		int _minutes; 
		int _seconds; 
};


#endif 
