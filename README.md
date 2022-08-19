# QtLanguageChange
Qt 语言切换方法
窗体加上检测语言切换检测事件函数
···
void MainWindow::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange :
        retranslateUi();
        break;
    default:
        break;
    }
    QMainWindow::changeEvent(e);
}
···
