#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>

namespace net
{

class client : public QObject
{
    Q_OBJECT
public:
    explicit client(QObject *parent = 0);

signals:

public slots:
};

}
#endif // CLIENT_H
