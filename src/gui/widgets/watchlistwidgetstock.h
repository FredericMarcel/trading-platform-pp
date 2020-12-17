#ifndef WATCHLISTWIDGETSTOCK_H
#define WATCHLISTWIDGETSTOCK_H

#include <QWidget>

namespace Ui {
class WatchlistWidgetStock;
}

class WatchlistWidgetStock : public QWidget
{
    Q_OBJECT

public:
    explicit WatchlistWidgetStock(QWidget *parent = nullptr);
    ~WatchlistWidgetStock();

private:
    Ui::WatchlistWidgetStock *ui;
};

#endif // WATCHLISTWIDGETSTOCK_H
