#include "mainwindow.h"

#include <QApplication>
#include "Libs/mupdf/fitz.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //
    QString filename;
    fz_context* ctx = fz_new_context(NULL, NULL, FZ_STORE_DEFAULT);
    fz_document* doc = fz_open_document(ctx, pdfFilePath);
    //
    return a.exec();
}
