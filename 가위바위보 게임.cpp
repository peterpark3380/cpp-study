#include <iostream>
using namespace std;
//int hp = 100;

//

//int main() {
 // cout << "체력이" << hp << "남았습니다" << endl;
//}
// 주석

// 0이 아닌 초기화 값이 있으면 data영역
// 초기값이 0이거나 초기값이 없는 변수라면 bss영역

//부동소수점의 핵심


//char ch = 'a';
//char ch2 = 49;
//char ch3 = 'a'+ 1;

//wchar_t wch = 0xc548; //L'안';
 //char str[] = { 'h', 'e', 'l', 'l', 'o','\0'};
//char str2[] = "Hello World";
//wchar_t str3[] = L"Hello Fucking World";

// 별찍기 2
// 1개부터 시작해서 순차적으로 줄마다 증가하게 수정

//컴퓨터에는 랜덤이라는 값이 존재할 수 없음
// 1을 입력했을 때 컴퓨터가 랜덤으로 1,2,3 이라는 숫자가 나옴
// 컴퓨터의 숫자와 내 숫자를 비교했을 때 숫자가 높은 쪽이 승리하는 방식임


int main()
{ 
 srand( time(0)); //시드설정
 // 1 2 3

 const int SCISSORS =1;
 const int ROCK = 2; 
 const int PAPER =3; 

int value = 1+ ( rand( )%3 ); 

int input;
cin >> input;

int wins = 0 ;
int total = 0; 


 while(true)
 {
   cout << "가위(1) 바위(2) 보(3)를 골라주세요" << endl;
   cout << ">";
  
  if (total == 0)
  {
    cout << "현재 승률 : 없음" << endl;
  }
  else
  {
    int winPercentage = ( wins * 100 ) / total;
    cout << "현재 승률" << winPercentage << "입니다" << endl;
    cout << "현재 판 수" << total << "입니다" << endl; 
  }


  //컴퓨터
  int computerValue = 1+ ( rand() %3);

  int input;
  cin >> input;

  if ( input == SCISSORS)
  {
    switch ( computerValue )
    {
      case SCISSORS : 
      cout << "가위(나) vs 가위(컴퓨터) 비겼습니다! "<< endl;
      break;
      case ROCK : 
      cout << "가위(나) vs 바위(컴퓨터) 졌습니다! "<< endl;
      total++;
      break;
      case PAPER : 
      cout << "가위(나) vs 보(컴퓨터) 이겼습니다! "<< endl;
      wins++;
      total++;
      break;
    }
  }

  else if( input == ROCK)
  {
    switch ( computerValue )
    {
      case SCISSORS : 
      cout << "바위(나) vs 가위(컴퓨터) 이겼습니다! "<< endl;
      wins++;
      total++;
      break;
      case ROCK : 
      cout << "바위(나) vs 바위(컴퓨터) 비겼습니다! "<< endl;
      break;
      case PAPER : 
      cout << "바위(나) vs 보(컴퓨터) 졌습니다! "<< endl;
      total++;
      break;
    }
  }
  
  else if( input == PAPER)
  {
    switch ( computerValue )
    {
      case SCISSORS : 
      cout << "보(나) vs 가위(컴퓨터) 졌습니다! "<< endl;
      total++;
      break;
      case ROCK : 
      cout << "보(나) vs 바위(컴퓨터) 이겼습니다! "<< endl;
      wins++;
      total++;
      break;
      case PAPER : 
      cout << "보(나) vs 보(컴퓨터) 비겼습니다! "<< endl;
      break;
    }
  }
else
{
  break;
}

 }

}


