class Book:
    def __init__(self):
        self.title = "Diary of a wimpy kid" # ends up on the object
        self.edition = "Rodrick rules" # becomes a local variable in the constructor

book = Book()
print(book.title + ' - ' + book.edition) # "Red"
