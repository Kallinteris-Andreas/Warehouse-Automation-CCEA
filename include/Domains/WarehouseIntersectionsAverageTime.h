#pragma once

#include <vector>
#include <list>
#include <Eigen/Eigen>
#include "Agents/Intersection.h"
#include "Warehouse.h"

using std::vector ;
using std::list ;

class WarehouseIntersectionsAverageTime : public Warehouse {
  public:
    WarehouseIntersectionsAverageTime(YAML::Node configs) : Warehouse(configs){}
    ~WarehouseIntersectionsAverageTime(void) ;
    
    void SimulateEpoch(bool train = true) ;
    void SimulateEpoch(vector<size_t> team) ;
    
    void InitialiseMATeam() ; // create agents for each vertex in graph
    
  private:
    void QueryMATeam(vector<size_t>, vector<double>&, vector<size_t>&) ; // get current graph costs
    void GetJointState(vector<Edge *> e, vector<size_t> &eNum, vector<double> &eTime) ;
    size_t GetAgentID(int) ;
    
};
