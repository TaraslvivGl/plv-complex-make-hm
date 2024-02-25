## Description
The are two programs that produce two applications: `calculator` and `converter`.

`calculator` has static library `calc` and can perform simple mathematical operations.

`converter` uses dynamic library `converter`. The application converts an input string to lower/upper case. By default, it is lower. In case the `-u` argument is set then converts to upper case. 

## Build&Run
Building of `converter` app requires superuser privileges.
### Build
```
sudo make #build both calculator and converter
sudo make converter #build converter
make calc #build calculator 
```
### Clean
The following commands clear object, executable, and library files.
```
sudo make clean-all #clear build files and library for converter and calculator
sudo make clean-converter #clear build files and library for converter
sudo make clean-calc #clear build files and library for calc
```
### Run
```
./calculator #run calculator

./converter #run converter to lowercase
./converter -u #run converter to uppercase
```
