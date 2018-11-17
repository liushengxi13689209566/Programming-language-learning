
name = input('Please enter your name:')
height = float(input('Please enter your height:'))
weight = float(input('Please enter your weight:'))
BMI = weight/(height*height)

if BMI > 32:
    s = '严重肥胖'
elif BMI > 28:
    s = '肥胖'
elif BMI > 25:
    s = '过重'
elif BMI > 18.5:
    s = '正常'
else:
    s = '过轻'

print('亲爱的%s，你的BMI是%s，你的身体状况是%s' % (name, BMI,s))
