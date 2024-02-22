input()
a=input()
b=['','','2','3','223','5','35','7','2227','2337']
print(''.join([b[int(i)]for i in a]))
print(''.join(sorted(''.join([b[int(i)]for i in a]),reverse=True)))
