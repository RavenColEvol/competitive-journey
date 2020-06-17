#input

s = input()

def is_vowel(s):
    vowels = ['a', 'e', 'i', 'o', 'u']
    return s in vowels

fc = -1
mc = None
fv = -1
mv = None

i = 0
n  = len(s)
while i < n:
    if is_vowel(s[i]) and fc != -1:
        break
    elif not is_vowel(s[i]):
        if fc == -1:
            fc = i
            mc = s[i]
        elif mc < s[i]:
            mc = s[i]
            fc = i
    i+=1

i = 0
n  = len(s)
while i < n:
    if not is_vowel(s[i]) and fv != -1:
        break
    elif is_vowel(s[i]):
        if fv == -1:
            fv = i
            mv = s[i]
        elif mv < s[i]:
            mv = s[i]
            fv = i
    i+=1
    
