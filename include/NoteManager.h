#ifndef NOTEMANAGER_H
#define NOTEMANAGER_H

#include <QObject>
#include <QVector>
#include "Note.h"

/**
 * @brief La clase NoteManager administra una colección de notas.
 * Permite agregar, eliminar, marcar como archivadas y recuperar notas.
 * Hereda de QObject para emitir señales que pueden conectar con la interfaz.
 */

class NoteManager : public QObject
{
    Q_OBJECT

public:
    explicit NoteManager(QObject *parent = nullptr);
    ~NoteManager();

    //Operaciones basicas
	void addNote(const Note& note); // Agrega una nueva nota
	void removeNote(int index); // Elimina una nota por su índice
	void archiveNote(int index); // Marca una nota como archivada
    QVector<Note> getNotes() const; // Devuelve todas las notas
	QVector<Note> getArchivedNotes() const; // Devuelve solo notas archivadas
	QVector<Note> getActiveNotes() const; // Devuelve solo notas activas

signals:
    void noteAdded(const Note& note); // Señal emitida al agregar una nota
    void noteRemoved(int index); // Señal emitida al eliminar una nota
	void noteArchived(int index); // Señal emitida al archivar una nota

private:
	QVector<Note> m_notes; // Colección de notas
};


#endif // NOTEMANAGER_H