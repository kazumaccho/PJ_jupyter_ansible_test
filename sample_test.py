```python
class Average:
    """
    平均値を計算するためのクラスです。このクラスは名前、ジャパニーズスコア、英語スコアを受け取り、これらのスコアの平均を計算します。
    
    Attributes:
        _name (str): 名前を保持します。
        _japanese (float): 日本語のスコアを保持します。
        _english (float): 英語のスコアを保持します。
        _average (float): 計算された平均値を保持します。
    """
    
    def __init__(self, name, japanese, english):
        """
        初期化メソッドです。名前、日本語スコア、英語スコアを設定し、平均値を計算します。

        Args:
            name (str): 名前
            japanese (float): 日本語のスコア
            english (float): 英語のスコア
        """
        self._name = name
        self._japanese = japanese
        self._english = english
        self._average = self.__calculate_average()

    def __calculate_average(self):
        """
        平均値を計算します。

        Returns:
            float: 日本語スコアと英語スコアの平均値
        """
        return (self._japanese + self._english) / 2

    def get_name(self):
        """
        名前を取得します。

        Returns:
            str: 名前
        """
        return self._name

    def get_average(self):
        """
        平均値を取得します。

        Returns:
            float: 計算された平均値
        """
        return self._average
```
