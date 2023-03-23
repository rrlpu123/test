/// HELLO 알고리즘!!!!!!!!!!!!!!!!!!!!!!!!!

// barkingdog.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
//
#include "stdafx.h"
//#include <iostream>


// 바킹독 1강 문제 1
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
// 바킹독 1강 문제 2


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


// 바킹독 1강 문제 3



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



// 바킹독 1강 문제 4

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



//바킹독 2강 문제 1

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


//바킹독 2강 문제 2
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


//바킹독 2강 문제 3


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



//바킹독 2강 문제 4

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



//바킹독 3강 리스트 문제 1

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



// 바킹독 3강 예제

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//	list<int> L = { 1,2 }; // 1 2
//	list<int>::iterator t = L.begin(); // t는 1을 가리키는 중
//	L.push_front(10); // 10 1 2
//	cout << *t << '\n'; // t가 가리키는 값 = 1을 출력
//	L.push_back(5); // 10 1 2 5
//	L.insert(t, 6); // t가 가리키는 곳 앞에 6을 삽입, 10 6 1 2 5
//	t++; // t를 1칸 앞으로 전진, 현재 t가 가리키는 값은 2
//	t = L.erase(t); // t가 가리키는 값을 제거, 그 다음 원소인 5의 위치를 반환
//					// 10 6 1 5, t가 가리키는 값은 5
//	cout << *t << '\n'; // 5
//	for (auto i : L) cout << i << ' ';
//	cout << '\n';
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//		cout << *it << ' ';
//
//	return 0;
//}


//바킹독 3강 예제 문제 백준 1406번

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



//바킹독 3강 예제 문제 백준 1406번 야매

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





//바킹독 5강 1 스택 구현
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



// 백준 10828 문제 stack 직접 구현

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



// stack stl 사용
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




// 바킹독 10773 번

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

// 바킹독 6강 큐 
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



/// 바킹독 문제  큐 10845  stl 구현
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


// 바킹독 큐 10845  일반 구현

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




//// 바킹독 7강 덱


//연습문제 1 

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


// 바킹독 문제 10866 stl 이용

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



////////////////// 일반 구현
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


// 바킹독 8강 4949 균형잡힌 세상

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



// 바킹독 4949해석
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



// 10799 쇠막대기
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


// 백준 2504  괄호의 값
//틀린 문제 테스트 케이스 40%
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


//바킹독 8강 bfs // 백준 1926 그림
//#include <iostream>
//#include <utility>
//#include <queue>
//
//#define X first
//#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
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
//				vis[i][j] = 1; // (0, 0)을 방문했다고 명시
//				Q.push({ i,j }); // 큐에 시작점인 (0, 0)을 삽입.
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
//#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
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


//백준 알고리즘 7576 토마토
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


//백준 bfs  7569 
//#include <iostream>
//#include <utility>
//#include <queue>
//#include <tuple>
//
//#define X first
//#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
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


//백준 bfs 4179 


//#include <iostream>
//#include <utility>
//#include <queue>
//#include <map>
//#include <string>
//#define X first
//#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
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
//#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
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



// 백준 1697 번

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




//바킹동 9강 dfs 예제


//#include <bits/stdc++.h>
//using namespace std;
//#define X first
//#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
//int board[502][502] =
//{ { 1,1,1,1,0,0,0,0,0,0 },
//{   1,0,1,1,0,0,0,0,0,0 },
//{   1,1,1,1,0,0,0,0,0,0 },
//{   1,1,0,1,0,0,0,0,0,0 },
//{   0,1,0,0,0,0,0,0,0,0 },
//{   0,0,0,0,0,0,0,0,0,0 },
//{   0,0,0,0,0,0,0,0,0,0 } }; // 1이 파란 칸, 0이 빨간 칸에 대응
//bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
//int n = 7, m = 10; // n = 행의 수, m = 열의 수
//int dx[4] = { 0,1,0,-1 };
//int dy[4] = { 1,0,-1,0 }; // 상하좌우 네 방향을 의미
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	stack<pair<int, int> > S;
//	vis[0][0] = 1; // (0, 0)을 방문했다고 명시
//	S.push({ 0,0 }); // 스택에 시작점인 (0, 0)을 삽입.

//	while (!S.empty()) {
//		pair<int, int> cur = S.top(); S.pop();
//		//cout << '(' << cur.X << ", " << cur.Y << ") -> ";
//		for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다.
//			int nx = cur.X + dx[dir];
//			int ny = cur.Y + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
//			if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
//			vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
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



//재귀 백준 2447번 별찍기
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



//바킹독 재귀


//#include <iostream>
//N부터 1까지 출력
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

//1부터 N까지의 합
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


// 피보 문제 발생은 dp로 해결



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





//백준 알고리즘 1629 번
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


//바킹독 답
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

// 내가 푼 정답 
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



// 바킹독 재귀 하노이의 탑

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
////바킹독 정답 하노이의 탑
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


// 바킹독 재귀 백준 1074번 내가 작성한 코드
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
//	if (r < wid  && c < wid) {  //1영역
//      
//		return func(N - 1, r, c);
//
//	}
//	else if (c >= wid && r< wid) { //2영역
//
//		return N_Num+func(N - 1, r, c-wid );
//
//	}
//	else if (c<wid && r>=wid) { //3영역
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
//1074 바킹독 정답 소스
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


//바킹독 11강 백트래킹 // 백준 15649번 답

//using namespace std;
//
//int n, m;
//int arr[10];
//bool isused[10];
//
//void func(int k) { // 현재 k개까지 수를 택했음.
//	if (k == m) { // m개를 모두 택했으면
//		for (int i = 0; i < m; i++)
//			cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) { // 1부터 n까지의 수에 대해
//		if (!isused[i]) { // 아직 i가 사용되지 않았으면
//			arr[k] = i; // k번째 수를 i로 정함
//			isused[i] = 1; // i를 사용되었다고 표시
//			func(k + 1); // 다음 수를 정하러 한 단계 더 들어감
//			isused[i] = 0; // k번째 수를 i로 정한 모든 경우에 대해 다 확인했으니 i를 이제 사용되지않았다고 명시함.
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


// 내가 구현한 것
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



//백준 알고리즘 9663

//내가 구현한 것 
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
//// 바킹독 퀸 해답 코드
//
//#include <bits/stdc++.h>
//using namespace std;
//bool isused1[40]; // column을 차지하고 있는지
//bool isused2[40]; // / 방향 대각선을 차지하고 있는지
//bool isused3[40]; // \ 방향 대각선을 차지하고 있는지
//
//int cnt = 0;
//int n;
//void func(int cur) { // cur번째 row에 말을 배치할 예정임
//	if (cur == n) { // N개를 놓는데 성공했다면
//		cnt++;
//		return;
//	}
//	for (int i = 0; i < n; i++) { // (cur, i)에 퀸을 놓을 예정
//		if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1]) // column이나 대각선 중에 문제가 있다면
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


// 바킹독 백트래킹 백준 1182


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
//순열 
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


//조합
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



//바킹독 시뮬레이션  백준 15683 cctv 


// 내가 구현한 것 1차 -> 틀림 
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



// cctv 내가 푼 코드 정답
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
///// 바킹독 정답
//
//
//#include <bits/stdc++.h>
//using namespace std;
//#define X first
//#define Y second
//
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 }; // 남쪽, 동쪽, 북쪽, 서쪽 순서
//int n, m;
//int board1[10][10]; // 최초에 입력받은 board를 저장할 변수
//int board2[10][10]; // 사각 지대의 개수를 세기 위해 사용할 변수
//vector<pair<int, int> > cctv; // cctv의 좌표를 저장할 변수
//
//bool OOB(int a, int b) { // Out Of Bounds 확인
//	return a < 0 || a >= n || b < 0 || b >= m;
//}
//
//// (x,y)에서 dir 방향으로 진행하면서 벽을 만날 때 까지 지나치는 모든 빈칸을 7로 바꿔버림
//void upd(int x, int y, int dir) {
//	dir %= 4;
//	while (1) {
//		x += dx[dir];
//		y += dy[dir];
//		if (OOB(x, y) || board2[x][y] == 6) return; // 범위를 벗어났거나 벽을 만나면 함수를 탈출
//		if (board2[x][y] != 0) continue; // 해당 칸이 빈칸이 아닐 경우(=cctv가 있을 경우) 넘어감
//		board2[x][y] = 7; // 빈칸을 7로 덮음
//	}
//}
//
//int ms(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	int mn = 0; // 사각 지대의 최소 크기 (=답)
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board1[i][j];
//			if (board1[i][j] != 0 && board1[i][j] != 6)
//				cctv.push_back({ i,j });
//			if (board1[i][j] == 0) mn++;
//		}
//	}
//	// 1 << (2*cctv.size())는 4의 cctv.size()승을 의미.
//	for (int tmp = 0; tmp < (1 << (2 * cctv.size())); tmp++) { // tmp를 4진법으로 뒀을 때 각 자리수를 cctv의 방향으로 생각할 것이다.
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				board2[i][j] = board1[i][j];
//		int brute = tmp;
//		for (int i = 0; i < cctv.size(); i++) {
//			int dir = brute % 4;
//			brute /= 4;
//			int x = cctv[i].X;
//			int y = cctv[i].Y; // tie(x, y) = cctv[i];로 쓰면 1줄로 줄일 수 있음
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

// 바킹독 18808번 스티커 붙이기 //내가 푼 문제 
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
//	for (int x = 0; x < su; x++) { //개수
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
//				for (int j = 0; j < m - (int)sticker[x][0].size() + 1; j++) {  /// 에러
//
//					 result = true;
//					// 템플릿 확인
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



// 바킹독  스티커 답안

//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, k;
//int note[42][42];
//int r, c;
//int paper[12][12];
//
//// paper를 90도 회전하는 함수
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
//// note의 (x,y)에 모눈종이의 (0,0)이 올라가게 스티커를 붙일 수 있는지 판단하는 함수. 가능할 경우 note를 갱신한 후 true를 반환.
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
//			bool is_paste = false; // 해당 스티커를 붙였는가?
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



//  바킹독 백준 12100번 사각형 숫자 게임  


//내가 구현한 것 (틀림)
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
//	if (i == 0) {  // 위 
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
//			for (int y = 0; y < n - 1; y++) {  // 붙이고 더하기
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
//	else if (i == 1) {   // 아래
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
//			for (int y = n - 1; y >= 1; y--) {  // 붙이고 더하기
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
//	else if (i == 2) {  //왼쪽
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
//			for (int x = 0; x < n - 1; x++) {  // 붙이고 더하기
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
//	else if (i == 3) {  //오른쪽
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
//			for (int x = n - 1; x >= 1; x--) {  // 붙이고 더하기
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


//사각형 게임 답  // 밀기 및 회전으로 밀기 

//#include <bits/stdc++.h>
//using namespace std;
//
//int board1[21][21];
//int board2[21][21];
//int n;
//
//void rotate() { // board2를 시계 방향으로 90도 회전하는 함수
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
//		int tilted[21] = {}; // board2[i]를 왼쪽으로 기울인 결과를 저장할 변수
//		int idx = 0; // tilted 배열에서 어디에 삽입해야 하는지 가리키는 변수
//		for (int j = 0; j < n; j++) {
//			if (board2[i][j] == 0) continue;
//			if (tilted[idx] == 0) // 삽입할 위치가 비어있을 경우
//				tilted[idx] = board2[i][j];
//			else if (tilted[idx] == board2[i][j]) // 같은 값을 갖는 블록이 충돌할 경우
//				tilted[idx++] *= 2;
//			else // 다른 값을 갖는 블록이 충돌
//				tilted[++idx] = board2[i][j];
//		}
//		for (int j = 0; j < n; j++) board2[i][j] = tilted[j]; // board2[i]에 tilted를 덮어씀
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



// 치킨 배달 (내가 푼 문제) bfs 처리
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
//	fill(brute.begin(), brute.begin() + chicken.size() - m, 0); // 앞의 chicken.size() - m 칸은 0, 뒤의 m칸은 1
//	int mn = 0x7f7f7f7f; // 답을 저장할 변수
//	do {
//		int dist = 0; // 도시의 치킨 거리를 저장할 변수
//		for (auto h : house) {
//			int tmp = 0x7f7f7f7f; // 집의 치킨 거리를 저장할 변수
//			for (int i = 0; i < chicken.size(); i++) {
//				if (brute[i] == 0) continue;
//				tmp = min(tmp, abs(chicken[i].X - h.X) + abs(chicken[i].Y - h.Y)); // 집의 치킨 거리 갱신
//			}
//			dist += tmp;
//		}
//		mn = min(mn, dist);
//	} while (next_permutation(brute.begin(), brute.end()));
//	cout << mn;
//}


//백준 11728 배열합치기 (merge 기초)
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



// merge 내가 구현한 것
//#include <bits/stdc++.h>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//int tmp[1000001]; // merge 함수에서 리스트 2개를 합친 결과를 임시로 저장하고 있을 변수
//
//				  // mid = (st+en)/2라고 할 때 arr[st:mid], arr[mid:en]은 이미 정렬이 되어있는 상태일 때 arr[st:mid]와 arr[mid:en]을 합친다.
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
//// arr[st:en]을 정렬하고 싶다.
//void merge_sort(int st, int en) {
//	if ( en-st <= 1 ) return; // 길이 1인 경우
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); // arr[st:mid]을 정렬한다.
//	merge_sort(mid, en); // arr[mid:en]을 정렬한다.
//	merge(st, en); // arr[st:mid]와 arr[mid:en]을 합친다.
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




////바킹독 merge 구현
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//int tmp[1000001]; // merge 함수에서 리스트 2개를 합친 결과를 임시로 저장하고 있을 변수
//
//				  // mid = (st+en)/2라고 할 때 arr[st:mid], arr[mid:en]은 이미 정렬이 되어있는 상태일 때 arr[st:mid]와 arr[mid:en]을 합친다.
//void merge(int st, int en) {
//	int mid = (st + en) / 2;
//	int lidx = st; // arr[st:mid]에서 값을 보기 위해 사용하는 index
//	int ridx = mid; // arr[mid:en]에서 값을 보기 위해 사용하는 index
//	for (int i = st; i < en; i++) {
//		if (ridx == en) tmp[i] = arr[lidx++];
//		else if (lidx == mid) tmp[i] = arr[ridx++];
//		else if (arr[lidx] <= arr[ridx]) tmp[i] = arr[lidx++];
//		else tmp[i] = arr[ridx++];
//	}
//	for (int i = st; i < en; i++) arr[i] = tmp[i]; // tmp에 임시저장해둔 값을 a로 다시 옮김
//}
//
//// a[st:en]을 정렬하고 싶다.
//void merge_sort(int st, int en) {
//	if (en == st + 1) return; // 리스트의 길이가 1인 경우
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); // arr[st:mid]을 정렬한다.
//	merge_sort(mid, en); // arr[mid:en]을 정렬한다.
//	merge(st, en); // arr[st:mid]와 arr[mid:en]을 합친다.
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	merge_sort(0, n);
//	for (int i = 0; i < n; i++) cout << arr[i] << ' '; // -53 3 12 15 16 22 23 25 46 357
//}



// 백준 merge 문제  2751
//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[1000001];
//int tmp[1000001]; // merge 함수에서 리스트 2개를 합친 결과를 임시로 저장하고 있을 변수
//
//				  // mid = (st+en)/2라고 할 때 arr[st:mid], arr[mid:en]은 이미 정렬이 되어있는 상태일 때 arr[st:mid]와 arr[mid:en]을 합친다.
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
//// arr[st:en]을 정렬하고 싶다.
//void merge_sort(int st, int en) {
//	if (en - st <= 1) return; // 길이 1인 경우
//	int mid = (st + en) / 2;
//	merge_sort(st, mid); // arr[st:mid]을 정렬한다.
//	merge_sort(mid, en); // arr[mid:en]을 정렬한다.
//	merge(st, en); // arr[st:mid]와 arr[mid:en]을 합친다.
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


//퀵 소트  바킹독 구현

//#include <bits/stdc++.h>
//using namespace std;
//
//int n = 10;
//int arr[1000001] = { 15, 25, 22, 357, 16, 23, -53, 12, 46, 3 };
//
//void quick_sort(int st, int en) { // arr[st to en-1]을 정렬할 예정
//	if (en <= st + 1) return; // 수열의 길이가 1 이하이면 함수 종료.(base condition)
//	int pivot = arr[st]; // 제일 앞의 것을 pivot으로 잡는다. 임의의 값을 잡고 arr[st]와 swap해도 상관없음.
//	int l = st + 1; // 포인터 l
//	int r = en - 1; // 포인터 r
//	while (1) {
//		while (l <= r && arr[l] <= pivot) l++;
//		while (l <= r && arr[r] >= pivot) r--;
//		if (l > r) break; // l과 r이 역전되는 그 즉시 탈출
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


//내가 짠 quick sort  //나는 내림차순
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

//카운팅 sort
//백준 15688번 내가 구현한 것 
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

// stl vector 활용 및 stl sort 
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


// 백준1432 stl 활용 기타 시리얼번호 정렬 
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



// 백준 11652 번 카드 정렬 후 숫자  -2의 62 큰 수 내가 성공한 답
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



//  백준 11652 번 카드 정렬 후 숫자 바킹독 정답 
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
//	long long mxval = -(1ll << 62) - 1; // 1을 long long으로 형변환하지 않고 1 << 62로 작성시 int overflow 발생
//	int mxcnt = 0;
//	for (int i = 0; i < n; i++) {
//		if (i == 0 || a[i - 1] == a[i]) cnt++; // i가 0인 경우 앞쪽 식이 true이기 때문에 a[i-1]을 참조하지 않음
//		else {
//			if (cnt > mxcnt) {
//				mxcnt = cnt;
//				mxval = a[i - 1];
//			}
//			cnt = 1;
//		}
//	}
//	if (cnt > mxcnt) mxval = a[n - 1]; // 제일 마지막 수가 몇 번 등장했는지를 별도로 확인
//	cout << mxval;
//}



// 바킹독 정렬 stl 사용 문제  백준 7795 번 내가 구현한 소스 
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



//바킹독 16강 dp 
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



// 바킹독 DP 점화식 내가 작성한 코드 실패


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
////바킹독 구현 코드
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



//백준 9095 1,2,3,더하기 내가 구현한 소스 
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



// 백준 9095  1,2,3, 더하기 바킹독 구현 소스 

//#include <bits/stdc++.h>
//using namespace std;
//
//// d[i] = i를 1, 2, 3의 합으로 나타내는 방법의 수
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



// 백준 2579 계단 오르기 문제 dp 내가 구현한 소스 
#include <bits/stdc++.h>
using namespace std;

//점화식 

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




// 바킹독 구현 소스 계단오르기
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




// 바킹독 구현 소스 계단오르기 // 일차원 배열 풀이 
//#include <bits/stdc++.h>
//using namespace std;

//안 밟을 계단의 최소값  i 포함해서 안 밟음
//점화식  d[1]=s[1]   d[2]=s[2]   d[3]=s[3]   
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



//바킹독 정답 
//안 밟을 계단의 최소값

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


//바킹독 dp  백준 1149  rgb 거리 내가 구현한 것 

//#include <bits/stdc++.h>
//using namespace std;
//
//int rgb[1000][5];
//
//int rgb_d[1000][5];
//
//// 점화식 rgb_d[k][1]= min(rgb_d[k-1][2], rgb_d[k-1][3])+
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
//	rgb_d[0][1] = rgb[0][1];  rgb_d[0][2] = rgb[0][2];   rgb_d[0][3] = rgb[0][3]; // 초기값 세팅
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


/// 바킹독 rgb 구현코드

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
//	// cout << min({d[n][0], d[n][1], d[n][2]}); 도 가능
//}
//



//dp 백준 11726  타일 채우기 (어려움)

//테이블  n*2 를 채움 
// 점화식 
// 1*2  => 너비: 2*(n-1)   d[n]= d[n-1]+d[n-2]
// 2*1 => 너비: 2* (n-2)

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

//백준 11659 구간합 구하기4 내가 구현한 코드
//테이블  d[i]= i까지의 합 
// 점화식  d[k]= d[k-1]+arr[k]
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
//		d[i] = d[i - 1] + arr[i]; //구간합
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


//dp 백준 12852 번 1로 만들기 2  내가 직접 구현한 것
//테이블  
// 점화식  d[x]= d[x-1]+1
//        d[x]=d[x/3]+1
//         d[x]= d[x/2] +1
//초기값 d[1]=0;

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


// 1로 만들기 2  테이블 경로복원용 테이블 사용 내가 구현한 것 


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


//바킹독 소스  1로 만들기 2  테이블 경로복원용

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

// 바킹독 계단오르기 문제 재시험 

// 테이블  d[n][1,2]  n이 밟은 계단, 1,2가 연속으로 몇번째 밟는지 
// 점화식  d[k][1] = max( d[k-2][2],ds[i-2][1]) + s(k)
//         d[k][2] = d[k-1][1]+s(k)
// 초기값  d[1][1]=10  d[1][2]=0
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

//바킹독 1,2,3, 더하기  재시험
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
// 테이블 d[i]= i의 1,2,3, 합의 개수
// 점화식 d[i]=  d[i-1]+ d[i-2]+ d[i-3]
// 초기값 d[1]= 1  d[2]=2   d[3]=4  d[4]=7   d[5]= 13   28 
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


// rgb 거리 문제 재시험


//#include <bits/stdc++.h>
//using namespace std;
//
//int rgb[1003][5];
//int rgb_d[1003][5];
////테이블  rgb_d[i][x];  i의 r g b 중 합의 최소값
//
//// 점화식 rgb_d[i][1] = min( rgb_d[i-1][2], rgb_d[i-1][3])+ rgb[i][1];
////        rgb_d[i][2] = min( rgb_d[i-1][1], rgb_d[i-1][3])+ rgb[i][2];
////        rgb_d[i][3] = min( rgb_d[i-1][1], rgb_d[i-1][2])+ rgb[i][3];
//// 초기값  rgb_d[1][1]= rgb[1][1], rgb_d[1][2]= rgb[1][2], rgb_d[1][3]= rgb[1][3]
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

//백준 11726 2*n 타일링 재시험

//테이블 d[i]= 2*i 넓이를 2*1 1*2 로 채우는 타일의 경우의 수
// 점화식 d[i]= d[i-1]+ d[i-2]
//초기값 d[1]=1, d[2]=2; d[3]=3
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


// 백준 11047 동전값의 합  바킹독 그리디 
//내가 구현한 것 
    
//테이블 d[i]= i개 골랐을 때 가격
//점화식 d[i]=d[i-1]
//초기값


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


//바킹독 동전의 합 그리디 정답
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



//백준 2293 동전 경우의 수 //어려움 다시보기
//테이블: d[i]=j 일때  i합 사용했을때 경우의 수 j
//점화식: d[i]= d[i]+ d[합- 코인값]
//초기값: d[0]= 1 


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
//		cin >> arr[i]; //코인
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




// 바킹독 그리디 백준 1931 회의실 배정 시간초과 소스 n^2 이 문제 
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
//pair<int, int> s[100005]; // schedule, 정렬의 편의를 위해 {끝 시간, 시작 시간}으로 저장
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> s[i].second >> s[i].first;
//	sort(s, s + n); // 먼저 끝나는 시간을 비교하고, 끝나는 시간이 동일하면 시작 시간 순으로 정렬
//	int ans = 0;
//	int t = 0; // 현재 시간
//	for (int i = 0; i < n; i++) {
//		if (t > s[i].second) continue; // 시작 시간이 현재 시간보다 이전인 회의라면 무시
//		ans++; // 시작 시간이 현재 시간 이후인 회의를 찾았으므로 회의의 수에 1 증가
//		t = s[i].first; // 현재 시간을 s[i]의 끝나는 시간으로 변경한다.
//	}
//	cout << ans;
//
//	return 0;
//}


//그리디 백준 2217번 로프
//내가 구현한 소스
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


//그리디 로프 바킹독 답
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


//그리디 백준 1026 보물
//내가 구현한 소스


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


// 그리디 보물 바킹독 답

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

// 그리디가 아닌 경우 백준  12865 배낭 //조합-> 시간초과 dp 활용 
// 내가 작성한 소스
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


//조합
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

//배낭 dp 로 해결 (내가 작성한 소스)

//점화식 

#include <bits/stdc++.h>
using namespace std;

// i: 물품 번호  j: 제한 무게
// 점화식 
// w[i]>무게 제한  arr[i][j]=  arr[i-1][j]
// w[i]<=무게 제한 arr[i][j]= max( arr[i-1][j-w[i]]+v[i] , arr[i-1][j]
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

//dp 배낭 답
using namespace std;

int N, K;
int W[101] = { 0, };
int V[101] = { 0, };
int DP[101][100001];

void dp() {

	for (int limit = 1; limit <= K; limit++) {
		for (int row = 1; row <= N; row++) {
			//1. 담을 수 없을 경우
			if (W[row] > limit) {
				DP[row][limit] = DP[row - 1][limit];
			}
			//2. 담을 수 있는 경우
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

	//초기화
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