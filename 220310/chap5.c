#include <stdio.h>

int main() {
	//������
	// ����������&&�� ||�� ���� �ǿ����ڸ����� �������� �����Ǹ� ������ �ǿ����ڴ� ������ �ʴ´�.
	
	//���������� ��Ÿ����.
	int x = 7; // 0111
	int result;
	for (int i = 3; i>=0; i--) {
		result = x >>i&1;
		
			printf("%0d", result);
	}





// ������ sizeof() -> 
// �������(���갪 �Ǵ� �ڷ���) �� ũ�⸦ ���ϴ� ������.
//  ������� ����Ʈ ������ �����̴�. 

	// �ڷ����� ��� �ݵ�� ��ȣ O. - �ڷ����̳� ��������� �׳� ��ȣġ��
	printf("sizeof(%%d) : %d\n",sizeof(int));
	// �ǿ�����, ���, ����, ����� - ��ȣ X
	printf("sizeof(%%d) : %d\n",sizeof(x));



// �޸������� - 
	// ������ �̰� �� �ִ��� �𸣰���
	// var = exp1, exp2
	// var= exp2, �� ���� �Ĺ̿� �ִ� ���� ����� ��.
	//ex)
	int cx = (3 + 4, 2 * 3); // 6
	printf("%d", cx);

	int ca, cb, cc;
	ca = 100; 
	cb = 50; 
	cc = 1;
	int ck = ca++; cb++;
	printf("ck : %d", ck);







	return 0;
}