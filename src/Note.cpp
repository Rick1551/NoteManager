#include "../include/Note.h"

/**
* @brief Constructor de Note
* Initializa los atributos de la nota con los valores proporcionados.
*/
Note::Note(const QString& title,
		   const QString& content,
		   const QStringList& tags,
		   const QDateTime& createdAt)
	: m_title(title),
	  m_content(content),
	  m_tags(tags),
	  m_createdAt(createdAt),
	  m_archived(false) // Por defecto, la nota no está archivada
{}

// Getters

QString Note::getTitle() const { return m_title; }

QString Note::getContent() const { return m_content; }

QStringList Note::getTags() const { return m_tags; }

QDateTime Note::getCreatedAt() const { return m_createdAt; }

bool Note::isArchived() const { return m_archived; }

// Setters

void Note::setTitle(const QString& title) { m_title = title; }

void Note::setContent(const QString& content) { m_content = content; }

void Note::setTags(const QStringList& tags) { m_tags = tags; }

void Note::setArchived(bool archived) { m_archived = archived; }