from chatterbot import ChatBot #import the chatbot
from chatterbot.trainers import ListTrainer #method to train chatbot
from chatterbot.trainers import ChatterBotCorpusTrainer
import os

# Create a new instance of a ChatBot 
# bot = ChatBot( 'Test', read_only=True,
#     logic_adapters=[ 
#     'chatterbot.logic.MathematicalEvaluation',
#     'chatterbot.logic.BestMatch'], 
#     )


# import logging
# logging.basicConfig(level=logging.INFO)

pos=['what is the time right now', 'what is the current time', 'what is the time now', 'what’s the time', 'what time is it', 
'what time is it now', 'do you know what time it is', 'could you tell me the time, please', 'what is the time', 'will you tell me the time', 
'tell me the time', 'time please', 'show me the time', 'what is time', 'whats on the clock', 'clock', 'show me the clock', 'what is the time']

neg=['what are you doing', 'what’s up', 'could you', 'do you', 'what’s', 'will you', 'tell me', 'show me', 'current', 'do', 'now', 
'will', 'show', 'tell', 'me', 'could', 'what', 'whats', 'i have time', 'who', 'who is', 'hardtime', 'when is time', 'how is time', 'who is time', 't', 'ti',
'tim', 'i', 'it', ' ', '']

bot = ChatBot(
    'Example Bot',
    storage_adapter='chatterbot.storage.SQLStorageAdapter',
    logic_adapters=[
        {
            'import_path': 'chatterbot.logic.BestMatch',
            'default_response': 'I am sorry, but I do not understand.',
            'maximum_similarity_threshold': 0.90
        },
        {
            'import_path': 'chatterbot.logic.TimeLogicAdapter',
            'positive': (pos),
            'negative': (neg)
        }
    ]
)



# conv = open('text.txt', 'r').readlines()
# bot.set_trainer(ListTrainer)

trainer = ListTrainer(bot) #set the trainer

# # Train based on the english corpus
# trainer.train("chatterbot.corpus.english")

# # Train based on english greetings corpus
# trainer.train("chatterbot.corpus.english.greetings")

# # Train based on the english conversations corpus
# trainer.train("chatterbot.corpus.english.conversations")

for _file in os.listdir('files'):
    chats = open('files/' + _file, 'r').readlines()
    
    trainer.train(chats)


filename = input ("write your name: ");
while True:
    request =input("you: ") 
    with open(filename, "a") as f:
        f.write (request + '\n');
     
    response = bot.get_response(request)
    print("bot: " + str(response))

    with open(filename, "a") as f:
        f.write (str(response) + '\n');
    