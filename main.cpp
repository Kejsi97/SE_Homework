#include <QFile>
#include <QTextStream>
#include <QString>
#include <iostream>

using namespace std;

int main(){
    QTextStream qcin(stdin);
    //String to write at output file
    QString str;
    qcin >> str;
   // QString str ="Hello";
    QFile file("out.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return 1;

        QTextStream out(&file);
        out << str << "\n";
    return 0;
}
