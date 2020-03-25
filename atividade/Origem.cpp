#include<iostream>

using namespace::std;

void tostring(int v[3], int n);
void bubbleSort(int v[3], int v2[3], int n);

int main() {
	int v[3] = { 1998,2000,1987 };
	int v2[3] = {0,1,2};


	tostring(v,3);
	bubbleSort(v,v2,3);
	
	tostring(v2, 3);


	system("PAUSE");
	return 0;
}


void tostring(int v[3], int n) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\t";
	}
	cout << "\n";
}

void bubbleSort(int v[3], int v2[3], int n) {
	for (int i = 0; i - 1 < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				int aux2 = v2[j];
				v[j] = v[j + 1];
				v2[j] = v2[j + 1];
				v[j + 1] = aux;
				v2[j + 1] = aux2;
			}
		}
	}
}