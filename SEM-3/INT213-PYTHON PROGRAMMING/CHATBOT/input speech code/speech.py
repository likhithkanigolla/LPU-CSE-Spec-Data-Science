import speech_recognition as sr 

r=sr.Recognizer()
with sr.Microphone() as source:
    audio=r.listen(source)

try:
    print("System Predicts:"+ r.recognize_google(audio))
except Exception:
    print("something went wrong")

