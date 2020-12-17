#include "watchlist_widget.h"
#include "ui_watchlist_widget.h"
#include "widgets/watchlistwidgetstock.h"

Watchlist_Widget::Watchlist_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Watchlist_Widget)
{
    ui->setupUi(this);
    ui->Block_of_stocks_in_wl->addWidget(new WatchlistWidgetStock());
}

Watchlist_Widget::~Watchlist_Widget()
{
    delete ui;
}

