/// HELLO �˰���!!!!!!!!!!!!!!!!!!!!!!!!!

// barkingdog.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
//
#include "stdafx.h"
//#include <iostream>


// ��ŷ�� 1�� ���� 1
//int func1(int n) {
//
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//
//		if (i % 3 == 0 || i % 5 == 0) {
//
//			sum += i;
//
//		}
//
//
//
//	}
//
//	return sum;
//
//}
//
//
//
//int main()
//{
//	int num;
//	std::cin >> num;
//
//	std::cout<< func1(num);
//
//
//    return 0;
//}


int main() {


}
// ��ŷ�� 1�� ���� 2


//int func2(int arr[], int N) {
//
//
//	for (int i = 0; i < N; i++) {
//
//
//		for (int j = i + 1; j < N; j++) {
//
//			if (arr[i] + arr[j] == 100)
//				return 1;
//
//
//		}
//
//
//	}
//
//	return 0;
//
//
//
//}
//
//
//int main() {
//
//	int N;
//	std::cin >> N;
//
//	int * arr = new int[N];
//
//	for (int i = 0; i < N; i++) {
//
//		std::cin >> arr[i];
//
//	}
//
//
//	std::cout << func2(arr,N);
//
//
//	return 0;
//}


// ��ŷ�� 1�� ���� 3



//int func3(int N) {
//
//	double a=sqrt(N);
//
//	if (abs(a - (int)a) < 1e-12) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//
//
//
//}
//
//
//
//
//int main() {
//
//	std::cout << func3(756580036);
//
//	return 0;
//}
//



// ��ŷ�� 1�� ���� 4

//
//int func4(int N) {
//
//	if (N == 1)
//		return 0;
//
//
//	int i = 1;
//	while (i*2 <= N) {
//		i*=2;
//	}
//
//	return i;
//
//}
//
//
//int main() {
//
//	std::cout << func4(1025);
//
//	return 0;
//}
//



//��ŷ�� 2�� ���� 1

//#include <bits/stdc++.h>

//#include <iostream>
//
//int main() {
//   
//	std::ios::sync_with_stdio(0);
//	std::cin.tie(0);
//
//	int N, X;
//	int num;
//	std::cin >> N >> X;
//
//	for (int i = 0; i < N; i++) {
//
//		std::cin >> num;
//
//		if (num < X)
//			std::cout << num << ' ';
//
//
//	}
//
//
//
//
//	return 0;
//}


//��ŷ�� 2�� ���� 2
//#include <bits/stdc++.h>
//using namespace std;
//
//void insert(int idx, int num, int arr[], int& len) {
//
//	for (int i = len - 1; i >= idx; i--) {
//
//		arr[i + 1] = arr[i];
//	}
//
//	arr[idx] = num;
//	len++;
//}
//
//void erase(int idx, int arr[], int& len) {
//
//	for (int i = idx; i < len; i++) {
//
//
//		arr[i] = arr[i+1];
//
//
//	}
//
//	len--;
//
//}
//
//void printArr(int arr[], int& len) {
//	for (int i = 0; i < len; i++) cout << arr[i] << ' ';
//	cout << "\n\n";
//}
//
//void insert_test() {
//	cout << "***** insert_test *****\n";
//	int arr[10] = { 10, 20, 30 };
//
//
//
//	int len = 3;
//	insert(3, 40, arr, len); // 10 20 30 40
//	printArr(arr, len);
//	insert(1, 50, arr, len); // 10 50 20 30 40
//	printArr(arr, len);
//	insert(0, 15, arr, len); // 15 10 50 20 30 40
//	printArr(arr, len);
//}
//
//void erase_test() {
//	cout << "***** erase_test *****\n";
//	int arr[10] = { 10, 50, 40, 30, 70, 20 };
//	int len = 6;
//	erase(4, arr, len); // 10 50 40 30 20
//	printArr(arr, len);
//	erase(1, arr, len); // 10 40 30 20
//	printArr(arr, len);
//	erase(3, arr, len); // 10 40 30
//	printArr(arr, len);
//}
//
//int main(void) {
//	insert_test();
//	erase_test();
//
//	return 0;
//}


//��ŷ�� 2�� ���� 3


//#include<bits/stdc++.h>

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//
//	char arr[101] = { 0, };
//
//	int result[26] = { 0, };
//
//
//	string s;
//
//	cin >> s;
//
//	std::cin >> arr;
//
//
//	for (int i = 0; i < strlen(arr); i++) {
//
//		int a=arr[i] - 97;
//
//		result[a]++;
//
//	}
//
//
//	for (int i = 0; i < 26; i++) {
//
//		std::cout << result[i] << " ";
//	}
//
//	
//
//
//
//
//	return 0;
//}



//��ŷ�� 2�� ���� 4

//#include <iostream>
//#include < algorithm >
//
//int func2(int arr[], int N) {
//
//	int* arr2= new int[101];
//
//	std::fill(arr2, arr2 + 101, 0);
//
//
//	for (int i = 0; i < N; i++) {
//		arr2[arr[i]]++;
//	}
//
//	for (int i = 0; i < N; i++) {
//
//		if (100 - arr[i] == arr[i]) {
//
//			if (arr2[arr[i]] > 1)
//				return true;
//
//		}
//
//		if (arr2[100 - arr[i]] != 0) {
//
//			if(100 - arr[i]!=arr[i])
//				return true;
//
//		}
//
//	}
//	delete[] arr2;
//	return false;
//
//
//}
//
//
//int main() {
//	std::ios::sync_with_stdio(0);
//	std::cin.tie(0);
//	int N;
//	std::cin >> N;
//
//	int* arr= new int[N];
//
//	for (int i = 0; i < N; i++) {
//			std::cin >> arr[i];
//
//	}
//
//	std::cout<<func2(arr,N );
//
//
//
//	return 0;
//}



//��ŷ�� 3�� ����Ʈ ���� 1

//#include <iostream>
//
//
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX], pre[MX], nxt[MX];
//int unused = 1;
//
//void insert(int addr, int num) {
//
//
//	pre[unused] = addr;
//	dat[unused] = num;
//	nxt[unused] = nxt[addr];
//
//
//	if (nxt[addr] != -1) {
//
//		pre[nxt[addr]] = unused;
//
//	}
//
//	nxt[addr] = unused;
//	
//	unused++;
//	
//}
//
//void erase(int addr) {
//
//
//	int pre_index = pre[addr];
//	int nxt_index=nxt[addr];
//
//	nxt[pre_index] = nxt_index;
//	pre[nxt_index] = pre_index;
//
//	//nxt[addr] = -1;
//	//pre[addr] = -1;
//	//dat[addr] = -1;
//
//
//
//}
//
//void traverse() {
//	int cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur] << ' ';
//		cur = nxt[cur];
//	}
//	cout << "\n\n";
//}
//
//void insert_test() {
//	cout << "****** insert_test *****\n";
//	insert(0, 10); // 10(address=1)
//	traverse();
//	insert(0, 30); // 30(address=2) 10
//	traverse();
//	insert(2, 40); // 30 40(address=3) 10
//	traverse();
//	insert(1, 20); // 30 40 10 20(address=4)
//	traverse();
//	insert(4, 70); // 30 40 10 20 70(address=5)
//	traverse();
//}
//
//void erase_test() {
//	cout << "****** erase_test *****\n";
//	erase(1); // 30 40 20 70
//	traverse();
//	erase(2); // 40 20 70
//	traverse();
//	erase(2); // 40 20 70
//	traverse();
//	erase(4); // 40 70
//	traverse();
//	erase(5); // 40
//	traverse();
//}
//
//int main(void) {
//	fill(pre, pre + MX, -1);
//	fill(nxt, nxt + MX, -1);
//	insert_test();
//	erase_test();
//}



// ��ŷ�� 3�� ����

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//	list<int> L = { 1,2 }; // 1 2
//	list<int>::iterator t = L.begin(); // t�� 1�� ����Ű�� ��
//	L.push_front(10); // 10 1 2
//	cout << *t << '\n'; // t�� ����Ű�� �� = 1�� ���
//	L.push_back(5); // 10 1 2 5
//	L.insert(t, 6); // t�� ����Ű�� �� �տ� 6�� ����, 10 6 1 2 5
//	t++; // t�� 1ĭ ������ ����, ���� t�� ����Ű�� ���� 2
//	t = L.erase(t); // t�� ����Ű�� ���� ����, �� ���� ������ 5�� ��ġ�� ��ȯ
//					// 10 6 1 5, t�� ����Ű�� ���� 5
//	cout << *t << '\n'; // 5
//	for (auto i : L) cout << i << ' ';
//	cout << '\n';
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//		cout << *it << ' ';
//
//	return 0;
//}


//��ŷ�� 3�� ���� ���� ���� 1406��

//#include <iostream>
//#include <list>
//#include <string>
//
//
//
//int main() {
//
//	std::list<char> L;
//
//	char arr[100000];
//
//	std::string a;
//
//	std::cin >> a;
//
//
//	for (int i = 0; i < a.length(); i++) {
//
//		L.push_back(a[i]);
//
//	}
//
//	std::list<char>::iterator t = L.end();
//
//	int cnt = 0;
//	std::cin >> cnt;
//
//	char ch;
//	char cmd;
//	for (int i = 0; i < cnt; i++) {
//	
//		std::cin >> ch;
//
//		if (ch == 'L') {
//			if(!(t==L.begin()))
//				t--;
//		}
//		else if (ch == 'D') {
//			if (!(t == L.end()))
//				t++;
//		}
//		else if (ch == 'B') {
//
//			if (!(t == L.begin())) {
//				t--;
//				t=L.erase(t);
//			}
//
//		}
//		else if (ch == 'P') {
//
//			std::cin >> cmd;
//
//			L.insert(t, cmd);
//
//		}
//	}
//
//
//	for (char a : L) {
//
//		std::cout << a;
//
//	}
//
//
//	return 0;
//}



//��ŷ�� 3�� ���� ���� ���� 1406�� �߸�

//#include <iostream>
//
//#include <string>
//
//using namespace std;
//
//const int MX = 1000005;
//char dat[MX];
//int pre[MX], nxt[MX];
//int unused = 1;
//
//void insert(int addr, int num) {
//
//
//	pre[unused] = addr;
//	dat[unused] = num;
//	nxt[unused] = nxt[addr];
//
//
//	if (nxt[addr] != -1) {
//
//		pre[nxt[addr]] = unused;
//
//	}
//
//	nxt[addr] = unused;
//	
//	unused++;
//	
//}
//
//void erase(int addr) {
//
//
//	int pre_index = pre[addr];
//	int nxt_index=nxt[addr];
//
//	nxt[pre_index] = nxt_index;
//
//    if(nxt_index!= -1)
//		pre[nxt_index] = pre_index;
//
//	//nxt[addr] = -1;
//	//pre[addr] = -1;
//	//dat[addr] = -1;
//
//
//
//}
//
//void traverse() {
//	char cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur];
//		cur = nxt[cur];
//	}
//	
//}
//
//int main(void) {
//
//
//	string st;
//	int cnt = 0;
//	char ch;
//	cin >> st;
//	cin >> cnt;
//
//	fill(pre, pre + MX, -1);
//	fill(nxt, nxt + MX, -1);
//	
//	for (int i = st.length() - 1; i >= 0; i--) {
//		insert(0,st[i]);
//	}
//	
//
//
//
//	int cur = 1;
//
//
//	
//	for (int i = 0; i < cnt; i++) {
//
//		cin >> ch;
//
//
//		switch (ch)
//		{
//		case 'L':
//
//			if(pre[cur]!=-1)
//				cur=pre[cur];
//
//			break;
//
//		case 'D':
//
//			if (nxt[cur] != -1)
//				cur = nxt[cur];
//
//			break;
//
//		case 'B':
//           			
//			if (pre[cur] != -1) {
//				erase(cur);
//				cur = pre[cur];
//			}
//
//			break;
//
//		case 'P':
//
//			cin >> ch;
//
//			insert(cur, ch);
//
//
//			cur = nxt[cur];
//
//			break;
//
//		}
//
//
//	}
//
//
//	traverse();
//
//	return 0;
//}





//��ŷ�� 5�� 1 ���� ����
//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX];
//int pos = 0;
//
//void push(int x) {
//
//	dat[pos] = x;
//	pos++;
//}
//
//void pop() {
//
//	if (pos == 0)
//		return;
//    
//	pos--;
//
//}
//
//int top() {
//
//	if (pos == 0) {
//		return 0;
//	}
//
//	return dat[pos-1];
//}
//
//void test() {
//	push(5); push(4); push(3);
//	cout << top() << '\n'; // 3
//	pop(); pop();
//	cout << top() << '\n'; // 5
//	push(10); push(12);
//	cout << top() << '\n'; // 12
//	pop();
//	cout << top() << '\n'; // 10
//}
//
//int main(void) {
//	test();
//
//	return 0;
//}



// ���� 10828 ���� stack ���� ����

//#include <iostream>
//#include <string>
//
//
//
//const int MX = 1000005;
//int dat[MX];
//int pos = 0;
//
//void push(int x) {
//
//	dat[pos] = x;
//	pos++;
//}
//
//void pop() {
//
//	if (pos == 0) {
//	
//		std::cout << -1 <<'\n';
//		return;
//	}
//    
//	std::cout << dat[--pos] << '\n';
//
//}
//
//void top() {
//
//	if (pos == 0) {
//		
//		std::cout << -1 << '\n';
//		return;
//	}
//
//	std::cout<< dat[pos-1] << '\n';
//}
//
//
//void size() {
//
//	std::cout << pos << '\n';
//}
//
//void empty() {
//
//	if (!pos)
//		std::cout << 1 << '\n';
//	else
//		std::cout << 0 << '\n';
//}
//
//
//int main() {
//
//	int cnt;
//	std::string cmd;
//	std::cin >> cnt;
//
//
//	
//	for (int i = 0; i < cnt; i++) {
//
//		std::cin >> cmd;
//
//
//		if (!cmd.compare("push")) {
//
//			std::cin >> cmd;
//			int value=std::stoi(cmd);
//
//			push(value);
//
//		}
//		else if (!cmd.compare("pop")) {
//
//			pop();
//		}
//		else if (!cmd.compare("size")) {
//
//			size();
//		}
//		else if (!cmd.compare("empty")) {
//
//			empty();
//		}
//		else if (!cmd.compare("top")) {
//
//			top();
//
//		}
//
//	}
//
//
//
//	return 0;
//}



// stack stl ���
//#include <iostream>
//#include <stack>
//#include <string>
//
//
//
//
//
//void push(int x, std::stack<int>& stack) {
//
//	stack.push(x);
//}
//
//void pop(std::stack<int>& stack) {
//
//	if (stack.empty() == 1) {
//	
//		std::cout << -1 <<'\n';
//		return;
//	}
//    
//	std::cout << stack.top() << '\n';
//	stack.pop();
//}
//
//void top(std::stack<int>& stack) {
//
//	if (stack.empty() == 1) {
//		
//		std::cout << -1 << '\n';
//		return;
//	}
//
//	std::cout << stack.top() << '\n';
//}
//
//
//void size(std::stack<int>& stack) {
//
//	std::cout << stack.size() << '\n';
//}
//
//void empty(std::stack<int>& stack) {
//
//
//	std::cout << stack.empty() << '\n';
//
//}
//
//
//int main() {
//
//	std::ios::sync_with_stdio(0);
//	std::cin.tie(0);
//
//	int cnt;
//
//	std::stack<int> stack;
//	std::string cmd;
//	std::cin >> cnt;
//
//
//	
//	for (int i = 0; i < cnt; i++) {
//
//		std::cin >> cmd;
//
//
//		if (!cmd.compare("push")) {
//
//			std::cin >> cmd;
//			int value=std::stoi(cmd);
//
//			push(value, stack);
//
//		}
//		else if (!cmd.compare("pop")) {
//
//			pop(stack);
//		}
//		else if (!cmd.compare("size")) {
//
//			size(stack);
//		}
//		else if (!cmd.compare("empty")) {
//
//			empty(stack);
//		}
//		else if (!cmd.compare("top")) {
//
//			top(stack);
//
//		}
//
//	}
//
//
//
//	return 0;
//}




// ��ŷ�� 10773 ��

//#include <iostream>
//#include <stack>
//
//void push(int x, std::stack<int>& stack) {
//
//	stack.push(x);
//}
//
//void pop(std::stack<int>& stack) {
//
//	if (stack.empty() == 1) {
//
//		return;
//	}
//
//	stack.pop();
//}
//
//int stack_total(std::stack<int>& stack) {
//
//	int size = stack.size();
//	int result = 0;
//	while (size--) {
//
//		result += stack.top();
//		stack.pop();
//	}
//
//	return result;
//}
//
//
//int main() {
//
//	std::ios::sync_with_stdio(0);
//	std::cin.tie(0);
//
//	int k;
//	std::stack<int> stack;
//	std::cin >> k;
//
//	int num;
//
//	while (k--) {
//
//		std::cin >> num;
//
//		if (num == 0) {
//
//			pop(stack);
//
//		}
//		else {
//
//			push(num,stack);
//		}
//
//
//	}
//
//	std::cout << stack_total(stack);
//
//
//	return 0;
//}

// ��ŷ�� 6�� ť 
//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX];
//int head = 0, tail = 0;
//
//void push(int x) {
//
//	dat[tail++]=x;
//}
//
//void pop() {
//
//	if (head == tail)
//		return;
//	head++;
//}
//
//int front() {
//	if (head == tail)
//		return -1;
//	return dat[head];
//}
//
//int back() {
//
//	if (head == tail)
//		return -1;
//	return dat[tail - 1];
//}
//
//void test() {
//	push(10); push(20); push(30);
//	cout << front() << '\n'; // 10
//	cout << back() << '\n'; // 30
//	pop(); pop();
//	push(15); push(25);
//	cout << front() << '\n'; // 30
//	cout << back() << '\n'; // 25
//}
//
//int main(void) {
//	test();
//
//	return 0;
//}



/// ��ŷ�� ����  ť 10845  stl ����
//#include <iostream>
//#include <queue>
//#include <string>
//using namespace std;
//
//int main() {
//
//	queue<int> queue;
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string cmd;
//	int cnt;
//	cin >> cnt;
//
//	while (cnt--) {
//
//	   cin >> cmd;
//
//	   if (cmd == "push") {
//
//		   int num;
//		   cin >> num;
//
//		   queue.push(num);
//	   }
//	   else if (cmd == "pop") {
//
//		   if (queue.empty())
//			   cout << -1 << '\n';
//		   else {
//			   cout << queue.front() << '\n';
//			   queue.pop();
//		   }
//
//	   }
//	   else if (cmd == "size") {
//
//		   cout << queue.size() << '\n';
//
//
//	   }
//	   else if (cmd == "empty") {
//
//		   cout << queue.empty() << '\n';
//
//	   }
//	   else if (cmd == "front") {
//
//		   if (queue.empty())
//			   cout << -1 << '\n';
//		   else {
//
//			   cout << queue.front() << '\n';
//		   }
//
//	   }
//	   else if (cmd == "back") {
//
//		   if (queue.empty())
//			   cout << -1 << '\n';
//		   else {
//
//			   cout << queue.back() << '\n';
//		   }
//
//	   }
//
//
//	}
//
//
//	return 0;
//}
//
//
//


// ��ŷ�� ť 10845  �Ϲ� ����

//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX];
//int head = 0, tail = 0;
//
//void push(int x) {
//
//	dat[tail++]=x;
//}
//
//void pop() {
//
//	if (head == tail)
//		return;
//	head++;
//}
//
//int front() {
//	if (head == tail)
//		return -1;
//	return dat[head];
//}
//
//int back() {
//
//	if (head == tail)
//		return -1;
//	return dat[tail - 1];
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int cnt = 0;
//	string cmd;
//
//	cin >> cnt;
//
//	for (int i = 0; i < cnt; i++) {
//		
//		cin >> cmd;
//
//		if (cmd == "push") {
//
//			int num = 0;
//			cin >> num;
//
//			push(num);
//
//		}
//		else if (cmd == "pop") {
//
//			if (head == tail)
//				cout << -1 << '\n';
//			else {
//
//				cout << front() << '\n';
//				pop();
//
//			}
//		}
//		else if (cmd == "size") {
//
//			cout << tail - head << '\n';
//		}
//		else if (cmd == "empty") {
//
//			if (tail - head == 0)
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//
//		}
//		else if (cmd == "front") {
//
//			if (head == tail)
//				cout << -1 << '\n';
//			else {
//
//				cout << front() << '\n';
//		
//			}
//
//		}
//		else if (cmd == "back") {
//			if (head == tail)
//				cout << -1 << '\n';
//			else {
//
//				cout << back() << '\n';
//
//			}
//		}
//
//
//	}
//
//
//	return 0;
//}




//// ��ŷ�� 7�� ��


//�������� 1 

//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[2 * MX + 1];
//int head = MX, tail = MX;
//
//void push_front(int x) {
//
//
//	dat[--head] = x;
//}
//
//void push_back(int x) {
//
//	dat[tail++] = x;
//}
//
//void pop_front() {
//
//	if (head == tail)
//		return;
//
//	head++;
//
//}
//
//void pop_back() {
//
//	if (head == tail)
//		return;
//
//	tail--;
//
//
//}
//
//int front() {
//	if (head == tail)
//		return -1;
//
//	return dat[head];
//}
//
//int back() {
//	if (head == tail)
//		return -1;
//
//	return dat[tail-1];
//}
//
//void test() {
//	push_back(30); // 30
//	cout << front() << '\n'; // 30
//	cout << back() << '\n'; // 30
//	push_front(25); // 25 30
//	push_back(12); // 25 30 12
//	cout << back() << '\n'; // 12
//	push_back(62); // 25 30 12 62
//	pop_front(); // 30 12 62
//	cout << front() << '\n'; // 30
//	pop_front(); // 12 62
//	cout << back() << '\n'; // 62
//}
//
//int main(void) {
//	test();
//}


// ��ŷ�� ���� 10866 stl �̿�

//#include <iostream>
//#include <string>
//#include <deque>
//
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//    
//	deque<int> deque;
//	int cnt;
//	string cmd;
//	cin >> cnt;
//
//	while (cnt--) {
//
//		cin >> cmd;
//
//		if (cmd == "push_front") {
//
//			int num;
//			cin >> num;
//			deque.push_front(num);
//
//		}
//		else if (cmd == "push_back") {
//			int num;
//			cin >> num;
//			deque.push_back(num);
//
//		}
//		else if (cmd == "pop_front") {
//
//			if (deque.empty())
//				cout << -1 << '\n';
//			else {
//				cout << deque.front() << '\n';
//
//				deque.pop_front();
//
//			}
//		}
//		else if (cmd == "pop_back") {
//			if (deque.empty())
//				cout << -1 << '\n';
//			else {
//				cout << deque.back() << '\n';
//
//				deque.pop_back();
//			}
//		}
//		else if (cmd == "size") {
//
//			cout << deque.size() << '\n';
//
//		}
//		else if (cmd == "empty") {
//
//			cout << deque.empty() << '\n';
//
//		}
//		else if (cmd == "front") {
//
//			if (deque.empty())
//				cout << -1 << '\n';
//			else
//				cout << deque.front() << '\n';
//
//		}
//		else if (cmd == "back") {
//
//			if (deque.empty())
//				cout << -1 << '\n';
//			else {
//				cout << deque.back() << '\n';
//			}
//
//
//
//		}
//	}
//	return 0;
//}



////////////////// �Ϲ� ����
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int MX = 1000005;
//int dat[2 * MX + 1];
//int head = MX, tail = MX;
//
//void push_front(int x) {
//
//
//	dat[--head] = x;
//}
//
//void push_back(int x) {
//
//	dat[tail++] = x;
//}
//
//void pop_front() {
//
//	if (head == tail)
//		return;
//
//	head++;
//
//}
//
//int front() {
//	if (head == tail)
//		return -1;
//
//	return dat[head];
//}
//
//int back() {
//	if (head == tail)
//		return -1;
//
//	return dat[tail-1];
//}
//
//void pop_back() {
//
//	if (head == tail)
//		return;
//
//	tail--;
//
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int cnt;
//	string cmd;
//	cin >> cnt;
//
//	while (cnt--) {
//
//		cin >> cmd;
//
//		if (cmd == "push_front") {
//
//			int num;
//			cin >> num;
//			push_front(num);
//
//		}
//		else if (cmd == "push_back") {
//			int num;
//			cin >> num;
//			push_back(num);
//
//		}
//		else if (cmd == "pop_front") {
//
//			if (head==tail)
//				cout << -1 << '\n';
//			else {
//				cout << front() << '\n';
//
//				pop_front();
//
//			}
//		}
//		else if (cmd == "pop_back") {
//			if (tail==head)
//				cout << -1 << '\n';
//			else {
//				cout << back() << '\n';
//
//				pop_back();
//			}
//		}
//		else if (cmd == "size") {
//
//			cout << tail-head << '\n';
//
//		}
//		else if (cmd == "empty") {
//
//			if (tail == head)
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//
//		}
//		else if (cmd == "front") {
//
//			if (tail == head)
//				cout << -1 << '\n';
//			else
//				cout << front() << '\n';
//
//		}
//		else if (cmd == "back") {
//
//			if (tail == head)
//				cout << -1 << '\n';
//			else {
//				cout << back() << '\n';
//			}
//
//
//
//		}
//	}
//	return 0;
//}


// ��ŷ�� 8�� 4949 �������� ����

//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//   string str;
//   
//  
//
//   stack<char> stack;
//   
//
//   while (1) {
//
//	   while (!stack.empty()) stack.pop();
//
//
//	   getline(cin, str, '.');
//	   cin.ignore();
//
//	   int leng = str.length();
//
//	   if(leng==0)
//		   break;
//
//	   int char_cnt = 0;
//
//
//	   for (int i = 0; i < leng; i++) {
//
//		   if ((str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']')) {
//
//			   char_cnt++;
//			   if (str[i] == ')') {
//
//				   if (!stack.empty()) {
//
//					   if (stack.top() != '(') {
//						   cout << "no" << '\n';
//						   break;
//					   }
//					   else {
//						   stack.pop();
//					   }
//				   }
//				   else {
//					   cout << "no" << '\n';
//					   break;
//				   }
//			   }
//			   else if (str[i] == '(') {
//
//				   stack.push(str[i]);
//
//			   }
//			   else if (str[i] == ']') {
//
//				   if (!stack.empty()) {
//
//					   if (stack.top() != '[') {
//						   cout << "no" << '\n';
//						   break;
//					   }
//					   else {
//						   stack.pop();
//					   }
//				   }
//				   else {
//					   cout << "no" << '\n';
//					   break;
//				   }
//
//			   }
//			   else if (str[i] == '[') {
//
//				   stack.push(str[i]);
//
//			   }
//
//
//		   }
//
//
//		   if (i == leng - 1) {
//
//			   if (char_cnt == 0)
//				   cout << "yes" << '\n';
//			   else
//			   {
//
//				   if (stack.empty())
//					   cout << "yes" << '\n';
//				   else
//					   cout << "no" << '\n';
//			   }
//		   }
//
//	   }
//   }
//
//	return 0;
//}



// ��ŷ�� 4949�ؼ�
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	while (true) {
//		string a;
//		getline(cin, a);
//		if (a == ".") break;
//		stack<char> s;
//		bool isValid = true;
//		for (auto c : a) {
//			if (c == '(' || c == '[') s.push(c);
//			else if (c == ')') {
//				if (s.empty() || s.top() != '(') {
//					isValid = false;
//					break;
//				}
//				s.pop();
//			}
//			else if (c == ']') {
//				if (s.empty() || s.top() != '[') {
//					isValid = false;
//					break;
//				}
//				s.pop();
//			}
//		}
//		if (!s.empty()) isValid = false;
//		if (isValid) cout << "yes\n";
//		else cout << "no\n";
//	}
//}



// 10799 �踷���
//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	stack<char> stack;
//	string cmd;
//	cin >> cmd;
//
//	int total = 0;
//
//	for (int i = 0; i < cmd.size(); i++) {
//	
//		if (cmd[i] == '(') {
//
//			stack.push('(');
//		}
//		else if (cmd[i-1]=='(' && cmd[i]==')') {
//
//			stack.pop();
//			total+= stack.size();
//		}
//		else {
//
//			stack.pop();
//			total++;
//		}
//
//
//	
//	}
//
//	cout << total;
//
//
//	return 0;
//}


// ���� 2504  ��ȣ�� ��
//Ʋ�� ���� �׽�Ʈ ���̽� 40%
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	stack<int> stack;
//	string cmd;
//	cin >> cmd;
//	int oper_result = 0;
//	bool flag = true;
//
//	for (int i = 0; i < cmd.size(); i++) {
//		if (cmd[i]=='(') 
//			stack.push(cmd[i]);		
//		else if (cmd[i] == ')') {
//
//			if (i != 0 && cmd[i - 1] == '(') {
//				stack.pop();
//				stack.push(2);
//			}
//			else {
//				int sum = 0;
//				while (1) {
//
//					if (!stack.empty()) {
//						int result = stack.top();	
//						if (result == '(') {
//							stack.pop();
//							stack.push(sum*2);
//							break;
//						}
//						else if (result == '[') {
//							flag = false;
//							break;
//						}
//						else {
//
//							sum += result;
//							stack.pop();
//						}
//					}
//					else {
//						flag = false;
//	
//						break;
//					}
//				}
//			}		
//		}
//		else if (cmd[i] == '[') {
//			stack.push(cmd[i]);
//		}
//		else if (cmd[i] == ']') {
//			if (i!=0 && cmd[i - 1] == '[') {
//				stack.pop();
//				stack.push(3);
//			}
//			else {
//				int sum = 0;
//				while (1) {
//					if (!stack.empty()) {
//						int result = stack.top();
//
//						if (result == '[') {
//							stack.pop();
//							stack.push(sum * 3);
//							break;
//						}
//						else if (result == '(') {
//							flag = false;
//							break;
//						}
//						else {
//							sum += result;
//							stack.pop();
//						}
//					}
//					else {
//						flag = false;		
//						break;
//					}
//				}
//			}
//		}	
//	}
//	if(flag)
//		while (!stack.empty() ) {
//
//			int pick=stack.top();
//			if (pick == '[' || pick == ']' || pick == '(' || pick == ')') {
//				oper_result = 0; break;
//			}
//
//			oper_result+=stack.top();
//			stack.pop();
//		}
//	cout << oper_result;
//	return 0;
//}
//







//#include <iostream>
//#include <string>
//#include <stack>
//
//
//using namespace std;
//int main() {
//
//	string cmd;	
//	cin >> cmd;
//	stack<int> stack;
//	int temp = 1;
//	int total = 0;
//	for (int i = 0; i < cmd.length(); i++) {
//
//		if (cmd[i] == '(') {
//
//			stack.push('(');
//			temp *= 2;
//		}
//		else if (cmd[i] == '[') {
//
//			stack.push('[');
//			temp *= 3;
//		}
//		else if (cmd[i] == ')') {
//
//
//			if (stack.empty() || stack.top() != '(') {
//				total = 0;
//				break;
//			}
//
//
//			if (cmd[i - 1] == '(') {
//
//				total += temp;
//
//			}
//			temp /= 2;
//			stack.pop();
//
//		}
//		else if (cmd[i] == ']') {
//
//			if (stack.empty() || stack.top() != '[') {
//				total = 0;
//				break;
//			}
//
//			if (cmd[i - 1] == '[') {
//
//				total += temp;
//
//			}
//
//			temp /= 3;
//			stack.pop();
//
//		}
//	}
//
//	if (!stack.empty())
//	{
//		total = 0;
//	}
//
//	cout << total;
//
//
//	return 0;
//}


//��ŷ�� 8�� bfs // ���� 1926 �׸�
//#include <iostream>
//#include <utility>
//#include <queue>
//
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//using namespace std;
//
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int height, width;
//	cin >> height;
//	cin >> width;
//
//	queue<pair<int, int> > Q;
//	int picture[502][502] = { 0 };
//	int vis[502][502] = { 0, };
//
//	int dx[4] = { 1,0,-1,0 };
//	int dy[4] = { 0,1,0,-1 };
//
//	int max = 0, cnt_max = 0, cnt_pic = 0;
//
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++) {
//
//			cin >> picture[i][j];
//		}
//	}
//
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++) {
//			if (picture[i][j] != 0 && vis[i][j] != 1) {
//				cnt_pic++;
//				vis[i][j] = 1; // (0, 0)�� �湮�ߴٰ� ���
//				Q.push({ i,j }); // ť�� �������� (0, 0)�� ����.
//				while (!Q.empty()) {
//					pair<int, int> cur = Q.front(); Q.pop();
//					cnt_max++;
//					for (int z = 0; z < 4; z++) {
//
//						int nx = cur.X + dx[z];
//						int ny = cur.Y + dy[z];
//
//						if (nx < 0 || ny < 0 || nx >= height || ny >= width) continue;
//						if (vis[nx][ny] == 1 || picture[nx][ny] == 0) continue;
//
//						vis[nx][ny] = 1;
//
//						Q.push({ nx, ny });
//					}
//				}
//				if (cnt_max > max)
//					max = cnt_max;
//				cnt_max = 0;
//			}
//		}
//	}
//	cout << cnt_pic << '\n' << max;
//    return 0;
//}




//#include <iostream>
//#include <utility>
//#include <queue>
//#include <string>
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//using namespace std;
//
//int main() {
//
//	queue<pair<int, int>> Q;
//	int N, M;
//	cin >> N;
//	cin >> M;
//	string raw_num;
//	int board[102][102];
//	int vis[102][102] = { 0, };
//
//	fill(&board[0][0], &board[101][101], -1);
//
//	for (int i = 0; i < N; i++) {
//		
//		cin >> raw_num;
//
//		for (int j = 0; j < M; j++) {
//
//			board[i][j]=raw_num[j]-48;
//
//		}
//	}
//	int dx_arr[4] = { 1,0,-1,0 };
//	int dy_arr[4] = {0,1,0,-1};
//	int range = 0;
//	Q.push({ 0,0 });
//	board[0][0] = range;
//	while (!Q.empty()) {
//
//		pair<int, int> pa = Q.front(); Q.pop();
//		
//
//		for (int z = 0; z < 4; z++) {
//
//			int dx = pa.X + dx_arr[z];
//			int dy= pa.Y + dy_arr[z];
//
//			if (dx < 0 || dy < 0 || dx >= N || dy >=M ) continue;
//			if (board[dx][dy] == 0 || vis[dx][dy] != 0) continue;
//
//
//			range= board[pa.X][pa.Y]+1;
//			 
//			board[dx][dy]=range;
//			vis[dx][dy] = 1;
//			Q.push({ dx,dy });
//
//		}
//	}
//
//	cout << board[N - 1][M - 1]+1;
//
//
//	return 0;
//}


//���� �˰��� 7576 �丶��
//#include <iostream>
//#include <string>
//#include <queue>
//#include <utility>
//
//
//#define X first
//#define Y second
//
//using namespace std;
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N, M;
//
//	queue < pair<int, int> >Q;
//	int board[1002][1002];
//
//	int max_day = 0;
//	bool flag = false;
//	
//
//	cin >> M >> N;
//
//	int dx_arr[4] = {1,0,-1,0};
//	int dy_arr[4] = {0,1,0,-1};
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> board[i][j];
//			
//			if (board[i][j] == 1)
//				Q.push({ i, j });
//		}
// 	}
//
//	
//	while (!Q.empty()) {
//
//
//		pair<int, int> pair = Q.front(); Q.pop();
//
//	
//		flag = false;
//		for (int a = 0; a < 4; a++) {
//
//			int dx = dx_arr[a] + pair.X;
//			int dy = dy_arr[a] + pair.Y;
//
//			if (dx < 0 || dy < 0 || dx >= N || dy>=M) continue;
//			if (board[dx][dy] != 0 ) continue;
//
//			max_day= board[dx][dy]=board[pair.X][pair.Y]+1;
//
//			Q.push({dx,dy});
//
//
//		}
//		
//
//	}
//	int value;
//	if (max_day != 0)
//		value = max_day - 1;
//	else
//		value = max_day;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//		
//			if (board[i][j] == 0)
//				value = -1;
//
//		}
//	
//	}
//
//	cout << value;
//
//
//
//	return 0;
//}


//���� bfs  7569 
//#include <iostream>
//#include <utility>
//#include <queue>
//#include <tuple>
//
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//using namespace std;
//
//int board[102][102][102];
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N, M, H;
//	cin >> M >> N >> H;
//
//
//	queue<tuple<int, int, int> > Q;
//
//
//
//	int dx[6] = { 1,0,-1,0 ,0 ,0 };
//	int dy[6] = { 0,1,0,-1 ,0 ,0 };
//	int dz[6] = { 0,0,0 ,0 ,1, -1 };
//
//	for (int z = 0; z < H; z++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//
//				cin >> board[z][i][j];
//				if (board[z][i][j] == 1)
//					Q.push(make_tuple(z, i, j));
//			}
//		}
//	}
//
//	bool flag = false;
//	int day = 0;
//
//		while (!Q.empty()) {
//
//			tuple<int, int, int> cur = Q.front(); Q.pop();
//			for (int z = 0; z < 6; z++) {
//
//				int nh = get<0>(cur) + dz[z];
//				int nx = get<1>(cur) + dx[z];
//				int ny = get<2>(cur) + dy[z];
//
//
//				if (nh < 0 || nx < 0 || ny < 0 || nx >= N || ny >= M ||
//					nh >= H) continue;
//				if (board[nh][nx][ny] != 0) continue;
//
//
//				//cout << get<0>(cur) << ' ' << get<1>(cur) << ' ' << get<2>(cur) << ' ';
//
//				board[nh][nx][ny] = board[get<0>(cur)][get<1>(cur)][get<2>(cur)]+ 1;
//
//				Q.push(make_tuple(nh,nx,ny));
//			}
//		}
//	
//
//
//		int max = -999;
//	for (int h = 0; h < H; h++) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//
//				if (board[h][i][j] == 0) {
//
//					cout << -1;
//					return 0;
//				}
//
//				if (board[h][i][j] > max)
//					 max= board[h][i][j];
//
//
//			}
//
//		}
//	}
//
//	if (max == 1 || max == -1)
//		cout << 0;
//	else
//		cout << max-1;
//
//
//
//	//cout << << '\n' << max;
//	return 0;
//}


//���� bfs 4179 


//#include <iostream>
//#include <utility>
//#include <queue>
//#include <map>
//#include <string>
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//using namespace std;
//
//int vis_j[1002][1002];
//int vis_f[1002][1002];
//string st_j[1002];
//string st_f[1002];
//
//int dist1[1002][1002];
//int dist2[1002][1002];
//
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int R, C;
//	cin >> R >> C;
//
//
//
//
//
//	queue<pair<int, int> > J;
//	queue<pair<int, int> > F;
//
//	map<pair<int, int>, int> m;
//
//	int dx[4] = { 1,0,-1,0 };
//	int dy[4] = { 0,1,0,-1 };
//
//
//	for (int i = 0; i < R; i++) {
//		cin >> st_j[i];   st_f[i] = st_j[i];
//		for (int j = 0; j < st_j[i].length(); j++) {
//
//			if (st_f[i][j] == 'J') {
//				dist2[i][j] = 1;
//				J.push({ i,j });
//				vis_j[i][j] = 1;
//			}
//			if (st_f[i][j] == 'F') {
//				dist1[i][j] = 1;
//				F.push({ i,j });
//				vis_f[i][j] = 1;
//			}
//		}
//	}
//
//
//
//	while (!F.empty()) {
//		pair<int, int> cur = F.front(); F.pop();
//
//		for (int z = 0; z < 4; z++) {
//
//			int nx = cur.X + dx[z];
//			int ny = cur.Y + dy[z];
//
//
//			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
//			if (st_f[nx][ny] == '#') {
//				continue;
//			}
//			if (vis_f[nx][ny] != 0) continue;
//
//			vis_f[nx][ny] = 1;
//
//			dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
//
//			F.push({ nx, ny });
//		}
//	}
//
//
//
//	int min = 99999999;
//
//	while (!J.empty()) {
//		pair<int, int> cur = J.front(); J.pop();
//
//		for (int z = 0; z < 4; z++) {
//
//			int nx = cur.X + dx[z];
//			int ny = cur.Y + dy[z];
//
//
//			if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
//				cout << "total: " << dist2[cur.X][cur.Y] << "\n\n\n";
//				
//				return 0;
//				
//			}
//			if (st_j[nx][ny] == '#') {
//				continue;
//			}
//			if (vis_j[nx][ny] != 0) continue;
//
//
//
//
//			if (vis_f[nx][ny] != 0 && (int)dist2[nx][ny] >= (int)dist1[nx][ny]) continue;
//			dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
//
//
//			vis_j[nx][ny] = 1;
//
//			J.push({ nx, ny });
//		}
//	}
//
//
//		cout << "IMPOSSIBLE";
//
//
//
//	return 0;
//}


/*
for (int i = 0; i < R; i++) {

for (int j = 0; j < st_j[i].length(); j++) {
cout << (int)st_j[i][j] << ' ';
}
cout << '\n';
}


/*
for (int i = 0; i < R; i++) {

for (int j = 0; j < st_f[i].length(); j++) {
cout << (int)st_f[i][j] << ' ';
}
cout << '\n';
}

*/



//#include <iostream>
//#include <utility>
//#include <queue>
//#include <map>
//#include <string>
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//using namespace std;
//
//int vis_j[1002][1002];
//int vis_f[1002][1002] = { 0, };
//string st_j[1002];
//string st_f[1002];
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int R, C;
//	cin >> R >> C;
//
//
//
//
//
//	queue<pair<int, int> > J;
//	queue<pair<int, int> > F;
//
//	map<pair<int, int>, int> m;
//
//	int dx[4] = { 1,0,-1,0 };
//	int dy[4] = { 0,1,0,-1 };
//
//
//	for (int i = 0; i < R; i++) {
//		cin >> st_j[i];   st_f[i] = st_j[i];
//		for (int j = 0; j < st_j[i].length(); j++) {
//
//			if (st_f[i][j] == 'J') {
//				st_j[i][j] = 1;
//				J.push({ i,j });
//				vis_j[i][j] = 1;
//			}
//			if (st_f[i][j] == 'F') {
//				st_f[i][j] = 1;
//				F.push({ i,j });
//				vis_f[i][j] = 1;
//			}
//		}
//	}
//
//
//
//	while (!F.empty()) {
//		pair<int, int> cur = F.front(); F.pop();
//
//		for (int z = 0; z < 4; z++) {
//
//			int nx = cur.X + dx[z];
//			int ny = cur.Y + dy[z];
//
//
//			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
//			if (st_f[nx][ny] == '#') {
//				continue;
//			}
//			if (vis_f[nx][ny] != 0) continue;
//
//			vis_f[nx][ny] = 1;
//
//			st_f[nx][ny] = st_f[cur.X][cur.Y] + 1;
//
//			F.push({ nx, ny });
//		}
//	}
//
//
//
//	int min = 99999999;
//
//	while (!J.empty()) {
//		pair<int, int> cur = J.front(); J.pop();
//
//		for (int z = 0; z < 4; z++) {
//
//			int nx = cur.X + dx[z];
//			int ny = cur.Y + dy[z];
//
//
//			if (nx < 0 || ny < 0 || nx >= R || ny >= C) {
//			
//				if ((int)st_j[cur.X][cur.Y] < min) {
//					min = (int)st_j[cur.X][cur.Y];
//				}
//				continue;
//			}
//			if (st_j[nx][ny] == '#') {
//				continue;
//			}
//			if (vis_j[nx][ny] != 0) continue;
//
//
//			if (vis_f[nx][ny] != 0 && (int)st_j[cur.X][cur.Y]+1 >= (int)st_f[nx][ny]) continue;
//			st_j[nx][ny] = (int)st_j[cur.X][cur.Y] + 1;
//
//
//			vis_j[nx][ny] = 1;
//
//			J.push({ nx, ny });
//		}
//	}
//
//
//	if (min == 99999999)
//		cout << "IMPOSSIBLE";
//	else
//		cout << min;
//
//
//
//	return 0;
//}



// ���� 1697 ��

#include <iostream>
//#include <queue>
//int dist_su[200000];
//int dist_dong[200000];
//
//using namespace std;
//int main() {
//
//	int N, K;
//	queue<int> Q;
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//    cin >> N >> K;
//
//	int dx[3] = { -1,1,2 };
//
//	Q.push(N);
//	dist_su[N] = 0;
//	while (!Q.empty()) {
//
//		if (N == K) {
//			cout << 0;
//			return 0;
//		}
//
//		int cur = Q.front(); Q.pop();
//
//		for (int z = 0; z < 3; z++) {
//			int nxt;
//			if (z == 2) {
//				nxt = cur*dx[z];
//			}
//			else
//				nxt = cur + dx[z];
//
//			if (nxt == K) {
//
//				cout << dist_su[cur]+1;
//				return 0;
//			}
//
//			if (nxt < 0 || nxt >= 200000) continue;
//			if (dist_su[nxt] > 0) continue;
//
//
//			dist_su[nxt] = dist_su[cur] + 1;
//			Q.push(nxt);
//
//
//		}
//	}
//
//
//
//	return 0;
//}




//��ŷ�� 9�� dfs ����


//#include <bits/stdc++.h>
//using namespace std;
//#define X first
//#define Y second // pair���� first, second�� �ٿ��� ���� ���ؼ� ���
//int board[502][502] =
//{ { 1,1,1,1,0,0,0,0,0,0 },
//{   1,0,1,1,0,0,0,0,0,0 },
//{   1,1,1,1,0,0,0,0,0,0 },
//{   1,1,0,1,0,0,0,0,0,0 },
//{   0,1,0,0,0,0,0,0,0,0 },
//{   0,0,0,0,0,0,0,0,0,0 },
//{   0,0,0,0,0,0,0,0,0,0 } }; // 1�� �Ķ� ĭ, 0�� ���� ĭ�� ����
//bool vis[502][502]; // �ش� ĭ�� �湮�ߴ��� ���θ� ����
//int n = 7, m = 10; // n = ���� ��, m = ���� ��
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 }; // �����¿� �� ������ �ǹ�
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	stack<pair<int, int> > S;
//	vis[0][0] = 1; // (0, 0)�� �湮�ߴٰ� ���
//	S.push({ 0,0 }); // ���ÿ� �������� (0, 0)�� ����.

//	while (!S.empty()) {
//		pair<int, int> cur = S.top(); S.pop();
//		//cout << '(' << cur.X << ", " << cur.Y << ") -> ";
//		for (int dir = 0; dir < 4; dir++) { // �����¿� ĭ�� ���캼 ���̴�.
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir]; // nx, ny�� dir���� ���� ������ ������ ĭ�� ��ǥ�� ��
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // ���� ���� ��� �Ѿ
//			if (vis[nx][ny] || board[nx][ny] != 1) continue; // �̹� �湮�� ĭ�̰ų� �Ķ� ĭ�� �ƴ� ���
//			vis[nx][ny] = 1; // (nx, ny)�� �湮�ߴٰ� ���
//			board[nx][ny] = board[cur.X][cur.Y]+1;
//			S.push({ nx,ny });
//		}
//	}
//
//
//	for(int i=0 ;i<n; i++){
//		for (int j = 0;  j < m; j++) {
//
//			cout << board[i][j]<<' ';
//
//
//	  }
//		cout << '\n';
//	}
//
//	return 0;
//
//}



//��� ���� 2447�� �����
//
//#include <iostream>
//
//using namespace std;
//
////(1,1) (1,4)  1,7)  i%3==1
//
//// 3, 3.4.5  3. 12.13.14  // (i/3)%3==1
//
////1 , 4  , 7
//void write_star(int i, int j, int num) {
//
//
//	//if (i % 3 == 1 && j%3==1) cout << ' ';
//
//	if ((i / num) % 3 ==1 && (j / num) % 3==1) {
//
//
//		cout << ' ';
//
//	}
//	else {
//
//		if (num / 3 == 0 ) {
//
//			cout << '*';
//		}
//		else {
//		
//			write_star(i, j, num / 3);
//		}
//
//	}
//
//	
//}
//
//
//int main() {
//
//	int num;
//
//	cin >> num;
//
//
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++) {
//
//			write_star(i,j,num);
//		}
//		cout << '\n';
//    }
//	return 0;
//}	
//



//��ŷ�� ���


//#include <iostream>
//N���� 1���� ���
//using namespace std;
//
//
//void write(int N) {
//
//
//	if (N == 0)
//		return;
//
//	cout << N << '\n';
//
//	write(N-1);
//}
//
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	write(N);
//
//
//	return 0;
//}	

//1���� N������ ��
//#include <iostream>
//
//using namespace std;
//
//
//int total(int N) {
//
//
//	if (N == 0)
//		return 0;
//
//
//	return N+total(N - 1);
//}
//
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	cout<< total(N);
//
//
//	return 0;
//}


// �Ǻ� ���� �߻��� dp�� �ذ�



//#include <iostream>
//
//using namespace std;
//
//
//int fibo(int N) {
//
//
//	if (N <= 1)
//		return 1;
//
//
//	return fibo(N - 1) + fibo(N - 2);
//}
//
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	cout<< fibo(N);
//
//
//	return 0;
//}





//���� �˰��� 1629 ��
/*
ll POW(ll a, ll b, ll m){
if(b==1) return a % m;
ll val = POW(a, b/2, m);
val = val * val % m;
if(b%2 == 0) return val;
return val * a % m;
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
ll a,b,c;
cin >> a >> b >> c;
cout << POW(a,b,c);
}
*/
//#include <iostream>
//
//using namespace std;
//
//
// long long mod( long long a,  long long b,  long long c) {
//
//
//	if (b /2 !=0 ){
//
//		if (b % 2 == 0) {
//
//			return mod(a, b / 2, c) *mod(a, b / 2, c) % c;
//
//		}
//		else {
//
//			return (mod(a, b / 2, c)*mod(a, b / 2, c) * a%c)%c;
//		}
//
//	}
//	else {
//
//
//
//		return a%c;
//
//	}
//}
//
//
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	 long long a,b,c;
//	cin >> a>>b>>c;
//
//	cout << mod(a, b, c);
//
//	return 0;
//}


//��ŷ�� ��
/* 
ll POW(ll a, ll b, ll m){
if(b==1) return a % m;
ll val = POW(a, b/2, m);
val = val * val % m;
if(b%2 == 0) return val;
return val * a % m;
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
ll a,b,c;
cin >> a >> b >> c;
cout << POW(a,b,c);
}
*/

// ���� Ǭ ���� 
//#include <iostream>
//
//using namespace std;
//
//
//long long mod(long long a, long long b, long long c) {
//
//
//
//	if (b == 1)
//		return a%c;
//
//	if (b % 2 == 0) {
//         
//		long long value = mod(a, b / 2, c)%c;
//
//		return value*value%c;
//
//	}
//	else {
//
//		long long value = mod(a, b / 2, c)%c;
//
//		 value=value*value%c;
//
//		 return value*a%c;
//
//	}
//	
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	long long a, b, c;
//	cin >> a >> b >> c;
//
//	cout << mod(a, b, c)%c;
//
//	return 0;
//}



// ��ŷ�� ��� �ϳ����� ž

//#include <iostream>
//#include <queue>
//using namespace std;
//int cnt1 = 0;
//void func(int a, int b, int n) {
//
//    
//	if (n == 1)
//		return; 
//
//
//	func(a, 6-a-b, n - 1);
//	cout << a << ' ' << b << '\n';
//	func(6 - a - b, b, n - 1);
//
//
//}
//
//
//void func_cnt(int a, int b, int n) {
//
//
//	if (n == 0)
//		return;
//
//
//	func_cnt(a, 6 - a - b, n - 1);
//	cnt1++;
//	func_cnt(6 - a - b, b, n - 1);
//
//
//}
//
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	func_cnt(1, 3, n);
//	cout << cnt1 << '\n';
//	func(1, 3, n);
//	
//
//	return 0;
//
//}
//
//
////��ŷ�� ���� �ϳ����� ž
//
//using namespace std;
//
//void func(int a, int b, int n) {
//	if (n == 1) {
//		cout << a << ' ' << b << '\n';
//		return;
//	}
//	func(a, 6 - a - b, n - 1);
//	cout << a << ' ' << b << '\n';
//	func(6 - a - b, b, n - 1);
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int k;
//	cin >> k;
//	cout << (1 << k) - 1 << '\n';
//	func(1, 3, k);
//}


// ��ŷ�� ��� ���� 1074�� ���� �ۼ��� �ڵ�
//#include <cmath>
//#include <iostream>
//using namespace std;
//
//int func(int N, int r, int c) {
//
//	if (N == 0) {
//		return 0;
//
//	}
//	
//	int N_Num = (int)pow(2, N-1)*pow(2, N-1);
//
//	int wid=pow(2, N) / 2;
//	if (r < wid  && c < wid) {  //1����
//      
//		return func(N - 1, r, c);
//
//	}
//	else if (c >= wid && r< wid) { //2����
//
//		return N_Num+func(N - 1, r, c-wid );
//
//	}
//	else if (c<wid && r>=wid) { //3����
//
//		return N_Num*2 + func(N - 1, r-wid, c);
//	}
//	else {
//
//		return N_Num * 3 + func(N - 1, r-wid, c-wid);
//
//
//	}
//}
//
//int ss(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N, r, c;
//
//	cin >> N >> r >> c;
//
//	cout << func(N, r, c);
//
//	return 0;
//
//}


/*
//1074 ��ŷ�� ���� �ҽ�
#include <bits/stdc++.h>
using namespace std;

int func(int n, int r, int c){
if(n == 0) return 0;
int half = 1<<(n-1);
if(r < half && c < half) return func(n-1, r, c);
if(r < half && c >= half) return half*half + func(n-1, r, c-half);
if(r >= half && c < half) return 2*half*half + func(n-1, r-half, c);
return 3*half*half + func(n-1, r-half, c-half);
}

int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
int n, r, c;
cin >> n >> r >> c;
cout << func(n, r, c);
}

*/


//��ŷ�� 11�� ��Ʈ��ŷ // ���� 15649�� ��

//using namespace std;
//
//int n, m;
//int arr[10];
//bool isused[10];
//
//void func(int k) { // ���� k������ ���� ������.
//	if (k == m) { // m���� ��� ��������
//		for (int i = 0; i < m; i++)
//			cout << arr[i] << ' '; // arr�� ����ص� ���� ���
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) { // 1���� n������ ���� ����
//		if (!isused[i]) { // ���� i�� ������ �ʾ�����
//			arr[k] = i; // k��° ���� i�� ����
//			isused[i] = 1; // i�� ���Ǿ��ٰ� ǥ��
//			func(k + 1); // ���� ���� ���Ϸ� �� �ܰ� �� ��
//			isused[i] = 0; // k��° ���� i�� ���� ��� ��쿡 ���� �� Ȯ�������� i�� ���� �������ʾҴٰ� �����.
//		}
//	}
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	func(0);
//}


// ���� ������ ��
#include <iostream>
//
//using namespace std;
//int n, m;
//
//int arr[10];
//int check[10];
//void func(int k) {
//
//	if (k>=m) {
//
//		for (int i = 0; i < m; i++)
//			cout << arr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (!check[i]) {
//
//			check[i] = 1;
//			arr[k] = i;			
//			func(k+1);
//			check[i] = 0;
//		}
//
//
//
//	}
//
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//
//	func(0);
//
//	return 0;
//}



//���� �˰��� 9663

//���� ������ �� 
//#include <iostream>
//using namespace std;
//
//
//int n;
//int check1[15][15];
//int total = 0;
//
//
//bool check_field(int k, int i) {
//
//	int cnt = k;
//	int row = i;
//
//	if (cnt == 0)
//		return true;
//
//	while (1) {
//		cnt--; row--;
//
//		if (cnt < 0 || row < 0) {
//			break;
//		}
//
//		if (check1[cnt][row]) {
//
//			return false;
//		}
//	}
//	cnt = k; row = i;
//	while (1) {
//
//		cnt--; row++;
//
//		if (cnt < 0 || row >= n)
//			break;
//
//		if (check1[cnt][row]) {
//
//			return false;
//		}
//	}
//	cnt = k; row = i;
//
//	while (1) {
//
//		cnt--;
//
//		if (cnt < 0)
//			break;
//		if (check1[cnt][row]) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//
//void func(int k) {
//
//	if (n == k) {
//
//		total++;
//		return;
//	}
//
//	for (int i = 0; i < n; i++) {
//
//
//		if (!check1[k][i]){
//			check1[k][i] = true;
//
//			//cout <<k<<' '<<i << ' ';
//
//			if (check_field(k, i)) {
//
//				func(k + 1);
//			}
//	
//			check1[k][i] = false;
//		}
//	}
//
//}
//
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n ;
//
//	func(0);
// 
//	cout << total;
//
//	return 0;
//}
//
//
//// ��ŷ�� �� �ش� �ڵ�
//
//#include <bits/stdc++.h>
//using namespace std;
//bool isused1[40]; // column�� �����ϰ� �ִ���
//bool isused2[40]; // / ���� �밢���� �����ϰ� �ִ���
//bool isused3[40]; // \ ���� �밢���� �����ϰ� �ִ���
//
//int cnt = 0;
//int n;
//void func(int cur) { // cur��° row�� ���� ��ġ�� ������
//	if (cur == n) { // N���� ���µ� �����ߴٸ�
//		cnt++;
//		return;
//	}
//	for (int i = 0; i < n; i++) { // (cur, i)�� ���� ���� ����
//		if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1]) // column�̳� �밢�� �߿� ������ �ִٸ�
//			continue;
//		isused1[i] = 1;
//		isused2[i + cur] = 1;
//		isused3[cur - i + n - 1] = 1;
//		func(cur + 1);
//		isused1[i] = 0;
//		isused2[i + cur] = 0;
//		isused3[cur - i + n - 1] = 0;
//	}
//}
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	func(0);
//	cout << cnt;
//}
//


// ��ŷ�� ��Ʈ��ŷ ���� 1182


//#include <iostream>
//using namespace std;
//
//int n_arr[30];
//int n, s;
//
//
//int su = 0;
//int first = 0;
//void func(int q,int total) {
//	
//
//	if (q == n ) {
//
//		
//		if (first!=0 && total == s)
//			su++;
//		if (!first)
//			first = 1;
//
//		return;
//	}
//	
//	
//	func(q + 1, total);
//	func(q + 1, total+ n_arr[q]);
//
//}
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	
//
//	cin >> n >> s;
//
//
//	for (int i = 0; i < n; i++)
//		cin >> n_arr[i];
//
//	func(0, 0);
//	
//
//	cout << su;
//
//	return 0;
//}





// next permutation

//#include <algorithm>
//���� 
//int main() {
//	int a[3] = { 1,2,3 };
//
//	do {
//		for (int i = 0; i < 3; i++)
//			cout << a[i];
//		cout << '\n';
//
//	} while (next_permutation(a, a + 3));
//}


//����
//int main() {
//int a[4] = { 0,0,1,1 };
//
//	do {
//		for (int i = 0; i < 4; i++) {
//
//			if (a[i] == 0)
//				cout << i + 1;
//		}
//			cout << '\n';
//
//	} while (next_permutation(a, a + 4));
//
//	return 0;
//}



//��ŷ�� �ùķ��̼�  ���� 15683 cctv 


// ���� ������ �� 1�� -> Ʋ�� 
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//
//
//int field[12][12];
//
//int check[12][12];
//
//int n, m;
//
//int total = 0;
//
//int get_right_0(int n_, int m_, bool draw) {
//
//	int sum = 0;
//	int i = m_;
//	while (++i < m) {
//
//		if (field[n_][i] == 6)
//			return sum;
//
//		if (field[n_][i] == 0) {
//			sum++;
//			if (draw) field[n_][i] = '#';
//
//		}	
//	}
//	return sum;
//}
//
//int get_left_0(int n_, int m_, bool draw){
//
//	int sum = 0;
//	int i = m_;
//	while (--i >=0) {
//
//		if (field[n_][i] == 6)
//			return sum;
//
//		if (field[n_][i] == 0) {
//			sum++;
//			if (draw) field[n_][i] = '#';
//		}
//
//	}
//
//	return sum;
//}
//
//int get_top_0(int n_, int m_, bool draw) {
//
//	int sum = 0;
//	int i = n_;
//	while (--i >= 0) {
//
//		if (field[i][m_] == 6)
//			return sum;
//
//		if (field[i][m_] == 0) {
//			sum++;
//
//			
//			if (draw) 
//				field[i][m_] = '#';
//		}
//	}
//	
//	return sum;
//}
//
//
//int get_bottom_0(int n_, int m_, bool draw) {
//
//	int sum = 0;
//	int i = n_;
//	while (++i <n) {
//	
//		if (field[i][m_] == 6)
//			return sum;
//
//		if (field[i][m_] == 0) {
//
//			sum++;
//			if (draw)
//				field[i][m_] = '#';
//			
//		}
//	}
//
//	return sum;
//}
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	cin >> n >> m;
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> field[i][j];
//		}
//
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (field[i][j] == 5) {
//				get_right_0(i, j, 1);
//				get_left_0(i, j, 1);
//				get_top_0(i, j, 1);
//				get_bottom_0(i, j,1);
//
//			}
//		}
//	}
//
//	pair<int, int> max_pair; 
//	int width=0,max_=-99999;
//	int result_status=0,status=0;
//
//	while(max_ !=0){
//		max_ = 0; width = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (field[i][j] == 4 && !check[i][j]) {
//			 int r1=	get_right_0(i, j, 0) + get_left_0(i, j, 0) + get_top_0(i, j, 0);
//			 int r2=	get_right_0(i, j, 0) + get_left_0(i, j, 0) + get_bottom_0(i, j, 0);
//			 int r3=	get_right_0(i, j, 0) + get_bottom_0(i, j, 0) + get_top_0(i, j, 0);
//			 int r4= 	get_left_0(i, j, 0) + get_bottom_0(i, j, 0) + get_top_0(i, j, 0);
//
//			 int value=max({ r1,r2,r3,r4 });
//			 if (value == r1) { width = r1; status = 1; };
//			 if (value == r2) { width = r2; status = 2; };
//			 if (value == r3) { width = r3; status = 3 ;};
//			 if (value == r4) { width = r4; status = 4;	};
//
//			 if (width >= max_) {
//				 max_ = width; max_pair.first = i; max_pair.second = j;  result_status = status;
//				
//			 }
//			 status = 0;
//			}
//		}
//	}
//	if (result_status != 0) {
//		int i = max_pair.first; int j = max_pair.second;
//		if (result_status == 1) 
//			get_right_0(i, j, 1) + get_left_0(i, j, 1) + get_top_0(i, j, 1);
//		if (result_status == 2)
//			get_right_0(i, j, 1) + get_left_0(i, j, 1) + get_bottom_0(i, j, 1);
//		if (result_status == 3) 
//			get_right_0(i, j, 1) + get_bottom_0(i, j, 1) + get_top_0(i, j, 1);
//		if (result_status == 4) 
//			get_left_0(i, j, 1) + get_bottom_0(i, j, 1) + get_top_0(i, j, 1);
//		check[i][j] = true;
//	}
//	result_status = 0;
//
//  }
//	for(int i=0; i<10 ;i++)
//		memset(check[i],0,10);
//
//	
//	 width = 0, max_ = -99999;
//	 result_status = 0, status = 0;
//	while (max_ != 0) {
//		max_ = 0; width = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (field[i][j] == 3 && !check[i][j]) {
//					int r1 = get_right_0(i, j, 0) + get_top_0(i, j, 0);
//					int r2 = get_right_0(i, j, 0) + get_bottom_0(i, j, 0);
//					int r3 = get_left_0(i, j, 0) + get_bottom_0(i, j, 0);
//					int r4 = get_left_0(i, j, 0)  + get_top_0(i, j, 0);
//
//					int value = max({ r1,r2,r3,r4 });
//					if (value == r1) { width = r1; status = 1; };
//					if (value == r2) { width = r2; status = 2; };
//					if (value == r3) { width = r3; status = 3; };
//					if (value == r4) { width = r4; status = 4; };
//
//					if (width >= max_) {
//						max_ = width; max_pair.first = i; max_pair.second = j;  result_status = status;
//						
//					}
//					status = 0;
//				}
//			}
//		}
//		if (result_status != 0) {
//			int i = max_pair.first; int j = max_pair.second;
//			if (result_status == 1)
//				get_right_0(i, j, 1) + get_top_0(i, j, 1);
//			if (result_status == 2) 
//				get_right_0(i, j, 1) + get_bottom_0(i, j, 1);
//			if (result_status == 3)
//				get_left_0(i, j, 1) + get_bottom_0(i, j, 1);
//			if (result_status == 4)
//				get_left_0(i, j, 1) + get_top_0(i, j, 1);
//			check[i][j] = true;
//		}
//		result_status = 0;
//	}
//
//
//	for (int i = 0; i<10; i++)
//		memset(check[i], 0, 10);
//
//
//
//	width = 0, max_ = -99999;
//	result_status = 0, status = 0;
//	while (max_ != 0) {
//		max_ = 0; width = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//
//
//				if (field[i][j] == 2 && !check[i][j]) {
//
//					int r1 = get_right_0(i, j, 0) + get_left_0(i, j, 0);
//					int r2 = get_bottom_0(i, j, 0) + get_top_0(i, j, 0);
//					int value = max( r1,r2 );
//					if (value == r1) { width = r1; status = 1; };
//					if (value == r2) { width = r2; status = 2; };
//			
//					if (width >= max_) {
//						max_ = width; max_pair.first = i; max_pair.second = j;  result_status = status;
//
//					}
//					status = 0;
//				}
//				
//			}
//		}
//		if (result_status != 0) {
//			int i = max_pair.first; int j = max_pair.second;
//			if (result_status == 1)
//				get_right_0(i, j, 1) + get_left_0(i, j, 1);
//			if (result_status == 2)
//				get_bottom_0(i, j, 1) + get_top_0(i, j, 1);
//			check[i][j] = true;
//		}
//		result_status = 0;
//	}
//
//	for (int i = 0; i<10; i++)
//		memset(check[i], 0, 10);
//
//
//	width = 0, max_ = -99999;
//	result_status = 0, status = 0;
//	while (max_ != 0) {
//		max_ = 0; width = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (field[i][j] == 1 && !check[i][j]) {
//					int r1 = get_right_0(i, j, 0);
//					int r2 = get_left_0(i, j, 0);
//					int r3 = get_top_0(i, j, 0);
//					int r4 = get_bottom_0(i, j, 0);
//
//			
//
//
//					int value = max({ r1,r2,r3,r4 });
//
//
//					if (value == r1) 
//					{ width = r1; status = 1; };
//					if (value == r2) 
//					{ width = r2; status = 2; };
//					if (value == r3)
//					{ width = r3; status = 3; };
//					if (value == r4) 
//					{ width = r4; status = 4; };
//
//					if (width >= max_) {
//						max_ = width; max_pair.first = i; max_pair.second = j;  result_status = status;
//						
//					}
//					status = 0;
//				}
//			}
//		}
//
//		if (result_status != 0) {
//			int i = max_pair.first; int j = max_pair.second;
//			if (result_status == 1) 
//				get_right_0(i, j, 1);
//			if (result_status == 2)
//				get_left_0(i, j, 1);
//			if (result_status == 3)
//				get_top_0(i, j, 1);
//			if (result_status == 4) 
//				get_bottom_0(i, j, 1);
//			check[i][j] = true;
//		}
//		result_status = 0;
//	}
//
//
//	int num = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//	
//			if (field[i][j] == 0)
//				num++;
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//
//			cout << field[i][j] << ' ';
//				
//		}
//		cout << '\n';
//	}
//
//
//	cout << num;
//
//
//
//
//	return 0;
//}



// cctv ���� Ǭ �ڵ� ����
//#include <iomanip>
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int field[12][12];
//
//int field_flag[12][12];
//
//
//int deep = 0;
//int cctv_num = 0;
//
//
//vector<pair<int,int>> pa;
//vector<int> cctv;
//
//
//int m, n;
//
//int get_right_0(int n_, int m_, bool draw, int lever) {
//
//	int sum = 0;
//	int i = m_;
//	while (++i < m) {
//
//		if (field[n_][i] == 6)
//			return sum;
//
//		if (field[n_][i] == 0) {
//			sum++;
//			if (draw) field[n_][i] = '#';
//			field_flag[n_][i] = lever;
//
//		}
//		
//	}
//	return sum;
//}
//
//int get_left_0(int n_, int m_, bool draw, int lever) {
//
//	int sum = 0;
//	int i = m_;
//	while (--i >= 0) {
//
//		if (field[n_][i] == 6)
//			return sum;
//
//		if (field[n_][i] == 0) {
//			sum++;
//			if (draw) field[n_][i] = '#';
//			field_flag[n_][i] = lever;
//
//		}
//
//	}
//
//	return sum;
//}
//
//int get_top_0(int n_, int m_, bool draw,int lever) {
//
//	int sum = 0;
//	int i = n_;
//	while (--i >= 0) {
//
//		if (field[i][m_] == 6)
//			return sum;
//
//		if (field[i][m_] == 0 ) {
//			sum++;
//
//
//			if (draw) field[i][m_] = '#';
//			field_flag[i][m_] = lever;
//
//
//		}
//	}
//
//	return sum;
//}
//
//
//int get_bottom_0(int n_, int m_, bool draw, int lever) {
//
//	int sum = 0;
//	int i = n_;
//	while (++i <n) {
//
//		if (field[i][m_] == 6)
//			return sum;
//
//		if (field[i][m_] == 0) {
//
//			sum++;
//			if (draw)
//				field[i][m_] = '#';
//			field_flag[i][m_] = lever;
//
//
//
//		}
//	}
//
//	return sum;
//}
//
//void draw(int kind,int i, int pa_idx, int lever) {
//
//
//	int x = pa[pa_idx].first;
//	int y = pa[pa_idx].second;
//
//	if (kind == 1) {
//
//		if (i == 0) {
//			get_left_0(x, y, 1, lever);
//		}
//		else if (i == 1) {
//			get_top_0(x, y, 1, lever);
//		}
//		else if (i == 2) {
//			get_right_0(x, y, 1, lever);
//		}
//		else if (i == 3) {
//			get_bottom_0(x, y, 1, lever);
//
//		}
//
//	}
//	else if (kind == 2) {
//		if (i == 0) {
//			get_left_0(x, y, 1, lever);
//			get_right_0(x, y, 1, lever);
//		}
//		else if (i == 1) {
//			get_top_0(x, y, 1, lever);
//			get_bottom_0(x, y, 1, lever);
//		}
//		else if (i == 2) {
//			get_left_0(x, y, 1, lever);
//			get_right_0(x, y, 1, lever);
//		}
//		else if (i == 3) {
//			get_top_0(x, y, 1, lever);
//			get_bottom_0(x, y, 1, lever);
//		}
//	}
//	else if (kind == 3) {
//		if (i == 0) {
//			get_left_0(x, y, 1, lever);
//			get_top_0(x, y, 1, lever);
//		}
//		else if (i == 1) {
//			get_top_0(x, y, 1, lever);
//			get_right_0(x, y, 1, lever);
//		}
//		else if (i == 2) {
//			get_right_0(x, y, 1, lever);
//			get_bottom_0(x, y, 1, lever);
//		}
//		else if (i == 3) {
//			get_bottom_0(x, y, 1, lever);
//			get_left_0(x, y, 1, lever);
//		}
//
//	}
//	else if (kind == 4) {
//		if (i == 0) {
//			get_left_0(x, y, 1, lever);
//			get_top_0(x, y, 1, lever);
//			get_right_0(x, y, 1, lever);
//		}
//		else if (i == 1) {
//			get_top_0(x, y, 1, lever);
//			get_right_0(x, y, 1, lever);
//			get_bottom_0(x, y, 1, lever);
//		}
//		else if (i == 2) {
//			get_right_0(x, y, 1, lever);
//			get_bottom_0(x, y, 1, lever);
//			get_left_0(x, y, 1, lever);
//		}
//		else if (i == 3) {
//			get_bottom_0(x, y, 1, lever);
//			get_left_0(x, y, 1, lever);
//			get_top_0(x, y, 1, lever);
//		}
//
//	}
//	else if (kind == 5) {
//
//		get_right_0(x, y, 1, lever);
//		get_bottom_0(x, y, 1, lever);
//		get_left_0(x, y, 1, lever);
//		get_top_0(x, y, 1, lever);
//	}
//
//}
//
//
//
//int cnt = 0;
//int mins = 9999999999999;
//
//void func(int p, int pa_idx,int lever) {
//
//	if (p == cctv_num) {
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				//cout << left <<setw(3) << field[i][j]<< ' ';
//				if (field[i][j] == 0) {
//					cnt++;
//				}
//
//			}
//			//cout << '\n';
//		}
//		//cout <<"\n\n\n\n";
//		
//		
//		if (mins > cnt)
//			mins = cnt;
//		cnt = 0;
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//
//	
//		draw(cctv[p], i, pa_idx, lever);
//	
//		func(p + 1, pa_idx + 1, lever+1);
//
//		for (int x = 0; x < n; x++) {
//			for (int y = 0; y < m; y++) {
//
//				if (field_flag[x][y] == lever ) {
//					field_flag[x][y] = 0;
//					field[x][y] = 0;
//				}
//
//			}
//		}
//
//
//		//cout << "lever: " << lever << '\n';
//
//		
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> field[i][j];
//			if (field[i][j] && field[i][j]!=6) {
//			
//				cctv.push_back(field[i][j]);
//				pa.push_back({i,j});
//				cctv_num++;
//
//
//			}
//		}
//	}
//
//	func(0,0,10);
//
//	cout << mins;
//
//	return 0;
//}
//
//
//
///// ��ŷ�� ����
//
//
//#include <bits/stdc++.h>
//using namespace std;
//#define X first
//#define Y second
//
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 }; // ����, ����, ����, ���� ����
//int n, m;
//int board1[10][10]; // ���ʿ� �Է¹��� board�� ������ ����
//int board2[10][10]; // �簢 ������ ������ ���� ���� ����� ����
//vector<pair<int, int> > cctv; // cctv�� ��ǥ�� ������ ����
//
//bool OOB(int a, int b) { // Out Of Bounds Ȯ��
//	return a < 0 || a >= n || b < 0 || b >= m;
//}
//
//// (x,y)���� dir �������� �����ϸ鼭 ���� ���� �� ���� ����ġ�� ��� ��ĭ�� 7�� �ٲ����
//void upd(int x, int y, int dir) {
//	dir %= 4;
//	while (1) {
//		x += dx[dir];
//		y += dy[dir];
//		if (OOB(x, y) || board2[x][y] == 6) return; // ������ ����ų� ���� ������ �Լ��� Ż��
//		if (board2[x][y] != 0) continue; // �ش� ĭ�� ��ĭ�� �ƴ� ���(=cctv�� ���� ���) �Ѿ
//		board2[x][y] = 7; // ��ĭ�� 7�� ����
//	}
//}
//
//int ms(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	int mn = 0; // �簢 ������ �ּ� ũ�� (=��)
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board1[i][j];
//			if (board1[i][j] != 0 && board1[i][j] != 6)
//				cctv.push_back({ i,j });
//			if (board1[i][j] == 0) mn++;
//		}
//	}
//	// 1 << (2*cctv.size())�� 4�� cctv.size()���� �ǹ�.
//	for (int tmp = 0; tmp < (1 << (2 * cctv.size())); tmp++) { // tmp�� 4�������� ���� �� �� �ڸ����� cctv�� �������� ������ ���̴�.
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				board2[i][j] = board1[i][j];
//		int brute = tmp;
//		for (int i = 0; i < cctv.size(); i++) {
//			int dir = brute % 4;
//			brute /= 4;
//			int x = cctv[i].X;
//			int y = cctv[i].Y; // tie(x, y) = cctv[i];�� ���� 1�ٷ� ���� �� ����
//			if (board1[x][y] == 1) {
//				upd(x, y, dir);
//			}
//			else if (board1[x][y] == 2) {
//				upd(x, y, dir);
//				upd(x, y, dir + 2);
//			}
//			else if (board1[x][y] == 3) {
//				upd(x, y, dir);
//				upd(x, y, dir + 1);
//			}
//			else if (board1[x][y] == 4) {
//				upd(x, y, dir);
//				upd(x, y, dir + 1);
//				upd(x, y, dir + 2);
//			}
//			else { // board1[x][y] == 5
//				upd(x, y, dir);
//				upd(x, y, dir + 1);
//				upd(x, y, dir + 2);
//				upd(x, y, dir + 3);
//			}
//		}
//		int val = 0;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				val += (board2[i][j] == 0);
//		mn = min(mn, val);
//	}
//	cout << mn;
//}

// ��ŷ�� 18808�� ��ƼĿ ���̱� //���� Ǭ ���� 
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int n, m;  // 1<= n,m <= 40
//int su; //1<=su<=100
//int r, c; //1<=r,c <=10
//
//vector<vector<int>> sticker[100];
//
//int board[40][40];
//
//int board2[40][40];
//
//
//int rotate(vector<vector<int>>& sticker_) {
//	
//	int width = (int)sticker_[0].size();
//	int height = (int)sticker_.size();
//	vector<vector<int>> copy(width, vector<int>(height, 0));
//	for (int i = 0; i < width; i++) 
//		for (int j = 0; j < height; j++) 
//			copy[i][height - j - 1] = sticker_[j][i];
//		
//	
//	sticker_.clear();
//	for (int i = 0; i < width; i++) {
//
//		vector<int> tmp;
//
//		for (int j = 0; j < height; j++) {
//
//			tmp.push_back(copy[i][j]);
//		}
//		sticker_.push_back(tmp);
//	}
//
//
//	return 1;
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m >> su;
//
//
//	for (int i = 0; i < su; i++) {
//
//		cin >> r >> c;
//
//		for (int x = 0; x < r; x++) {
//			vector<int> tmp;
//			for (int j = 0; j < c; j++) {
//				int num;
//				cin >> num;
//				tmp.push_back(num);
//			}
//			sticker[i].push_back(tmp);
//		}
//
//	}
//	for (int x = 0; x < su; x++) { //����
//
//		bool result = false;
//
//		int ss = 0;
//		while (ss<4) {
//
//			result = false;
//		
//			for (int i = 0; i < n - (int)sticker[x].size() + 1; i++) {
//
//				if (n < (int)sticker[x].size()) {
//					result = false;
//					continue;
//				}
//			
//				if (m < (int)sticker[x][0].size()) {
//					result = false;
//					continue;
//				}
//				
//				for (int j = 0; j < m - (int)sticker[x][0].size() + 1; j++) {  /// ����
//
//					 result = true;
//					// ���ø� Ȯ��
//					for (int y = i, a = 0; y < i + (int)sticker[x].size(); y++,a++) {
//
//						for (int z = j, b = 0; z < j + (int)sticker[x][0].size(); z++,b++) {
//
//							if (board[y][z] == 1 && sticker[x][a][b]==1)
//								result = false;
//						}
//					}
//					if (result) {  // write
//
//						for (int y = i, a = 0; y < i + (int)sticker[x].size(); y++, a++) {
//
//							for (int z = j, b = 0; z < j + (int)sticker[x][0].size(); z++, b++) {
//
//								if (sticker[x][a][b] == 1) {
//									board[y][z] = sticker[x][a][b];
//								}										
//							}			
//						}
//						break;
//					}
//				}
//				if (result)
//					break;
//			}
//			if (result)
//				break;
//			else {
//				ss++;
//				rotate(sticker[x]);
//			}
//		}
//	}
//
//	int total = 0;
//	for (int i = 0; i < n; i++) {
//
//		for (int j = 0; j < m; j++) {
//		
//			if (board[i][j] == 1)
//				total++;
//		}
//	
//	}
//	cout << total;
//
//	return 0;
//}



// ��ŷ��  ��ƼĿ ���

//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, k;
//int note[42][42];
//int r, c;
//int paper[12][12];
//
//// paper�� 90�� ȸ���ϴ� �Լ�
//void rotate() {
//	int tmp[12][12];
//
//	for (int i = 0; i < r; i++)
//		for (int j = 0; j < c; j++)
//			tmp[i][j] = paper[i][j];
//
//	for (int i = 0; i < c; i++)
//		for (int j = 0; j < r; j++)
//			paper[i][j] = tmp[r - 1 - j][i];
//
//	swap(r, c);
//}
//
//// note�� (x,y)�� �������� (0,0)�� �ö󰡰� ��ƼĿ�� ���� �� �ִ��� �Ǵ��ϴ� �Լ�. ������ ��� note�� ������ �� true�� ��ȯ.
//bool pastable(int x, int y) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (note[x + i][y + j] == 1 && paper[i][j] == 1)
//				return false;
//		}
//	}
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (paper[i][j] == 1)
//				note[x + i][y + j] = 1;
//		}
//	}
//	return true;
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m >> k;
//	while (k--) {
//		cin >> r >> c;
//		for (int i = 0; i < r; i++)
//			for (int j = 0; j < c; j++)
//				cin >> paper[i][j];
//
//		for (int rot = 0; rot < 4; rot++) {
//			bool is_paste = false; // �ش� ��ƼĿ�� �ٿ��°�?
//			for (int x = 0; x <= n - r; x++) {
//				if (is_paste) break;
//				for (int y = 0; y <= m - c; y++) {
//					if (pastable(x, y)) {
//						is_paste = true;
//						break;
//					}
//				}
//			}
//			if (is_paste) break;
//			rotate();
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			cnt += note[i][j];
//	cout << cnt << '\n';
//}
//



//  ��ŷ�� ���� 12100�� �簢�� ���� ����  


//���� ������ �� (Ʋ��)
//#include<iostream>
//
//
//int board_max = 2;
//int board[22][22];
//
//int copy_board[10][22][22];
//int n;
//
//using namespace std;
//
//void dir_play(int p, int i) {
//
//	int push_value[22];
//	for (int i = 0; i < 20; i++) {
//		push_value[i] = 0;
//	}
//
//	if (i == 10000)
//		return;
//
//	if (i == 0) {  // �� 
//
//			
//		for (int x = 0; x < n; x++) {
//
//			for (int y = 0, a = 0; y < n; y++) {
//
//				if (copy_board[p][y][x])
//					push_value[a++] = copy_board[p][y][x];
//			}
//
//			for (int y = 0; y < n; y++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[y];
//				push_value[y] = 0;
//			}
//
//			for (int y = 0; y < n - 1; y++) {  // ���̰� ���ϱ�
//
//				if (copy_board[p + 1][y][x] == copy_board[p + 1][y + 1][x]) {
//					copy_board[p + 1][y][x] += copy_board[p + 1][y][x];
//					copy_board[p + 1][y + 1][x] = 0;
//					y += 1;
//				}
//			}
//
//			for (int y = 0, a = 0; y < n; y++) {
//
//				if (copy_board[p + 1][y][x])
//					push_value[a++] = copy_board[p + 1][y][x];
//			}
//			for (int y = 0; y < n; y++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[y];
//				push_value[y] = 0;
//			}
//		}
//
//	}
//	else if (i == 1) {   // �Ʒ�
//
//
//		for (int x = 0; x < n; x++) {
//
//			for (int y = n - 1, a = 0; y >= 0; y--) {
//				
//				if (copy_board[p][y][x])
//					push_value[a++] = copy_board[p][y][x];
//			}
//
//			for (int y = n - 1, a = 0; y >= 0; y--, a++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[a];
//				push_value[a] = 0;
//			}
//
//			for (int y = n - 1; y >= 1; y--) {  // ���̰� ���ϱ�
//
//				if (copy_board[p + 1][y][x] == copy_board[p + 1][y - 1][x]) {
//					copy_board[p + 1][y][x] += copy_board[p + 1][y][x];
//					copy_board[p + 1][y - 1][x] = 0;
//					y -= 1;
//
//				}
//			}
//
//			for (int y = n - 1, a = 0; y >= 0; y--) {
//
//				if (copy_board[p + 1][y][x])
//					push_value[a++] = copy_board[p + 1][y][x];
//			}
//			for (int y = n - 1, a = 0; y >= 0; y--, a++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[a];
//				push_value[a] = 0;
//			}
//		}
//
//
//	}
//	else if (i == 2) {  //����
//
//
//		for (int y = 0; y < n; y++) {
//
//			for (int x = 0, a = 0; x <n; x++) {
//
//				if (copy_board[p][y][x])
//					push_value[a++] = copy_board[p][y][x];
//			}
//
//			for (int x = 0, a = 0; x < n; x++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[x];
//				push_value[x] = 0;
//			}
//
//			for (int x = 0; x < n - 1; x++) {  // ���̰� ���ϱ�
//
//				if (copy_board[p + 1][y][x] == copy_board[p + 1][y][x + 1]) {
//					copy_board[p + 1][y][x] += copy_board[p + 1][y][x];
//					copy_board[p + 1][y][x + 1] = 0;
//					x += 1;
//
//				}
//			}
//
//			for (int x = 0, a = 0; x <n; x++) {
//
//				if (copy_board[y][x])
//					push_value[a++] = copy_board[p + 1][y][x];
//			}
//			for (int x = 0, a = 0; x < n; x++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[x];
//				push_value[x] = 0;
//			}
//
//		}
//
//	}
//	else if (i == 3) {  //������
//
//
//		for (int y = 0; y < n; y++) {
//
//			for (int x = n - 1, a = 0; x >= 0; x--) {
//
//				if (copy_board[p][y][x])
//					push_value[a++] = copy_board[p][y][x];
//			}
//
//			for (int x = n - 1, a = 0; x >= 0; x--, a++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[a];
//				push_value[a] = 0;
//			}
//
//			for (int x = n - 1; x >= 1; x--) {  // ���̰� ���ϱ�
//
//				if (copy_board[p + 1][y][x] == copy_board[p + 1][y][x - 1]) {
//					copy_board[p + 1][y][x] += copy_board[p + 1][y][x];
//					copy_board[p + 1][y][x - 1] = 0;
//					x -= 1;
//				}
//			}
//
//			for (int x = n - 1, a = 0; x >= 0; x--) {
//
//				if (copy_board[p + 1][y][x])
//					push_value[a++] = copy_board[p + 1][y][x];
//			}
//
//			for (int x = n - 1, a = 0; x >= 0; x--, a++) {
//				copy_board[p + 1][y][x] = 0;
//				copy_board[p + 1][y][x] = push_value[a];
//				push_value[a] = 0;
//			}
//
//		}
//
//	}
//
//
//}
//
//
//void func(int p, int dir) {
//
//	if (p == 5) {
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//	
//				if (copy_board[p][i][j] > board_max)
//					board_max = copy_board[p][i][j];
//			}
//
//		}
//		return;
//	}
//
//
//	for (int i = 0; i < 4; i++) {
//
//
//	    dir_play(p, i);
//
//
//		func(p + 1, i);
//	}
//
//	
//
//}
//
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//			copy_board[0][i][j] = board[i][j];
//		}
//	}
//	func(0, 0);
//	cout << board_max;
//	return 0;
//}
//
//
//
//


//�簢�� ���� ��  // �б� �� ȸ������ �б� 

//#include <bits/stdc++.h>
//using namespace std;
//
//int board1[21][21];
//int board2[21][21];
//int n;
//
//void rotate() { // board2�� �ð� �������� 90�� ȸ���ϴ� �Լ�
//	int tmp[21][21];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			tmp[i][j] = board2[i][j];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			board2[i][j] = tmp[n - 1 - j][i];
//}
//
//void tilt(int dir) {
//	while (dir--) rotate();
//	for (int i = 0; i < n; i++) {
//		int tilted[21] = {}; // board2[i]�� �������� ����� ����� ������ ����
//		int idx = 0; // tilted �迭���� ��� �����ؾ� �ϴ��� ����Ű�� ����
//		for (int j = 0; j < n; j++) {
//			if (board2[i][j] == 0) continue;
//			if (tilted[idx] == 0) // ������ ��ġ�� ������� ���
//				tilted[idx] = board2[i][j];
//			else if (tilted[idx] == board2[i][j]) // ���� ���� ���� ����� �浹�� ���
//				tilted[idx++] *= 2;
//			else // �ٸ� ���� ���� ����� �浹
//				tilted[++idx] = board2[i][j];
//		}
//		for (int j = 0; j < n; j++) board2[i][j] = tilted[j]; // board2[i]�� tilted�� ���
//	}
//}
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> board1[i][j];
//
//	int mx = 0;
//	for (int tmp = 0; tmp < 1024; tmp++) {
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				board2[i][j] = board1[i][j];
//		int brute = tmp;
//		for (int i = 0; i < 5; i++) {
//			int dir = brute % 4;
//			brute /= 4;
//			tilt(dir);
//		}
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				mx = max(mx, board2[i][j]);
//	}
//	cout << mx;
//}



// ġŲ ��� (���� Ǭ ����) bfs ó��
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//
//int arr[52][52];
//int check[52][52] = { -1, };
//
//
//# define X first
//# define Y second
//
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n >> m;
//
//	vector<pair<int,int>> chick;
//
//	queue<pair<int, int>> q;
//
//	int dx[4] = { 1,0,-1,0 };
//	int dy[4] = { 0,1,0,-1 };
//
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//
//			if (arr[i][j] == 2) {
//				chick.push_back({i,j});
//			}
//			
//
//		}
//	}
//
//
//	int min_range = 9999;
//	int range = 0;
//	vector<int> brute(chick.size(), 1);
//
//	fill(brute.begin(), brute.end()-m, 0);
//
//	do {
//		range = 0;
//
//		for (int i = 0; i < 52; i++)
//			for (int j = 0; j < 52; j++)
//				check[i][j] = -1;
//
//
//		for (int i = 0; i < chick.size(); i++) {
//			if (brute[i] == 0)
//				continue;
//
//			q.push(chick[i]);
//			check[chick[i].X][chick[i].Y] = 0;
//
//
//		}
//
//		int range_sum = 0;
//		while (!q.empty()) {
//
//			pair<int, int>  pa = q.front(); q.pop();
//
//		
//			for (int i = 0; i < 4; i++) {
//
//				int x = pa.X + dx[i];
//				int y= pa.Y + dy[i];
//
//
//				if (x < 0 || x >= n || y < 0 || y >= n) continue;
//				if (check[x][y]!=-1) continue;
//
//				
//				check[x][y]= check[pa.X][pa.Y]+1;
//
//				if (arr[x][y] == 1)
//					range += check[x][y];
//				q.push({ x,y });
//			}
//
//		}
//
//		min_range=min(min_range, range);
//
//
//	} while (next_permutation(brute.begin(), brute.end() ));
//
//
//	cout << min_range;
//
//	return 0;
//
//}


//
//#include <bits/stdc++.h>
//using namespace std;
//
//#define X first
//#define Y second
//
//int board[55][55];
//int n, m;
//vector<pair<int, int>> chicken;
//vector<pair<int, int>> house;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 1) house.push_back({ i, j });
//			if (board[i][j] == 2) chicken.push_back({ i, j });
//		}
//	}
//	vector<int> brute(chicken.size(), 1);
//	fill(brute.begin(), brute.begin() + chicken.size() - m, 0); // ���� chicken.size() - m ĭ�� 0, ���� mĭ�� 1
//	int mn = 0x7f7f7f7f; // ���� ������ ����
//	do {
//		int dist = 0; // ������ ġŲ �Ÿ��� ������ ����
//		for (auto h : house) {
//			int tmp = 0x7f7f7f7f; // ���� ġŲ �Ÿ��� ������ ����
//			for (int i = 0; i < chicken.size(); i++) {
//				if (brute[i] == 0) continue;
//				tmp = min(tmp, abs(chicken[i].X - h.X) + abs(chicken[i].Y - h.Y)); // ���� ġŲ �Ÿ� ����
//			}
//			dist += tmp;
//		}
//		mn = min(mn, dist);
//	} while (next_permutation(brute.begin(), brute.end()));
//	cout << mn;
//}


//���� 11728 �迭��ġ�� (merge ����)
//#include <bits/stdc++.h>
//using namespace std;
//
//long a[10000005];
//long b[10000005];
//long result[2000005];
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int a_leng, b_leng;
//	int a_pos=0, b_pos = 0;
//	cin >> a_leng >> b_leng;
//
//	for (int i = 0; i < a_leng; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < b_leng; i++) {
//		cin >> b[i];
//	}
//
//
//
//	for (int i = 0; i < a_leng + b_leng; i++) {
//
//		if (a[a_pos] < b[b_pos]) {
//
//			result[i] = a[a_pos++];
//		}
//		else {
//			result[i] = b[b_pos++];
//		}
//
//
//		if (b_pos == b_leng) {
//
//			while (a_pos != a_leng) {
//				i++;
//				result[i]= a[a_pos++];
//			}
//
//		}
//		else if (a_pos == a_leng) {
//			while (b_pos != b_leng) {
//				i++;
//				result[i] = b[b_pos++];
//			}
//		}
//		
//	}
//
//	for (int i = 0; i < a_leng + b_leng; i++) {
//		cout << result[i]<<' ';
//	}
//
//
//	return 0;
//}



// merge ���� ������ ��
//#include <bits/stdc++.h>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//int tmp[1000001]; // merge �Լ����� ����Ʈ 2���� ��ģ ����� �ӽ÷� �����ϰ� ���� ����
//
//				  // mid = (st+en)/2��� �� �� arr[st:mid], arr[mid:en]�� �̹� ������ �Ǿ��ִ� ������ �� arr[st:mid]�� arr[mid:en]�� ��ģ��.
//void merge(int st, int en) {
//	int mid = (st + en) / 2;
//    
//	int st_pos = st;
//	int mid_pos = mid;
//
//	for (int i = st; i < en; i++) {
//
//
//		if (arr[st_pos] <= arr[mid_pos]) {
//			tmp[i] = arr[st_pos++];
//		}
//		else if(arr[st_pos] > arr[mid_pos]) {
//			tmp[i] = arr[mid_pos++];
//		}
//		
//		if (st_pos == mid) {
//
//			for (int x = mid_pos; x < en; x++) {
//				tmp[++i] = arr[x];                 
//			}
//			break;
//		}
//		else if (mid_pos == en) {
//			for (int x = st_pos; x < mid; x++) {
//				tmp[++i] = arr[x];
//			}
//			break;
//		}
//	}
//
//	for (int i = st; i < en; i++) {
//		arr[i]=tmp[i];
//
//		cout << arr[i] << ' ';
//	}
//	cout << '\n';
//	return;;
//}
//
//// arr[st:en]�� �����ϰ� �ʹ�.
//void merge_sort(int st, int en) {
//	if ( en-st <= 1 ) return; // ���� 1�� ���
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); // arr[st:mid]�� �����Ѵ�.
//	merge_sort(mid, en); // arr[mid:en]�� �����Ѵ�.
//	merge(st, en); // arr[st:mid]�� arr[mid:en]�� ��ģ��.
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	merge_sort(0, n);
//	for (int i = 0; i < n; i++) cout << arr[i] << ' ';  // -53 3 12 15 16 22 23 25 46 357
//
//	return 0;
//}




////��ŷ�� merge ����
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//int tmp[1000001]; // merge �Լ����� ����Ʈ 2���� ��ģ ����� �ӽ÷� �����ϰ� ���� ����
//
//				  // mid = (st+en)/2��� �� �� arr[st:mid], arr[mid:en]�� �̹� ������ �Ǿ��ִ� ������ �� arr[st:mid]�� arr[mid:en]�� ��ģ��.
//void merge(int st, int en) {
//	int mid = (st + en) / 2;
//	int lidx = st; // arr[st:mid]���� ���� ���� ���� ����ϴ� index
//	int ridx = mid; // arr[mid:en]���� ���� ���� ���� ����ϴ� index
//	for (int i = st; i < en; i++) {
//		if (ridx == en) tmp[i] = arr[lidx++];
//		else if (lidx == mid) tmp[i] = arr[ridx++];
//		else if (arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
//		else tmp[i] = arr[ridx++];
//	}
//	for (int i = st; i < en; i++) arr[i] = tmp[i]; // tmp�� �ӽ������ص� ���� a�� �ٽ� �ű�
//}
//
//// a[st:en]�� �����ϰ� �ʹ�.
//void merge_sort(int st, int en) {
//	if (en == st + 1) return; // ����Ʈ�� ���̰� 1�� ���
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); // arr[st:mid]�� �����Ѵ�.
//	merge_sort(mid, en); // arr[mid:en]�� �����Ѵ�.
//	merge(st, en); // arr[st:mid]�� arr[mid:en]�� ��ģ��.
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	merge_sort(0, n);
//	for (int i = 0; i < n; i++) cout << arr[i] << ' '; // -53 3 12 15 16 22 23 25 46 357
//}



// ���� merge ����  2751
//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[1000001];
//int tmp[1000001]; // merge �Լ����� ����Ʈ 2���� ��ģ ����� �ӽ÷� �����ϰ� ���� ����
//
//				  // mid = (st+en)/2��� �� �� arr[st:mid], arr[mid:en]�� �̹� ������ �Ǿ��ִ� ������ �� arr[st:mid]�� arr[mid:en]�� ��ģ��.
//void merge(int st, int en) {
//	int mid = (st + en) / 2;
//
//	int st_pos = st;
//	int mid_pos = mid;
//
//	for (int i = st; i < en; i++) {
//
//
//		if (arr[st_pos] <= arr[mid_pos]) {
//			tmp[i] = arr[st_pos++];
//		}
//		else if (arr[st_pos] > arr[mid_pos]) {
//			tmp[i] = arr[mid_pos++];
//		}
//
//		if (st_pos == mid) {
//
//			for (int x = mid_pos; x < en; x++) {
//				tmp[++i] = arr[x];
//			}
//			break;
//		}
//		else if (mid_pos == en) {
//			for (int x = st_pos; x < mid; x++) {
//				tmp[++i] = arr[x];
//			}
//			break;
//		}
//	}
//
//	for (int i = st; i < en; i++) {
//		arr[i] = tmp[i];
//	}
//	return;;
//}
//
//// arr[st:en]�� �����ϰ� �ʹ�.
//void merge_sort(int st, int en) {
//	if (en - st <= 1) return; // ���� 1�� ���
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); // arr[st:mid]�� �����Ѵ�.
//	merge_sort(mid, en); // arr[mid:en]�� �����Ѵ�.
//	merge(st, en); // arr[st:mid]�� arr[mid:en]�� ��ģ��.
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//
//	cin >> n;
//	for(int i=0; i<n; i++)
//	  cin >> arr[i];
//
//	merge_sort(0, n);
//	
//
//	for (int i = 0; i < n; i++) {
//		cout << arr[i]<<'\n';
//	}
//
//	return 0;
//}


//�� ��Ʈ  ��ŷ�� ����

//#include <bits/stdc++.h>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//
//void quick_sort(int st, int en) { // arr[st to en-1]�� ������ ����
//	if (en <= st + 1) return; // ������ ���̰� 1 �����̸� �Լ� ����.(base condition)
//	int pivot = arr[st]; // ���� ���� ���� pivot���� ��´�. ������ ���� ��� arr[st]�� swap�ص� �������.
//	int l = st + 1; // ������ l
//	int r = en - 1; // ������ r
//	while (1) {
//		while (l <= r && arr[l] <= pivot) l++;
//		while (l <= r && arr[r] >= pivot) r--;
//		if (l > r) break; // l�� r�� �����Ǵ� �� ��� Ż��
//		swap(arr[l], arr[r]);
//	}
//	swap(arr[st], arr[r]);
//	quick_sort(st, r);
//	quick_sort(r + 1, en);
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	quick_sort(0, n);
//	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
//}


//���� § quick sort  //���� ��������
//#include <bits/stdc++.h>
//
//using namespace std;
//
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//
//void quick_sort(int st,int end) {
//
//	if(st+1>=end) {   //base condition
//		return; 
//	}
//
//
//	int piv = arr[st];
//
//	int l = st+1;
//	int r = end-1;
//
//	while (1) {
//		while (l<=r && piv <= arr[l]) { l++; };
//		while (l<=r&& piv >= arr[r]) { r--; };
//		if (r < l) break;
//		swap(arr[l], arr[r]);
//	}
//	swap(arr[st], arr[r]);
//
//	quick_sort(st,r);
//	quick_sort(r+1,end);
//
//}
//
//
//
//
//int main() {
//
//
//	quick_sort(0, n);
//
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << ' ';
//	}
//
//
//    return 0;
//}
//
//

//ī���� sort
//���� 15688�� ���� ������ �� 
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//
//int fix_in[2000005];
//
//int main() {
//
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> n;
//
//	int num;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		fix_in[num+1000000]++;	
//	}
//
//
//	for (int i = 0; i <= 2000000; i++) {
//
//		if (fix_in[i] == 0) continue;
//
//		while (fix_in[i] != 0) {
//			fix_in[i]--;
//			cout << i - 1000000 << '\n';
//		}
//
//	}
//
//	return 0;
//}

//

// stl vector Ȱ�� �� stl sort 
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int comp(int a, int b) {
//	return a > b;
//
//}
//
//bool comp_str(const string& a, const string& b) {
//	
//	return a.back() < b.back();
//
//}
//
//int main() {
//
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int arr[10] = { 1,4,6,5,2,7,8,9,0,3 };
//
//	sort(arr, arr + 10);
//
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << ' ';
//	}
//	cout << '\n';
//
//	vector<int> a(10, 1);
//
//	for (auto s : a) {
//		cout << s << ' ';
//	}
//	cout << '\n';
//
//
//	vector<int> p = { 10,9,8,7,6,5,4,3,2,1 };
//	
//	sort(p.begin(), p.end());
//	
//	for (auto result : p) {
//		cout << result << ' ';
//	}
//	cout << '\n';
//
//	auto au = p.begin();
//	while (au != p.end()) {
//		cout << *au++ << ' ';
//	}
//	cout << '\n';
//	sort(p.begin(), p.end(), comp);
//
//	for (auto result : p)
//		cout << result << ' ';
//	cout << '\n';
//
//	vector<string> vec_st = { "abc","abd","abz", "bba", "bbd","bbc" };
//
//	sort(vec_st.begin(), vec_st.end());
//
//	for (auto result : vec_st)
//		cout << result << ' ';
//	cout << '\n';
//
//
//	sort(vec_st.begin(), vec_st.end(), comp_str);
//
//
//	for (auto result : vec_st)
//		cout << result << ' ';
//	cout << '\n';
//
//	return 0;
//}


// ����1432 stl Ȱ�� ��Ÿ �ø����ȣ ���� 
//#include <bits/stdc++.h>
//
//using namespace std;
//
//string str_arr[52];
//
//int comp_str(const string& a, const string& b) {
//
//
//
//	if (a.length() != b.length())  return a.length() < b.length();
//
//	int a_sum = 0, b_sum = 0;
//	for (int ch : a) {
//		if (ch >= '0' && ch <= '9')
//			a_sum += (ch-'0');
//	}
//	for (int ch : b) {
//		if (ch >= '0' && ch <= '9')
//			b_sum += (ch-'0');
//	}
//
//	cout << a_sum << ' ' << b_sum << '\n';
//	if (a_sum != b_sum) {
//		return a_sum < b_sum;
//	}
//
//	return a < b;
//
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int num;
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cin >> str_arr[i];
//	}
//
//	sort(str_arr, str_arr + num, comp_str);
//
//	for (int i=0;i<num;i++)
//		cout << str_arr[i] << '\n';
//
//
//	return 0;
//}



// ���� 11652 �� ī�� ���� �� ����  -2�� 62 ū �� ���� ������ ��
//#include <bits/stdc++.h>
//using namespace std;
//
//long arr[100002];
//
//long tmp[100002];
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int num;
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + num);
//
//	int i_select = 0;
//	tmp[i_select] = 1;
//
//	for (int i = 1; i < num; i++) {
//		if (arr[i-1] == arr[i]) {
//			tmp[i_select]++;	   
//		}
//		else {
//			i_select = i;
//			tmp[i_select]++;
//		}
//	}
//	int max_cnt = -99999999;
//	int max_i=0;
//	for (int i = 0; i < num; i++) {
//		if (tmp[i] == 0)  continue;
//
//		if (max_cnt < tmp[i]) {
//			max_cnt = tmp[i];
//			max_i = i;
//		}
//		
//	}
//	cout << arr[max_i];
//	return 0;
//}



//  ���� 11652 �� ī�� ���� �� ���� ��ŷ�� ���� 
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//long long a[100005];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	sort(a, a + n);
//	int cnt = 0;
//	long long mxval = -(1ll << 62) - 1; // 1�� long long���� ����ȯ���� �ʰ� 1 << 62�� �ۼ��� int overflow �߻�
//	int mxcnt = 0;
//	for (int i = 0; i < n; i++) {
//		if (i == 0 || a[i - 1] == a[i]) cnt++; // i�� 0�� ��� ���� ���� true�̱� ������ a[i-1]�� �������� ����
//		else {
//			if (cnt > mxcnt) {
//				mxcnt = cnt;
//				mxval = a[i - 1];
//			}
//			cnt = 1;
//		}
//	}
//	if (cnt > mxcnt) mxval = a[n - 1]; // ���� ������ ���� �� �� �����ߴ����� ������ Ȯ��
//	cout << mxval;
//}



// ��ŷ�� ���� stl ��� ����  ���� 7795 �� ���� ������ �ҽ� 
//#include <bits/stdc++.h>
//using namespace std;
//
//int n=0, m=0;
//
//int n_arr[20002];
//int m_arr[20002];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	int testcase_num = 0;
//	cin >> testcase_num;
//
//	
//	for (int x = 0; x < testcase_num; x++) {
//     
//		cin >>n>>m;
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			cin>>n_arr[i];
//		}
//		for (int i = 0; i < m; i++) {
//			cin >> m_arr[i];
//		}
//
//		sort(n_arr, n_arr + n);
//		sort(m_arr, m_arr + m);
//
//		// 1 1 3 6 8
//		// 1 3 6
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//
//				if (n_arr[i] <= m_arr[j]) break;
//
//				cnt++;
//			}
//
//		}
//
//		cout << cnt<<'\n';
//
//	}
//
//	return 0;
//}



//��ŷ�� 16�� dp 
//
//#include <bits/stdc++.h>
//using namespace std;
//
//queue<int> q;
//
//int board[1000000];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int num;
//	cin >> num;
//
//	q.push(num);
//
//
//	int cnt = 0;
//
//	board[num] = 0;
//
//	while (!q.empty()) {
//
//		int val = q.front(); q.pop();
//
//		if (val == 1) {
//			cout<<board[1];
//			break;
//		}
//
//		if (val % 3 == 0) {
//			if (val / 3 >= 1 && board[val/3] ==0) {
//
//				q.push(val/3);				
//				board[val / 3] = board[val]+1;
//
//			}
//		}
//
//		if (val % 2 == 0) {
//			if (val / 2 >= 1 &&  board[val / 2] == 0) {
//				q.push(val / 2);
//				board[val / 2] = board[val] + 1;
//
//			}
//		}
//
//		if (val - 1 >= 1 && board[val - 1] == 0) {
//				q.push(val - 1);
//				board[val -1] = board[val] + 1;
//
//		}
//		
//	}
//
//	return 0;
//}



// ��ŷ�� DP ��ȭ�� ���� �ۼ��� �ڵ� ����


//#include <bits/stdc++.h>
//using namespace std;
//int arr[1000002];
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int num;
//	cin >> num;
//	
//	arr[1] = 0;
//
//	int index = 1;
//
//	while (1) {
//
//		if (index * 3 <= num)
//			arr[index * 3] += 1;
//
//		if(index*2<=num)
//			arr[index * 2] += 1;
//
//
//
//	}
//
//
//	
//	
//	cout << arr[num];
//
//
//	return 0;
//}
//
//
////��ŷ�� ���� �ڵ�
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int d[1000005];
//int n;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	d[1] = 0;
//	for (int i = 2; i <= n; i++) {
//		d[i] = d[i - 1] + 1;
//		if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);
//		if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
//	}
//	cout << d[n];
//}



//���� 9095 1,2,3,���ϱ� ���� ������ �ҽ� 
//#include <bits/stdc++.h>
//using namespace std;
//
//
//int arr[10000];
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int testcase;
//	cin >> testcase;
//
//	arr[1] = 1; arr[2] = 2; arr[3] = 4;
//	for (int s = 0; s < testcase; s++) {
//		int num;
//		cin >> num;
//		for (int i = 4; i <= num; i++) {
//
//			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
//
//		}
//
//		cout << arr[num] << '\n';
//	}
//
//
//	return 0;
//	
//}



// ���� 9095  1,2,3, ���ϱ� ��ŷ�� ���� �ҽ� 

//#include <bits/stdc++.h>
//using namespace std;
//
//// d[i] = i�� 1, 2, 3�� ������ ��Ÿ���� ����� ��
//int d[20];
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	d[1] = 1; d[2] = 2; d[3] = 4;
//	for (int i = 4; i < 11; i++)
//		d[i] = d[i - 1] + d[i - 2] + d[i - 3];
//
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		cout << d[n] << '\n';
//	}
//}



// ���� 2579 ��� ������ ���� dp ���� ������ �ҽ� 
#include <bits/stdc++.h>
using namespace std;

//��ȭ�� 

// d[k][1] =>  max (d[k-2][1] , d[k-2][2]) + s(k)
// d[k][2] => d[k-1]+s(k)

//
//int ds[302][5]; 
//int arr[302];
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int num;
//	cin >> num;
//
//	for (int i = 1; i <= num; i++) {
//		cin >> arr[i];
//	}
//
//
//	ds[1][1] = arr[1];
//	ds[1][2] = 0;
//	ds[2][1] = arr[2];
//	ds[2][2] = arr[1] + arr[2];
//
//	for (int i = 3; i <= num; i++) {
//
//		ds[i][1] = max(ds[i - 2][1], ds[i - 2][2]) + arr[i];
//		ds[i][2] = ds[i - 1][1] + arr[i];
//
//	}
//
//
//	cout << max(ds[num][1], ds[num][2]);
//
//	return 0;
//}




// ��ŷ�� ���� �ҽ� ��ܿ�����
//#include <bits/stdc++.h>
//using namespace std;
//
//int s[305];
//int n;
//int d[305][3];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> s[i];
//	if (n == 1) {
//		cout << s[1];
//		return 0;
//	}
//	d[1][1] = s[1];
//	d[1][2] = 0;
//	d[2][1] = s[2];
//	d[2][2] = s[1] + s[2];
//	for (int i = 3; i <= n; i++) {
//		d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];
//		d[i][2] = d[i - 1][1] + s[i];
//	}
//	cout << max(d[n][1], d[n][2]);
//}




// ��ŷ�� ���� �ҽ� ��ܿ����� // ������ �迭 Ǯ�� 
//#include <bits/stdc++.h>
//using namespace std;

//�� ���� ����� �ּҰ�  i �����ؼ� �� ����
//��ȭ��  d[1]=s[1]   d[2]=s[2]   d[3]=s[3]   
// d[k]=   min(d[k-2], d[k-3])+ s[k]

//int s[305];
//int n;
//int ds[305];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> s[i];
//		sum+=s[i];
//	}
//	ds[1] = s[1];  ds[2] = s[2];  ds[3] = s[3];
//
//
//	for (int i = 3; i < n; i++) {
//
//		ds[i] = min(ds[i - 2], ds[i - 3]) + s[i];
//	}
//
//	int mins = min(ds[n - 1], ds[n - 2]);
//
//	cout<< sum - mins;
//
//
//}



//��ŷ�� ���� 
//�� ���� ����� �ּҰ�

//#include <bits/stdc++.h>
//using namespace std;
//
//int s[305];
//int n;
//int d[305];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	int tot = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> s[i];
//		tot += s[i];
//	}
//	if (n <= 2) {
//		cout << tot;
//		return 0;
//	}
//	d[1] = s[1];
//	d[2] = s[2];
//	d[3] = s[3];
//	for (int i = 4; i <= n - 1; i++) d[i] = min(d[i - 2], d[i - 3]) + s[i];
//	cout << tot - min(d[n - 1], d[n - 2]);
//}


//��ŷ�� dp  ���� 1149  rgb �Ÿ� ���� ������ �� 

//#include <bits/stdc++.h>
//using namespace std;
//
//int rgb[1000][5];
//
//int rgb_d[1000][5];
//
//// ��ȭ�� rgb_d[k][1]= min(rgb_d[k-1][2], rgb_d[k-1][3])+
// //       rgb_d[k][2]= min(rgb_d[k-1][1], rgb_d[k-1][3])
// //       rgb_d[k][3]=min(rgb_d[k-1][1], rgb_d[k-1][2])
//
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 1; j <= 3; j++) {
//			cin >> rgb[i][j];
//
//		}
//	}
//
//	rgb_d[0][1] = rgb[0][1];  rgb_d[0][2] = rgb[0][2];   rgb_d[0][3] = rgb[0][3]; // �ʱⰪ ����
//
//	for (int i = 1; i < n; i++) {
//
//		rgb_d[i][1] = min(rgb_d[i - 1][2], rgb_d[i - 1][3]) + rgb[i][1];
//		rgb_d[i][2] = min(rgb_d[i - 1][1], rgb_d[i - 1][3]) + rgb[i][2];
//		rgb_d[i][3] = min(rgb_d[i - 1][1], rgb_d[i - 1][2]) + rgb[i][3];
//
//	}
//
//
//	cout << min({ rgb_d[n - 1][1], rgb_d[n - 1][2], rgb_d[n - 1][3] });
//
//	return 0;
//
//
//
//}


/// ��ŷ�� rgb �����ڵ�

//#include <bits/stdc++.h>
//using namespace std;
//
//int d[1005][3];
//int r[1005], g[1005], b[1005];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> r[i] >> g[i] >> b[i];
//	d[1][0] = r[1];
//	d[1][1] = g[1];
//	d[1][2] = b[1];
//	for (int i = 2; i <= n; i++) {
//		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + r[i];
//		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + g[i];
//		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + b[i];
//	}
//	cout << *min_element(d[n], d[n] + 3);
//	// cout << min({d[n][0], d[n][1], d[n][2]}); �� ����
//}
//



//dp ���� 11726  Ÿ�� ä��� (�����)

//���̺�  n*2 �� ä�� 
// ��ȭ�� 
// 1*2  => �ʺ�: 2*(n-1)   d[n]= d[n-1]+d[n-2]
// 2*1 => �ʺ�: 2* (n-2)

//#include <bits/stdc++.h>
//using namespace std;
//int dd[1002];
//
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	dd[1] = 1; dd[2] = 2;
//
//	for (int i = 3; i <= n; i++) {
//		dd[i] = (dd[i - 1] + dd[i - 2])%10007;
//	}
//
//	cout << dd[n];
//    
//	return 0;
//
//}

//���� 11659 ������ ���ϱ�4 ���� ������ �ڵ�
//���̺�  d[i]= i������ �� 
// ��ȭ��  d[k]= d[k-1]+arr[k]
//#include <bits/stdc++.h>
//using namespace std;
//int arr[100002];
//int d[100002];
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n,m;
//	cin >> n>>m;
//	int st, en;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//		d[i] = d[i - 1] + arr[i]; //������
//	}
//
//	for (int i = 0; i < m; i++) {
//
//		cin >> st >> en;
//
//		cout << d[en] - d[st - 1]<<'\n';
//
//	}
//
//	return 0;
//}


//dp ���� 12852 �� 1�� ����� 2  ���� ���� ������ ��
//���̺�  
// ��ȭ��  d[x]= d[x-1]+1
//        d[x]=d[x/3]+1
//         d[x]= d[x/2] +1
//�ʱⰪ d[1]=0;

//#include <bits/stdc++.h>
//using namespace std;
//int d[1000002];
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	for (int i = 2; i <= n; i++) {
//
//		d[i] = d[i - 1] + 1;
//
//		if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
//		if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);
//
//
//	}
//	cout << d[n] << '\n';
//
//	int mins = 9999999;
//
//	int i = n;
//	while (i>=1) {
//
//		if (i % 3 == 0 && d[i] == d[i / 3] + 1) {
//			cout << i << ' ';  i /= 3;
//		}
//		else if(i % 2 == 0 && d[i] == d[i / 2] + 1) {
//			cout << i << ' '; i /= 2;
//		}
//		else {
//			cout << i << ' '; i -= 1;
//		}
//
//	}
//
//
//	return 0;
//}


// 1�� ����� 2  ���̺� ��κ����� ���̺� ��� ���� ������ �� 


//#include <bits/stdc++.h>
//using namespace std;
//int d[1000002];
//int regist[1000002];
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	for (int i = 2; i <= n; i++) {
//
//		d[i] = d[i - 1] + 1;
//		regist[i] = i-1;
//
//		if (i % 3 == 0) {
//			d[i] = min(d[i], d[i / 3] + 1);
//		}
//		if (i % 2 == 0) {
//			d[i] = min(d[i], d[i / 2] + 1);
//		}
//	
//		if (i % 3  ==0 && d[i] == d[i / 3] + 1)
//		{
//			regist[i] = i / 3;
//		}
//		else if (i%2==0 && d[i] == d[i / 2] + 1)
//		{
//			regist[i] = i / 2;
//		}
//
//	}
//	cout << d[n] << '\n';
//
//	int i = n;
//
//	cout << n << ' ';
//	while (i>1) {
//
//		cout << regist[i]<<' ' ;
//		i = regist[i];
//
//	}
//
//	return 0;
//}


//��ŷ�� �ҽ�  1�� ����� 2  ���̺� ��κ�����

//#include <bits/stdc++.h>
//using namespace std;
//
//int d[1000005];
//int pre[1000005];
//int n;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	d[1] = 0;
//	for (int i = 2; i <= n; i++) {
//		d[i] = d[i - 1] + 1;
//		pre[i] = i - 1;
//		if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
//			d[i] = d[i / 2] + 1;
//			pre[i] = i / 2;
//		}
//		if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
//			d[i] = d[i / 3] + 1;
//			pre[i] = i / 3;
//		}
//	}
//	cout << d[n] << '\n';
//	int cur = n;
//	while (true) {
//		cout << cur << ' ';
//		if (cur == 1) break;
//		cur = pre[cur];
//	}
//}

// ��ŷ�� ��ܿ����� ���� ����� 

// ���̺�  d[n][1,2]  n�� ���� ���, 1,2�� �������� ���° ����� 
// ��ȭ��  d[k][1] = max( d[k-2][2],ds[i-2][1]) + s(k)
//         d[k][2] = d[k-1][1]+s(k)
// �ʱⰪ  d[1][1]=10  d[1][2]=0
#include <bits/stdc++.h>
//using namespace std;
//int n;
//int arr[302];
//int ds[302][5];
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//
//	ds[1][1] = arr[1]; ds[1][2] = 0;
//	for (int i = 2; i <= n; i++) {
//
//		ds[i][1] = max(ds[i - 2][2],ds[i-2][1]) + arr[i];
//		ds[i][2] = ds[i - 1][1] + arr[i];
//
//	}
//
//	cout << max(ds[n][1], ds[n][2]);
//	return 0;
//}

//��ŷ�� 1,2,3, ���ϱ�  �����
 //1 1 1   2 1 
// 1 2  
// 3  

// 1 1 1 1  // 1 2 1  // 2 1 1 // 3 1           
// 1 1 2 // 2 2
// 1 3 

// 1 1 1 1 1 // 1 2 1 1 // 2 1 1 1 // 3 1 1 //  1 1 2 1 // 2 2 1 // 1 3 1 
//  1 1 1 2 // 2 1 2 // 1 2 2 // 3 2//
//  1 1 3 // 2 3  
//  


// 
// ���̺� d[i]= i�� 1,2,3, ���� ����
// ��ȭ�� d[i]=  d[i-1]+ d[i-2]+ d[i-3]
// �ʱⰪ d[1]= 1  d[2]=2   d[3]=4  d[4]=7   d[5]= 13   28 
//#include <bits/stdc++.h>
//using namespace std;
//
//
//int ds[20];
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	int testcase;
//	cin >> testcase;
//
//	ds[1] = 1; ds[2] = 2; ds[3] = 4;  
//	for(int i = 0; i < testcase; i++) {
//
//		int num;
//		cin >> num;
//    
//
//		for (int x = 4; x <= num; x++) {
//
//		 if(ds[x]==0)
//			ds[x] = ds[x - 1] + ds[x - 2] + ds[x - 3];
//			
//		}
//
//		cout<<ds[num] << '\n';
//
//	}
//
//	return 0;
//}


// rgb �Ÿ� ���� �����


//#include <bits/stdc++.h>
//using namespace std;
//
//int rgb[1003][5];
//int rgb_d[1003][5];
////���̺�  rgb_d[i][x];  i�� r g b �� ���� �ּҰ�
//
//// ��ȭ�� rgb_d[i][1] = min( rgb_d[i-1][2], rgb_d[i-1][3])+ rgb[i][1];
////        rgb_d[i][2] = min( rgb_d[i-1][1], rgb_d[i-1][3])+ rgb[i][2];
////        rgb_d[i][3] = min( rgb_d[i-1][1], rgb_d[i-1][2])+ rgb[i][3];
//// �ʱⰪ  rgb_d[1][1]= rgb[1][1], rgb_d[1][2]= rgb[1][2], rgb_d[1][3]= rgb[1][3]
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int num; 
//	cin >> num;
//	for (int i = 1; i <= num; i++) {
//		for(int j=1; j<=3; j++)
//	    	cin >> rgb[i][j];
//	}
//	rgb_d[1][1] = rgb[1][1]; rgb_d[1][2] = rgb[1][2]; rgb_d[1][3] = rgb[1][3];
//	for (int i = 1; i <= num; i++) {
//
//		rgb_d[i][1] = min( rgb_d[i-1][2], rgb_d[i-1][3])+ rgb[i][1];
//		rgb_d[i][2] = min( rgb_d[i-1][1], rgb_d[i-1][3])+ rgb[i][2];
//	    rgb_d[i][3] = min( rgb_d[i-1][1], rgb_d[i-1][2])+ rgb[i][3];
//
//	}
//
//	cout << min({rgb_d[num][1],rgb_d[num][2],rgb_d[num][3]});
//
//
//	return 0;
//}

//���� 11726 2*n Ÿ�ϸ� �����

//���̺� d[i]= 2*i ���̸� 2*1 1*2 �� ä��� Ÿ���� ����� ��
// ��ȭ�� d[i]= d[i-1]+ d[i-2]
//�ʱⰪ d[1]=1, d[2]=2; d[3]=3
//
//#include <bits/stdc++.h>
//using namespace std;
//int d[1003];
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int num;
//	cin >> num;
//
//	d[1] = 1; d[2] = 2;
//	for (int i = 3; i <= num; i++) {
//		d[i] = (d[i - 1] + d[i - 2])%10007;
//	}
//	
//	cout << d[num];
//
//
//	return 0;
//}


// ���� 11047 �������� ��  ��ŷ�� �׸��� 
//���� ������ �� 
    
//���̺� d[i]= i�� ����� �� ����
//��ȭ�� d[i]=d[i-1]
//�ʱⰪ


//#include <bits/stdc++.h>
//using namespace std;
//int arr[1000002];
//int arr_order[1000002];
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int idx;
//	int n, sum;
//	int result=0;
//	cin >> n >> sum;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		if (arr[i] > sum) {
//			idx = i - 1;
//
//			for (int j = idx; j >= 1; j--) {
//				arr_order[idx - j + 1] = arr[j];
//			
//			}
//			break;
//		}
//
//		if (i == n) {
//			for (int j = n; j >= 1; j--)
//				arr_order[n-j+1] = arr[j];
//		}
//
//	
//	}
//	
//
//	//d[1] = arr_order[1];
//	int i = 1, j = 1;
//	while(1){
//
//		if (sum >= arr_order[j]) {
//			sum -= arr_order[j];
//		}
//		else if(sum < arr_order[j]){
//			int k = j+1;
//			while (arr_order[j] > sum) j++;
//			sum -= arr_order[j];
//		}
//
//		if(sum==0) {
//			result = i;
//			break;
//		}
//		i++;
//		//d[i] += (d[i - 1]+ arr_order[j] );
//	}
//
//	cout << result;
//
//	return 0;
//}


//��ŷ�� ������ �� �׸��� ����
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, k;
//int a[15];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int ans = 0;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = n - 1; i >= 0; i--) {
//		ans += k / a[i];
//		k %= a[i];
//	}
//	cout << ans;
//}



//���� 2293 ���� ����� �� //����� �ٽú���
//���̺�: d[i]=j �϶�  i�� ��������� ����� �� j
//��ȭ��: d[i]= d[i]+ d[��- ���ΰ�]
//�ʱⰪ: d[0]= 1 


//#include <bits/stdc++.h>
//using namespace std;
//
//int d[100002];
//int arr[102];
//
//int main(void) {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n, k; 
//	cin >> n >> k;
//
//	d[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i]; //����
//
//		for (int j = arr[i]; j <= k; j++) {
//
//			d[j] = d[j] + d[j - arr[i]];
//
//		}
//
//
//	}
//	cout << d[k];
//	return 0;
//}




// ��ŷ�� �׸��� ���� 1931 ȸ�ǽ� ���� �ð��ʰ� �ҽ� n^2 �� ���� 
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, k;
//
//pair<int, int> vec[200002];
//
//
//bool compare(pair<int, int> a, pair<int, int> b) {
//
//	if (a.second != b.second)
//		return a.second < b.second;
//
//	//if (a.second == b.second)
//		return a < b;
//
//	
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int num;
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//		
//		pair<int, int> p;
//		cin >> p.first;
//		cin >> p.second;
//		vec[i] = p;
//	}
//
//	cout << "\n\n";
//
//	sort(vec, vec+num, compare);
//
//	for (int i = 0; i < num; i++) {
//		cout << vec[i].first << ' ' << vec[i].second << '\n';
//	}
//
//
//
//
//
//	int cnt = 1;
//
//	for (int i = 0; i< num-1; i++) {
//		int n=0;
//		for (int j = i + 1; j < num; j++) {
//			n++;
//			if (vec[i].second <= vec[j].first) {		    
//				cnt++;
//				i += (n - 1);
//				
//				break;
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//pair<int, int> s[100005]; // schedule, ������ ���Ǹ� ���� {�� �ð�, ���� �ð�}���� ����
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> s[i].second >> s[i].first;
//	sort(s, s + n); // ���� ������ �ð��� ���ϰ�, ������ �ð��� �����ϸ� ���� �ð� ������ ����
//	int ans = 0;
//	int t = 0; // ���� �ð�
//	for (int i = 0; i < n; i++) {
//		if (t > s[i].second) continue; // ���� �ð��� ���� �ð����� ������ ȸ�Ƕ�� ����
//		ans++; // ���� �ð��� ���� �ð� ������ ȸ�Ǹ� ã�����Ƿ� ȸ���� ���� 1 ����
//		t = s[i].first; // ���� �ð��� s[i]�� ������ �ð����� �����Ѵ�.
//	}
//	cout << ans;
//
//	return 0;
//}


//�׸��� ���� 2217�� ����
//���� ������ �ҽ�
//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[100002];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin>>arr[i];
//	}
//
//	sort(arr, arr + n);
//
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		int val=arr[i] * (n-i);
//		if (val > max)
//			max = val;
//	}
//
//	cout << max;
//
//	return 0;
//}


//�׸��� ���� ��ŷ�� ��
//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int w[100005];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> w[i];
//	sort(w, w + n);
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//		ans = max(ans, w[n - i] * i);
//	cout << ans;
//}
//


//�׸��� ���� 1026 ����
//���� ������ �ҽ�


//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int a[1000];
//int b[1000];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> b[i];
//	}
//
//	sort(a, a + n);
//	sort(b, b + n);
//
//	int result = 0;
//	for (int i = 0; i < n; i++) {
//
//		result += (a[i] * b[n - i - 1]);
//
//	}
//
//	cout << result;
//
//
//	return 0;
//}


// �׸��� ���� ��ŷ�� ��

//#include <bits/stdc++.h>
//using namespace std;
//
//int a[105], b[105];
//int n;
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	for (int i = 0; i < n; i++) cin >> b[i];
//	sort(a, a + n);
//	sort(b, b + n);
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//		ans += a[i] * b[n - 1 - i];
//	cout << ans;
//}

// �׸��� �ƴ� ��� ����  12865 �賶 //����-> �ð��ʰ� dp Ȱ�� 
// ���� �ۼ��� �ҽ�
//#include <bits/stdc++.h>
//using namespace std;
//
//pair<int, int> arr[1000];
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n, k;
//
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i].first >> arr[i].second;
//	}
//	vector<int> brute(n, 1);
//
//	int su = 0;
//	int max_val = 0;
//
//	for (int x = 0; x < n; x++) {
//		fill(brute.begin(), brute.end() -n+x+1, 0 );
//		
//		do {
//
//			int sum_w = 0; int sum_v = 0;
//
//			for (int i = 0; i < n; i++) {
//				if (brute[i] == 0) {
//					
//					sum_w += arr[i].first;
//					sum_v += arr[i].second;
//					if (sum_w <= k) {
//						max_val=max(max_val, sum_v);
//					}					
//				}
//			}
//
//		} while (next_permutation(brute.begin(), brute.end()));
//
//	}
//
//	cout << max_val;
//
//	return 0;
//
//}


//����
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//int a[4] = { 0,0,1,1};
//
//	do {
//		for (int i = 0; i < 4; i++) {
//
//			if (a[i] == 0)
//				//continue;
//				cout << i + 1;
//		}
//			cout << '\n';
//
//	} while (next_permutation(a, a + 4));
//
//	return 0;
//}

//�賶 dp �� �ذ� (���� �ۼ��� �ҽ�)

//��ȭ�� 

#include <bits/stdc++.h>
using namespace std;

// i: ��ǰ ��ȣ  j: ���� ����
// ��ȭ�� 
// w[i]>���� ����  arr[i][j]=  arr[i-1][j]
// w[i]<=���� ���� arr[i][j]= max( arr[i-1][j-w[i]]+v[i] , arr[i-1][j]
int arr[103][10003];
int w[103];
int v[103];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> w[i] >> v[i];
	}
	

	return 0;

}

//dp �賶 ��
using namespace std;

int N, K;
int W[101] = { 0, };
int V[101] = { 0, };
int DP[101][100001];

void dp() {

	for (int limit = 1; limit <= K; limit++) {
		for (int row = 1; row <= N; row++) {
			//1. ���� �� ���� ���
			if (W[row] > limit) {
				DP[row][limit] = DP[row - 1][limit];
			}
			//2. ���� �� �ִ� ���
			else {
				DP[row][limit] = max(DP[row - 1][limit - W[row]] + V[row], DP[row - 1][limit]);
			}
		}
	}

}

int main() {

	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}

	//�ʱ�ȭ
	for (int r = 0; r <= N; r++)
	{
		DP[r][0] = 0;
	}
	for (int c = 0; c <= K; c++) {
		DP[0][c] = 0;
	}

	dp();

	cout << DP[N][K];

	return 0;
}

int main1() {



}

int main2() {



}