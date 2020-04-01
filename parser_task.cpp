#include<bits/stdc++.h>
using namespace std;
int evaualteExpression(string input);
int operationsPrecedence(char operation);
int valueAfterCalculation(int value1, int value2, char operation)
{
    if(operation == '+')
    {
        return value1 + value2;
    }
    else if(operation == '-')
    {
        return value1 - value2;
    }
    else if(operation == '*')
    {
        return value1 * value2;
    }
    else if(operation == '/')
    {
        return value1 / value2;
    }
    return 0;
}
int operationsPrecedence(char operation)
{
    if(operation == '*' || operation == '/')
    {
        return 2;
    }
    else if(operation == '+' || operation == '-')
    {
        return 1;
    }
    return 0;
}
int evaualteExpression(string input)
{
    stack<char> operations;
    stack<int> numbers;
    map<char,int> m = {{'-', -1}};
    bool isPreviousCharDigit = false, isPreviousCharOperation = false;
    int inputSize = input.size();
    for(int index = 0; index < inputSize; index++)
    {
        if(input[index] >= '0' && input[index] <= '9' && !isPreviousCharDigit)
        {
            isPreviousCharDigit = true;
            isPreviousCharOperation = false;
            int value = (input[index] - '0');
            if(index > 0 && m[input[index - 1]] != NULL)
                value *= -1;
            numbers.push(value);
        }
        else  if(input[index] >= '0' && input[index] <= '9' && isPreviousCharDigit)
        {
            return INT_MIN;
        }
        else if(input[index] == '(')
        {
            isPreviousCharDigit = false;
            isPreviousCharOperation = false;
            operations.push(input[index]);
        }
        else if(input[index] == ')')
        {
            isPreviousCharDigit = false;
            isPreviousCharOperation = false;
            while(!operations.empty() && operations.top() != '(')
            {
                int  value2= numbers.top();
                numbers.pop();
                int value1 = numbers.top();
                numbers.pop();
                char operation = operations.top();
                operations.pop();
                numbers.push(valueAfterCalculation(value1, value2, operation));
            }
            if(!operations.empty())
            {
                operations.pop();
            }
        }
        else if((input[index] == '+' || input[index] == '-'|| input[index] == '*'|| input[index] == '/')
                && !isPreviousCharOperation)
        {
            isPreviousCharDigit = false;
            isPreviousCharOperation = true;
            while(!operations.empty() && operationsPrecedence(operations.top()) >= operationsPrecedence(input[index])
                    && numbers.size() > 1)
            {
                int  value2= numbers.top();
                numbers.pop();
                int value1 = numbers.top();
                numbers.pop();
                char operation = operations.top();
                operations.pop();
                numbers.push(valueAfterCalculation(value1, value2, operation));
            }
            operations.push(input[index]);
        }
        else if((input[index] == '+' || input[index] == '-'|| input[index] == '*'|| input[index] == '/')
                && isPreviousCharOperation)
        {
            return INT_MIN;
        }
    }
    while(!operations.empty() && (operations.top() != '(' && operations.top() != ')')  && numbers.size() > 1)
    {
        if(!numbers.empty())
        {
            int  value2= numbers.top();
            numbers.pop();
            if(!numbers.empty())
            {
                int value1 = numbers.top();
                numbers.pop();
                char operation;
                operation = operations.top();
                operations.pop();
                numbers.push(valueAfterCalculation(value1, value2, operation));
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    int ans = INT_MIN;
    if(!numbers.empty())
    {
        ans = numbers.top();
    }
    return ans;
}
int main()
{
    string input;
    getline(cin, input);
    int answer = evaualteExpression(input);
    if(input.size() == 0 || answer == INT_MIN || (input.size() == 2 && input[0] == '-'))
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        cout << answer  << endl;
    }
    return 0;
}
