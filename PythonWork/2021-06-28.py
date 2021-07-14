output_a = int("52")
output_b = float("52.273")

print(type(output_a), output_a)
print(type(output_b), output_b)

input_a = float(input("첫 번째 숫자 > "))
input_b = float(input("두 번째 숫자 > "))

print("덧셈 결과 : ", input_a + input_b)
print("뺄셈 결과 : ", input_a - input_b)
print("곱셈 결과 : ", input_a * input_b)
print("나눗셈 결과 : ", input_a / input_b)

output_a = str("52")
output_b = str("52.273")

print(type(output_a), output_a)
print(type(output_b), output_b)

str_input = str(input("숫자 입력> "))
num_input = int(str_input)

print()
print(num_input, "inch")
print((num_input * 2.54), "cm")

str_input = str(input("원의 반지름 입력> "))
num_input = float(str_input)

print()
print("반지름: ", num_input)
print("둘레: ", 2*3.14*num_input)
print("넓이: ", 3.14 * num_input ** 2)



# format() 함수로 숫자를 문자열로 변환하기
string_a = "{}".format(10)

# 출력하기
print(string_a)
print(type(string_a))

# format() 함수로 숫자를 문자열로 변환하기
format_a = "{}만 원".format(5000)
format_b = "파이썬 열공하여 첫 연봉 {}만 원 만들기 ".format(5000)
format_c = "{} {} {}".format(3000,4000,5000)
format_d = "{} {} {}".format(1, "문자열", True)

# 출력하기
print(format_a)
print(format_b)
print(format_c)
print(format_d)

# 정수
output_a = "{:d}".format(52)

# 특정 칸에 출력하기
output_b = "{:5d}".format(52)       # 5칸
output_c = "{:10d}".format(52)      # 10칸

# 빈칸을 0으로 채우기
output_d = "{:05d}".format(52)      # 양수
output_e = "{:05d}".format(-52)     # 음수

print("# 기본")
print(output_a)

print("# 특정 칸에 출력하기")
print(output_b)
print(output_c)
print("# 빈칸을 0으로 채우기")
print(output_d)
print(output_e)

# 기호와 함께 출력하기
output_f = "{:+d}".format(52)     # 양수
output_g = "{:+d}".format(-52)     # 음수
output_h = "{: d}".format(52)     # 양수 : 기호 부분 공백
output_i = "{: d}".format(-52)     # 음수 : 기호 부분 공백

print("# 기호와 함께 출력하기")
print(output_f)
print(output_g)
print(output_h)
print(output_i)

output_h = "{:+5d}".format(52)     # 기호를 뒤로 밀기 : 양수
output_i = "{:+5d}".format(-52)     # 기호를 뒤로 밀기 : 음수
output_j = "{:=+5d}".format(52)     # 기호를 앞으로 밀기: 양수
output_k = "{:=+5d}".format(-52)     # 기호를 앞으로 밀기: 음수
output_l = "{:+05d}".format(52)     # 0으로 채우기: 양수
output_m = "{:+05d}".format(-52)     # 0으로 채우기: 음수

print("# 조합하기")
print(output_h)
print(output_i)
print(output_j)
print(output_k)
print(output_l)
print(output_m)


output_a = "{:f}".format(52.273)
output_b = "{:15f}".format(52.273)      # 15칸 만들기
output_c = "{:+15f}".format(52.273)     # 15칸에 부호 추가하기
output_d = "{:+015f}".format(52.273)    # 15칸에 부호 추가하고 0으로 채우기

print(output_a)
print(output_b)
print(output_c)
print(output_d)

output_a = "{:15.3f}".format(52.273)
output_b = "{:15.2f}".format(52.273)
output_c = "{:15.1f}".format(52.273)

print(output_a)
print(output_b)
print(output_c)

# 의미 없는 소수점 제거하기
output_a = 52.0
output_b = "{:g}".format(output_a)

print(output_a)
print(output_b)

a = "Hello Python Programing...!"
print(a.upper())
print(a.lower())

# 문자열 양 옆의 공백을제거 strip()
# 왼쪽의 공백을 제거        lstrip()
# 오른쪽의 공백을 제거      rstrip()

input_a = """    
      안녕하세요
문자열의 함수를 알아봅니다
"""

print(input_a)
print(input_a.strip())
print(input_a.lstrip())
print(input_a.rstrip())

# 문자열의 구성 파악하기 : isOO()
# isalnum() : 알파벳 또는 숫자로만 구성되어 있는지 확인합니다
# isalpha() : 알파벳으로만 구성되어 있는지 확인합니다
# isidentifier() : 식별자로 사용할 수 있는 것인지 확인합니다
# isdecimal()
# isdigit()
# isspace()
# islower()
# isupper()

print("TrainA10".isalnum())
print("10".isdigit())

# 문자열 찾기 : find() 와 rfind()

output_a = "안녕안녕하세요".find("안녕")
print(output_a)
output_b = "안녕안녕하세요".rfind("안녕")
print(output_b)


# 문자열과 in 연산자 : 문자열 내부에 어떤 문자열이 있는지 확인할 때 사용
print("안녕" in "안녕하세요")
print("잘자" in "안녕하세요")

# 문자열 자르기 : split()
a = "10 20 30 40 50".split(" ")
print(a)

a = input("> 1번째 숫자: ")
b = input("> 2번째 숫자: ")
print()

print("{} + {} = {}".format(a,b,int(a)+int(b)))

print(10 == 100)
print(10 != 100)
print(10 > 100)
print(10 < 100)
print(10 <= 100)
print(10 >= 100)

x = 25
print(10<x<30)

number = int(input("정수 입력> "))

if number > 0:
    print("양수입니다")

if number < 0:
    print("음수입니다")

if number == 0:
    print("0입니다")

import datetime

now = datetime.datetime.now()

print(now.year, "년")
print(now.month, "월")
print(now.day, "일")
print(now.hour, "시")
print(now.minute, "분")
print(now.second, "초")

print("{}년 {}월 {}일 {}시 {}분 {}초".format(now.year, now.month, now.day, now.hour, now.minute, now.second))

import datetime

now = datetime.datetime.now()

if now.hour < 12:
    print("현재 시각은 {}시로 오전입니다!".format(now.hour))

if now.hour >= 12:
    print("현재 시각은 {}시로 오후입니다!".format(now.hour))

if 3 <= now.month <= 5:
    print("이번 달은 {}월로 봄입니다!".format(now.month))

if 6 <= now.month <= 8:
    print("이번 달은 {}월로 여름입니다!".format(now.month))

if 9 <= now.month <= 11:
    print("이번 달은 {}월로 가을입니다!".format(now.month))

if 12 <= now.month <= 2:
    print("이번 달은 {}월로 겨울입니다!".format(now.month))


number = input("정수 입력 > ")

last_character = number[-1]
last_number = int(last_character)

if last_number == 0 \
    or last_number == 2 \
    or last_number == 4 \
    or last_number == 6 \
    or last_number == 8:
    print("짝수입니다")

if last_number == 1 \
    or last_number == 3 \
    or last_number == 5 \
    or last_number == 7 \
    or last_number == 9:
    print("홀수입니다")



number = input("정수 입력> ")
last_character = number[-1]

if last_character in "02468":
    print("짝수입니다")
if last_character in "13579":
    print("홀수입니다")

number = int(input("정수 입력> "))
if number % 2 == 0:
    print("짝수입니다")
if number % 2 == 1:
    print("홀수입니다")

a = float(input("> 1번째 숫자: "))
b = float(input("> 2번째 숫자: "))
print()

if a > b:
    print("처음 입력했던 {}가 {}보다 더 큽니다".format(a,b))
if b > a:
    print("두 번째로 입력했던 {}가 {}보다 더 큽니다".format(b,a))

number = int(input("정수 입력> "))
if number % 2 == 0:
    print("짝수입니다")
else:
    print("홀수입니다")

import datetime

now = datetime.datetime.now()
month = now.month

if 3 <= now.month <= 5:
    print("이번 달은 {}월로 봄입니다!".format(now.month))
elif 6 <= now.month <= 8:
    print("이번 달은 {}월로 여름입니다!".format(now.month))
elif 9 <= now.month <= 11:
    print("이번 달은 {}월로 가을입니다!".format(now.month))
else:
    print("이번 달은 {}월로 겨울입니다!".format(now.month))


score = float(input("학점 입력> "))

if score == 4.5:
    print("신")
elif 4.2 <= score < 4.5:
    print("교수님의 사랑")
elif 3.5 <= score < 4.2:
    print("현 체제의 수호자")
elif 2.8 <= score < 3.5:
    print("일반인")
elif 2.3 <= score < 2.8:
    print("일탈을 꿈꾸는 소시민")
elif 1.75 <= score < 2.3:
    print("오락문화의선구자")
elif 1.0 <= score < 1.75:
    print("불가촉천민")
elif 0.5 <= score < 1.4:
    print("자벌레")
elif 0 < score < 0.5:
    print("플랑크톤")
elif score == 0:
    print("시대를 앞서가는 혁명의 씨앗")

score = float(input("학점 입력> "))

if score == 4.5:
    print("신")
elif 4.2 <= score :
    print("교수님의 사랑")
elif 3.5 <= score :
    print("현 체제의 수호자")
elif 2.8 <= score :
    print("일반인")
elif 2.3 <= score :
    print("일탈을 꿈꾸는 소시민")
elif 1.75 <= score :
    print("오락문화의선구자")
elif 1.0 <= score :
    print("불가촉천민")
elif 0.5 <= score :
    print("자벌레")
elif 0 < score :
    print("플랑크톤")
else:
    print("시대를 앞서가는 혁명의 씨앗")



print("# if 조건문에 0 넣기")
if 0:
    print("0은 True로 변환됩니다")
else :
    print("0은 false로 변환됩니다")
print()

print("# if 조건문에 빈 문자열 넣기")
if "":
    print("빈 문자열은 True로 변환됩니다")
else :
    print("빈 문자열은 false로 변환됩니다")


number = int(input("정수 입력> "))

if number > 0:
    # 미구현
    pass
else :
    # 미구현
    pass



str_input = input("태어난 해를 입력해 주세요> ")
birth_year = int(str_input) % 12

if birth_year == 0:
    print("원숭이 띠입니다.")
elif birth_year == 1:
    print("닭 띠입니다.")
elif birth_year == 2:
    print("개 띠입니다.")
elif birth_year == 3:
    print("돼지 띠입니다.")
elif birth_year == 4:
    print("쥐 띠입니다.")
elif birth_year == 5:
    print("소 띠입니다.")
elif birth_year == 6:
    print("범 띠입니다.")
elif birth_year == 7:
    print("토끼 띠입니다.")
elif birth_year == 8:
    print("용 띠입니다.")
elif birth_year == 9:
    print("뱀 띠입니다.")
elif birth_year == 10:
    print("말 띠입니다.")
elif birth_year == 11:
    print("양 띠입니다.")

array = [273,32,103,"문자열", True, False]
print(array)

list_a = array = [273,32,103,"문자열", True, False]
list_a[3]
list_a[3][0]

list_a = [[1,2,3],[4,5,6],[7,8,9]]
list_a[1]
list_a[1][1]


list_a = [1,2,3]
list_b = [4,5,6]

print("# 리스트")
print("list_a = ", list_a)
print("list_b = ", list_b)
print()

# 기본연산자
print("# 리스트 기본 연산자")
print("list_a + list_b = ", list_a + list_b)
print("list_a * 3 = ", list_a * 3)
print()

# 함수
print("# 길이 구하기")
print("len(list_a) =",len(list_a))

list_a = [1,2,3]

print("# 리스트 뒤에 요소 추가하기")
list_a.append(4)
list_a.append(5)
print(list_a)
print()

print("# 리스트 중간에 요소 추가하기")
list_a.insert(0,10)
print(list_a)

list_a.extend


list_a = [0,1,2,3,4,5]
print("# 리스트의 요소 하나 제거하기")

del list_a[1]
print("del list_a[1]:",list_a)

list_a.pop()
print("pop():",list_a)

list_b = [0,1,2,3,4,5,6]
del list_b[3:6]
print(list_b)

list_c = [0,1,2,3,4,5,6]
del list_c[:3]
print(list_c)

list_c = [1,2,1,2]
list_c.remove(2)
print(list_c)

list_a = [273,32,103,57,52]
print(273 in list_a)
print(99 in list_a)
print(100 in list_a)
print(52 in list_a)
print(273 not in list_a)
print(99 not in list_a)
print(100 not in list_a)
print(52 not in list_a)


for i in range(100):
    print("출력")

array = [273,32,103,57,52]

for element in array:
    print(element)

for character in "안녕하세요":
    print("-", character)

list_a = [0,1,2,3,4,5,6,7]

list_a.extend(list_a)
print(list_a)
list_a.append(10)
print(list_a)
list_a.insert(3,0)
print(list_a)
list_a.remove(3)
print(list_a)
list_a.pop(3)
print(list_a)
list_a.clear()
print(list_a)


numbers = [273,103,5,32,65,9,72,800,99]

for number in numbers:
    if number >= 100 :
        print("- 100 이상의 수: ", number)

list_of_list = [
    [1,2,3],
    [4,5,6,7],
    [8,9],
]

for num1 in list_of_list:
    for num2 in num1:
        print(num2)

numbers = [1,2,3,4,5,6,7,8,9]
output = [[],[],[]]

for number in numbers:
    output[((number + 2)%3)].append(number)
print(output)


numbers = [273,103,5,32,65,9,72,800,99]

for i in numbers :
    if i % 2 == 1 :
        print("{}는 홀수입니다.".format(i))
    else :
        print("{}는 짝수입니다.".format(i))

for i in numbers :
    print("{} 는 {} 자릿수입니다".format(i, len(str(i))))


# 딕셔너리 : 키를 기반으로 값을 저장하는것
dict_a = {
    "name" : "어벤져스 엔드게임",
    "type" : "히어로 무비"
}

print(dict_a["name"])

dictionary = {
    "name": "7D 건조 망고",
    "type": "당절임",
    "ingredient": ["망고","설탕","메타중아황상나트륨","치자황색소"],
    "origin": "필리핀"
}

print("name: ", dictionary["name"])
print("type: ", dictionary["type"])
print("ingredient: ", dictionary["ingredient"])
print("origin: ", dictionary["origin"])
print()

dictionary["name"] = "8D 건조 망고"
print("name: ", dictionary["name"])



# 딕셔너리 : 키를 기반으로 값을 저장하는것
dict_a = {
    "name" : "어벤져스 엔드게임",
    "type" : "히어로 무비"
}

print(dict_a["name"])

dictionary = {
    "name": "7D 건조 망고",
    "type": "당절임",
    "ingredient": ["망고","설탕","메타중아황상나트륨","치자황색소"],
    "origin": "필리핀"
}

print("name: ", dictionary["name"])
print("type: ", dictionary["type"])
print("ingredient: ", dictionary["ingredient"])
print("origin: ", dictionary["origin"])
print()

dictionary["name"] = "8D 건조 망고"
print("name: ", dictionary["name"])