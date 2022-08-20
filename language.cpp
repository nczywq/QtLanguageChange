#include "language.h"
QTranslator * tran = new QTranslator;
Language::Language()
{

}

QStringList Language::getLanguagelist()
{
    QDir dir(QApplication::applicationDirPath() + "/language/");
    dir.setFilter(QDir::NoDotAndDotDot | QDir::AllEntries);
    QStringList filelist = dir.entryList();
    QStringList filterlist;
    foreach(auto filename , filelist) {
        if(filename.endsWith(".qm")) {
            filterlist << filename.replace(".qm" , "");
        }
    }
    return filterlist;
}

bool Language::setLanguage(QString lang)
{
    qApp->removeTranslator(tran);
    delete tran;
    tran = new QTranslator;
    bool a1 = tran->load(QApplication::applicationDirPath() + "/language/" + lang + ".qm");
    bool a3 = qApp->installTranslator(tran);
    if(a1 && a3) {
        qDebug() << "Set language: " + lang;
        return true ;
    }
    return false ;
}
