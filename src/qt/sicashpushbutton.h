#ifndef SICASHPUSHBUTTON_H
#define SICASHPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class SICashPushButton : public QPushButton
{
public:
    explicit SICashPushButton(QWidget * parent = Q_NULLPTR);
    explicit SICashPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // SICASHPUSHBUTTON_H
