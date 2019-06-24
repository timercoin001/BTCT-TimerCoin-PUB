/****************************************************************************
** Meta object code from reading C++ file 'guiutil.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/guiutil.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guiutil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GUIUtil__ToolTipToRichTextFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter[] = {
    "GUIUtil::ToolTipToRichTextFilter\0"
};

void GUIUtil::ToolTipToRichTextFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GUIUtil::ToolTipToRichTextFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUIUtil::ToolTipToRichTextFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter,
      qt_meta_data_GUIUtil__ToolTipToRichTextFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUIUtil::ToolTipToRichTextFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUIUtil::ToolTipToRichTextFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUIUtil::ToolTipToRichTextFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__ToolTipToRichTextFilter))
        return static_cast<void*>(const_cast< ToolTipToRichTextFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int GUIUtil::ToolTipToRichTextFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_GUIUtil__TableViewLastColumnResizingFixer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      72,   43,   42,   42, 0x08,
     103,   42,   42,   42, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer[] = {
    "GUIUtil::TableViewLastColumnResizingFixer\0"
    "\0logicalIndex,oldSize,newSize\0"
    "on_sectionResized(int,int,int)\0"
    "on_geometriesChanged()\0"
};

void GUIUtil::TableViewLastColumnResizingFixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TableViewLastColumnResizingFixer *_t = static_cast<TableViewLastColumnResizingFixer *>(_o);
        switch (_id) {
        case 0: _t->on_sectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->on_geometriesChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GUIUtil::TableViewLastColumnResizingFixer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GUIUtil::TableViewLastColumnResizingFixer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer,
      qt_meta_data_GUIUtil__TableViewLastColumnResizingFixer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GUIUtil::TableViewLastColumnResizingFixer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GUIUtil::TableViewLastColumnResizingFixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GUIUtil::TableViewLastColumnResizingFixer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GUIUtil__TableViewLastColumnResizingFixer))
        return static_cast<void*>(const_cast< TableViewLastColumnResizingFixer*>(this));
    return QObject::qt_metacast(_clname);
}

int GUIUtil::TableViewLastColumnResizingFixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
