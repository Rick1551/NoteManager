#ifndef NOTE_H
#define NOTE_H

#include <QString>
#include <QStringList>
#include <QDateTime>

/**
 * @brief La clase Note representa una nota individual.
 * Contiene t�tulo, contenido, etiquetas, fecha de creaci�n y estado de archivado.
 */
class Note {
public:
    /**
     * @brief Constructor de Note
     * @param title T�tulo de la nota
     * @param content Contenido de la nota
     * @param tags Lista de etiquetas asociadas
     * @param createdAt Fecha de creaci�n (por defecto: fecha actual)
     */
    Note(const QString& title,
        const QString& content,
        const QStringList& tags = {},
        const QDateTime& createdAt = QDateTime::currentDateTime());

    //Getters
    QString getTitle() const;           // Devuelve el t�tulo de la nota
    QString getContent() const;         // Devuelve el contenido
    QStringList getTags() const;        // Devuelve las etiquetas
    QDateTime getCreatedAt() const;     // Devuelve la fecha de creaci�n
    bool isArchived() const;            // Indica si la nota est� archivada

    //Setters
    void setTitle(const QString& title);            // Establece el t�tulo
    void setContent(const QString& content);        // Establece el contenido
    void setTags(const QStringList& tags);          // Establece las etiquetas
    void setArchived(bool archived);                // Marca la nota como archivada o no

private:
    QString m_title;           // T�tulo de la nota
    QString m_content;         // Contenido de la nota
    QStringList m_tags;        // Etiquetas asociadas
    QDateTime m_createdAt;     // Fecha de creaci�n
    bool m_archived;           // Estado de archivado
};

#endif // NOTE_H
