// // // // // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // // // // using namespace std;
// // // // // // // // // // // // void pattern1(int n){
// // // // // // // // // // // // for (int i = 1; i<=n; i++){
// // // // // // // // // // // //     for (int j =1; j<=(n-i+1); j++){
// // // // // // // // // // // //         cout<<"*"<<" ";
// // // // // // // // // // // //     }
// // // // // // // // // // // //     cout<<endl;
// // // // // // // // // // // // }
// // // // // // // // // // // // }

// // // // // // // // // // // // void pattern2(int n){
// // // // // // // // // // // // for (int i = 1; i<= n; i++){
// // // // // // // // // // // //     for (int j = 1; j<=(n-i+1); j++){
// // // // // // // // // // // //         cout<<i<<" ";
// // // // // // // // // // // //     }
// // // // // // // // // // // //     cout<<endl;
// // // // // // // // // // // // }
// // // // // // // // // // // // }

// // // // // // // // // // // // void pattern3(int n){
// // // // // // // // // // // // for (int i = 1; i<= n; i++){
// // // // // // // // // // // //     for (int j = 1; j<=(n-i+1); j++){
// // // // // // // // // // // //         cout<<j<<" ";
// // // // // // // // // // // //     }
// // // // // // // // // // // //     cout<<endl;
// // // // // // // // // // // // }
// // // // // // // // // // // // }

// // // // // // // // // // // // void pattern4(int n){
// // // // // // // // // // // //     for (int i = 0; i<n; i++){
// // // // // // // // // // // //         for(int j =0; j<=n; j++){
// // // // // // // // // // // //             cout<<"*"<<" ";
// // // // // // // // // // // //         }
// // // // // // // // // // // //         cout<<endl;
// // // // // // // // // // // //     }
// // // // // // // // // // // // }

// // // // // // // // // // // // void pattern5(int n){
// // // // // // // // // // // //     for (int i =1; i<=n; i++){
// // // // // // // // // // // //         for (int j = 1; j<=i; j++){
// // // // // // // // // // // //             cout<<j<<" ";
// // // // // // // // // // // //         }
// // // // // // // // // // // //         cout<<endl;
// // // // // // // // // // // //     }
// // // // // // // // // // // // }


// // // // // // // // // // // // void pattern6(int n){
// // // // // // // // // // // //     for (int i =1; i<=n; i++){
// // // // // // // // // // // //     //space
// // // // // // // // // // // //     for (int j = 1; j<=n-i; j++){
// // // // // // // // // // // //         cout<<" ";

// // // // // // // // // // // //     }
// // // // // // // // // // // //     //star
// // // // // // // // // // // //     for (int j =1; j<=2*i-1; j++){
// // // // // // // // // // // //         cout<<"*";
// // // // // // // // // // // //     }
// // // // // // // // // // // //     //space
// // // // // // // // // // // //     for (int k = 1; k<= n-i; k++){
// // // // // // // // // // // //         cout<<" ";
// // // // // // // // // // // //     }
// // // // // // // // // // // //     cout<<endl;
// // // // // // // // // // // // }
// // // // // // // // // // // // }

// // // // // // // // // // // // void pattern7(int n){
// // // // // // // // // // // //     for (int i = 1; i <= n; i++){
// // // // // // // // // // // //         //space
// // // // // // // // // // // //         for(int j = 1; j < i; j++){
// // // // // // // // // // // //             cout << " ";
// // // // // // // // // // // //         }
// // // // // // // // // // // //         //star
// // // // // // // // // // // //         for (int j = 1; j <= 2 * (n - i) + 1; j++){
// // // // // // // // // // // //             cout << "*";
// // // // // // // // // // // //         }
// // // // // // // // // // // //         //space
// // // // // // // // // // // //         for(int j = 1; j < i; j++){
// // // // // // // // // // // //             cout << " ";
// // // // // // // // // // // //         }
// // // // // // // // // // // //         cout << endl;
// // // // // // // // // // // //     }
// // // // // // // // // // // // }

// // // // // // // // // // // // int main(){
// // // // // // // // // // // //  pattern1(5);
// // // // // // // // // // // //  pattern2(5);
// // // // // // // // // // // //  pattern3(5);
// // // // // // // // // // // //  pattern4(5);
// // // // // // // // // // // //  pattern5(5);
// // // // // // // // // // // //  pattern6(9);
// // // // // // // // // // // //  pattern7(5);
// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }









// // // // // // // // // // // Largest element

// // // // // // // // // // // approach one by using the one var and one the loop that is

// // // // // // // // // // // int largestele(vector<int> &arr){
// // // // // // // // // // //     int lar = arr[0];

// // // // // // // // // // //     for (int i = 0; i<arr.size(); i++){
// // // // // // // // // // //         if (arr[i]>lar){
// // // // // // // // // // //             lar = arr[i];
// // // // // // // // // // //         }
// // // // // // // // // // //     }
// // // // // // // // // // //     return lar;
// // // // // // // // // // // }

// // // // // // // // // // // approach 2 by usinng the two loops

// // // // // // // // // // // int largestele(vector<int> &arr){
// // // // // // // // // // //     int largest = INT_MIN;
// // // // // // // // // // //     for (int i =0; i<arr.size(); i++){
// // // // // // // // // // //         for (int j = i+1; j<arr.size(); j++){
// // // // // // // // // // //             if (arr[j]>arr[i]){
// // // // // // // // // // //                 largest = arr[j];
// // // // // // // // // // //             }
// // // // // // // // // // //         }
// // // // // // // // // // //     }
// // // // // // // // // // //     return largest;
// // // // // // // // // // // }

// // // // // // // // // // // approach 3 by using the two pointer approach
// // // // // // // // // // // int largestele(vector<int> &arr){

// // // // // // // // // // // int i =0;
// // // // // // // // // // // int j = arr.size()-1;
// // // // // // // // // // // if (arr[i] > arr[j]){
// // // // // // // // // // //     int lar = arr[i];
// // // // // // // // // // //     i++;
// // // // // // // // // // // }else {
// // // // // // // // // // //     int lar = arr[j];
// // // // // // // // // // //     j--;
// // // // // // // // // // // }
// // // // // // // // // // // return lar;
// // // // // // // // // // // }

// // // // // // // // // // // int lar = arr[0];
// // // // // // // // // // // for (int i = 0; i<arr.size(); i++){
// // // // // // // // // // //     for (int j = i+1; j<arr.size(); j++){
// // // // // // // // // // //         if (arr[i]>lar){
// // // // // // // // // // //             lar = arr[i];
// // // // // // // // // // //     }else {
// // // // // // // // // // //         lar = arr[j];
// // // // // // // // // // //     }
// // // // // // // // // // // }
// // // // // // // // // // // return lar;
// // // // // // // // // // // }


// // // // // // // // // // //Sec larget

// // // // // // // // // // // 10 20 15 30 25
// // // // // // // // // // int lar = arr[0];// 10
// // // // // // // // // // int seclar = INT_MIN;
// // // // // // // // // // for(int i =0; i<arr.size(); i++){
// // // // // // // // // //     if (arr[i]>lar){ //10>10 no 20>10 yes 15>30 no 
// // // // // // // // // //         seclar = lar;// 10 
// // // // // // // // // //         lar = arr[i];//20
// // // // // // // // // //     }else if (arr[i] > seclar && arr[i] != lar){ // 10>INT_MIN yes 20>10 no 15>10 yes 30>20 yes 25>30 no
// // // // // // // // // //         seclar = arr[i];// 15
// // // // // // // // // //     }
// // // // // // // // // // }
// // // // // // // // // // if (seclar == INT_MIN){
// // // // // // // // // //     return -1;
// // // // // // // // // // }


// // // // // // // // // // // /

// // // // // // // // // // //Ok to check the given number is sorted or not 

// // // // // // // // // // //Like compare the previous number with the current number or check the current number with its next iteration

// // // // // // // // // // bool isSorted(vector<int> &arr){
// // // // // // // // // //     for (int i =1; i<arr.size(); i++){
// // // // // // // // // //         if (arr[i] > arr[i-1]){
// // // // // // // // // // return true;
// // // // // // // // // //     }else {
// // // // // // // // // //         return false;
// // // // // // // // // //     }
// // // // // // // // // // }
// // // // // // // // // // }


// // // // // // // // // // //Ok if the guven one is not sorted lets sort it 

// // // // // // // // // // for(int i = 1; i<arr.size(); i++){
// // // // // // // // // //     if (arr[i]<arr[i-1]){
// // // // // // // // // //         int res = swap(arr[i], arr[i-1]);
// // // // // // // // // //     }
// // // // // // // // // //     return arr;
// // // // // // // // // // }
// // // // // // // // // bool isSorted(vector<int > &arr){
// // // // // // // // //     bool sorted = true;
// // // // // // // // //     for (int i = 1; i<arr.size(); i++){
// // // // // // // // //         if (arr[i]<arr[i-1]){
// // // // // // // // //             sorted = false;
// // // // // // // // //             break;
// // // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // // }



// // // // // // // // //Strings 


// // // // // // // // #include <bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // int main(){

// // // // // // // // string s;
// // // // // // // // getline(cin, s);
// // // // // // // //   for (int i =0; i<s.size(); i++){
// // // // // // // //     if(isupper(s[i])){
// // // // // // // //         s[i] = tolower(s[i]);
// // // // // // // //     }else if (islower(s[i])){
// // // // // // // //         s[i] = toupper(s[i]);

        
// // // // // // // //     }

// // // // // // // //   }
// // // // // // // // cout<<s;

// // // // // // // // }


// // // // // // // void rotatearr(vector<int> &arr){
// // // // // // //     if (arr.empty()){
// // // // // // //         return;
// // // // // // //     }

// // // // // // //     //Lets store the first element from tehe array in the temporary variable
// // // // // // //     int temp = arr[0]

// // // // // // //     //Iterate through the array from the first elemt as we have alredy stored the first array ele in thetremp

// // // // // // //     for(int i = 1; i<arr.size(); i++){
// // // // // // //         arr[i-1] = arr[i];

// // // // // // //     }

// // // // // // //     arr[arr.size()-1] = temp;
// // // // // // // }

// // // // // // // void rotatearr(vector<int> &arr, int k){


// // // // // // //Right rotate 

// // // // // // void rightrotate(vector<int> &arr, int d){
// // // // // //     int n = arr.size();

// // // // // //     if (arr.empty() || arr.size() ==1) return;
// // // // // //      d = d%n;

// // // // // //      //Reverse the entire array
// // // // // //      reverse(arr.begin(), arr.end());
// // // // // //      //Reverse the first elements 
// // // // // //      reverse(arr.begin(), arr.begin()+d);
// // // // // //      //Rverse the last ele
// // // // // //      reverse(arr.begin()+d, arr.end());

// // // // // // }

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // int main(){

// // // // // string s;
// // // // // getline(cin, s);
// // // // // int count =0;
// // // // // for (int i = 0; i<s.size();i++){
// // // // //     if (s[i]==s[i+1]){
// // // // //         count++;
// // // // //     }else if (s[i]!=s[i+1]){
// // // // //         cout<<s[i]<<count+1;
// // // // //         count =0;
// // // // // }


// // // // // }
// // // // // }


// // // // vector<int> intersection(vector<int> &arr1, vector<int> &arr2){

// // // // vector<int> ans;
// // // // if(arr1.empty() || arr2.empty())
// // // //     return ans;
// // // //     vector<int> ans;

// // // //     int i = 0, j = 0;
// // // //     while(i<arr1.size() && j<arr2.size()){
// // // //         if (arr1[i] == arr2[j]){
// // // //             ans .push_back(arr1[i]);
// // // //             i++;
// // // //             j++;
// // // //         }else if (arr1[i] < arr2[j]){
// // // //             i++;
// // // //         }else {
// // // //             j++;
// // // //         }
// // // //     }


// // // // return ans;

// // // // 
// // // int missing(vector<int> &arr, int n){
// // //     //Run the outer loop first
// // //     for (int i = 1; i <= n; i++){
// // //         //lets first consider that we didnt find

// // //         bool found = false;
// // //         //Run the inner loop
// // //         for (int j =0; j<arr.size(); j++){
// // //             if (arr[j]==i){
// // //                 found = true;
// // //                 break;
// // //             }
// // //         }
// // //         if (!found){
// // //             return i;
// // //         }
// // //     }
// // //     return -1;
// // // }

// // int totalsum = (n * (n + 1) / 2);
// // int sum =0;
// // for (int i =0; i<arr.size(); i++){
// //     sum+=arr[i];
// // }

// // return totalsum - sum;



// int singleNumber(vector<int>& arr) {
//     // your logic

//     int xor = 0;
//     for(int i = 0; i<arr.size(); i++){
//         xor ^= arr[i];
//     }
//     return xor;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){


//     //Blue print
//     struct Node{
//         int data;
//         Node* next;

//     };

//     //Creating the node
//     Node* n1 = new Node();
//     Node* n2 = new Node();
//     Node* n3 = new Node();
//     Node* n4 = new Node();
//     Node* n5 = new Node();
//     Node* head = n1;
//     Node* temp = head;

//     n1->data = 10;
//     n1->next = n2;
//     n2->data = 20;
//     n2->next = n3;
//     n3->data = 30;
//     n3->next = n4;
//     n4->data = 40;
//     n4->next = nullptr;

//     while(temp->next !=nullptr){
//         temp = temp->next;


//     }
//     n5->data = 50;
// temp->next = n5;
// n5->next = nullptr;
// cout<<temp->data<<endl;



// return 0;
// }

// for (int i =1; i<pos-2; i++){
//     temp = temp->next;
// }

// n5->next = temp->next;
// temp->next=n5;


Node* arrayToLinkedList(vector<int>& arr) {

    // Write your logic here

    Node* head = new Node(arr[0]);
    Node* prev =  head;
    for (int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}