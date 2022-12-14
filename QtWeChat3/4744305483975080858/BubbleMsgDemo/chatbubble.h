#ifndef CHATBUBBLE_H
#define CHATBUBBLE_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QHBoxLayout>
#include <QSlider>
#include <QScrollBar>
#include <QTimer>
#include <QMenu>
#include "unit.h"
#include "global.h"


class ItemInfo;
class BubbleListPrivate;
class BubbleList: public QWidget
{
    Q_OBJECT
public:
    BubbleList(QWidget* parent = 0);
    ~BubbleList();

public:
    /// proxy public interfaces for PYFlashListPrivate
    void addItem(ItemInfo *item);
    void addItems(QVector<ItemInfo*> items);

    void clear();

    void render();

    void setCurrItem(const int &index) {
        scrollbar->setValue(index);
    }

protected:
    QSize sizeHint() const
    {
        return QSize(SIZE_HINT);
    }

    void resizeEvent(QResizeEvent *);


private:
    /// private utility functoins
    void initVars();
    void initWgts();
    void initStgs();
    void initConns();

    void calcGeo();

private Q_SLOTS:
    void setMaximum(int max);

private:
    QHBoxLayout* mainLayout;
    QScrollBar* scrollbar;
    BubbleListPrivate* d;

Q_SIGNALS:
    void sig_setCurrentIndex(int currIndex);
    void sig_itemClicked(const QString& str);
    void signalDownloadFile(const QString &fileName);
};

class BubbleListPrivate : public QWidget
{
    Q_OBJECT
public:
    explicit BubbleListPrivate(QWidget *parent = 0);

public:
    /// public interfaces
    void addItem(ItemInfo *item);
    void addItems(QVector<ItemInfo*> items);

    void clear();

    void render();

    int itemCount() const
    {
        return m_IIVec.count();
    }
public Q_SLOTS:
    void setCurrentIndex(int curIndex);

protected:
    void paintEvent(QPaintEvent *);

    void mouseMoveEvent(QMouseEvent *);

    void mousePressEvent(QMouseEvent *);

    void mouseDoubleClickEvent(QMouseEvent *e);

    void resizeEvent(QResizeEvent *);

    void leaveEvent(QEvent *);

    void showEvent(QShowEvent *);

    void wheelEvent(QWheelEvent *);

private:
    /// painting functions
    void drawBackground(QPainter* painter);//???????????????????????????????????????

    void drawItems(QPainter* painter);//??????ITEM

    void drawHoverRect(QPainter* painter);


private:
    /// private utility functoins
    void initVars();
    void initSettings();
    void calcGeo();
    void wheelUp();
    void wheelDown();

private:
    // ?????????????????????????????????????????????~
    QVector<ItemInfo*> m_IIVec;

    int m_currIndex;
    int m_selectedIndex;
    int m_VisibleItemCnt;
    int m_ItemCounter;

    bool m_bAllJobsDone;

    QRectF m_HoverRect;

    QString m_strHoverText;

    QFont m_font;

    bool    m_bHover;
    int     m_nHoverItemIndex;

private Q_SLOTS:
    void SltFileMenuClicked(QAction *action);
    void SltTextMenuClicked(QAction *action);
Q_SIGNALS:
    void sig_setMaximum(int max);
    void sig_setCurrentIndex(int currIndex);
    void sig_itemClicked(const QString& str);
    void signalDownloadFile(const QString &fileName);

private:
    QMenu *textRightButtonMenu;
    QMenu *picRightButtonMenu;
    QMenu *fileRightButtonMenu;
};
#endif // CHATBUBBLE_H
