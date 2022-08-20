# QtLanguageChange
Qt 语言切换方法
窗体加上检测语言切换检测事件函数
```C++
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
```
## 控件翻译必须放在函数中，发生切换语言时，要刷新UI翻译如下
```c++
void MainWindow::retranslateUi()
{
    setWindowTitle(QApplication::translate("MainWindow","翻译测试",nullptr));
    labelLanguage->setText(QApplication::translate("MainWindow","语言",nullptr));
}
```
## 获取程序下language目录中的所有语言名字，以文件名为语言名字
```C++
QStringList languagelist = Language().getLanguagelist();
```
## 设置程序语言
```C++
Language().setLanguage(languagename);
```
