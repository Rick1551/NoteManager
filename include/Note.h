#ifndef NOTE_H
#define NOTE_H

#include <QString>
#include <QStringList>
#include <QDateTime>

/**
 * @brief La clase Note representa una nota individual.
 * Contiene título, contenido, etiquetas, fecha de creación y estado de archivado.
 */
class Note {
public:
    /**
     * @brief Constructor de Note
     * @param title Título de la nota
     * @param content Contenido de la nota
     * @param tags Lista de etiquetas asociadas
     * @param createdAt Fecha de creación (por defecto: fecha actual)
     */
    Note(const QString& title,
        const QString& content,
        const QStringList& tags = {},
        const QDateTime& createdAt = QDateTime::currentDateTime());

    //Getters
    QString getTitle() const;           // Devuelve el título de la nota
    QString getContent() const;         // Devuelve el contenido
    QStringList getTags() const;        // Devuelve las etiquetas
    QDateTime getCreatedAt() const;     // Devuelve la fecha de creación
    bool isArchived() const;            // Indica si la nota está archivada

    //Setters
    void setTitle(const QString& title);            // Establece el título
    void setContent(const QString& content);        // Establece el contenido
    void setTags(const QStringList& tags);          // Establece las etiquetas
    void setArchived(bool archived);                // Marca la nota como archivada o no

private:
    QString m_title;           // Título de la nota
    QString m_content;         // Contenido de la nota
    QStringList m_tags;        // Etiquetas asociadas
    QDateTime m_createdAt;     // Fecha de creación
    bool m_archived;           // Estado de archivado
};

#endif // NOTE_H
