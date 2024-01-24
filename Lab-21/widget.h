#ifndef WIDGET_H
#define WIDGET_H

#include <QFrame>

#include <QCheckBox>
#include <QComboBox>
#include <QCommandLinkButton>
#include <QDateEdit>
#include <QDateTimeEdit>
#include <QDial>
#include <QDoubleSpinBox>
#include <QFocusFrame>
#include <QFontComboBox>
#include <QLCDNumber>
#include <QLabel>
#include <QLineEdit>
#include <QMenu>
#include <QProgressBar>
#include <QPushButton>
#include <QRadioButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QSizeGrip>
#include <QSlider>
#include <QSpinBox>
#include <QTabBar>
#include <QTabWidget>
#include <QTimeEdit>
#include <QToolBox>
#include <QToolButton>
#include <QWidget>

#include <QCalendarWidget>
#include <QListView>
#include <QTableView>
#include <QTreeView>
#include <QUndoView>

#include <QGroupBox>
#include <QStackedWidget>



class Widget : public QWidget {
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void changeInfo(QString);
private:
    QFrame *frame;
    QLabel *frame_description_text;
};

class myQCheckBox: public QCheckBox {
    Q_OBJECT
public:
    myQCheckBox(QWidget* parent = nullptr);
protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
signals:
    void info(QString);
};

class myQComboBox: public QComboBox {
    Q_OBJECT
public:
    myQComboBox(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQCommandLinkButton: public QCommandLinkButton {
    Q_OBJECT
public:
    myQCommandLinkButton(QWidget* parent = nullptr);
protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
signals:
    void info(QString);
};

class myQDateEdit: public QDateEdit {
    Q_OBJECT
  public:
    myQDateEdit(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQDateTimeEdit: public QDateTimeEdit {
    Q_OBJECT
  public:
    myQDateTimeEdit(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQDial: public QDial {
    Q_OBJECT
  public:
    myQDial(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQDoubleSpinBox: public QDoubleSpinBox {
    Q_OBJECT
  public:
    myQDoubleSpinBox(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQFocusFrame: public QFocusFrame {
    Q_OBJECT
  public:
    myQFocusFrame(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQFontComboBox: public QFontComboBox {
    Q_OBJECT
  public:
    myQFontComboBox(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQLCDNumber: public QLCDNumber {
    Q_OBJECT
  public:
    myQLCDNumber(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQLabel: public QLabel {
    Q_OBJECT
  public:
    myQLabel(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQLineEdit: public QLineEdit {
    Q_OBJECT
  public:
    myQLineEdit(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQMenu: public QMenu {
    Q_OBJECT
  public:
    myQMenu(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQProgressBar: public QProgressBar {
    Q_OBJECT
  public:
    myQProgressBar(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQPushButton: public QPushButton {
    Q_OBJECT
  public:
    myQPushButton(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);

};

class myQRadioButton: public QRadioButton {
    Q_OBJECT
  public:
    myQRadioButton(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQScrollArea: public QScrollArea {
    Q_OBJECT
  public:
    myQScrollArea(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQScrollBar: public QScrollBar {
    Q_OBJECT
  public:
    myQScrollBar(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQSizeGrip: public QSizeGrip {
    Q_OBJECT
  public:
    myQSizeGrip(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQSlider: public QSlider {
    Q_OBJECT
  public:
    myQSlider(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQSpinBox: public QSpinBox {
    Q_OBJECT
  public:
    myQSpinBox(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQTabBar: public QTabBar {
    Q_OBJECT
  public:
    myQTabBar(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQTabWidget: public QTabWidget {
    Q_OBJECT
  public:
    myQTabWidget(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQTimeEdit: public QTimeEdit {
    Q_OBJECT
  public:
    myQTimeEdit(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQToolBox: public QToolBox {
    Q_OBJECT
  public:
    myQToolBox(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQToolButton: public QToolButton {
    Q_OBJECT
  public:
    myQToolButton(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQWidget: public QWidget {
    Q_OBJECT
  public:
    myQWidget(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQCalendarWidget : public QCalendarWidget {
    Q_OBJECT
  public:
    myQCalendarWidget(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQListView: public QListView {
    Q_OBJECT
  public:
    myQListView(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQTableView : public QTableView {
    Q_OBJECT
  public:
    myQTableView(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQTreeView : public QTreeView {
    Q_OBJECT
  public:
    myQTreeView(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQUndoView : public QUndoView {
    Q_OBJECT
  public:
    myQUndoView(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQGroupBox : public QGroupBox {
    Q_OBJECT
  public:
    myQGroupBox(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

class myQStackedWidget: public QStackedWidget {
    Q_OBJECT
  public:
    myQStackedWidget(QWidget* parent = nullptr);
  protected:
    void mouseMoveEvent(QMouseEvent* mouse_event);
  signals:
    void info(QString);
};

#endif // WIDGET_H
