```python
class Average:
    """
    平均を計算するクラス。

    このクラスは、与えられた日本語、英語、および他の科目の成績の
    平均を計算し、成績と名前を保持するためのものです。
    """

    Attributes:
        _name (str): 生徒の名前
        _japanese (float): 日本語の成績
        _english (float): 英語の成績
        _average (float): 平均の成績

    """

    def __init__(self, name, japanese, english):
        """
        コンストラクタ。

        生徒の名前と成績を初期化し、平均を計算します。

        Args:
            name (str): 生徒の名前
            japanese (float): 日本語の成績
            english (float): 英語の成績
        """
        self._name = name
        self._japanese = japanese
        self._english = english
        self._average = self._calculate_average()

    def _calculate_average(self):
        """
        平均を計算するメソッド。

        日本語および英語の成績の平均を計算します。

        Returns:
            float: 平均の成績
        """
        return (self._japanese + self._english) / 2

    def get_name(self):
        """
        名前を取得するメソッド。

        生徒の名前を返します。

        Returns:
            str: 生徒の名前
        """
        return self._name

    def get_average(self):
        """
        平均を取得するメソッド。

        計算された平均の成績を返します。

        Returns:
            float: 平均の成績
        """
        return self._average
```
