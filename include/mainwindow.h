#include <QMainWindow>
#include "ui_MainWindow.h" //Interfaz generada por Qt Designer
#include "Note.h"

/**
 * @brief Clase principal de la interfaz gráfica.
 * Hereda de QMainWindow y conecta con la lógica de NoteManager.
 * Se encarga de mostrar, agregar y actualizar notas en la UI.
 */

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
    Ui::MainWindow* ui; // Puntero a la interfaz de usuario generada por Qt Designer
};
