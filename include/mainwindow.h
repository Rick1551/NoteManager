#include <QMainWindow>
#include "NoteManager.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void onNoteAdded(const Note& note);
    void onNoteRemoved(int index);
    void onNoteArchived(int index);

private:
    Ui::MainWindow* ui;
    NoteManager* m_noteManager;
};
