#include "watchlistwidgetstock.h"
#include "ui_watchlistwidgetstock.h"

WatchlistWidgetStock::WatchlistWidgetStock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WatchlistWidgetStock)
{
    ui->setupUi(this);
}

WatchlistWidgetStock::~WatchlistWidgetStock()
{
    delete ui;
}
