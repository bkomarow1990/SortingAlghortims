#include <iostream>
#include <algorithm>
#include <windows.h>
#include <winbase.h>
#include <sysinfoapi.h>

#include <stdlib.h>
#include <ctime>
#include <stdio.h>

#include <functional>
#//include <sysinfoapi.h>
//#include <minwinbase.h>
#include <vector>
#include <list>
#include <deque>


using namespace std;
//typedef struct _SYSTEMTIME {
//	WORD wYear;
//	WORD wMonth;
//	WORD wDayOfWeek;
//	WORD wDay;
//	WORD wHour;
//	WORD wMinute;
//	WORD wSecond;
//	WORD wMilliseconds;
//} SYSTEMTIME, * PSYSTEMTIME, * LPSYSTEMTIME;
//WINBASEAPI VOID WINAPI GetLocalTime(LPSYSTEMTIME lpSystemTime);
//WINBASEAPI BOOL WINAPI SetLocalTime(CONST SYSTEMTIME* lpSystemTime);  
long const N = 100; // 1000,  10000, 100000, Е
template <class T>
void BubbleSort(T arr, int n)
{
	auto tmp=arr[0];
	for (int i = 0; i < n - 1; ++i){
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}
}

template <class Type> int maxN(Type array, int n)
{     		}

template <class T>
void ChoiceSort(T arr, int n)
{
	int i, j, min_idx;
	auto tmp=arr[0];
	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		tmp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = tmp;
	}
}
template <class T>
void prn_mas(T mas_int, long N){
	for (size_t i = 0; i < N; i++)
	{
		cout << mas_int[i] << " ";
	}
	cout << endl;
}
void print_forward(std::deque<int> const& deque)
{
	for (int i = 0; i < deque.size(); i++) {
		std::cout << deque[i] << " ";
	}
	std::cout << std::endl;
}
int main(int argc, char* argv[])
{
	SYSTEMTIME st1, st2;
	long i;

	int	mas_int[N];
	vector<int> vec(N);
	list<int> lst;
	deque<int> deq(N);

	//---------------------- mas_int[N] -------------------------------------------
	for (i = 0; i < N; i++) mas_int[i] = rand();
	GetLocalTime(&st1);
	BubbleSort(mas_int, N);
	GetLocalTime(&st2);
	cout << "BubbleSort( mas_int, N )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl << endl;
	//prn_mas( mas_int, N );

	for (i = 0; i < N; i++) mas_int[i] = rand();
	GetLocalTime(&st1);
	ChoiceSort(mas_int, N);
	GetLocalTime(&st2);
	cout << "ChoiceSort( mas_int, N )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl << endl;
	//	prn_mas( mas_int, N );

	for (i = 0; i < N; i++) mas_int[i] = rand();
	GetLocalTime(&st1);
	sort(mas_int, mas_int + N);
	GetLocalTime(&st2);
	cout << "sort(mas_int, mas_int+N)" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( mas_int, N );

	for (i = 0; i < N; i++) mas_int[i] = rand();
	GetLocalTime(&st1);
	sort(mas_int, mas_int + N, greater<int>());
	GetLocalTime(&st2);
	cout << "sort(mas_int, mas_int+N, greater<int>() )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( mas_int, N );

	for (i = 0; i < N; i++) mas_int[i] = rand();
	GetLocalTime(&st1);
	sort(mas_int, mas_int + N, less<int>());
	GetLocalTime(&st2);
	cout << "sort(mas_int, mas_int+N, less<int>() )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( mas_int, N );

	//---------------------- vector -------------------------------------------
	for (i = 0; i < N; i++) vec[i] = rand();
	GetLocalTime(&st1);
	sort(vec.begin(),vec.end());
	GetLocalTime(&st2);
	cout << "sort( )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( vec.begin(), N );

	for (i = 0; i < N; i++) vec[i] = rand();
	GetLocalTime(&st1);
	BubbleSort(vec, N);
	GetLocalTime(&st2);
	cout << "BubbleSort(  )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( vec.begin(), N );

	for (i = 0; i < N; i++) vec[i] = rand();
	GetLocalTime(&st1);
	ChoiceSort(vec,vec.size()); // можна було передати в €кост≥ розм≥ру - N
	GetLocalTime(&st2);
	cout << "ChoiceSort(	)" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( vec.begin(), N );

	//---------------------- deque -------------------------------------------
	for (i = 0; i < N; i++) deq[i] = rand();
	GetLocalTime(&st1);
	sort(deq.begin(),deq.end());
	GetLocalTime(&st2);
	cout << "sort(  less<  >())" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( deq.begin(), N);

	for (i = 0; i < N; i++) deq[i] = rand();
	GetLocalTime(&st1);
	ChoiceSort(deq,deq.size());
	GetLocalTime(&st2);
	cout << "ChoiceSort(   )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	//	prn_mas( deq.begin(), N);

	for (i = 0; i < N; i++) deq[i] = rand();
	GetLocalTime(&st1);
	BubbleSort(deq,deq.size());
	GetLocalTime(&st2);
	cout << "BubbleSort( 	 )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	// prn_mas(deq, N);
	/**/

	//---------------------- list -------------------------------------------
	for (i = 0; i < N; i++) lst.push_back(rand());

	GetLocalTime(&st1);
	lst.sort();
	GetLocalTime(&st2);
	cout << "lst.sort(  )" << endl;
	cout << st1.wHour << ":" << st1.wMinute << ":" << st1.wSecond << "," << st1.wMilliseconds << endl;
	cout << st2.wHour << ":" << st2.wMinute << ":" << st2.wSecond << "," << st2.wMilliseconds << endl;
	cout << endl;
	while (!lst.empty())
	{
		cout << lst.front() << ' ';
		lst.pop_front();
	}
	cout << endl;
	return 0;
}
