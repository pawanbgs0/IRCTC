#include <bits/stdc++.h>
using namespace std;

// JanSatabadi Express
// {Patna, Mokama, Hathidah, jhajha, Jasidih, Asansol, Durgapur, Howrah}

// VikramShila Express
// {Bhagalpur, kiul, Hathidah, Mokama, Patna, Ara, Kanpur, Anand Vihar}

// Archna Express 
// {Patna, Ara, Varansi, Amethi, Lucknow, Moradabad, Ludhiana, Jammu Tawi}

class RailwaySystem;
class Station;
class Train;
class RouteMap;

class RailwaySystem
{
    int TotalTrains;
    int TotalStations;
    unordered_map<int, string> ListOfTrains;
    unordered_map<int, string> ListofStations;
    public:
        RailwaySystem();
        int getTotalTrains() const;
        int getTotalStations() const;
        unordered_map<int, string> getListOfTrains() const;
        unordered_map<int, string> getListOfStations() const;

        void addTrain(Train t);
        void addStation(Station s);

        friend RouteMap;
};

class Station
{
    static int stationCounter;

    int stationId;
    string stationName;
    vector<Train> stoppage;
    public: 
        Station();
        Station(string name);
        int getStationId() const;
        string getStationName() const;
};

int Station::stationCounter = 0;

class Train
{
    static int trainConuter;

    int TrainNo;
    string TrainName;
    vector<Station> destinations;
    vector<vector<int>> seats;
    public:
        Train();
        Train(string name);
        int getTrainNo() const;
        string getTrainName() const;
};

int Train::trainConuter = 100;

class RouteMap // Graph
{
    RailwaySystem rs;
    vector<vector<int>> adjList;

    public:
        void inputTrains();
        void inputStations();
        void buildGraph();
};