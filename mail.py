class MailClient:
    def hello(self):
        print('Вас приветствует QuickMail (=⌒‿‿⌒=)! \n'
              'Введите ваше имя:  ')
        user = input()

    def __init__(self, server, user):
        self.server = server
        self.user = user


class ReceiveMail(MailClient):
    def __init__(self, new_mail, server, user):
        super().__init__(server, user)
        self.new_mail = new_mail

    def receive_mail(self):
        if self.new_mail is None:
            print('Новых писем нет ツ')
        else:
            print(f"У Вас новое письмо: \n"
                  f"{self.new_mail}")
            self.new_mail = None


class SendMail(MailClient):
    def __init__(self, new_user, message, server, user):
        super().__init__(server, user)
        self.new_user = new_user
        self.message = message

    def send_mail(self):
        server1 = input('На какой сервер зайдём? (=^ ◡ ^=) ')
        self.server1 = server1
        for servers in self.server:
            while self.server1 not in self.server:
                print('Сервер не существует (￣ヘ￣) \n'
                      'Попробуйте ещё (=^ ◡ ^=):')
                self.server1 = input()
            else:
                user1 = input('Кому напишем? (◎ ◎) ')
                self.user1 = user1
                for users1 in self.user1:
                    while self.user1 != self.new_user:
                        print('Такого пользователя нет (￣～￣) \n'
                          'Введите имя ещё раз (^人^)')
                        self.user1 = input()
                    if self.user1 == self.new_user:
                        message = input('Введите сообщение: ')
                        self.message = message
                        print('Ваше сообщение отправлено (◕‿◕)')
                    return True

    def users_messages(self):
        if SendMail.send_mail is True:
            self.new_user = None
            self.message = None
        else:
            pass


def main():
    m = MailClient
    m.hello(MailClient)
    m.server = ['1', '2', '3']
    print('                          Что бы Вы хотели сделать? \n'
          'отправить сообщение ------------------------------------------ проверить папку "Входящие" \n'
          '                       напишите "отправить" или "проверить" \n'
          '                  Если Вы хотите покинуть QuikeMail напишите "выйти"')
    action = input()
    while action != 'отправить' or action != 'проверить' or action != 'выйти':
        print('                          Что бы Вы хотели сделать? \n'
              'отправить сообщение ------------------------------------------ проверить папку "Входящие" \n'
              '                       напишите "отправить" или "проверить" \n'
              '                  Если Вы хотите покинуть QuikeMail напишите "выйти"')
        #action = input()
        if action == 'отправить':
            s = SendMail
            s.new_user = 'alice'
            s.send_mail(SendMail)
        if action == 'проверить':
            r = ReceiveMail
            r.new_mail = 'hi, how are ya?'
            r.receive_mail(ReceiveMail)
        if action == 'выйти':
            return True


main()