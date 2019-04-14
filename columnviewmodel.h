#ifndef COLUMNVIEWMODEL_H
#define COLUMNVIEWMODEL_H

#include <QAbstractListModel>
#include "person.h"

class ColumnViewModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit ColumnViewModel(QObject *parent = nullptr);

    // QAbstractItemModel interface
    int rowCount(const QModelIndex &parent) const override      { Q_UNUSED(parent) return m_modelDataList.size(); }
    int columnCount(const QModelIndex &parent) const override   { Q_UNUSED(parent) return m_modelHeaderList.size(); }
    QVariant data(const QModelIndex &index, int role) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

signals:

public slots:

private:
    QList<Person> m_modelDataList;
    QList<QString> m_modelHeaderList;
};

#endif // COLUMNVIEWMODEL_H
