/*
    This file is part of CuteBode.

    CuteBode is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CuteBode is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CuteBode.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <QList>
#include <QShortcut>

#include "trf.h"
#include "plot.h"

#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<Trf *> trfList;
    Plot *plot;
    QShortcut *shortAdd;
    QShortcut *shortDelete;
    QShortcut *shortView;
    QShortcut *shortQuit;

private slots:
    void addType();
    void deleteType();
    void viewPlot();
};

#endif // MAINWINDOW_H
