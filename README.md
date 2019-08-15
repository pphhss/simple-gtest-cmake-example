# prerequisite

```
sudo apt-get install libgtest-dev
sudo apt-get install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib
```

# How to use

```
vim CMakeLists.txt
```
and you should edit gtest library path (line -  CMakeLists.txt:20,21)


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
