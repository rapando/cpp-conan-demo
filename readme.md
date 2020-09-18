
## Build and run

```
mkdir -p build
cd build
conan install ..

cmake .. -G Ninja
ninja

./bin/db
```


> Reference - https://levelup.gitconnected.com/c-package-management-with-conan-introduction-8c7bd928c009