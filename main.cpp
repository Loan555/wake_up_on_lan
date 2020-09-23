#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<controller/controlpconoff.h>
#include <controller/wol.h>
#include <QDesktopWidget>
#include <QMainWindow>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;


    int sock;
      mac_addr_t *( *funcp )( char **args, int length ) = nextAddrFromArg;
      wol_header_t *currentWOLHeader = (wol_header_t *) malloc( sizeof( wol_header_t ));
      char **args                    = (char **) malloc( argc * ARGS_BUF_MAX * sizeof( char ));
      int length                     = argc;
      int argument;

      strncpy( currentWOLHeader->remote_addr, REMOTE_ADDR, ADDR_LEN );



   // turn_on_pc("54:48:10:db:9c:d8");
    return app.exec();
}
