#include <iostream> 

int main()
{
	int N;
	int M; 
	int K;
	std::cin >> N;
	std::cin >> M;
	std::cin >> K;
	int *a = new int[N*M];
	int *b = new int[N*M];
	int p;
    int q;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			a[i*M + j] = 0;
			b[i*M + j] = 0;
		}
	}
	for (int i = 0; i < K; i++){
		std::cin >> p >> q;
		p = p - 1;
		q = q - 1;
		a[p*M + q] = -1;	
	}
	for (int i = 0; i < N; i ++) { 
		for (int j = 0; j < M; j++) {
			if (i-1>-1 && j-1>-1) {
				b[i*M + j] = b[i*M + j] - a[(i-1)*M + (j-1)];
			}
			if (i-1>-1) {
				b[i*M + j] = b[i*M + j] - a[(i-1)*M + j];
			}
			if (j-1>-1) {
				b[i*M + j] = b[i*M + j] - a[i*M + (j-1)];
			}
			if (i-1>-1 && j+1<M) {
				b[i*M + j] = b[i*M + j] - a[(i-1)*M + (j+1)];
			}
			if (j+1<M) {
				b[i*M + j] = b[i*M + j] - a[i*M + (j+1)];
			}
			if (i+1<N && j+1<M) {
				b[i*M + j] = b[i*M + j] - a[(i+1)*M + (j+1)];
			}
			if (i+1<N) {
				b[i*M + j] = b[i*M + j] - a[(i+1)*M + j];
			}
			if (i+1<N && j-1>-1) {
				b[i*M + j] = b[i*M + j] - a[(i+1)*M + (j-1)];
			}
		}
	}
	for (int i = 0; i<N; i++){
		for (int j = 0; j < M; j++){
			if (a[i*M + j] == -1){
				std::cout << -1;
			}
			else{
				std::cout << b[i*M + j];
			}
			if (j != M-1) std::cout << ' '; 
		}
		std::cout << std::endl;
	}
	delete []a;
	delete []b;
	return 0;
}