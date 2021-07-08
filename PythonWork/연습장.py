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
