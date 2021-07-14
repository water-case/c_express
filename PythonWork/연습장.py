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