from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer
from tkinter import *
import pyttsx3 as pp
import os


engine = pp.init()
voices = engine.getProperty('voices')
print(voices)

engine.setProperty('voice', voices[1].id)

time_positive=['what is the time right now','what is the current time','what is the time now','what’s the time','what time is it',
'what time is it now','do you know what time it is','could you tell me the time, please','what is the time','will you tell me the time',
'tell me the time','time','show me the time']

time_negative=['what is','what are you doing','what’s up','could you','do you','what’s the','will you','tell me','show me','current','do you']

def speak(word):
    engine.say(word)
    engine.runAndWait()


bot = ChatBot( "my Bot", read_only=True,
    logic_adapters=['chatterbot.logic.MathematicalEvaluation','chatterbot.logic.UnitConversion','chatterbot.logic.BestMatch'])

 # {
        #     'import_path': 'chatterbot.logic.TimeLogicAdapter',
        #     'positive': time_positive,
        #     'negative': time_negative
        # }
trainer = ListTrainer(bot)

# convo = open('text.txt','r').readlines()
for _file in os.listdir('files'):
    chats = open('files/' + _file, 'r').readlines()
    
    trainer.train(chats)



#now training thebot with the help of trainer

# trainer.train(convo)

# print("Talk to my bot")
# while True:
#     query=input("You :")
#     if query=='exit':
#         break
#     answer = bot.get_response(query)
#     print("bot :",answer)

main= Tk()

main.geometry("500x650")

main.title("My chat bot")
img = PhotoImage(file="logo.png")
photoL=Label(main,image= img)

photoL.pack(pady=5)

def ask_from_bot():
    query = textF.get()
    with open('text.txt', "a") as f:
        f.write (query + '\n');
    answer_from_bot = bot.get_response(query)
    with open('text.txt', "a") as f:
        f.write (str(answer_from_bot) + '\n');
    msgs.insert(END, "you: " + query)
    msgs.insert(END, "bot: " + str(answer_from_bot))
    textF.delete(0, END)
    msgs.yview(END)
    speak(answer_from_bot)

frame= Frame(main)

sc = Scrollbar(frame)
msgs = Listbox(frame,width=80,height=20, yscrollcommand=sc.set)#scrollbar issue

sc.pack(side=RIGHT, fill=Y)
msgs.pack(side=LEFT, fill=BOTH, pady=10)

frame.pack()

#creating text field
textF = Entry(main, font=("Verdana", 20))
textF.pack(fill=X, pady=10)
btn=Button(main, text="Ask from Bot", font=("Verdana", 20), command=ask_from_bot)
btn.pack()

#creating a function
def enter_function(event):
    btn.invoke()

#going to bing window with enter key
main.bind('<Return>', enter_function)

main.mainloop()