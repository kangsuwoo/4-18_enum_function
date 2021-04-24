#include "pch.h"

    // Enum : 열거형 
    // 굉장히 굉장히 많이 쓰인다 (가독석)
    // 애도 자료형 CHARACTER_MOTION type = IDLE; (0)

    //enum CHARACTER_MOTION
//{
//    IDLE = 0,
//    MOVE,
//    JUMP,
//    ATTACK,
//    HIT,
//    DEATH
//
//    // 2배수 씩 찍는 법
//
//    //IDLE = 2,
//    //MOVE = IDLE + 2,
//    //JUMP = IDLE + 2,
//
//    
//};

struct NumberData
{
    int number;
    bool isCheck;
};

int GetRandomNumber(NumberData containValues[], int index);

void PrintBingo(NumberData values[]);


int main()
{
#pragma region 숙제 (선생님 스타일)
    //Ctrl + Alt + L : 솔루션 탐색기
    // 삼항 연산자 (또는 ? 연산자)
    //bool isResult;
    //if (100 > 0) isResult = true;
    //else isResult = false;
    // 항상 왼쪽이 조건 부 True (C언어)
    //bool isResult = (100 > 0) ? true : false;

    // 멤버 변수는 m_(변수명.ToUpper() 앞 글자 대문자) ex : int m_Number;
    // 글로벌 변수는 g_(변수명.ToUpper()) -> 앞 글자 대문자) ex : int g_value;
    // bool isResult -> 조건 변수는 접두 is (변수명)
    // Function 은 자료형 대문자+소문자 단어 추가시 앞 대문자) -> void Initialize(){ }
    // void setNumber() { }
    // 대표적인 공식 문자는 C++ google style
    // 선생님은 C# microsoft 공식 메누얼을 C++ 에 접두해 사용합니다

    // 쉬운 숙제 
    // 1. 헝가리안 표기법, 스네이크 표기법, 허스칼 표기법 알아오고 쌤한테 설명할 수 있도록 보고오기
    // 2. OOP -> 객체지향 에 대해서 간단히 알아오기 (ex : 캡슐화 종, 상속성 등등)
    
    // 숙제 아님
    // 고오오급 3. 아 이런게 있구나 하는 숙제 (DOD) -> 데이터 지향 힐끔 보기
    // ! Unity DOT 아닙니다
#pragma endregion+
    srand(time(NULL));

    //CHARACTER_MOTION type = IDLE; // (int)
    //int code = 0;
    //cin >> code;

    //// 명시적 형변환 ? 개발자가 직접 표기하여 해당 형식을 표기한 형식으로 바꾸는 변환법
    //type = (CHARACTER_MOTION)code;

    //// 묵시적 형변환 (암묵적 형변환) 컴파일러(프로그램) 이 해당 형식을 추정하여 변경하는 변환법
    //float data = code;

    // 빙고 만들기

    NumberData values[25] = { 0, };



    for (int i = 0; i < 25; ++i)
    {
        // 숫자 1 ~ 25 까지 넣는데
        // 중복 없이 넣어주세요 (랜덤으로)
        // rand() ????
        values[i].number = GetRandomNumber(values, i);

        cout << values[i].number << endl;

        if (i % 5 == 0) printf("\n");

    }
        int number = 0;

    while (number != -1)
    {
        system("cls");

        PrintBingo(values);

      
        int input;

        cin >> input;

       


    }
    

    return 0;
}

int GetRandomNumber(NumberData containValues[], int index)
{
    int value = rand() % 25 + 1;
    for (int i = 0; i < index; i++)
    {
        if (value == containValues[i].number)
        {
            value = rand() % 25 + 1;
            i = -1;
        }
    }
    return value;
}

void PrintBingo(NumberData values[])
{

    for (int i = 1; i < 26; ++i)
    {
        cout << values[i - 1].number << " \t";



        if (i % 5 == 0) printf("\n");
    }
}