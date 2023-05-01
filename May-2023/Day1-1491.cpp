// Average Salary Excluding the Minimum and Maximum Salary

// Solution

class Solution
{
public:
    double average(vector<int> &salary)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        double totalSalary = 0;
        // total salary
        for (int index = 0; index < salary.size(); index++)
        {
            totalSalary += salary[index];
        }
        // finding minimum value in salary
        double minValue = *min_element(salary.begin(), salary.end());
        // finding maximum value in salary
        double maxValue = *max_element(salary.begin(), salary.end());
        // calculating final result
        double finalResult = (totalSalary - (minValue + maxValue)) / (salary.size() - 2);
        return finalResult;
    }
};