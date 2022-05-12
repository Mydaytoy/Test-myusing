/*********************************************************************
*@Author			: chenjiaru
*@Data				: 2022-05-11 14:30
*@LastWditTime		: 2022-05-12 12:46
*@Description		: All of the function about usart in this file
*********************************************************************/


#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}
