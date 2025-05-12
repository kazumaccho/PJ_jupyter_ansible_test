```python
class Greeting:
    """
    挨拶に関するクラスです。このクラスは異なる方法で挨拶メッセージを生成します。
    """

    def __init__(self, name):
        """
        初期化メソッド。名前をセットします。

        Args:
            name (str): 挨拶する対象の名前。
        """
        self.name = name

    def say_hello(self):
        """
        "Hello, {name}!" という形式の挨拶を返します。

        Returns:
            str: 挨拶メッセージ。
        """
        return f"Hello, {self.name}!"

    def say_goodbye(self):
        """
        "Goodbye, {name}!" という形式の別れの挨拶を返します。

        Returns:
            str: 別れの挨拶メッセージ。
        """
        return f"Goodbye, {self.name}!"


if __name__ == "__main__":
    greeting = Greeting("World")
    print(greeting.say_hello())
    print(greeting.say_goodbye())
```