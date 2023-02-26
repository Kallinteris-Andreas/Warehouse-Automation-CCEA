# multiagent_learning

Fork includes 6 new agents definitions:
 - Centralized with avg time
 - Intersection with avg time
 - Link with avg time
 - Centralized with both time
 - Intersection with both time
 - Link with both time


## Installation ##

### Linux ###

Install system dependencies:
```
sudo apt install libboost-dev libeigen3-dev libyaml-cpp-dev
```

In the working folder of your choice, clone the project code:
```
git clone https://github.com/Kallinteris-Andreas/Warehouse-Automation-CCEA.git
```
Build the code:
```
cd build
cmake ..
make
```

## Running preconfigured projects

Run the project configured by `config.yaml` using six threads:
```
./testWarehouse -c ../config.yaml -t 6
```
Consult the documentation (Multiagent_neuro_evolution_for_learning_traffic_management_policies.pdf) for details about configuration file options.
