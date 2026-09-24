# 598APE-HW1

Please checkout the opt branches 1, 2, 3, 4 to check the performance at each optimization. Within the main branch, opt 5 and 5.1 can be toggled between by commenting out the bounds checking code in triangle.cpp (once in getIntersection and once in getLightIntersection). In each branch, run these commands:

```bash
./main.exe -i inputs/pianoroom.ray --ppm -o output/pianoroom.ppm -H 500 -W 500
```


```bash
./main.exe -i inputs/globe.ray --ppm  -a inputs/globe.animate --movie -F 24 
```


```bash
./main.exe -i inputs/elephant.ray --ppm  -a inputs/elephant.animate --movie -F 24 -W 100 -H 100 -o output/sphere.mp4 
```
