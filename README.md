# prerequisite

```
sudo apt-get install libgtest-dev
sudo apt-get install cmake # install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib
```

# How to use

```
mkdir build
cd build
cmake ..
make
```


# How to test

```
cd build && make test
```
