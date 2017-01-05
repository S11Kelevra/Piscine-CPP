#include <QApplication>

#include "window.hpp"
#include "Hour.hpp"
#include "Hostname.hpp"
#include "OSInfo.hpp"
#include "CPU.hpp"
#include "Network.hpp"
#include "RAM.hpp"
#include "Ncurses.hpp"
#include "GraphMode.hpp"
#include <unistd.h>

void            initWindowGraph() {



}


int         main(int argc, char **argv)
{
    std::cout << "Choose your display" << std::endl << "1: Graphic" << std::endl << "2: Terminal" << std::endl;
    std::string input;
    std::cin >> input;
    if (input == "1")
    {
        QApplication app(argc, argv);
        Hour        *hour = new Hour();
        Hostname    *hostname = new Hostname();
        OSInfo      *osinfo = new OSInfo();
        CPU         *cpuinfo = new CPU();
        RAM         *ram = new RAM();
        Network     *network = new Network();
        Window      window(hour, hostname, osinfo, cpuinfo, ram, network);
        
        window.show();
        app.exec();
    }
    else if (input == "2")
    {
        Ncurses display;
        display.start();
    }
    else
        std::cout << "ERROR: Please choose 1 or 2." << std::endl;
    return 0;
}
