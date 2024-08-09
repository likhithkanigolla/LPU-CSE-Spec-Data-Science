from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer
import speech_recognition as sr 


#creating a new chatbot
chatbot = ChatBot( 'Test',
    logic_adapters=[ 
    'chatterbot.logic.MathematicalEvaluation',
    'chatterbot.logic.BestMatch'], 
    )

trainer = ListTrainer(chatbot)
convo = [ 'hi, myself natasha can I help you', 'my name is natasha', 'natasha at your service']
pre_input=['hello','hi','heyy','h','hii','hey','hell']

trainer.train(convo)


#getting a response from the chatbot
print("Talk to my bot")

while True:
    print("You :",end=(""))
    r=sr.Recognizer()
    with sr.Microphone() as source:
        audio=r.listen(source)
    print(r.recognize_google(audio))
    query=r.recognize_google(audio)
    if (query in pre_input):
        answer = chatbot.get_response(query)
        print("bot :" + str(answer))
    else:
        break
# response = chatbot.get_response(query)
# print(response)
