#include "columnviewmodel.h"

ColumnViewModel::ColumnViewModel(QObject *parent)
    : QAbstractListModel(parent)
    , m_modelDataList(Person::randomPersonList(15))
    , m_modelHeaderList({ "Zuanem", "Vorname", "Lebensnummer" })
{

}

QVariant ColumnViewModel::data(const QModelIndex &index, int role) const
{
    QVariant value;
    switch (role) {
    case Qt::DisplayRole:
        switch (index.column()) {
        case 0:
            value.setValue(m_modelDataList[index.row()].zuname());
            break;
        case 1:
            value.setValue(m_modelDataList[index.row()].vorname());
            break;
        case 2:
            value.setValue(m_modelDataList[index.row()].lebensnummer());
            break;
        }
        break;
    default:
        break;
    }

    return value;
}

QVariant ColumnViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    QVariant value;
    if (role == Qt::DisplayRole)
    {
        value.setValue(m_modelHeaderList[section]);
    }

    return value;
}
