class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& circles) {
    vector<int> result(circles.size());
    for (int i = 0; i < circles.size(); i++) {
        int pointsInCircle = 0;
        int radiusSquared = circles[i][2] * circles[i][2];
        for (int j = 0; j < points.size(); j++) {
            int distanceSquared = pow(points[j][0] - circles[i][0], 2) + pow(points[j][1] - circles[i][1], 2);
            if (distanceSquared <= radiusSquared) {
                pointsInCircle++;
            }
        }
        result[i] = pointsInCircle;
    }
    return result;
}
};