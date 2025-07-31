#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NoteManager.h"

class NoteManager : public QMainWindow
{
    Q_OBJECT

public:
    NoteManager(QWidget *parent = nullptr);
    ~NoteManager();

private:
    Ui::NoteManagerClass ui;
};

