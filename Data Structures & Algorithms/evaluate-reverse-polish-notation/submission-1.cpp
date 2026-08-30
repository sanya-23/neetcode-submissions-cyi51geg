class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i =0;i<tokens.size();i++){
            if(isdigit(tokens[i][0]) || ((tokens[i][0]=='-') &&                tokens[i].size()>1)){
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="*"){
                int first= st.top();
                st.pop();
                 int second= st.top();
                st.pop();
                st.push(first * second);
            }
            else if(tokens[i]=="+"){
                int first= st.top();
                st.pop();
                int second= st.top();
                st.pop();
                st.push(first + second);
            }
            else if(tokens[i]=="/"){
                int first= st.top();
                st.pop();
                int second= st.top();
                st.pop();
                st.push(second/first);
            }
            else{
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                st.push(second- first);
            }
        }
        return st.top();
    }
};
