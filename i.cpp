#include "i.h"

// JanSatabadi Express
// {Patna, Mokama, Hathidah, jhajha, Jasidih, Asansol, Durgapur, Howrah}

// VikramShila Express
// {Bhagalpur, kiul, Hathidah, Mokama, Patna, Ara, Kanpur, Anand Vihar}

// Archna Express 
// {Patna, Ara, Varansi, Amethi, Lucknow, Moradabad, Ludhiana, Jammu Tawi}

RailwaySystem::RailwaySystem()
{
    this->TotalStations = 0;
    this->TotalTrains = 0;
}

int RailwaySystem::getTotalStations() const
{
    return this->TotalStations;
}

int RailwaySystem::getTotalTrains() const
{
    return this->TotalTrains;
}

unordered_map<int, string> RailwaySystem::getListOfStations() const
{
    return this->ListofStations;
}

unordered_map<int, string> RailwaySystem::getListOfTrains() const
{
    return this->ListOfTrains;
}

void RailwaySystem::addTrain(Train t)
{
    this->TotalTrains++;

    this->ListOfTrains[t.getTrainNo()] = t.getTrainName();
}

void RailwaySystem::addStation(Station s)
{
    this->TotalStations++;

    this->ListofStations[s.getStationId()] = s.getStationName();
}

Station::Station()
{
    this->stationId = ++stationCounter;
}

Station::Station(string name)
{
    this->stationName = name;
    this->stationId = ++stationCounter;
}

int Station::getStationId() const
{
    return this->stationId;
}

string Station::getStationName() const
{
    return this->stationName;
}

Train::Train()
{
    this->TrainNo = ++trainConuter;
}

Train::Train(string name)
{
    this->TrainName = name;
    this->TrainNo = ++trainConuter;
}

int Train::getTrainNo() const
{
    return this->TrainNo;
}

string Train::getTrainName() const
{
    return this->TrainName;
}

void RouteMap::inputTrains()
{
    int TrainToAdd;
    
    cout << "Enter the No. of trains to add: ";
    cin >> TrainToAdd;

    for (int i = 0; i < TrainToAdd; i++)
    {
        string name;
        cout << "Enter the train name: ";
        getline(cin, name);

        this->rs.addTrain(Train(name));
    }
}

void RouteMap::inputStations()
{
    int StationsToAdd;

    cout << "Enter the No. of stations to add: ";
    cin >> StationsToAdd;

    for (int i = 0; i < StationsToAdd; i++)
    {
        string name;
        cout << "Enter the station name: ";
        getline(cin, name);

        this->rs.addStation(Station(name));
    }
}

void RouteMap::buildGraph()
{
    int edges;

    int totalStation = this->rs.getTotalStations();

    for (int i = 0; i < totalStation; i++)
    {
        this->adjList.push_back(vector<int>(0));
    }

    cout << "Enter the No. of edges: ";
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        
    }
}