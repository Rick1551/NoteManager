#include "../include/NoteManager.h"


NoteManager::NoteManager(QObject* parent)
    : QObject(parent)
{

}


/**
 * @brief Agrega una nueva nota a la colecci�n.
 * @param note La nota que se desea agregar.
 */
void NoteManager::addNote(const Note& note)
{
    m_notes.append(note);           // A�ade la nota al vector
    emit noteAdded(note);           // Emite se�al para actualizar la UI
}

/**
 * @brief Elimina una nota por su �ndice.
 * @param index �ndice de la nota a eliminar.
 */
void NoteManager::removeNote(int index)
{
    if (index >= 0 && index < m_notes.size()) {
        m_notes.remove(index);      // Elimina la nota del vector
        emit noteRemoved(index);    // Emite se�al para actualizar la UI
    }
}

/**
 * @brief Marca una nota como archivada.
 * @param index �ndice de la nota a archivar.
 */
void NoteManager::archiveNote(int index)
{
    if (index >= 0 && index < m_notes.size()) {
        m_notes[index].setArchived(true);   // Marca la nota como archivada
        emit noteArchived(index);           // Emite se�al para actualizar la UI
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
 * @return Vector con notas que est�n marcadas como archivadas.
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
 * @return Vector con notas que no est�n archivadas.
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
