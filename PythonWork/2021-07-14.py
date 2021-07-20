# 메모 변수를 만듭니다
import random
dictionary = {
    1: 1,
    2: 2
}


def fibonacci(n):
    if n in dictionary:
        # 메모가 되어 있으면 메모된 값을 리턴
        return dictionary[n]
    else:
        # 메모가 되어 있지 않으면 값을 구함
        output = fibonacci(n-1) + fibonacci(n - 2)
        dictionary[n] = output
        return output


# 함수를 호출합니다
print("fibonacci(10):", fibonacci(10))
print("fibonacci(20):", fibonacci(20))
print("fibonacci(30):", fibonacci(30))
print("fibonacci(40):", fibonacci(40))
print("fibonacci(50):", fibonacci(50))


def flatten(data):
    output = []
    for item in data:
        if type(item) == list:
            output += flatten(item)
        else:
            output.append(item)
    return output


example = [[1, 2, 3], [4, [5, 6]], 7, [8, 9]]
print("원본:", example)
print("변환:", flatten(example))

# 튜플
# 한번 결정된 요소는 바꿀 수 없음

[a, b] = [10, 20]
(c, d) = (10, 20)

print("a:", a)
print("b:", b)
print("c:", c)
print("d:", d)

# 괄호가 없는 튜플
tuple_test = 10, 20, 30, 40
print("# 괄호가 없는 튜플의 값과 자료형 출력")
print("tuple_test:", tuple_test)
print("type(tuple_test): ", type(tuple_test))
print()

# 괄호가 없는 튜플 활용
a, b, c = 10, 20, 30
print("# 괄호가 없는 튜플을 활용한 할당")
print("a: ", a)
print("b: ", b)
print("c: ", c)

# 변수의 값을 교환하는 튜플
a, b = 10, 20

print("# 교환 전 값")
print("a:", a)
print("b:", b)
print()

# 값을 교환합니다
a, b = b, a

print("# 교환 후 값")
print("a:", a)
print("b:", b)
print()

# 튜플과 함수 - 여러 개의 값 리턴하기

# 함수를 선언합니다


def test():
    return (10, 20)


# 여러 개의 값을 리턴받습니다
a, b = test()

# 출력합니다
print("a:", a)
print("b:", b)

# 람다
# 기능을 매개변수로 전달하는 코드를 더 효율적으로 작성


def call_10_times(func):
    for i in range(10):
        func()


def print_hello():
    print("안녕하세요")


call_10_times(print_hello)

# filter() 함수와 amp() 함수
# 함수를 배개변수로 전달하는 대표적인 표준함수


def power(item):
    return item+item


def under_3(item):
    return item < 3


list_input_a = [1, 2, 3, 4, 5]

# map() 함수를 사용합니다
output_a = map(power, list_input_a)
print("# map() 함수의 실행결과")
print("map(power, list_input_a): ", output_a)
print("map(power, list_input_a): ", list(output_a))
print()

# filter() 함수를 사용합니다
output_b = filter(under_3, list_input_a)
print("# filter() 함수의 실행결과")
print("filter(under_3, output_b): ", output_b)
print("filter(under_3, output_b): ", list(output_b))

# 람다 : 간단한 함수를 쉽게 선언하는 방법
# lambda 매개변수 : 리턴값
# 이전 코드를 람다로 변경


def power(x): return x*x


def under_3(x): return x < 3


list_input_a = [1, 2, 3, 4, 5]

# map() 함수를 사용합니다
output_a = map(power, list_input_a)
print("# map() 함수의 실행결과")
print("map(power, list_input_a): ", output_a)
print("map(power, list_input_a): ", list(output_a))
print()

# filter() 함수를 사용합니다
output_b = filter(under_3, list_input_a)
print("# filter() 함수의 실행결과")
print("filter(under_3, output_b): ", output_b)
print("filter(under_3, output_b): ", list(output_b))

# 인라인 람다
# 함수의 매개변수에 람다 곧바로 넣을 수 있음

list_input_a = [1, 2, 3, 4, 5]

output_a = map(lambda x: x*x, list_input_a)
print("# map() 함수의 실행결과")
print("map(power, list_input_a): ", output_a)
print("map(power, list_input_a): ", list(output_a))
print()

# filter() 함수를 사용합니다
output_b = filter(lambda x: x < 3, list_input_a)
print("# filter() 함수의 실행결과")
print("filter(under_3, output_b): ", output_b)
print("filter(under_3, output_b): ", list(output_b))

# 인라인 람다
# 함수의 매개변수에 람다 곧바로 넣을 수 있음

list_input_a = [1, 2, 3, 4, 5]

output_a = map(lambda x: x*x, list_input_a)
print("# map() 함수의 실행결과")
print("map(power, list_input_a): ", output_a)
print("map(power, list_input_a): ", list(output_a))
print()

# filter() 함수를 사용합니다
output_b = filter(lambda x: x < 3, list_input_a)
print("# filter() 함수의 실행결과")
print("filter(under_3, output_b): ", output_b)
print("filter(under_3, output_b): ", list(output_b))

# 파일 처리
# 텍스트 파일의 처리
# 파일 열기(open) - 파일 읽기(read) - 파일 쓰기(write)

# 파일 열고 닫기
# open() 함수
# 파일 객체 = open(문자열: 파일 경로, 문자열: 읽기 모드)

# 모드에 다음을 지정할 수 있음
# w : write 모드(새로 쓰기 모드)
# a : append 모드(뒤에 이어서 쓰기 모드)
# r : read 모드(읽기 모드)

# closed() 함수
# 파일 객체.close()

# 파일을 엽니다
file = open("basic.txt", "w")

# 파일에 텍스트를 씁니다
file.write("Hello Python Programming...!")

# 파일을 닫습니다
file.close()

# with 키워드
# 조건문과 반복문 들어가다 보면 파일을 열고서 닫지 않는 실수 하는 경우 생길 수 있음

# with 구문 종료 시 파일을 자동으로 닫음
# with open(문자열 파일 경로, 문자열: 모드) as 파일 객체:
#     문장
# 파일을 엽니다
with open("basic.txt", "w") as file:
    # 파일에 텍스트를 씁니다
    file.write("Hello Python Programming...!")

# 텍스트 읽기
# read() 함수
# 파일 객체.read()

# 파일을 엽니다
with open("basic.txt", "r") as file:
    # 파일에 텍스트를 씁니다
    contents = file.read()
print(contents)

# 텍스트 한 줄씩 읽기
# CSV, XML, JSON 방법 등으로 텍스트를 사용해 데이터를 구조적으로 표현
# CSV (Comma-Separated Values) 예시
# 이름, 키, 몸무게
# 윤인성, 176, 62
# 연하진, 169, 50
# 한 줄에 하나의 데이터 나타내며 각 줄은 쉼표 사용해 데이터 구분함
# 첫 줄에 헤더 넣어 각 데이터가 나타내는 바 설명
# 한 번에 모든 데이터 올려놓고 사용하는 것이 컴퓨터 성능에 영향 미칠 수도 있음

# 예시 - 랜덤하게 1000명의 키와 몸무게 만들기
# 랜덤한 숫자를 만들기 위해 가져옵니다
# 간단한 한글 리스트를 만듭니다
hanguls = list("가나다라마바사아자차카타파하")
# 파일을 쓰기 모드로 엽니다
with open("info.txt", "w") as file:
    for i in range(1000):
        # 랜덤한 값으로 변수를 생성합니다
        name = random.choice(hanguls) + random.choice(hanguls)
        weight = random.randrange(40, 100)
        height = random.randrange(140, 200)
        # 텍스트를 씁니다
        file.write("{}, {}, {}\n".format(name, weight, height))

# 데이터를 한 줄씩 읽어들일 때는 for 반복문을 다음과 같이 사용
# for 한 줄을 나타내는 문자열 in 파일 객체:
#     처리

# 키와 몸무게로 비만도 계산
with open("info.txt", "r") as file:
    for line in file:
        # 변수를 선언합니다
        (name, weight, height) = line.strip().split(", ")

        # 데이터가 문제없는지 확입합니다: 문제가 있으면 지나감
        if(not name) or (not weight) or (not height):
            continue
        # 결과를 계산합니다
        bmi = int(weight) / (int(height) * int(height))
        result = ""
        if 25 <= bmi:
            result = "과체중"
        elif 18.5 <= bmi:
            result = "정상 체중"
        else:
            result = "저체중"

        # 출력합니다
        print('\n'.join([
            "이름: {}",
            "몸무게: {}",
            "키: {}",
            "BMI: {}",
            "결과: {}"
        ]).format(name, weight, height, bmi, result))
        print()

# 제너레이터
# 이터레이터를 직접 만들 때 사용하는 코드
# 함수 내부에 yield 키워드 사용하면 해당 함수는 제너레이터 함수 됨
# 일반 함수와 달리 호출해도 함수 내부 코드가 실행되지 않음


def test():
    print("함수가 호출되었습니다.")
    yield "test"


print("A 지점 통과")
test()

print("B 지점 통과")
test()
print(test())

# next() 함수 사용해 내부 코드 실행
# yield 키워드 부분까지만 실행하며 next() 함수 리턴값으로 yield 키워드 뒤에 입력한 값이 출력됨


def test():
    print("A 지점 통과")
    yield 1
    print("B 지점 통과")
    yield 2
    print("C 지점 통과")


output = test()

# next() 함수를 호출합니다
print("D 지점 통과")
a = next(output)
print(a)

print("E 지점 통과")
b = next(output)
print(b)

# next() 함수 호출한 이후 yield 키워드 만나지 못하고 함수 끝나면 StopIteration 예외 발생

print("1번 문제")

numbers = [1, 2, 3, 4, 5, 6]

print("::".join(map(str, numbers)))

print("2번 문제")
numbers = list(range(1, 10+1))

print("# 홀수만 추출하기")
print(list(filter(lambda numbers: numbers % 2 == 1, numbers)))
print()

print("# 3 이상, 7 미만 추출하기")
print(list(filter(lambda numbers: 7 > numbers >= 3, numbers)))
print()

print("# 제곱해서 50 미만 추출하기")
print(list(filter(lambda numbers: numbers*numbers < 50, numbers)))
print()


# 오류(error)와 예외
# 오류(error)
# 구문 오류(syntax error) : 프로그램 실행 전에 발생하는 오류
# 런타임 오류(runtime error) / 예외(exception) : 프로그램 실행 중에 발생하는 오류

# 예외 처리(exception handling)
#     조건문을 사용하는 방법
#         기본 예외 처리
#     try 구문을 사용하는 방법

# 조건문으로 예외 처리하기

user_input_a = input("정수 입력>")
if user_input_a.isdigit():
    number_input_a = int(user_input_a)

    print("원의 반지름: ", number_input_a)
    print("원의 둘레: ", 2**number_input_a)
    print("원의 넓이: ", 3.14*number_input_a*number_input_a)
else:
    print("정수를 입력하지 않았습니다")

# try except 구문
#     예외 처리할 수 있는 구문
#     try:
#         예외가 발생할 가능성이 있는코드
#     except:
#         예외가 발생했을 때 실행할 코드
#     어떤 상황에 예외가 발생하는지 완벽하게 이해하고 있지 않아도 프로그램이 강제로 죽어버리는 상황은 막을 수 있음

try:
    number_input_a = int(input("정수 입력> "))
    print("원의 반지름: ", number_input_a)
    print("원의 둘레: ", 2**number_input_a)
    print("원의 넓이: ", 3.14*number_input_a*number_input_a)
except:
    print("무언가 잘못되었습니다.")


# try except 구문와 pass 키워드 조합하기
#     예외가 발생하면 일단 처리해야 하지만, 해당 코드가 딱히 중요한 부분이 아닌 경우 프로그램 강제 종료부터 막는 목적으로 except 구문에 아무것도 넣지않고 try 구문 사용
#     pass 키워드를 빈 except 구문에 넣음

list_input_a = ["52", "273", "32", "스파이", "103"]

list_number = []
for item in list_input_a:
    try:
        float(item)
        list_number.append(item)
    except:
        pass

print("{} 내부에 있는 숫자는".format(list_input_a))
print("{}입니다.".format(list_number))


# try except else 구문
#     try except 구문 뒤에 else 구문 붙여 사용하면 예외가 발생하지 않았을 때 실행할 코드 지정할 수 있음
#         이 때, 예외 발생 가능성 있는 코드만 try 구문 내부에 넣고 나머지는 모두 else 구문으로 빼는 경우 많음

try:
    number_input_a = int(input("정수 입력> "))
except:
    print("무언가 잘못되었습니다.")
else:
    print("원의 반지름: ", number_input_a)
    print("원의 둘레: ", 2**number_input_a)
    print("원의 넓이: ", 3.14*number_input_a*number_input_a)

# finally 구문
#     예외 처리 구문에서 가장 마지막에 사용할 수 있는 구문
#     예외 발생 여부와 관계없이 무조건 실행할 경우 사용

try:
    number_input_a = int(input("정수 입력> "))
    print("원의 반지름: ", number_input_a)
    print("원의 둘레: ", 2**number_input_a)
    print("원의 넓이: ", 3.14*number_input_a*number_input_a)
except:
    print("무언가 잘못되었습니다.")
else:
    print("예외가 발생하지 않았습니다")
finally:
    print("일단 프로그램이 어떻게든 끝났습니다")

# try, except, finally 구문의 조합
#     try 구문은 단독으로 사용할 수 없으며, 반드시 except 구문 또는 finally 구문과 함께 사용해야 함
#     else 구문은 반드시 except 구문 뒤에 사용해야 함

# finally 에 대한 오해
#     finally 키워드 설명 예제로 '파일처리'를 자주 사용하나, 실제 finally의 사용과는 사실 전혀 관련 없음
#     파일 제대로 닫았는지는 파일 객체의 closed 속성으로 알 수 있음
try:
    file = open("info.txt", "w")
    file.close()
except Exception as e:
    print(e)

print("# 파일이 제대로 닫혔는지 확인하기")
print("file.closed: ", file.closed)

# closed() 함수 사용 과정에서 예외 발생하여 try 구문 중간에 튕기는 경우

try:
    file = open("info.txt", "w")
    예외.발생해라()
    file.close()
except Exception as e:
    print(e)

print("# 파일이 제대로 닫혔는지 확인하기")
print("file.closed: ", file.closed)

# finally 구문 사용하여 파일 닫게 함
try:
    file = open("info.txt", "w")
    예외.발생해라()
except Exception as e:
    print(e)
finally:
    file.close()

print("# 파일이 제대로 닫혔는지 확인하기")
print("file.closed: ", file.closed)

# 예시 - try except 구문 끝난 후 파일 닫기
try:
    file = open("info.txt", "w")
    예외.발생해라()
except Exception as e:
    print(e)

file.close()
print("# 파일이 제대로 닫혔는지 확인하기")
print("file.closed: ", file.closed)

# try 구문 내부에서 return 키워드를 사용하는 경우


def test():
    print("test() 함수의 첫 줄입니다")
    try:
        print("try 구문이 실행되었습니다")
        return
        print("try 구문의 return 키워드 뒤입니다")
    except:
        print("except 구문이 실행되었습니다")
    else:
        print("else 구문이 실행되었습니다")
    finally:
        print("finally 구문이 실행되었습니다")
    print("test() 함수의 마지막 줄입니다")


test()

# 예시 - finally 키워드 활용
def write_text_file(filename, text):
    try:
        file = open(filename, "w")
        return
        file.write(text)
    except Exception as e:
        print(e)
    finally:
        file.close()


write_text_file("test.txt", "안녕하세요!")

# 반복문과 함께 사용하는 경우
print("프로그램이 시작되었습니다")

while True:
    try:
        print("try 구문이 실행되었습니다.")
        break
        print("try 구문의 break 키워드 뒤입니다.")
    except:
        print("except 구문이 실행되었습니다.")
    finally:
        print("finally 구문이 실행되었습니다.")
    print("while 반복문의 마지막 줄입니다.")
print("프로그램이 종료되었습니다")

# 확인문제(1)
numbers = [52, 273, 32, 103, 90, 10, 275]

print("# (1) 요소 내부에 있는 값 찾기")
print(" - {}는 {} 위치에 있습니다.".format(52, numbers.index(52)))
print()

print("# (2) 요소 내부에 없는 값 찾기")
number = 10000
if number in numbers:
    print("- {}는 {} 위치에 있습니다.".format(number, numbers.index(number)))
else:
    print("- 리스트 내부에 없는 값입니다.")
print()

print("--- 정상적으로 종료되었습니다. ---")

# 확인문제(2)
numbers = [52, 273, 32, 103, 90, 10, 275]

print("# (1) 요소 내부에 있는 값 찾기")
print(" - {}는 {} 위치에 있습니다.".format(52, numbers.index(52)))
print()

print("# (2) 요소 내부에 없는 값 찾기")
number = 10000
try:
    print("- {}는 {} 위치에 있습니다.".format(number, numbers.index(number)))
except:
    print("- 리스트 내부에 없는 값입니다.")
print()

print("--- 정상적으로 종료되었습니다. ---")

# 예외 객체 (exception object)
#     예외 발생 시 예외 정보가 저장되는 곳
# try:
#     예외가 발생할 가능성이 있는 구문
# except 예외의 종류 as 예외 객체를 활용할 변수 이름:
#     예외가 발생했을 때 실행할 구문

# Exception
#     모든 예외의 어머니
    
#     예시
try:
    number_input_a = int(input("정수 입력> "))
    print("원의 반지름: ", number_input_a)
    print("원의 둘레: ", 2**number_input_a)
    print("원의 넓이: ", 3.14*number_input_a*number_input_a)
except Exception as exception:
    print("type(exception): ", type(exception))
    print("exception: ", exception)


# 다양한 예외들이 발생할 때 그 정보를 메일 등으로 보내도록 해서 수집하면 큰 규모의 웹서비스 등에서 프로그램 개선에 큰 도움이 됨

# 예외구분하기
#     예외 객체 사용하면 except 구문을 if 조건문처럼 사용해서 예외를 구분할 수 있음
#     여러 가지 예외가 발생할 수 있는 상황

list_number = [52, 273, 32, 72, 100]
try:
    number_input = int(input("정수 입력> "))
    print("{}번째 요소: {}".format(number_input, list_number[number_input]))
except Exception as exception:
    print("type(exception):", type(exception))
    print("exception:", exception)

    # except 구문 뒤에 예외 종류 입력해서 구분할 수 있음
# try:
#     예외가 발생할 가능성이 있는 구문
# except 예외의 종류A:
#     예외A가 발생했을 때 실행할 구문
# except 예외의 종류B:
#     예외B가 발생했을 때 실행할 구문
# except 예외의 종류C:
#     예외C가 발생했을 때 실행할 구문

    # 예시 - ValueError 와 IndexError
list_number = [52, 273, 32, 72, 100]

try:
    number_input = int(input("정수 입력> "))
    print("{}번째 요소: {}".format(number_input, list_number[number_input]))
except ValueError:
    print("정수를 입력해 주세요!")
except IndexError:
    print("리스트의 인덱스를 벗어났어요!")

# 예외 구분 구문과 예외 객체
#     as 키워드 사용
#     각각의 except 구문 뒤에 예외 객체 붙여 예외 구분에 활용

list_number = [52, 273, 32, 72, 100]

try:
    number_input = int(input("정수 입력> "))
    print("{}번째 요소: {}".format(number_input, list_number[number_input]))
except ValueError as exception:
    print("정수를 입력해 주세요!")
    print("exception:",exception)
except IndexError as exception:
    print("리스트의 인덱스를 벗어났어요!")
    print("exception:",exception)

# except 구문으로 예외 구분하면 if, elif, else 조건문처럼 차례대로 오류 검출하며 확인. 만약 예외 조건에 일치하는 것이 없다면 당연히 예외가 발생하며 프로그램이 강제 종료
#     예시 - 예외 처리를 했지만 예외를 못잡는 경우

list_number = [52, 273, 32, 72, 100]

try:
    number_input = int(input("정수 입력> "))
    print("{}번째 요소: {}".format(number_input, list_number[number_input]))
    예외.확인()
except ValueError as exception:
    print("정수를 입력해 주세요!")
    print("exception:",exception)
except IndexError as exception:
    print("리스트의 인덱스를 벗어났어요!")
    print("exception:",exception)
except Exception as exception:
    print("미리 파악하지 못한 예외가 발생했습니다")
    print(type(exception), exception)

# raise 키워드
#     예외를 강제로 발생시킴
#     프로그램 개발 단계에서 아직 구현되지 않은 부분에 일부러 예외를 발생시켜 잊어버리지 않도록 함
number = input("정수 입력> ")
number = int(number)

if number > 0:
    raise NotImplementedError
else:
    raise NotImplementedError

# 모듈(module)
#     코드를 분리하고 공유하는 기능
#     표준 모듈
#         파이썬에 기본적으로 내장된 모듈
#     외부 모듈
#         사람들이 만들어 고개한 모듈

# math 모듈
#     수학과 관련된 기능
#         import math
#     여러 변수와 함수를 가진 집합체

import math

print(math.sin(1))
print(math.cos(1))
print(math.tan(1))
print(math.floor(2.5))
print(math.ceil(2.5))

# from 구문
#     다양한 함수를 계속해서 입력하는 것의 비효율성
#     from 모듈 이름 import 가져오고 싶은 변수 또는 함수
#     '가져오고 싶은 변수 또는 함수'에 여러 개의 변수 또는 함수 입력 가능
#     이를 통해 가져온 기능은 math 붙이지 않고도 사용할 수 있음

# from math import sin, cos, tan, floor, ceil

# print(sin(1))
# print(cos(1))
# print(tan(1))
# print(floor(2.5))
# print(ceil(2.5))


# 전부 가져오기

# from math import *

# print(sin(1))
# print(cos(1))
# print(tan(1))
# print(floor(2.5))
# print(ceil(2.5))

# as 구문
#     모듈의 이름이 너무 길어 짧게 줄여 사용하고 싶은 경우
#     import 모듈 as 사용하고 싶은 식별자

import math as m

print(m.sin(1))
print(m.cos(1))
print(m.tan(1))
print(m.floor(2.5))
print(m.ceil(2.5))

# random 모듈

import random
print("# random 모듈")

# random(): 0.0 <= x < 1.0 사이의 float 리턴
print("- random(): ", random.random())

# uniform(min, max): 지정한 범위 사이의 float를 리턴합니다
print("- uniform(10,20):", random.uniform(10,20))

# randrange(): 지정한 범위의 int를 리턴합니다
# - randrange(max): 0부터 max 사이의 값을 리턴합니다
# - randrange(min, max): min부터 max 사이의 값을 리턴합니다
print("- randrange(10)", random.randrange(10))

# choice(list): 리스트 내부에 있는 요소를 랜덤하게 선택합니다
print("- choice([1,2,3,4,5])", random.choice([1,2,3,4,5]))

# shuffle(list): 리스트의 요소들을 랜덤하게 섞습니다
print("- shuffle([1,2,3,4,5])", random.shuffle([1,2,3,4,5]))

# sample(list, k=<숫자>:): 리스트의 요소 중에 k개를 뽑습니다
print("- sample([1,2,3,4,5], k=2)", random.sample([1,2,3,4,5], k=2))

abc = ['a','b','c','d','e']
print(random.shuffle(abc))
print(random.choice(abc))

menu = '짜장','짬뽕','탕수육'
print(random.choice(menu))

# 5행의 random.random() 처럼 random을 계속 입력하는 것은 효율적이지 못하므로 from 구문 활용해서 임포트
# from time import random, randrage, choice

# sys 모듈
#     시스템과 관련된 정보 가진 모듈
#     명령 매개변수 받을 때 많이 사용

import sys

print(sys.argv)
print("---")

print("getwindowsversion:",sys.getwindowsversion())
print("---")
print("copyright:",sys.copyright)
print("---")
print("version:", sys.version)

sys.exit()

# os 모듈
#     운영체제와 관련된 기능 가진 모듈
#     새로운 폴더 만들거나 폴더 내부 파일 목록 보는 등

import os
print("현재 운영체제:", os.name)
print("현재 폴더:", os.getcwd())
print("현재 폴더 내부의 요소:",os.listdir())

os.mkdir("hello")
os.rmdir("hello")

with open("original.txt","w") as file:
    file.write("hello")
os.rename("original.txt","new.txt")

os.remove("new.txt")

os.system("dir")


# datetime 모듈
#     date(날짜) 및 time(시간)과 관련된 모듈로, 날짜 형식을 만들 때 자주 사용되는 코드들로 구성
import datetime

print("# 현재 시각 출력하기")
now = datetime.datetime.now()
print(now.year, "년")
print(now.month,"월")
print(now.day,"일")
print(now.hour,"시")
print(now.minute,"분")
print(now.second,"초")
print()

# 시간 출력 방법
print("# 시간을 포맷에 맞춰 출력하기")
output_a = now.strftime("%Y.%m.%d %H:%M:%S")
output_b = "{}년 {}월 {}일 {}시 {}분 {}초".format(now.year,\
    now.month,\
    now.day,\
    now.hour,\
    now.minute,\
    now.second)
output_c = now.strftime("%Y{} %m{} %d{} %H{} %M{} %S{}").format(*"년월일시분초")
print(output_a)
print(output_b)
print(output_c)
print()