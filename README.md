#Train project

##Description

The aim of this project is to simulate trains.

The railroad is a circle with N train stations. Each train station can load or unload a "Packet" with a train station destination.

2 trains can pass each other only at a train station. The faster train leaves first.

Each train run in it separate thread where every  logic stand. Train station are empty, only pop ups packet.

When 2 trains are at the same station, packet with get the fastest train are taken in the fastest train if enough space is available.

A train has :

- a name
- a cargo size
- a localisation on the track
- a speed (nb track per second)
 
A packet has:

- an id
- a size
- a destination
- a "get the fastest train option"
 
A train station has:

- a name
- a localisation on the track
- a list of packet 
- a list of train at dock

The track has :

- a list of localization
