RuleSSL Python Plugin - Robocup ULaval Engine SSL
=================
This is a plugin for the RuleSSL game engine developed for the Laval University's Robocup SSL project.

#Installation

###Dependencies
```sh
sudo apt-get install git build-essential cmake libqt4-dev libqt4-opengl-dev libgl1-mesa-dev libglu1-mesa-dev protobuf-compiler libprotobuf-dev libode-dev libgtkmm-2.4-dev python3-dev libsdl1.2-dev libsdl-image1.2-dev
```
Download and extract Boost 1.57.0
http://sourceforge.net/projects/boost/files/boost/1.57.0/

```sh
cd /path/to/boost/folder/
./bootstrap.sh --with-python=python3.4
./b2
sudo ./b2 install
```

Build the actual project

```sh
cd /path/to/your/projects/folder/
git clone https://github.com/felixpelletier23/RuleSSL_Python.git
cd RuleSSL_Python
mkdir build && cd build
cmake ..
make
```
