import QtQuick 2.4
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

Item {
    id: root
    width: 400
    height: 400

    RowLayout {
        id: btnLayout
        x: 92
        y: 292
        width: 300
        height: 100
        anchors.right: parent.right
        anchors.rightMargin: 30
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 30

        Button {
            id: button
            x: 132
            y: 318
            text: qsTr("Button")
        }

        Button {
            id: button1
            x: 218
            y: 297
            text: qsTr("Button")
        }

        Button {
            id: button2
            x: 277
            y: 328
            text: qsTr("Button")
        }
    }
}
