/*********************************************************************
*@Author			: chenjiaru
*@Data				: 2022-05-11 14:30
*@LastWditTime		: 2022-05-12 12:46
*@Description		: All of the function about usart in this file
*********************************************************************/

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QList>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
public:
    bool getSerialPortConfig(void);

private slots:
    void on_BtnOpenSerial_clicked();

    void on_BtnSendData_clicked();

    void on_SerialPort_readyRead();
private:
    Ui::Dialog *ui;
    /*是否打开串口标志变量*/
    bool PortIsOpen;
    /*定义串口配置相关变量*/
    QSerialPort mSerialPort;
    QString mPortName;
    QString mBaudRate;
    QString mParity;
    QString mDataBits;
    QString mStopBits;
};
#endif // DIALOG_H
