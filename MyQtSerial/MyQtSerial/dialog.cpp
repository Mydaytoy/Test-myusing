/*********************************************************************
*@Author			: chenjiaru
*@Data				: 2022-05-11 14:30
*@LastWditTime		: 2022-05-12 12:46
*@Description		: All of the function about usart in this file
*********************************************************************/


#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    /*start from this*/

    /*初始状态串口未打开标志位*/
    PortIsOpen = false;
    /*初始状态禁止发送数据*/
    ui->BtnSendData->setEnabled(PortIsOpen);
    /*自动识别有效串口号并显示*/
    QList<QSerialPortInfo>serialPorInfo = QSerialPortInfo::availablePorts();
    int count = serialPorInfo.count();
    for(int i = 0; i<count; i++)
    {
        ui->CboxSerialPort->addItem( serialPorInfo.at(i).portName() );
    }
    /*连接*/
   connect(&mSerialPort,SIGNAL(readyRead()),this,SLOT(on_SerialPort_readyRead()));

}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::getSerialPortConfig()
{
    /*获取串口配置信息*/
    mPortName = ui->CboxSerialPort->currentText();
    mBaudRate = ui->CboxBaudRate->currentText();
    mParity = ui->CboxParity->currentText();
    mDataBits = ui->CboxDataBits->currentText();
    mStopBits = ui->CboxStopBits->currentText();

    /*配置串口*/
/*端口号*/
    mSerialPort.setPortName(mPortName);
/*波特率*/
    if(mBaudRate == "9600")
    {
        mSerialPort.setBaudRate(QSerialPort::Baud9600);
    }
    else if(mBaudRate == "19200")
    {
        mSerialPort.setBaudRate(QSerialPort::Baud19200);
    }
    else
    {
        mSerialPort.setBaudRate(QSerialPort::Baud115200);
    }
/*奇偶校验位*/
    if(mParity == "偶校验")
    {
        mSerialPort.setParity(QSerialPort::EvenParity);
    }
    else if(mParity == "奇校验")
    {
        mSerialPort.setParity(QSerialPort::OddParity);
    }
    else/*无校验*/
    {
        mSerialPort.setParity(QSerialPort::NoParity);
    }
/*数据位*/
    if(mDataBits == "5")
    {
        mSerialPort.setDataBits(QSerialPort::Data5);
    }
    else if(mDataBits == "6")
    {
        mSerialPort.setDataBits(QSerialPort::Data6);
    }
    else if(mDataBits == "7")
    {
        mSerialPort.setDataBits(QSerialPort::Data7);
    }
    else/*8数据位*/
    {
        mSerialPort.setDataBits(QSerialPort::Data8);
    }
/*停止位*/
    if(mStopBits == "2")
    {
        mSerialPort.setStopBits(QSerialPort::TwoStop);
    }
    else if(mStopBits == "1.5")
    {
        mSerialPort.setStopBits(QSerialPort::OneAndHalfStop);
    }
    else/*1停止位*/
    {
        mSerialPort.setStopBits(QSerialPort::OneStop);
    }

   /*打开串口并返回结果*/
    return mSerialPort.open(QSerialPort::ReadWrite);
}

/*点击打开串口/关闭串口，进入此函数*/
void Dialog::on_BtnOpenSerial_clicked()
{
    if(PortIsOpen == true)
    {
        /*设置此时串口状态为关闭*/
        PortIsOpen = false;
        mSerialPort.close();
        /*串口关闭时，允许设置，不允许发送*/
        ui->BtnOpenSerial->setText("打开串口");
        ui->BtnSendData->setEnabled(PortIsOpen);
        ui->CboxParity->setEnabled(true);
        ui->CboxBaudRate->setEnabled(true);
        ui->CboxDataBits->setEnabled(true);
        ui->CboxStopBits->setEnabled(true);
        ui->CboxSerialPort->setEnabled(true);
    }
    else
    {
        if( true == getSerialPortConfig() )
        {
            /*设置此时串口状态为打开*/
            qDebug() << mPortName << "打开成功";
            PortIsOpen = true;
            ui->BtnOpenSerial->setText("关闭串口");
            /*串口打开时，允许发送，不允许设置*/
            ui->BtnSendData->setEnabled(PortIsOpen);
            ui->CboxParity->setEnabled(false);
            ui->CboxBaudRate->setEnabled(false);
            ui->CboxDataBits->setEnabled(false);
            ui->CboxStopBits->setEnabled(false);
            ui->CboxSerialPort->setEnabled(false);
        }
        else
        {
            qDebug() << mPortName << "打开失败";
        }
    }

}
/*点击发送按钮，进入此函数，往串口写入数据*/
void Dialog::on_BtnSendData_clicked()
{
    if(PortIsOpen)
    {
        mSerialPort.write(ui->textEdit->toPlainText().toStdString().c_str());
    }
}
/*串口接收数据信号响应，进入此函数，获取数据并显示到接收文本框*/
void Dialog::on_SerialPort_readyRead()
{
    if(PortIsOpen)
    {
        QByteArray recvData = mSerialPort.readAll();
        ui->textBrowser->append(QString(recvData));
    }
}
