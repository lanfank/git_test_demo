#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //点击新建 弹出对话框
    connect(ui->actionNew,&QAction::triggered , [=](){


        //对话框分类
        //模态对话框    不可以对其他窗口进行操作
        //非模态对话框  可以对其他窗口进行操作

        //模态创建
//        QDialog dlg(this);
//        dlg.resize(120,30);
//        dlg.exec();

//        //非模态创建
//        //QDialog dlg(this);
//        QDialog * dlg = new QDialog(this);
//        dlg->resize(120,30);
//        dlg->show();
//        //设置属性   55号
//        dlg->setAttribute(Qt::WA_DeleteOnClose);
//        qDebug() << "打开对话框";


        //QMessageBox弹出

        //错误
        //QMessageBox::critical(this,"critical","错误");


        //信息
        //QMessageBox::information(this,"info","信息");

        //询问  参数1  父窗口  参数2  标题  参数3  提示信息   参数4  按键类型   参数5  默认关联回车按键
//        if( QMessageBox::Save ==
//       QMessageBox::question(this,"ques","询问",QMessageBox::Save | QMessageBox::Cancel,QMessageBox::Cancel))
//        {
//            qDebug() << "点击的是保存";
//        }
//        else
//        {
//            qDebug() << "点击的是取消";
//        }

        //警告
        //QMessageBox::warning(this,"warning","警告");


        //颜色对话框
//         QColor color = QColorDialog::getColor(QColor(255,0,0));
//         qDebug() << color.red() << color.green() << color.blue();

         //文件对话框  参数1  父窗口  参数2  标题     参数3  默认打开路径   参数4  过滤文件格式
//          QString str = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\zhangtao\\Desktop","(*.docx *.exe)");
//          qDebug() <<str;

        //字体对话框
          bool ok;
          QFont font = QFontDialog::getFont(&ok,QFont("华文彩云",36));
          qDebug() << "字体："<<font.family().toUtf8().data() << "字号：" << font.pointSize()
                   << "是否加粗："<<font.bold() << "是否倾斜： "<< font.italic();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
