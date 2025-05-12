```python
class Average:
    """
    Averageクラスは、名前や日本語、英語を用いてその平均を計算する機能を提供します。

    Attributes:
        _name (str): 任意の名前。
        _japanese (float): 日本語の点数。
        _english (float): 英語の点数。
        _average (float): 日本語と英語の平均を表します。
    """

    def __init__(self, name, japanese, english):
        """
        コンストラクタは、名前、日本語の点数、英語の点数を初期化し、
        自動的に平均を計算します。

        Args:
            name (str): 任意の名前。
            japanese (float): 日本語の点数。
            english (float): 英語の点数。
        """
        self.__name = name
        self.__japanese = japanese
        self.__english = english
        self.__average = self.__calculate_average()

    def __calculate_average(self):
        """
        日本語と英語の点数の平均を計算するメソッド。

        Returns:
            float: 日本語と英語の点数の平均。
        """
        return (self.__japanese + self.__english) / 2

    def get_name(self):
        """
        オブジェクトの名前を取得するメソッド。

        Returns:
            str: オブジェクトの名前。
        """
        return self.__name

    def get_average(self):
        """
        日本語と英語の点数の平均を取得するメソッド。

        Returns:
            float: 日本語と英語の点数の平均。
        """
        return self.__average
```

以上、Googleスタイルのdocstringを追加したコードです。全てのクラスとメソッドについて丁寧に説明を書きました。