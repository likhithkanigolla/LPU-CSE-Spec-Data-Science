from chatterbot import ChatBot

# Create a new instance of a ChatBot 
bot = ChatBot( 'Terminal',
    logic_adapters=[ 
    'chatterbot.logic.MathematicalEvaluation',
    'chatterbot.logic.TimeLogicAdapter',
    'chatterbot.logic.BestMatch'], 
    )
      
print('Type something to begin...')
# The following loop will execute each time the user enters input 


while True:
    request =input("you: ")  
    response = bot.get_response(request)
    print("bot: " + str(response))

