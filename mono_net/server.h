#ifndef SERVER_H
#define SERVER_H

#include <QObject>

namespace net
{

class server : public QObject
{
    Q_OBJECT
public:
    explicit server(QObject *parent = 0);

signals:

public slots:
};

}

#endif // SERVER_H
