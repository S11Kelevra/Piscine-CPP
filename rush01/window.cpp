
#include <QtWidgets>
#include "window.hpp"

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout;
    setLayout(grid);

    setWindowTitle(tr("gkrellm"));
    resize(480, 480);
}

Window::Window(Hour * hour, Hostname * hostname, OSInfo * osinfo, CPU * cpuinfo, RAM * ram, Network *network, QWidget *parent)
    : QWidget(parent), _hour(hour), _hostname(hostname),
      _osinfo(osinfo), _cpuinfo(cpuinfo), _ram(ram), _network(network),
       _timer(new QTimer), _grid(new QGridLayout)
{

    _grid->addWidget(createHourGroup(), 0, 0);
    _grid->addWidget(createHostNameGroup(), 1, 0);
    _grid->addWidget(createOSInfoGroup(), 0, 1);
    _grid->addWidget(createCPUGroup(), 1, 1);
    _grid->addWidget(createNewGroup(), 2, 0);
    _grid->addWidget(createPaquetGroup(), 2, 1);
    setLayout(_grid);
    setWindowTitle(tr("gkrellm"));
    resize(480, 480);

    connect(this->_timer, SIGNAL(timeout()), this, SLOT(qt_refresh()));
    _timer->start(1000);
}

void            Window::qt_refresh()
{
    QLayoutItem * item;
    while ((item = _grid->takeAt(0))) {
        delete item->widget();
        delete item;
    }
    _grid->addWidget(createHourGroup(), 0, 0);
    _grid->addWidget(createHostNameGroup(), 1, 0);
    _grid->addWidget(createOSInfoGroup(), 0, 1);
    _grid->addWidget(createCPUGroup(), 1, 1);
    _grid->addWidget(createNewGroup(), 2, 0);
    _grid->addWidget(createPaquetGroup(), 2, 1);
    setLayout(_grid);
    resize(480, 480);
    update();
}

QGroupBox       *Window::createHourGroup()
{

    QGroupBox   *groupBox = new QGroupBox(tr("Date/Time"));

    QLabel      *Label_hour = new 	QLabel(QString(_hour->getHour()));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Label_hour);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox       *Window::createHostNameGroup()
{
    QGroupBox   *groupBox = new QGroupBox(tr("HostName"));

    
    QLabel      *Label_username = new 	QLabel(QString("Username: ") + QString(_hostname->getUsername()));
    QLabel      *Label_hostname = new 	QLabel(QString("HostName: ") + QString(_hostname->getHostname()));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Label_username);
    vbox->addWidget(Label_hostname);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox       *Window::createOSInfoGroup()
{
    QGroupBox   *groupBox = new QGroupBox(tr("OSInfo"));

    QLabel      *Label_osName = new  QLabel(QString("OS: ") + QString(_osinfo->getOSName()));
    QLabel      *Label_osProductVersion = new  QLabel(QString("Product Version: ") + QString(_osinfo->getOSProductVersion()));
    QLabel      *Label_osBuildVersion = new  QLabel(QString("Build Version: ") + QString(_osinfo->getOSBuildVersion()));
    QLabel      *Label_osType = new  QLabel(QString("OS type: ") + QString(_osinfo->getOSType()));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Label_osName);
    vbox->addWidget(Label_osProductVersion);
    vbox->addWidget(Label_osBuildVersion);
    vbox->addWidget(Label_osType);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}

QGroupBox *Window::createCPUGroup()
{
    QGroupBox *groupBox = new QGroupBox(tr("CPU"));

    QLabel *Label_machine = new      QLabel(QString("Architecture: ") + QString(_cpuinfo->getMachine()));
    QLabel *Label_ncpu = new      QLabel(QString("Heart Number: ") + QString(_cpuinfo->getNCPU()));
    QLabel *Label_clockRate = new      QLabel(QString("Clock Rate: ") + QString(_cpuinfo->getClockRate()));
    QLabel *Label_CPUUsage = new      QLabel(QString("CPU Usage: ") + QString(_cpuinfo->getCPUUsage()));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Label_machine);
    vbox->addWidget(Label_ncpu);
    vbox->addWidget(Label_clockRate);
    vbox->addWidget(Label_CPUUsage);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);

    return groupBox;
}


QGroupBox *Window::createNewGroup()
{
    QGroupBox *groupBox = new QGroupBox(tr("RAM"));

    QLabel *Label_usedRam = new      QLabel(QString("Used RAM: ") + QString(_ram->getUsedRAM())+ QString(" \%"));
    QLabel *Label_TotalRam = new      QLabel(QString("Total RAM: ") + QString(_ram->getTotalRAM() + QString(" GB")));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Label_usedRam);
    vbox->addWidget(Label_TotalRam);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);
    return groupBox;
}

QGroupBox *Window::createPaquetGroup()
{
    QGroupBox *groupBox = new QGroupBox(tr("Network"));

    _network->getNetworkValues();
    QLabel *Label_paquet1 = new      QLabel(QString("Input Packets: ") + QString(_network->getInputPacket())+ QString(" K"));
    QLabel *Label_paquet2 = new      QLabel(QString("Output Packets: ") + QString(_network->getOutputPacket()) + QString(" K"));
    QLabel *Label_paquet3 = new      QLabel(QString("Input Bytes: ") + QString(_network->getInputBytes()) + QString(" GB"));
    QLabel *Label_paquet4 = new      QLabel(QString("Output Bytes: ") + QString(_network->getOutputBytes()) + QString(" GB"));

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(Label_paquet1);
    vbox->addWidget(Label_paquet2);
    vbox->addWidget(Label_paquet3);
    vbox->addWidget(Label_paquet4);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);
    return groupBox;
}