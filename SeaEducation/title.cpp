//
// Created by Khoa Vo on 06/10/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_title.h" resolved

#include "title.h"
#include "ui_title.h"


title::title(QWidget *parent) :
        QWidget(parent), ui(new Ui::title) {
    ui->setupUi(this);
}

title::~title() {
    delete ui;
}
