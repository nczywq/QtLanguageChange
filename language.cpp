#include "language.h"
QTranslator * tran = new QTranslator;
Language::Language()
{

}

bool Language::setLanguage(QString lang)
{
    qApp->removeTranslator(tran);
    delete tran;
    tran = new QTranslator;
    bool a1 = tran->load(QApplication::applicationDirPath() + "/language/" + lang + ".qm");
    bool a3 = qApp->installTranslator(tran);
    if(a1 && a3) {
        qDebug() << "设置语言:" + lang;
        return true ;
    }
    return false ;
}
