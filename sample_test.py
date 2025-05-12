```python
import pytest

class TestCal:
    """コンピュータの基本的な数学計算をテストするクラスです。
    
    このクラスでは、加算、減算、乗算、および除算の基本的な演算について
    各関数をテストします。テストフレームワークとしてpytestを利用します。
    """

    def add(self, a, b):
        """2つの数値の和を返します。

        Args:
            a (int or float): 足される数。
            b (int or float): 足す数。

        Returns:
            int or float: aとbの和。
        """
        return a + b
    
    def subtract(self, a, b):
        """2つの数値の差を返します。

        Args:
            a (int or float): 減らされる数。
            b (int or float): 減らす数。

        Returns:
            int or float: aとbの差。
        """
        return a - b

    def multiply(self, a, b):
        """2つの数値の積を返します。

        Args:
            a (int or float): かけられる数。
            b (int or float): かける数。

        Returns:
            int or float: aとbの積。
        """
        return a * b

    def divide(self, a, b):
        """2つの数値の商を返します。

        Args:
            a (int or float): 割られる数。
            b (int or float): 割る数。

        Returns:
            float: aとbの商。

        Raises:
            ValueError: bが0の場合に発生。
        """
        if b == 0:
            raise ValueError("Cannot divide by zero")
        return a / b


@pytest.fixture
def calc():
    """TestCalクラスのインスタンスを生成するためのpytestフィクスチャです。

    Returns:
        TestCal: テスト対象のTestCalクラスのインスタンス。
    """
    return TestCal()


def test_add(calc):
    """加算メソッドをテストします。

    Args:
        calc (TestCal): TestCalクラスのインスタンス。

    Asserts:
        加算の結果が期待通りであるかを確認。
    """
    assert calc.add(3, 2) == 5
    assert calc.add(-1, 1) == 0
    assert calc.add(1.5, 2.5) == 4.0


def test_subtract(calc):
    """減算メソッドをテストします。

    Args:
        calc (TestCal): TestCalクラスのインスタンス。

    Asserts:
        減算の結果が期待通りであるかを確認。
    """
    assert calc.subtract(3, 2) == 1
    assert calc.subtract(2, 3) == -1
    assert calc.subtract(2.5, 1.0) == 1.5


def test_multiply(calc):
    """乗算メソッドをテストします。

    Args:
        calc (TestCal): TestCalクラスのインスタンス。

    Asserts:
        乗算の結果が期待通りであるかを確認。
    """
    assert calc.multiply(3, 2) == 6
    assert calc.multiply(-1, 1) == -1
    assert calc.multiply(1.5, 2) == 3.0


def test_divide(calc):
    """除算メソッドをテストします。

    Args:
        calc (TestCal): TestCalクラスのインスタンス。

    Asserts:
        除算の結果が期待通りであるかを確認。
        0で除算した場合に例外が発生するかを確認。
    """
    assert calc.divide(6, 2) == 3
    assert calc.divide(3, 2) == 1.5
    with pytest.raises(ValueError):
        calc.divide(1, 0)
```