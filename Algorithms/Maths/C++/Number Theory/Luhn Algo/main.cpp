#include<iostream>
#include<string>
#include<vector>
#include<print>
using namespace std;

int main(){

    string credit_card_num;
    cout << "Enter the Credit Card Number that you want to check: ";
    cin >> credit_card_num;

    if(credit_card_num.length() == 16){
        vector<int> odd;
        vector<int> even;
        for(auto i{credit_card_num.length()}; i-- > 0;){
            if(i%2 == 0){
                even.push_back(credit_card_num[i] - '0');
            }
            else{
                int check = credit_card_num[i] - '0';
                check *= 2;
                if(to_string(check).length() == 1){
                    odd.push_back(check);
                }else{
                    check = check / 10 + check % 10;  
                    odd.push_back(check);
                }
            }
        }
        int sum = 0;
        for(auto i : odd) sum+=i;
        for(auto i : even) sum+=i;
        if (sum % 10==0) cout << "Valid Credit Card Number" <<endl;
        else goto invalid;
        return 0;

    }
    else
        goto invalid;

    invalid:
        cout << "Invalid Credit Card Number" << endl;

    return 0;
}