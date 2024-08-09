from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot
from chatterbot.conversation import Statement
import os

def remove_hyphens(statement):
    """
    Remove hypnens.
    """
    statement.text = statement.text.replace('-', '')
    return statement

bot = ChatBot('Test',
      storage_adapter='chatterbot.storage.SQLStorageAdapter',
      database_uri='sqlite:///database.sqlite3',
      logic_adapters=[
                      'chatterbot.logic.MathematicalEvaluation',
                      {
                        'import_path': 'chatterbot.logic.BestMatch',
                        'default_response': 'I am sorry, but I do not understand.',
                        'maximum_similarity_threshold': 0.90
                      }
                    ],
    #   preprocessors=[
    #                  remove_hyphens
    #                  ],
      trainer='chatterbot.trainers.ListTrainer')
      
bot.preprocessors.append(
    remove_hyphens
)

trainer = ListTrainer(bot)

for _file in os.listdir('files'):
    chats = open('files/' + _file, 'r').readlines()
    trainer.train(chats)

def remove_hyphens(statement):
    """
    Remove hypnens.
    """
    statement.text = statement.text.replace('-', '')
    return statement

while True:
    try:
        message = input('You:')
        if message.strip() == 'Bye':
            print('ChatBot: Bye')
            break
        else:
            reply = bot.get_response(message)
            if reply.confidence == 0:
                print("I don't understand")
            else:
                print('ChatBot:', reply)

    # Press ctrl-c or ctrl-d on the keyboard to exit
    except (KeyboardInterrupt, EOFError, SystemExit):
        break