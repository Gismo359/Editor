#include "Clipboard.hpp"

#include <QApplication>
#include <QClipboard>

Clipboard::Clipboard()
{
}

Clipboard &Clipboard::Instance()
{
    static Clipboard clipboard;
    return clipboard;
}

String32 Clipboard::Text()
{
    return QApplication::clipboard()->text().toStdU32String();
}