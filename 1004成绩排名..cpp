/*1004 �ɼ����� ��20 �֣�

���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�

�����ʽ��

ÿ������������� 1 ��������������ʽΪ

�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ��

��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�

����������

3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
���������

Mike CS991301
Joe Math990112*/
#include <iostream>
using namespace std;
int main() {
	string name, num;
	string maxname, maxnum;
	string minname, minnum;
	int score, max=0, min=100;
	int i;
	cin >> i;
	while(i--){
		cin >> name >> num >> score;
		if(score >= max){
			max = score;
			maxname = name;
			maxnum = num;
		}
		if(score <= min){
			min = score;
			minname = name;
			minnum = num;
		}
	}
	cout << maxname << " " << maxnum << endl;
	cout << minname << " " << minnum;

    return 0;
}

