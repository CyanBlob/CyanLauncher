import QtQuick 2.0

Item {
    width: 100
    height: 50

    Rectangle {
        id: rectangle
        color: "#00cc00"
        radius: 15
        anchors.fill: parent
        border.color: "#00cc00"

        Text {
            id: text1
            x: 14
            y: 18
            text: qsTr("Launch Game")
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }

}
