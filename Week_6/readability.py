import cs50 as cs

# L = average num of ls per 100 words
# S = average num of sentences per 100 words
# 0.0588 * (L - 0.296) * (S - 15.8)

#This could have been solved without using an array, but i decided to go with this solution
#Reason being: im feeling more comfortable this way, due to my experience with C/C# and arrays in the past.

string = cs.get_string("str: ")
text = [string] #Use string array instead of normal str?
letters = 0
sentences = 0
#Start from 1, because the last word of the sentence wont be counted, because it's not followed by a space.
words = 1

for letter in range(len(text[0])):
    #Function that checks if character is alphabetical
    #Way easier than C
    if text[0][letter].isalpha():
        letters += 1
    #Function that checks if given character is a space, and we count words based on that
    #This is why var words was init from 1 and not 0
    elif text[0][letter].isspace():
        words += 1
    #Checks to see if given char is an exclamation point,question mark or period to count the sentences.
    elif text[0][letter] == chr(46) or text[0][letter] == chr(33) or text[0][letter] == chr(63):
        sentences += 1

average_letters = letters/words * 100
average_sentences = sentences/words * 100

result =  round(0.0588 * average_letters - 0.296 * average_sentences - 15.8)

if result < 1:
    print("Before Grade 1")
elif result > 16:
    print("Grade 16+")
else:
    print(f"Grade {result}")