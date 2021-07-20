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

# output_a 처럼 strftime() 함수 사용하면 시간을 형식에 맞춰 출력 가능
# 그 외 다양한 시간 처리 가능

import datetime
now = datetime.datetime.now()

print("# datetime.timedelta로 시간 더하기")
after = now + datetime.timedelta(\
    weeks=1,\
    days=1,\
    hours=1,\
    minutes=1,\
    seconds=1)
print(after.strftime("%Y{} %m{} %d{} %H{} %M{} %S{}").format(*"년월일시분초"))
print()

print("# now.replace()로 1년 더하기")
output = now.replace(year=(now.year + 1))
print(output.strftime("%Y{} %m{} %d{} %H{} %M{} %S{}").format(*"년월일시분초"))

# timedelta() 함수 사용하면 특정한 시간의 이전 또는 이후 구함
# "1년 후" 구할 때는 replace() 함수 사용해 날짜 값을 교체


# time 모듈
#     시간과 관련된 기능
#     time.sleep() 함수
#         특정 시간 동안 코드 진행을 정지
#         정지하고 싶을 시간을 초 단위로 입력
import time

print("지금부터 5초 동안 정지합니다")
time.sleep(5)
print("프로그램을 종료합니다")

# urllib 모듈
#     URL 다루는 라이브러리

from urllib import request

target = request.urlopen("https://google.com")
output = target.read()

print(output)

    # urlopen() 함수 : URL 주소의 페이지 열기


# 외부 모듈 설치
# 프롬프트창에서 pip install 모듈이름

# BeautifulSoup 모듈
from urllib import request
from bs4 import BeautifulSoup

target = request.urlopen("http://www.kma.go.kr/weather/forecast/mid-term-rss3.jsp?stnId=108")

soup = BeautifulSoup(target, "html.parser")

for location in soup.select("location"):
    print("도시:", location.select_one("city").string)
    print("날씨:", location.select_one("wf").string)
    print("최저기온:", location.select_one("tmn").string)
    print("최고기온:", location.select_one("tmx").string)
    print()

# Flask 모듈

from flask import Flask
app = Flask(__name__)

@app.route("/")
def hello():
    return "<h1>Hello World!</h1>"



# 예시 - BeautifulSoup 스크레이핑 실행하기

from flask import Flask
from urllib import request
from bs4 import BeautifulSoup

app = Flask(__name__)
@app.route("/")

def hello():
    target = request.urlopen("http://www.kma.go.kr/weather/forecast/mid-term-rss3.jsp?stnId=108")
    soup = BeautifulSoup(target, "html.parser")

    output = ""
    for location in soup.select("location"):
        output += "<h3>{}</h3>".format(location.select_one("city").string)
        output += "날씨 : {}<br/>".format(location.select_one("wf").string)
        output += "최저/최고 기온: {}/{}"\
            .format(\
                location.select_one("tmn").string,\
                location.select_one("tmn").string\
            )
        output += "<hr/>"
    return output

# 라이브러리 : 정상적인 제어 하는 모듈
# 프레임워크 : 제어 역전이 발생하는 모듈
# 제어 역전 : "역전되지 않은 정상적인 제어"란?

# 라이브러리 : 개발자가 모듈 기능을 호출하는 형태의 모듈
# 정상적인 제어 = 라이브러리
from math import sin, cos, tan, floor, ceil

print("sin(1):", sin(1))
print("cos(1):", cos(1))
print("tan(1):", tan(1))

print("floor(2.5):", floor(2.5))
print("ceil(2.5):", ceil(2.5))


# 프레임워크
from flask import Flask
app = Flask(__name__)

@app.route("/")
def hello():
    return "<h1>Hello World!</h1>"

# 내부에 함수만 정의하고 직접적으로 무언가 실행하는 코드 없음
# Flask가 내부적으로 서버를 실행한 뒤 지정한 파일을 읽어들여 적절한 상황에 스스로 실행
# 프레임워크란, 모듈이 개발자가 작성한 코드를 실행하는 형태의 모듈
# 제어 역전이란, 개발자가 만든 함수를 모듈이 실행하는 형태의, 일반적인 경우와 반대인 제어 흐름

