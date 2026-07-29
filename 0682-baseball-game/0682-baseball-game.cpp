class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;

        for (string c : operations)
        {
            if (c != "C" && c != "D" && c != "+")
            {
                st.push(stoi(c));
            }
            else if (c == "C")
            {
                st.pop();
            }
            else if (c == "D")
            {
                st.push(2 * st.top());
            }
            else
            {
                int first = st.top();
                st.pop();

                int second = st.top();

                st.push(first);
                st.push(first + second);
            }
        }

        int sum = 0;

        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};