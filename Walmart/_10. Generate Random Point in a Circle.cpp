// https://leetcode.com/problems/generate-random-point-in-a-circle/submissions/

class Solution {
public:
    double x;
    double y;
    double r;
    Solution(double radius, double x_center, double y_center) {
        x = x_center;
        y = y_center;
        r = radius;
    }
    vector<double> randPoint() {
        double rad = (double)rand() / RAND_MAX;
        rad = sqrt(rad) * r; //KEY POINT: IF WE DO NOT TAKE THE SQUARE ROOT, WE WILL HAVE MANY POINTS CLOSE TO THE CENTRE THAN FAR AWAY.
        double teta = (double)rand() / RAND_MAX;
        theta *= 360.0;
        return {x+rad*cos(theta),y+rad*sin(theta)}; //x = rcosθ, y = rsinθ
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
