#include "../include/NoteManager.h"


NoteManager::NoteManager(QObject* parent)
    : QObject(parent)
{

}


/**
 * @brief Agrega una nueva nota a la colección.
 * @param note La nota que se desea agregar.
 */
void NoteManager::addNote(const Note& note)
{
    m_notes.append(note);           // Añade la nota al vector
    emit noteAdded(note);           // Emite señal para actualizar la UI
}

/**
 * @brief Elimina una nota por su índice.
 * @param index Índice de la nota a eliminar.
 */
void NoteManager::removeNote(int index)
{
    if (index >= 0 && index < m_notes.size()) {
        m_notes.remove(index);      // Elimina la nota del vector
        emit noteRemoved(index);    // Emite señal para actualizar la UI
    }
}

/**
 * @brief Marca una nota como archivada.
 * @param index Índice de la nota a archivar.
 */
void NoteManager::archiveNote(int index)
{
    if (index >= 0 && index < m_notes.size()) {
        m_notes[index].setArchived(true);   // Marca la nota como archivada
        emit noteArchived(index);           // Emite señal para actualizar la UI
    }
}

/**
 * @brief Devuelve todas las notas (activas y archivadas).
 * @return Vector con todas las notas.
 */
QVector<Note> NoteManager::getNotes() const
{
    return m_notes;
}

/**
 * @brief Devuelve solo las notas archivadas.
 * @return Vector con notas que están marcadas como archivadas.
 */
QVector<Note> NoteManager::getArchivedNotes() const
{
    QVector<Note> archived;
    for (const Note& note : m_notes) {
        if (note.isArchived()) {
            archived.append(note);
        }
    }
    return archived;
}

/**
 * @brief Devuelve solo las notas activas (no archivadas).
 * @return Vector con notas que no están archivadas.
 */
QVector<Note> NoteManager::getActiveNotes() const
{
    QVector<Note> active;
    for (const Note& note : m_notes) {
        if (!note.isArchived()) {
            active.append(note);
        }
    }
    return active;
}
