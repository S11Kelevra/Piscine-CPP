#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <QWidget>
#include <QGridLayout>
#include <QTimer>
#include <QObject>

#include "hour.hpp"
#include "hostname.hpp"
#include "OSinfo.hpp"
#include "CPU.hpp"
#include "RAM.hpp"
#include "Network.hpp"

QT_BEGIN_NAMESPACE
class QGroupBox;
QT_END_NAMESPACE


class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    Window(Hour * hour, Hostname * hostname, OSInfo * osinfo, CPU * cpuinfo, RAM * ram, Network *network, QWidget *parent = 0);

private slots:
    void    qt_refresh();

private:
    Hour        *_hour;
    Hostname    *_hostname;
    OSInfo      *_osinfo;
    CPU         *_cpuinfo;
    RAM         *_ram;
    Network     *_network;
    QTimer      *_timer;
    QGridLayout *_grid;
    QGroupBox   *createHourGroup();
    QGroupBox   *createHostNameGroup();
    QGroupBox   *createOSInfoGroup();
    QGroupBox   *createCPUGroup();
    QGroupBox   *createNewGroup();
    QGroupBox   *createPaquetGroup();

};

#endif // WINDOW_HPP

