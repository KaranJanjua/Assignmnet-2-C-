#include <QtTest>

// add necessary includes here

class TestFirst : public QObject
{
    Q_OBJECT

public:
    TestFirst();
    ~TestFirst();

private slots:
    void test_case1();

};

TestFirst::TestFirst()
{

}

TestFirst::~TestFirst()
{

}

void TestFirst::test_case1()
{

}

QTEST_APPLESS_MAIN(TestFirst)

#include "tst_testfirst.moc"
