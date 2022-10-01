#pragma once

#include <vector>
#include <list>
#include <Eigen/Eigen>
#include "Agents/Intersection.h"
#include "Warehouse.h"
#include <numeric>
#include <ranges>


using std::vector ;
using std::list ;

class WarehouseCentralisedBothTime : public Warehouse {
  public:
    WarehouseCentralisedBothTime(YAML::Node configs) : Warehouse(configs){}
    ~WarehouseCentralisedBothTime(void) ;
    
    void SimulateEpoch(bool train = true) ;
    void SimulateEpoch(vector<size_t> team) ;
    
    void InitialiseMATeam() ; // create agents for each vertex in graph
    
  private:
    void QueryMATeam(vector<size_t>, vector<double>&, vector<size_t>&) ; // get current graph costs
    void GetJointState(vector<Edge *> e, vector<size_t> &eNum, vector<double> &eTime) ;
    
};
