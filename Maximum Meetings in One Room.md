## 01. Maximum Meetings in One Room

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1)

### Problem Description

**Task:** Given two arrays s[] and f[], where s[i] and f[i] denote the start time and finish time of the ith meeting, respectively. There is only one meeting room. A meeting can be scheduled only if its start time is strictly greater than the finish time of the previously selected meeting.Find the maximum number of meetings that can be scheduled in the room such that no two selected meetings overlap. Return the indices (1-based) of the selected meetings in sorted (increasing) order.Note: If multiple schedules are possible, prefer meetings with earlier finish times. If two meetings have the same finish time, prefer the meeting with the smaller index.Examples:Input: s[] = [1, 3, 0, 5, 8, 5], f[] = [2, 4, 6, 7, 9, 9]

#### Examples

##### Example 1

- **Output:**
```text
[1]
```
- **Explanation:** Since there is only one meeting, we can attend the meeting.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-11-19 11:51:32
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    vector<int> maxMeetings(vector<int>& s, vector<int>& f) {
        int n = s.size();
        if (n == 0) {
            return {};
        }

        // 1. Store {end_time, start_time, 1-based meeting_number}
        vector<vector<int>> meetings(n);
        for (int i = 0; i < n; i++) {
            meetings[i] = {f[i], s[i], i + 1};
        }

        // 2. Sort by end_time (index 0); break ties by smaller 1-based index (index 2)
        sort(meetings.begin(), meetings.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] != b[0]) {
                return a[0] < b[0];
            }
            return a[2] < b[2];
        });

        // 3. Pick the first meeting (smallest ending time, then smallest index)
        vector<int> ans;
        ans.push_back(meetings[0][2]);
        int meetend = meetings[0][0];

        // 4. Compare next starting times against the last ending time
        for (int i = 1; i < n; i++) {
            if (meetings[i][1] > meetend) {
                ans.push_back(meetings[i][2]);
                meetend = meetings[i][0];
            }
        }

        // 5. Problem requires the selected meeting numbers in sorted order
        sort(ans.begin(), ans.end());
        return ans;
    }
};
```

*Generated on: 11/19/2026, 11:53:19 AM*