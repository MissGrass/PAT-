/*����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10��100�η���

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu   */ 

#include<iostream>
using namespace std;
int main()
{
	string n;
	string py[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	cin >> n;
	int sum;
	for(int i = 0; i < n.length(); i++){
		sum += (n[i] - '0');
	}
	string num = to_string(sum);
	for(int i = 0; i < num.length(); i++){
		cout << py[num[i] - '0'];
		if(i != num.length()-1)
			cout << " ";
	}
}



