#ifndef CSKINSET_H_
#define CSKINSET_H_

#include <QString>
#include <QWidget>

class CSkinSet
{
public:
    CSkinSet();
    ~CSkinSet();

    // ����qss��ʽ�ļ�
    void loadQssConfig(QWidget *obj);

    // ��ȡqss��ʽ�ļ�·��
    QString getQssFilePath(const QString &objName);

};

#endif /*CSKINSET_H_*/
