## 1. Reference path generation.

### (1) Reference path search.

![lattice-search-smooth.png](https://i.loli.net/2020/05/12/kfT3H5G9ALMOUl6.png)

The graph search method is used to find a collision-free reference path around the reference points. In the image above, the red points are the reference points input to the program. The orange curve is the approximation of these points using B-spline. A set of points are sampled uniformly along the orange curve, and shifted laterally to get the light blue points. Then we use Dijkstra's algorithm on these points to find a new reference path (the green curve). The cost function consists of two terms: the deviation from the global path, and the distance to the closest obstacle.

### (2) Reference path smoothing

The green curve is smoothed to get the yellow curve. There are several smoothing implementations in the program, but I haven't decided which is the best one  So I'll just skip this part.

## 2. Path optimization.

