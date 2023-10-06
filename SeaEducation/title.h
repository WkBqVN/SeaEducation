//
// Created by Khoa Vo on 06/10/2023.
//

#ifndef SEAEDUCATION_TITLE_H
#define SEAEDUCATION_TITLE_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class title; }
QT_END_NAMESPACE

class title : public QWidget {
Q_OBJECT

public:
    explicit title(QWidget *parent = nullptr);

    ~title() override;

private:
    Ui::title *ui;
};


#endif //SEAEDUCATION_TITLE_H
