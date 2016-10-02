#ifndef SPLITTERDIALOG_H
#define SPLITTERDIALOG_H

#include <QDialog>

namespace Ui {
class SplitterDialog;
}

class SplitterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SplitterDialog(QWidget *parent = 0);
    ~SplitterDialog();

private:
    Ui::SplitterDialog *ui;
};

#endif // SPLITTERDIALOG_H
