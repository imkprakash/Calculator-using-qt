#include "calculator.h"
#include "ui_calculator.h"
#include <QRegularExpression>

double calcVal = 0.0;
QString prevVal = "";
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; i++){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    // Making the buttons in the actual app to perform some functions.
    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButton()));

    connect(ui->ChangeSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));

    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(ClearButtonPressed()));

    connect(ui->Decimal, SIGNAL(released()), this,
            SLOT(DecimalButtonPressed()));

    connect(ui->Back, SIGNAL(released()), this,
            SLOT(BackspacePressed()));

}

Calculator::~Calculator()
{
    delete ui;
}

// When a number button is pressed.
void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if (displayVal=="/" || displayVal=="*" || displayVal=="+" || displayVal=="-"){
        QString newVal = butVal;
        ui->Display->setText(butVal);
        return;
    }
    if(displayVal == '.'){
        QString newVal = displayVal + butVal;
//        double dblNewVal = newVal.toDouble();
        ui->Display->setText(newVal);
    }
    else if((displayVal=="0") || (displayVal=="0.0")){
        ui->Display->setText(butVal);
    }
    else{
        QString newVal = displayVal + butVal;
//        double dblNewVal = newVal.toDouble();
        ui->Display->setText(newVal);
    }
}

// When an operation or math button is pressed.
void Calculator::MathButtonPressed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    prevVal = ui->Display->text();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive)==0){
        divTrigger = true;
        ui->Display->setText("/");
    }
    else if(QString::compare(butVal, "*", Qt::CaseInsensitive)==0){
        multTrigger = true;
        ui->Display->setText("*");
    }
    else if(QString::compare(butVal, "+", Qt::CaseInsensitive)==0){
        addTrigger = true;
        ui->Display->setText("+");
    }
    else{
        subTrigger = true;
        ui->Display->setText("-");
    }
}


// When equal button is pressed.
void Calculator::EqualButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || divTrigger || multTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        }
        else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        }
        else if(divTrigger){
            solution = calcVal / dblDisplayVal;
        }
        else {
            solution = calcVal * dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}


// When change sign button is pressed.
void Calculator::ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    QRegularExpression reg("[-]?[0-9]*");
    QRegularExpressionMatch match = reg.match(displayVal);
    if(match.hasMatch()){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1*dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}


// When clear button is pressed.
void Calculator::ClearButtonPressed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    calcVal = 0.0;
    ui->Display->setText(QString::number(calcVal));
}


// When decimal button is pressed.
void Calculator::DecimalButtonPressed(){
    QString displayVal = ui->Display->text();
    if (displayVal == "0" || displayVal == "0.0"){
        ui->Display->setText(".");
    }
    else{
        for(int i = 0; i < displayVal.size(); i++){
            if (displayVal[i] == '.'){
                ClearButtonPressed();
                return;
            }
        }
        displayVal += ".";
        ui->Display->setText(displayVal);
    }
}


// When backspace button is pressed.
void Calculator::BackspacePressed(){
    QString displayVal = ui->Display->text();
    if (displayVal == "/" || displayVal == "+" || displayVal == "-" || displayVal == "*"){
        divTrigger = false;
        multTrigger = false;
        addTrigger = false;
        subTrigger = false;
        ui->Display->setText(prevVal);
        return;
    }
    if (displayVal == "0." || displayVal == "."){
        ui->Display->setText("0");
        return;
    }
    displayVal.chop(1);
    ui->Display->setText(displayVal);
}
