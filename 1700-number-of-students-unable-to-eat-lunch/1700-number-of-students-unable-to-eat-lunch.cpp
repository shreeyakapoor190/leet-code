class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sand;
        queue<int> stud;
        int i;
        for (i = sandwiches.size()-1;i>=0; i--)
        {
            sand.push(sandwiches[i]);
        }
        for (i = 0; i < students.size(); i++)
        {
            stud.push(students[i]);
        }
        int c = 0;
        while (!stud.empty())
        {
            if (stud.front() == sand.top())
            {
                stud.pop();
                sand.pop();
                c = 0;
            }
            else
            {
                int u = stud.front();
                stud.pop();
                stud.push(u);
                c++;
                if (stud.size() == c)
                    break;
            }
        }
        return stud.size();
    }
};