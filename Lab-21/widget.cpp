#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTabWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *mainLayout = new QHBoxLayout(this);
    QTabWidget *tab = new QTabWidget(this);
    tab->setMinimumSize(400,350);
    mainLayout->addWidget(tab);

    QWidget *tab1 = new QWidget(tab);
    tab->addTab(tab1,"&Basic widgets");

    QWidget *tab2 = new QWidget(tab);
    tab->addTab(tab2,"&Advanced widgets");

    QWidget *tab3 = new QWidget(tab);
    tab->addTab(tab3,"&Organiser widgets");

    QVBoxLayout *layout_tab1 = new QVBoxLayout(tab1);

    myQCheckBox * thisQCheckBox= new myQCheckBox(tab1);
    connect(thisQCheckBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQCheckBox);
    myQComboBox * thisQComboBox= new myQComboBox(tab1);
    connect(thisQComboBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQComboBox);
    myQCommandLinkButton * thisQCommandLinkButton= new myQCommandLinkButton(tab1);
    connect(thisQCommandLinkButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQCommandLinkButton);
    myQDateEdit * thisQDateEdit= new myQDateEdit(tab1);
    connect(thisQDateEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQDateEdit);
    myQDateTimeEdit * thisQDateTimeEdit= new myQDateTimeEdit(tab1);
    connect(thisQDateTimeEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQDateTimeEdit);
    myQDial * thisQDial= new myQDial(tab1);
    connect(thisQDial, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQDial);
    myQDoubleSpinBox * thisQDoubleSpinBox= new myQDoubleSpinBox(tab1);
    connect(thisQDoubleSpinBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQDoubleSpinBox);
    myQFocusFrame * thisQFocusFrame= new myQFocusFrame(tab1);
    connect(thisQFocusFrame, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQFocusFrame);
    myQFontComboBox * thisQFontComboBox= new myQFontComboBox(tab1);
    connect(thisQFontComboBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQFontComboBox);
    myQLCDNumber * thisQLCDNumber= new myQLCDNumber(tab1);
    connect(thisQLCDNumber, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQLCDNumber);
    myQLabel * thisQLabel= new myQLabel(tab1);
    connect(thisQLabel, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQLabel);
    myQLineEdit * thisQLineEdit= new myQLineEdit(tab1);
    connect(thisQLineEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQLineEdit);
    myQMenu * thisQMenu= new myQMenu(tab1);
    connect(thisQMenu, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQMenu);
    myQProgressBar * thisQProgressBar= new myQProgressBar(tab1);
    connect(thisQProgressBar, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQProgressBar);
    myQPushButton * thisQPushButton= new myQPushButton(tab1);
    connect(thisQPushButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQPushButton);
    myQRadioButton * thisQRadioButton= new myQRadioButton(tab1);
    connect(thisQRadioButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQRadioButton);
    myQScrollArea * thisQScrollArea= new myQScrollArea(tab1);
    connect(thisQScrollArea, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQScrollArea);
    myQScrollBar * thisQScrollBar= new myQScrollBar(tab1);
    connect(thisQScrollBar, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQScrollBar);
    myQSizeGrip * thisQSizeGrip= new myQSizeGrip(tab1);
    connect(thisQSizeGrip, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQSizeGrip);
    myQSlider * thisQSlider= new myQSlider(tab1);
    connect(thisQSlider, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQSlider);
    myQSpinBox * thisQSpinBox= new myQSpinBox(tab1);
    connect(thisQSpinBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQSpinBox);
    myQTabBar * thisQTabBar= new myQTabBar(tab1);
    connect(thisQTabBar, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQTabBar);
    myQTabWidget * thisQTabWidget= new myQTabWidget(tab1);
    connect(thisQTabWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQTabWidget);
    myQTimeEdit * thisQTimeEdit= new myQTimeEdit(tab1);
    connect(thisQTimeEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQTimeEdit);
    myQToolBox * thisQToolBox= new myQToolBox(tab1);
    connect(thisQToolBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQToolBox);
    myQToolButton * thisQToolButton= new myQToolButton(tab1);
    connect(thisQToolButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQToolButton);
    myQWidget * thisQWidget= new myQWidget(tab1);
    connect(thisQWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab1->addWidget(thisQWidget);

    QVBoxLayout * layout_tab2 = new QVBoxLayout(tab2);
    myQCalendarWidget * thisQCalendarWidget = new myQCalendarWidget(tab2);
    connect(thisQCalendarWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab2->addWidget(thisQCalendarWidget);
    myQListView * thisQListView = new myQListView(tab2);
    connect(thisQListView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab2->addWidget(thisQListView);
    myQTableView * thisQTableView = new myQTableView(tab2);
    connect(thisQTableView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab2->addWidget(thisQTableView);
    myQTreeView * thisQTreeView = new myQTreeView(tab2);
    connect(thisQTreeView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab2->addWidget(thisQTreeView);
    myQUndoView * thisQUndoView = new myQUndoView(tab2);
    connect(thisQUndoView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab2->addWidget(thisQUndoView);

    QVBoxLayout * layout_tab3 = new QVBoxLayout(tab3);
    myQGroupBox * thisQGroupBox = new myQGroupBox(tab3);
    connect(thisQGroupBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab3->addWidget(thisQGroupBox);
    myQStackedWidget * thisQStackedWidget = new myQStackedWidget(tab3);
    connect(thisQStackedWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    layout_tab3->addWidget(thisQStackedWidget);



    frame = new QFrame(this); //basic, advanced widgets;
    QVBoxLayout * frame_layout = new QVBoxLayout(frame);
    frame->setLayout(frame_layout);
    frame->setMinimumSize(650,500);
    mainLayout->addWidget(frame);

    frame_description_text = new QLabel(frame);
    frame_layout->addWidget(frame_description_text);
    frame_description_text->setText("<h1>This is application</h1><h1>where u can see</h1><h1>all widgets and</h1><h1>get some information</h1><h1>about them</h1>");
    frame_description_text->setMinimumSize(500, 500);


}


Widget::~Widget()
{
}

void Widget::changeInfo(QString s)
{
    frame_description_text->setText(s);
}

myQCheckBox::myQCheckBox(QWidget *parent):QCheckBox(parent)
{setMouseTracking(true);}

void myQCheckBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QCheckBox</h1><p>Виджет, представляющий собой флажок, который пользователь может<br> установить или снять. Основное предназначение - предоставление возможности<br> выбора одного или нескольких вариантов из предложенного списка.<p>");
QCheckBox::mouseMoveEvent(e);}
myQComboBox::myQComboBox(QWidget *parent):QComboBox(parent)
{setMouseTracking(true);}
void myQComboBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QComboBox</h1><p>Элемент интерфейса, представляющий собой выпадающий список с выбором<br> одного элемента из списка опций. Очень полезен для выбора одного варианта<br> из набора.<p>");
QComboBox::mouseMoveEvent(e);}
myQCommandLinkButton::myQCommandLinkButton(QWidget *parent):QCommandLinkButton(parent)
{setMouseTracking(true);}
void myQCommandLinkButton::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QCommandLinkButton</h1><p>Элемент интерфейса, который предоставляет текстовую команду <br>или действие, которое пользователь может выполнить. Часто используется для <br>создания диалоговых окон с явными действиями.<p>");
QCommandLinkButton::mouseMoveEvent(e);}
myQDateEdit::myQDateEdit(QWidget *parent):QDateEdit(parent)
{setMouseTracking(true);}
void myQDateEdit::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QDateEdit</h1><p>Виджет для редактирования даты. Позволяет пользователю вводить и <br>редактировать даты в удобной форме.<p>");
QDateEdit::mouseMoveEvent(e);}
myQDateTimeEdit::myQDateTimeEdit(QWidget *parent):QDateTimeEdit(parent)
{setMouseTracking(true);}
void myQDateTimeEdit::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QDateTimeEdit</h1><p>Аналогичен QDateEdit, но предназначен для редактирования даты и <br>времени в одном виджете.<p>");
QDateTimeEdit::mouseMoveEvent(e);}
myQDial::myQDial(QWidget *parent):QDial(parent)
{setMouseTracking(true);}
void myQDial::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QDial</h1><p>Компонент интерфейса, представляющий собой круглый регулятор, который может<br> быть использован для выбора числовых значений в диапазоне.<p>");
QDial::mouseMoveEvent(e);}
myQDoubleSpinBox::myQDoubleSpinBox(QWidget *parent):QDoubleSpinBox(parent)
{setMouseTracking(true);}
void myQDoubleSpinBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QDoubleSpinBox</h1><p>Виджет для ввода числовых значений с плавающей точкой. Позволяет <br>пользователю выбирать числа с десятичной частью.<p>");
QDoubleSpinBox::mouseMoveEvent(e);}
myQFocusFrame::myQFocusFrame(QWidget *parent):QFocusFrame(parent)
{setMouseTracking(true);}
void myQFocusFrame::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QFocusFrame</h1><p>Элемент, используемый для отображения текущего активного элемента <br>управления в интерфейсе. Обычно используется в качестве визуального индикатора <br>фокуса.<p>");
QFocusFrame::mouseMoveEvent(e);}
myQFontComboBox::myQFontComboBox(QWidget *parent):QFontComboBox(parent)
{setMouseTracking(true);}
void myQFontComboBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QFontComboBox</h1><p>Виджет, предоставляющий пользователю выбор шрифта из доступных на <br>системе. Полезен для настройки внешнего вида текста.<p>");
QFontComboBox::mouseMoveEvent(e);}
myQLCDNumber::myQLCDNumber(QWidget *parent):QLCDNumber(parent)
{setMouseTracking(true);}
void myQLCDNumber::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QLCDNumber</h1><p>Отображает цифровое значение на экране, часто используется для отображения <br>числовых данных, таких как значения счетчиков.<p>");
QLCDNumber::mouseMoveEvent(e);}
myQLabel::myQLabel(QWidget *parent):QLabel(parent)
{setMouseTracking(true);}
void myQLabel::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QLabel</h1><p>Простой виджет для отображения текста или изображений. Используется для вывода <br>информации и меток в интерфейсе.<p>");
QLabel::mouseMoveEvent(e);}
myQLineEdit::myQLineEdit(QWidget *parent):QLineEdit(parent)
{setMouseTracking(true);}
void myQLineEdit::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QLineEdit</h1><p>Поле ввода текста, которое позволяет пользователю вводить и редактировать текст.<p>");
QLineEdit::mouseMoveEvent(e);}
myQMenu::myQMenu(QWidget *parent):QMenu(parent)
{setMouseTracking(true);}
void myQMenu::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QMenu</h1><p>Виджет, представляющий контекстное меню с вариантами действий. Обычно появляется при <br>правом клике мыши.<p>");
QMenu::mouseMoveEvent(e);}
myQProgressBar::myQProgressBar(QWidget *parent):QProgressBar(parent)
{setMouseTracking(true);}
void myQProgressBar::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QProgressBar</h1><p>Отображает прогресс выполнения задачи или операции. Полезен для визуализации <br>хода выполнения длительных задач.<p>");
QProgressBar::mouseMoveEvent(e);}
myQPushButton::myQPushButton(QWidget *parent):QPushButton(parent)
{setMouseTracking(true);}
void myQPushButton::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QPushButton</h1><p>Кнопка, которая может быть нажата пользователем для выполнения определенного <br>действия.<p>");
QPushButton::mouseMoveEvent(e);}
myQRadioButton::myQRadioButton(QWidget *parent):QRadioButton(parent)
{setMouseTracking(true);}
void myQRadioButton::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QRadioButton</h1><p>Позволяет пользователю выбирать один из нескольких вариантов, как и QCheckBox, <br>но обычно используется для взаимоисключающих выборов.<p>");
QRadioButton::mouseMoveEvent(e);}
myQScrollArea::myQScrollArea(QWidget *parent):QScrollArea(parent)
{setMouseTracking(true);}
void myQScrollArea::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QScrollArea</h1><p>Контейнер с полосами прокрутки, который позволяет отображать содержимое, размер <br>которого больше размеров виджета.<p>");
QScrollArea::mouseMoveEvent(e);}
myQScrollBar::myQScrollBar(QWidget *parent):QScrollBar(parent)
{setMouseTracking(true);}
void myQScrollBar::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QScrollBar</h1><p>Предоставляет полосы прокрутки для прокручивания содержимого внутри других виджетов, <br>таких как QScrollArea.<p>");
QScrollBar::mouseMoveEvent(e);}
myQSizeGrip::myQSizeGrip(QWidget *parent):QSizeGrip(parent)
{setMouseTracking(true);}
void myQSizeGrip::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QSizeGrip</h1><p>Виджет, предоставляющий пользователю возможность изменять размер окна, перетаскивая его <br>границы.<p>");
QSizeGrip::mouseMoveEvent(e);}
myQSlider::myQSlider(QWidget *parent):QSlider(parent)
{setMouseTracking(true);}
void myQSlider::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QSlider</h1><p>Ползунок, который пользователь может перетаскивать для выбора значения в определенном <br>диапазоне.<p>");
QSlider::mouseMoveEvent(e);}
myQSpinBox::myQSpinBox(QWidget *parent):QSpinBox(parent)
{setMouseTracking(true);}
void myQSpinBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QSpinBox</h1><p>Позволяет пользователю выбирать целочисленные значения с помощью кнопок вверх и вниз.<p>");
QSpinBox::mouseMoveEvent(e);}
myQTabBar::myQTabBar(QWidget *parent):QTabBar(parent)
{setMouseTracking(true);}
void myQTabBar::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QTabBar</h1><p>Элемент интерфейса, представляющий собой вкладки, которые позволяют пользователю <br>переключаться между разными разделами интерфейса.<p>");
QTabBar::mouseMoveEvent(e);}
myQTabWidget::myQTabWidget(QWidget *parent):QTabWidget(parent)
{setMouseTracking(true);}
void myQTabWidget::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QTabWidget</h1><p>Контейнер для управления несколькими страницами с помощью вкладок. Позволяет <br>организовать информацию в разделы.<p>");
QTabWidget::mouseMoveEvent(e);}
myQTimeEdit::myQTimeEdit(QWidget *parent):QTimeEdit(parent)
{setMouseTracking(true);}
void myQTimeEdit::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QTimeEdit</h1><p>Аналогично QDateEdit, но предназначен для редактирования времени.<p>");
QTimeEdit::mouseMoveEvent(e);}
myQToolBox::myQToolBox(QWidget *parent):QToolBox(parent)
{setMouseTracking(true);}
void myQToolBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QToolBox</h1><p>Контейнер для организации групп элементов в виде раскрывающегося списка. Полезен <br>для компактной организации информации.<p>");
QToolBox::mouseMoveEvent(e);}
myQToolButton::myQToolButton(QWidget *parent):QToolButton(parent)
{setMouseTracking(true);}
void myQToolButton::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QToolButton</h1><p>Виджет-кнопка, который может использоваться для выполнения действий в приложении. <br>Этот виджет особенно полезен в панелях инструментов, где <br>пользователь может быстро получить доступ к часто используемым командам.<p>");
QToolButton::mouseMoveEvent(e);}
myQWidget::myQWidget(QWidget *parent):QWidget(parent)
{setMouseTracking(true);}
void myQWidget::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QWidget</h1><p>Базовый класс для всех виджетов в Qt. Он предоставляет основу для создания пользовательских <br>виджетов и обеспечивает базовую функциональность, <br>такую как обработка событий и управление графикой.<p>");
QWidget::mouseMoveEvent(e);}

myQCalendarWidget::myQCalendarWidget(QWidget *parent):QCalendarWidget(parent)
{setMouseTracking(true);}
void myQCalendarWidget::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QCalendarWidget</h1><p>Представляет собой календарь, который может использоваться для отображения и выбора <br>дат. Это полезно для приложений, связанных с планированием <br>и управлением событиями.<p>");
QCalendarWidget::mouseMoveEvent(e);}
myQListView::myQListView(QWidget *parent):QListView(parent)
{setMouseTracking(true);}
void myQListView::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QListView</h1><p>Этот виджет представляет собой список, используется для отображения и редактирования <br>структурированных данных. QListView подходит для простых списков.<p>");
QListView::mouseMoveEvent(e);}
myQTableView::myQTableView(QWidget *parent):QTableView(parent)
{setMouseTracking(true);}
void myQTableView::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QTableView</h1><p>Этот виджет представляет собой таблицу, используется для отображения и редактирования <br>структурированных данных. QTableView подходит для табличных данных.<p>");
QTableView::mouseMoveEvent(e);}
myQTreeView::myQTreeView(QWidget *parent):QTreeView(parent)
{setMouseTracking(true);}
void myQTreeView::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QTreeView</h1><p>Этот виджет представляет собой дерево, используется для отображения и редактирования <br>структурированных данных. QTableVQTreeView подходит для иерархических данных.<p>");
QTreeView::mouseMoveEvent(e);}
myQUndoView::myQUndoView(QWidget *parent):QUndoView(parent)
{setMouseTracking(true);}
void myQUndoView::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QUndoView</h1><p>Представляет собой виджет для отображения и управления стеком отмены и повтора действий <br>в приложении. Он полезен для создания интерфейса отмены и повтора <br>действий.<p>");
QUndoView::mouseMoveEvent(e);}

myQGroupBox::myQGroupBox(QWidget *parent):QGroupBox(parent)
{setMouseTracking(true);}
void myQGroupBox::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QGroupBox</h1><p>Это контейнерный виджет, который может содержать другие виджеты и предоставляет заголовок <br>и рамку для их группировки. Он полезен для создания группы связанных <br>элементов управления.<p>");
QGroupBox::mouseMoveEvent(e);}
myQStackedWidget::myQStackedWidget(QWidget *parent):QStackedWidget(parent)
{setMouseTracking(true);}
void myQStackedWidget::mouseMoveEvent(QMouseEvent *e)
{emit info("<h1>QStackedWidget</h1><p>Это виджет, который позволяет отображать только один из своих дочерних виджетов одновременно,<br> переключаясь между ними. Это полезно для создания многократных <br>\"страниц \" в интерфейсе, где только одна страница видна в данный момент времени.<p>");
QStackedWidget::mouseMoveEvent(e);}












