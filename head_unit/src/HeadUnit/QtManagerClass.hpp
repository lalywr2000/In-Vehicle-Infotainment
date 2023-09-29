#ifndef QTMANAGERCLASS_HPP
#define QTMANAGERCLASS_HPP


#include <QObject>

#include "HeadUnitSenderClass.hpp"


class QtManagerClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(quint16 sensorRpm READ sensorRpm WRITE setSensorRpm NOTIFY sensorRpmChanged)
    		
private:
    HeadUnitSenderClass sender;
    
    quint16 QsensorRpm;

public:
    explicit QtManagerClass(QObject *parent = nullptr);
    
    quint16 sensorRpm() const;
    void setSensorRpm(uint16_t _sensorRpm);
    
public Q_SLOTS:
    Q_INVOKABLE void setGear(quint16 _gear);
    Q_INVOKABLE void setDirection(quint16 _direction);

signals:
    void sensorRpmChanged();
};


extern QtManagerClass carinfo;


#endif

