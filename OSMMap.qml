
import QtQuick 2.0
import QtLocation 5.6
import QtPositioning 5.6

Map {
    width: parent.width
    height: parent.height
	visible:true
    Plugin {
        id: osmPlugin
        name: "osm"
        }
	plugin:osmPlugin
    zoomLevel: 12
	center :QtPositioning.coordinate(48.8995, 2.3301)
}



