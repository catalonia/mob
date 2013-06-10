#import "enunciate.h"
#ifndef DEF_ENUNCIATENS0TSNotificationSettingsObj_M
#define DEF_ENUNCIATENS0TSNotificationSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSNotificationSettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) notificationSettingsId
{
  return _notificationSettingsId;
}

/**
 * (no documentation provided)
 */
- (void) setNotificationSettingsId: (NSString *) newNotificationSettingsId
{
  [newNotificationSettingsId retain];
  [_notificationSettingsId release];
  _notificationSettingsId = newNotificationSettingsId;
}

/**
 * (no documentation provided)
 */
- (NSString *) phoneFlag
{
  return _phoneFlag;
}

/**
 * (no documentation provided)
 */
- (void) setPhoneFlag: (NSString *) newPhoneFlag
{
  [newPhoneFlag retain];
  [_phoneFlag release];
  _phoneFlag = newPhoneFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) emailFlag
{
  return _emailFlag;
}

/**
 * (no documentation provided)
 */
- (void) setEmailFlag: (NSString *) newEmailFlag
{
  [newEmailFlag retain];
  [_emailFlag release];
  _emailFlag = newEmailFlag;
}

- (void) dealloc
{
  [self setNotificationSettingsId: nil];
  [self setPhoneFlag: nil];
  [self setEmailFlag: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSNotificationSettingsObj *_eNUNCIATENS0TSNotificationSettingsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSNotificationSettingsObj = (ENUNCIATENS0TSNotificationSettingsObj *) [ENUNCIATENS0TSNotificationSettingsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSNotificationSettingsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSNotificationSettingsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSNotificationSettingsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSNotificationSettingsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSNotificationSettingsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSNotificationSettingsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSNotificationSettingsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSNotificationSettingsObj *_eNUNCIATENS0TSNotificationSettingsObj = [[ENUNCIATENS0TSNotificationSettingsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSNotificationSettingsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSNotificationSettingsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSNotificationSettingsObj autorelease];
  return _eNUNCIATENS0TSNotificationSettingsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSNotificationSettingsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSNotificationSettingsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSNotificationSettingsObj from an XML reader. The element to be read is
 * "notifications".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSNotificationSettingsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSNotificationSettingsObj *_tSNotificationSettingsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element notifications."];
    }
  }

  if (xmlStrcmp(BAD_CAST "notifications", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}notifications.");
#endif
    _tSNotificationSettingsObj = (ENUNCIATENS0TSNotificationSettingsObj *)[ENUNCIATENS0TSNotificationSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}notifications.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSNotificationSettingsObj. Expected element notifications. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSNotificationSettingsObj. Expected element notifications. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSNotificationSettingsObj;
}

/**
 * Writes this ENUNCIATENS0TSNotificationSettingsObj to XML under element name "notifications".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSNotificationSettingsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "notifications", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}notifications. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSNotificationSettingsObj for root element {}notifications...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSNotificationSettingsObj for root element {}notifications...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}notifications. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "notificationSettingsId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}notificationSettingsId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}notificationSettingsId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNotificationSettingsId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "phoneFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}phoneFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}phoneFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhoneFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "emailFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}emailFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}emailFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmailFlag: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self notificationSettingsId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "notificationSettingsId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}notificationSettingsId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}notificationSettingsId...");
#endif
    [[self notificationSettingsId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}notificationSettingsId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}notificationSettingsId."];
    }
  }
  if ([self phoneFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phoneFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}phoneFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}phoneFlag...");
#endif
    [[self phoneFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}phoneFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}phoneFlag."];
    }
  }
  if ([self emailFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "emailFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}emailFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}emailFlag...");
#endif
    [[self emailFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}emailFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}emailFlag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSNotificationSettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSNotificationSettingsObj_M */
#ifndef DEF_ENUNCIATENS0TSPrivacySettingsObj_M
#define DEF_ENUNCIATENS0TSPrivacySettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSPrivacySettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) privacySettingsIds
{
  return _privacySettingsIds;
}

/**
 * (no documentation provided)
 */
- (void) setPrivacySettingsIds: (NSString *) newPrivacySettingsIds
{
  [newPrivacySettingsIds retain];
  [_privacySettingsIds release];
  _privacySettingsIds = newPrivacySettingsIds;
}

/**
 * (no documentation provided)
 */
- (NSString *) privacyUserFlag
{
  return _privacyUserFlag;
}

/**
 * (no documentation provided)
 */
- (void) setPrivacyUserFlag: (NSString *) newPrivacyUserFlag
{
  [newPrivacyUserFlag retain];
  [_privacyUserFlag release];
  _privacyUserFlag = newPrivacyUserFlag;
}

- (void) dealloc
{
  [self setPrivacySettingsIds: nil];
  [self setPrivacyUserFlag: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSPrivacySettingsObj *_eNUNCIATENS0TSPrivacySettingsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSPrivacySettingsObj = (ENUNCIATENS0TSPrivacySettingsObj *) [ENUNCIATENS0TSPrivacySettingsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSPrivacySettingsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSPrivacySettingsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSPrivacySettingsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSPrivacySettingsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSPrivacySettingsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSPrivacySettingsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSPrivacySettingsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSPrivacySettingsObj *_eNUNCIATENS0TSPrivacySettingsObj = [[ENUNCIATENS0TSPrivacySettingsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSPrivacySettingsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSPrivacySettingsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSPrivacySettingsObj autorelease];
  return _eNUNCIATENS0TSPrivacySettingsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSPrivacySettingsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSPrivacySettingsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSPrivacySettingsObj from an XML reader. The element to be read is
 * "privacy".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSPrivacySettingsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSPrivacySettingsObj *_tSPrivacySettingsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element privacy."];
    }
  }

  if (xmlStrcmp(BAD_CAST "privacy", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}privacy.");
#endif
    _tSPrivacySettingsObj = (ENUNCIATENS0TSPrivacySettingsObj *)[ENUNCIATENS0TSPrivacySettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}privacy.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSPrivacySettingsObj. Expected element privacy. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSPrivacySettingsObj. Expected element privacy. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSPrivacySettingsObj;
}

/**
 * Writes this ENUNCIATENS0TSPrivacySettingsObj to XML under element name "privacy".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSPrivacySettingsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacy", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}privacy. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSPrivacySettingsObj for root element {}privacy...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSPrivacySettingsObj for root element {}privacy...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}privacy. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "privacySettingsIds", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}privacySettingsIds of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}privacySettingsIds of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPrivacySettingsIds: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "privacyUserFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}privacyUserFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}privacyUserFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPrivacyUserFlag: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self privacySettingsIds]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacySettingsIds", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}privacySettingsIds."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}privacySettingsIds...");
#endif
    [[self privacySettingsIds] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}privacySettingsIds...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}privacySettingsIds."];
    }
  }
  if ([self privacyUserFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacyUserFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}privacyUserFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}privacyUserFlag...");
#endif
    [[self privacyUserFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}privacyUserFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}privacyUserFlag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSPrivacySettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSPrivacySettingsObj_M */
#ifndef DEF_ENUNCIATENS0TSRestaurantDetailsObj_M
#define DEF_ENUNCIATENS0TSRestaurantDetailsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRestaurantDetailsObj

/**
 * (no documentation provided)
 */
- (NSString *) openNowFlag
{
  return _openNowFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOpenNowFlag: (NSString *) newOpenNowFlag
{
  [newOpenNowFlag retain];
  [_openNowFlag release];
  _openNowFlag = newOpenNowFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) dealHeadline
{
  return _dealHeadline;
}

/**
 * (no documentation provided)
 */
- (void) setDealHeadline: (NSString *) newDealHeadline
{
  [newDealHeadline retain];
  [_dealHeadline release];
  _dealHeadline = newDealHeadline;
}

/**
 * (no documentation provided)
 */
- (NSArray *) photoList
{
  return _photoList;
}

/**
 * (no documentation provided)
 */
- (void) setPhotoList: (NSArray *) newPhotoList
{
  [newPhotoList retain];
  [_photoList release];
  _photoList = newPhotoList;
}

/**
 * (no documentation provided)
 */
- (NSString *) moreInfoFlag
{
  return _moreInfoFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMoreInfoFlag: (NSString *) newMoreInfoFlag
{
  [newMoreInfoFlag retain];
  [_moreInfoFlag release];
  _moreInfoFlag = newMoreInfoFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) menuFlag
{
  return _menuFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMenuFlag: (NSString *) newMenuFlag
{
  [newMenuFlag retain];
  [_menuFlag release];
  _menuFlag = newMenuFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userRestaurantSavedFlag
{
  return _userRestaurantSavedFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserRestaurantSavedFlag: (NSString *) newUserRestaurantSavedFlag
{
  [newUserRestaurantSavedFlag retain];
  [_userRestaurantSavedFlag release];
  _userRestaurantSavedFlag = newUserRestaurantSavedFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userRestaurantFavFlag
{
  return _userRestaurantFavFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserRestaurantFavFlag: (NSString *) newUserRestaurantFavFlag
{
  [newUserRestaurantFavFlag retain];
  [_userRestaurantFavFlag release];
  _userRestaurantFavFlag = newUserRestaurantFavFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userRestaurantTipFlag
{
  return _userRestaurantTipFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserRestaurantTipFlag: (NSString *) newUserRestaurantTipFlag
{
  [newUserRestaurantTipFlag retain];
  [_userRestaurantTipFlag release];
  _userRestaurantTipFlag = newUserRestaurantTipFlag;
}

- (void) dealloc
{
  [self setOpenNowFlag: nil];
  [self setDealHeadline: nil];
  [self setPhotoList: nil];
  [self setMoreInfoFlag: nil];
  [self setMenuFlag: nil];
  [self setUserRestaurantSavedFlag: nil];
  [self setUserRestaurantFavFlag: nil];
  [self setUserRestaurantTipFlag: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRestaurantDetailsObj *_eNUNCIATENS0TSRestaurantDetailsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRestaurantDetailsObj = (ENUNCIATENS0TSRestaurantDetailsObj *) [ENUNCIATENS0TSRestaurantDetailsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRestaurantDetailsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSRestaurantDetailsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRestaurantDetailsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRestaurantDetailsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRestaurantDetailsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRestaurantDetailsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRestaurantDetailsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRestaurantDetailsObj *_eNUNCIATENS0TSRestaurantDetailsObj = [[ENUNCIATENS0TSRestaurantDetailsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRestaurantDetailsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRestaurantDetailsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRestaurantDetailsObj autorelease];
  return _eNUNCIATENS0TSRestaurantDetailsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRestaurantDetailsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRestaurantDetailsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSRestaurantDetailsObj from an XML reader. The element to be read is
 * "restaurantdetails".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRestaurantDetailsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRestaurantDetailsObj *_tSRestaurantDetailsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurantdetails."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurantdetails", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurantdetails.");
#endif
    _tSRestaurantDetailsObj = (ENUNCIATENS0TSRestaurantDetailsObj *)[ENUNCIATENS0TSRestaurantDetailsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurantdetails.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantDetailsObj. Expected element restaurantdetails. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantDetailsObj. Expected element restaurantdetails. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRestaurantDetailsObj;
}

/**
 * Writes this ENUNCIATENS0TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRestaurantDetailsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantdetails", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurantdetails. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRestaurantDetailsObj for root element {}restaurantdetails...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRestaurantDetailsObj for root element {}restaurantdetails...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurantdetails. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "openNowFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}openNowFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}openNowFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOpenNowFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "dealHeadline", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}dealHeadline of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}dealHeadline of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDealHeadline: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photoList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photoList of type {}TSPhotoObj.");
#endif

    __child = [ENUNCIATENS0TSPhotoObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photoList of type {}TSPhotoObj.");
#endif

    if ([self photoList]) {
      [self setPhotoList: [[self photoList] arrayByAddingObject: __child]];
    }
    else {
      [self setPhotoList: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "moreInfoFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}moreInfoFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}moreInfoFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMoreInfoFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "menuFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}menuFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}menuFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMenuFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userRestaurantSavedFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userRestaurantSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userRestaurantSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserRestaurantSavedFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userRestaurantFavFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userRestaurantFavFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userRestaurantFavFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserRestaurantFavFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userRestaurantTipFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userRestaurantTipFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userRestaurantTipFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserRestaurantTipFlag: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self openNowFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "openNowFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}openNowFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}openNowFlag...");
#endif
    [[self openNowFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}openNowFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}openNowFlag."];
    }
  }
  if ([self dealHeadline]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dealHeadline", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}dealHeadline."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}dealHeadline...");
#endif
    [[self dealHeadline] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}dealHeadline...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}dealHeadline."];
    }
  }
  if ([self photoList]) {
    __enumerator = [[self photoList] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoList", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}photoList."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}photoList...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}photoList...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}photoList."];
      }
    } //end item iterator.
  }
  if ([self moreInfoFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "moreInfoFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}moreInfoFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}moreInfoFlag...");
#endif
    [[self moreInfoFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}moreInfoFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}moreInfoFlag."];
    }
  }
  if ([self menuFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menuFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}menuFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}menuFlag...");
#endif
    [[self menuFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}menuFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}menuFlag."];
    }
  }
  if ([self userRestaurantSavedFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRestaurantSavedFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userRestaurantSavedFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userRestaurantSavedFlag...");
#endif
    [[self userRestaurantSavedFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userRestaurantSavedFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userRestaurantSavedFlag."];
    }
  }
  if ([self userRestaurantFavFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRestaurantFavFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userRestaurantFavFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userRestaurantFavFlag...");
#endif
    [[self userRestaurantFavFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userRestaurantFavFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userRestaurantFavFlag."];
    }
  }
  if ([self userRestaurantTipFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRestaurantTipFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userRestaurantTipFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userRestaurantTipFlag...");
#endif
    [[self userRestaurantTipFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userRestaurantTipFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userRestaurantTipFlag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRestaurantDetailsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRestaurantDetailsObj_M */
#ifndef DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_M
#define DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSSocialAutoPubSettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) favFbFlag
{
  return _favFbFlag;
}

/**
 * (no documentation provided)
 */
- (void) setFavFbFlag: (NSString *) newFavFbFlag
{
  [newFavFbFlag retain];
  [_favFbFlag release];
  _favFbFlag = newFavFbFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) favTwitterFlag
{
  return _favTwitterFlag;
}

/**
 * (no documentation provided)
 */
- (void) setFavTwitterFlag: (NSString *) newFavTwitterFlag
{
  [newFavTwitterFlag retain];
  [_favTwitterFlag release];
  _favTwitterFlag = newFavTwitterFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) favTumblrFlag
{
  return _favTumblrFlag;
}

/**
 * (no documentation provided)
 */
- (void) setFavTumblrFlag: (NSString *) newFavTumblrFlag
{
  [newFavTumblrFlag retain];
  [_favTumblrFlag release];
  _favTumblrFlag = newFavTumblrFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) tipsFbFlag
{
  return _tipsFbFlag;
}

/**
 * (no documentation provided)
 */
- (void) setTipsFbFlag: (NSString *) newTipsFbFlag
{
  [newTipsFbFlag retain];
  [_tipsFbFlag release];
  _tipsFbFlag = newTipsFbFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) tipsTwitterFlag
{
  return _tipsTwitterFlag;
}

/**
 * (no documentation provided)
 */
- (void) setTipsTwitterFlag: (NSString *) newTipsTwitterFlag
{
  [newTipsTwitterFlag retain];
  [_tipsTwitterFlag release];
  _tipsTwitterFlag = newTipsTwitterFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) tipsTumblrFlag
{
  return _tipsTumblrFlag;
}

/**
 * (no documentation provided)
 */
- (void) setTipsTumblrFlag: (NSString *) newTipsTumblrFlag
{
  [newTipsTumblrFlag retain];
  [_tipsTumblrFlag release];
  _tipsTumblrFlag = newTipsTumblrFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) recoFbFlag
{
  return _recoFbFlag;
}

/**
 * (no documentation provided)
 */
- (void) setRecoFbFlag: (NSString *) newRecoFbFlag
{
  [newRecoFbFlag retain];
  [_recoFbFlag release];
  _recoFbFlag = newRecoFbFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) recoTwitterFlag
{
  return _recoTwitterFlag;
}

/**
 * (no documentation provided)
 */
- (void) setRecoTwitterFlag: (NSString *) newRecoTwitterFlag
{
  [newRecoTwitterFlag retain];
  [_recoTwitterFlag release];
  _recoTwitterFlag = newRecoTwitterFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) recoTumblrFlag
{
  return _recoTumblrFlag;
}

/**
 * (no documentation provided)
 */
- (void) setRecoTumblrFlag: (NSString *) newRecoTumblrFlag
{
  [newRecoTumblrFlag retain];
  [_recoTumblrFlag release];
  _recoTumblrFlag = newRecoTumblrFlag;
}

- (void) dealloc
{
  [self setFavFbFlag: nil];
  [self setFavTwitterFlag: nil];
  [self setFavTumblrFlag: nil];
  [self setTipsFbFlag: nil];
  [self setTipsTwitterFlag: nil];
  [self setTipsTumblrFlag: nil];
  [self setRecoFbFlag: nil];
  [self setRecoTwitterFlag: nil];
  [self setRecoTumblrFlag: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSSocialAutoPubSettingsObj *_eNUNCIATENS0TSSocialAutoPubSettingsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSSocialAutoPubSettingsObj = (ENUNCIATENS0TSSocialAutoPubSettingsObj *) [ENUNCIATENS0TSSocialAutoPubSettingsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSSocialAutoPubSettingsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSSocialAutoPubSettingsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSSocialAutoPubSettingsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSSocialAutoPubSettingsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSSocialAutoPubSettingsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSSocialAutoPubSettingsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSSocialAutoPubSettingsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSSocialAutoPubSettingsObj *_eNUNCIATENS0TSSocialAutoPubSettingsObj = [[ENUNCIATENS0TSSocialAutoPubSettingsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSSocialAutoPubSettingsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSSocialAutoPubSettingsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSSocialAutoPubSettingsObj autorelease];
  return _eNUNCIATENS0TSSocialAutoPubSettingsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSSocialAutoPubSettingsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSSocialAutoPubSettingsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSSocialAutoPubSettingsObj from an XML reader. The element to be read is
 * "autopub".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSSocialAutoPubSettingsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element autopub."];
    }
  }

  if (xmlStrcmp(BAD_CAST "autopub", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}autopub.");
#endif
    _tSSocialAutoPubSettingsObj = (ENUNCIATENS0TSSocialAutoPubSettingsObj *)[ENUNCIATENS0TSSocialAutoPubSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}autopub.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSocialAutoPubSettingsObj. Expected element autopub. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSocialAutoPubSettingsObj. Expected element autopub. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSSocialAutoPubSettingsObj;
}

/**
 * Writes this ENUNCIATENS0TSSocialAutoPubSettingsObj to XML under element name "autopub".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSSocialAutoPubSettingsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "autopub", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}autopub. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSSocialAutoPubSettingsObj for root element {}autopub...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSSocialAutoPubSettingsObj for root element {}autopub...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}autopub. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "favFbFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}favFbFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}favFbFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFavFbFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "favTwitterFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}favTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}favTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFavTwitterFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "favTumblrFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}favTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}favTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFavTumblrFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tipsFbFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tipsFbFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tipsFbFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTipsFbFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tipsTwitterFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tipsTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tipsTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTipsTwitterFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tipsTumblrFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tipsTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tipsTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTipsTumblrFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recoFbFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recoFbFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recoFbFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRecoFbFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recoTwitterFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recoTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recoTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRecoTwitterFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recoTumblrFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recoTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recoTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRecoTumblrFlag: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self favFbFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "favFbFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}favFbFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}favFbFlag...");
#endif
    [[self favFbFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}favFbFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}favFbFlag."];
    }
  }
  if ([self favTwitterFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "favTwitterFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}favTwitterFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}favTwitterFlag...");
#endif
    [[self favTwitterFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}favTwitterFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}favTwitterFlag."];
    }
  }
  if ([self favTumblrFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "favTumblrFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}favTumblrFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}favTumblrFlag...");
#endif
    [[self favTumblrFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}favTumblrFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}favTumblrFlag."];
    }
  }
  if ([self tipsFbFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tipsFbFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tipsFbFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tipsFbFlag...");
#endif
    [[self tipsFbFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tipsFbFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tipsFbFlag."];
    }
  }
  if ([self tipsTwitterFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tipsTwitterFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tipsTwitterFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tipsTwitterFlag...");
#endif
    [[self tipsTwitterFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tipsTwitterFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tipsTwitterFlag."];
    }
  }
  if ([self tipsTumblrFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tipsTumblrFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tipsTumblrFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tipsTumblrFlag...");
#endif
    [[self tipsTumblrFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tipsTumblrFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tipsTumblrFlag."];
    }
  }
  if ([self recoFbFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoFbFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recoFbFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recoFbFlag...");
#endif
    [[self recoFbFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recoFbFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recoFbFlag."];
    }
  }
  if ([self recoTwitterFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoTwitterFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recoTwitterFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recoTwitterFlag...");
#endif
    [[self recoTwitterFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recoTwitterFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recoTwitterFlag."];
    }
  }
  if ([self recoTumblrFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoTumblrFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recoTumblrFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recoTumblrFlag...");
#endif
    [[self recoTumblrFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recoTumblrFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recoTumblrFlag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSSocialAutoPubSettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_M */
#ifndef DEF_ENUNCIATENS0TSSuccessObj_M
#define DEF_ENUNCIATENS0TSSuccessObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSSuccessObj

/**
 * (no documentation provided)
 */
- (NSString *) successMsg
{
  return _successMsg;
}

/**
 * (no documentation provided)
 */
- (void) setSuccessMsg: (NSString *) newSuccessMsg
{
  [newSuccessMsg retain];
  [_successMsg release];
  _successMsg = newSuccessMsg;
}

- (void) dealloc
{
  [self setSuccessMsg: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSSuccessObj *_eNUNCIATENS0TSSuccessObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSSuccessObj = (ENUNCIATENS0TSSuccessObj *) [ENUNCIATENS0TSSuccessObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSSuccessObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSSuccessObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSSuccessObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSSuccessObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSSuccessObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSSuccessObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSSuccessObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSSuccessObj *_eNUNCIATENS0TSSuccessObj = [[ENUNCIATENS0TSSuccessObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSSuccessObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSSuccessObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSSuccessObj autorelease];
  return _eNUNCIATENS0TSSuccessObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSSuccessObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSSuccessObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSSuccessObj from an XML reader. The element to be read is
 * "success".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSSuccessObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSSuccessObj *_tSSuccessObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element success."];
    }
  }

  if (xmlStrcmp(BAD_CAST "success", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}success.");
#endif
    _tSSuccessObj = (ENUNCIATENS0TSSuccessObj *)[ENUNCIATENS0TSSuccessObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}success.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSuccessObj. Expected element success. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSuccessObj. Expected element success. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSSuccessObj;
}

/**
 * Writes this ENUNCIATENS0TSSuccessObj to XML under element name "success".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSSuccessObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "success", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}success. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSSuccessObj for root element {}success...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSSuccessObj for root element {}success...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}success. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "successMsg", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}successMsg of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}successMsg of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSuccessMsg: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self successMsg]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "successMsg", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}successMsg."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}successMsg...");
#endif
    [[self successMsg] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}successMsg...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}successMsg."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSSuccessObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSSuccessObj_M */
#ifndef DEF_ENUNCIATENS0TSUserProfileObj_M
#define DEF_ENUNCIATENS0TSUserProfileObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSUserProfileObj

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) photo
{
  return _photo;
}

/**
 * (no documentation provided)
 */
- (void) setPhoto: (NSString *) newPhoto
{
  [newPhoto retain];
  [_photo release];
  _photo = newPhoto;
}

/**
 * (no documentation provided)
 */
- (NSString *) facebookCity
{
  return _facebookCity;
}

/**
 * (no documentation provided)
 */
- (void) setFacebookCity: (NSString *) newFacebookCity
{
  [newFacebookCity retain];
  [_facebookCity release];
  _facebookCity = newFacebookCity;
}

/**
 * (no documentation provided)
 */
- (NSString *) facebookUrl
{
  return _facebookUrl;
}

/**
 * (no documentation provided)
 */
- (void) setFacebookUrl: (NSString *) newFacebookUrl
{
  [newFacebookUrl retain];
  [_facebookUrl release];
  _facebookUrl = newFacebookUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) twitterUrl
{
  return _twitterUrl;
}

/**
 * (no documentation provided)
 */
- (void) setTwitterUrl: (NSString *) newTwitterUrl
{
  [newTwitterUrl retain];
  [_twitterUrl release];
  _twitterUrl = newTwitterUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) blogUrl
{
  return _blogUrl;
}

/**
 * (no documentation provided)
 */
- (void) setBlogUrl: (NSString *) newBlogUrl
{
  [newBlogUrl retain];
  [_blogUrl release];
  _blogUrl = newBlogUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) aboutMeText
{
  return _aboutMeText;
}

/**
 * (no documentation provided)
 */
- (void) setAboutMeText: (NSString *) newAboutMeText
{
  [newAboutMeText retain];
  [_aboutMeText release];
  _aboutMeText = newAboutMeText;
}

/**
 * (no documentation provided)
 */
- (NSString *) numFollowers
{
  return _numFollowers;
}

/**
 * (no documentation provided)
 */
- (void) setNumFollowers: (NSString *) newNumFollowers
{
  [newNumFollowers retain];
  [_numFollowers release];
  _numFollowers = newNumFollowers;
}

/**
 * (no documentation provided)
 */
- (NSString *) numFollowees
{
  return _numFollowees;
}

/**
 * (no documentation provided)
 */
- (void) setNumFollowees: (NSString *) newNumFollowees
{
  [newNumFollowees retain];
  [_numFollowees release];
  _numFollowees = newNumFollowees;
}

/**
 * (no documentation provided)
 */
- (NSString *) numFriendsOnTs
{
  return _numFriendsOnTs;
}

/**
 * (no documentation provided)
 */
- (void) setNumFriendsOnTs: (NSString *) newNumFriendsOnTs
{
  [newNumFriendsOnTs retain];
  [_numFriendsOnTs release];
  _numFriendsOnTs = newNumFriendsOnTs;
}

/**
 * (no documentation provided)
 */
- (NSString *) numPoints
{
  return _numPoints;
}

/**
 * (no documentation provided)
 */
- (void) setNumPoints: (NSString *) newNumPoints
{
  [newNumPoints retain];
  [_numPoints release];
  _numPoints = newNumPoints;
}

/**
 * (no documentation provided)
 */
- (NSArray *) testaurantDetailsList
{
  return _testaurantDetailsList;
}

/**
 * (no documentation provided)
 */
- (void) setTestaurantDetailsList: (NSArray *) newTestaurantDetailsList
{
  [newTestaurantDetailsList retain];
  [_testaurantDetailsList release];
  _testaurantDetailsList = newTestaurantDetailsList;
}

- (void) dealloc
{
  [self setName: nil];
  [self setPhoto: nil];
  [self setFacebookCity: nil];
  [self setFacebookUrl: nil];
  [self setTwitterUrl: nil];
  [self setBlogUrl: nil];
  [self setAboutMeText: nil];
  [self setNumFollowers: nil];
  [self setNumFollowees: nil];
  [self setNumFriendsOnTs: nil];
  [self setNumPoints: nil];
  [self setTestaurantDetailsList: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSUserProfileObj *_eNUNCIATENS0TSUserProfileObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSUserProfileObj = (ENUNCIATENS0TSUserProfileObj *) [ENUNCIATENS0TSUserProfileObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSUserProfileObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSUserProfileObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSUserProfileObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSUserProfileObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSUserProfileObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSUserProfileObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSUserProfileObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSUserProfileObj *_eNUNCIATENS0TSUserProfileObj = [[ENUNCIATENS0TSUserProfileObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSUserProfileObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSUserProfileObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSUserProfileObj autorelease];
  return _eNUNCIATENS0TSUserProfileObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSUserProfileObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSUserProfileObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSUserProfileObj from an XML reader. The element to be read is
 * "userprofile".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSUserProfileObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSUserProfileObj *_tSUserProfileObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element userprofile."];
    }
  }

  if (xmlStrcmp(BAD_CAST "userprofile", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}userprofile.");
#endif
    _tSUserProfileObj = (ENUNCIATENS0TSUserProfileObj *)[ENUNCIATENS0TSUserProfileObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}userprofile.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserProfileObj. Expected element userprofile. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserProfileObj. Expected element userprofile. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSUserProfileObj;
}

/**
 * Writes this ENUNCIATENS0TSUserProfileObj to XML under element name "userprofile".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSUserProfileObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userprofile", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}userprofile. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSUserProfileObj for root element {}userprofile...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSUserProfileObj for root element {}userprofile...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}userprofile. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhoto: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "facebookCity", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}facebookCity of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}facebookCity of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFacebookCity: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "facebookUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}facebookUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}facebookUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFacebookUrl: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "twitterUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}twitterUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}twitterUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTwitterUrl: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "blogUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}blogUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}blogUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setBlogUrl: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "aboutMeText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}aboutMeText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}aboutMeText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAboutMeText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "numFollowers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}numFollowers of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}numFollowers of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNumFollowers: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "numFollowees", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}numFollowees of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}numFollowees of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNumFollowees: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "numFriendsOnTs", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}numFriendsOnTs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}numFriendsOnTs of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNumFriendsOnTs: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "numPoints", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}numPoints of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}numPoints of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setNumPoints: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "testaurantDetailsList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}testaurantDetailsList of type {}TSRestaurantDetailsObj.");
#endif

    __child = [ENUNCIATENS0TSRestaurantDetailsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}testaurantDetailsList of type {}TSRestaurantDetailsObj.");
#endif

    if ([self testaurantDetailsList]) {
      [self setTestaurantDetailsList: [[self testaurantDetailsList] arrayByAddingObject: __child]];
    }
    else {
      [self setTestaurantDetailsList: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self photo]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}photo."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}photo...");
#endif
    [[self photo] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}photo...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}photo."];
    }
  }
  if ([self facebookCity]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebookCity", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}facebookCity."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}facebookCity...");
#endif
    [[self facebookCity] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}facebookCity...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}facebookCity."];
    }
  }
  if ([self facebookUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebookUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}facebookUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}facebookUrl...");
#endif
    [[self facebookUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}facebookUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}facebookUrl."];
    }
  }
  if ([self twitterUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "twitterUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}twitterUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}twitterUrl...");
#endif
    [[self twitterUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}twitterUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}twitterUrl."];
    }
  }
  if ([self blogUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "blogUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}blogUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}blogUrl...");
#endif
    [[self blogUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}blogUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}blogUrl."];
    }
  }
  if ([self aboutMeText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "aboutMeText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}aboutMeText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}aboutMeText...");
#endif
    [[self aboutMeText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}aboutMeText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}aboutMeText."];
    }
  }
  if ([self numFollowers]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numFollowers", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}numFollowers."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}numFollowers...");
#endif
    [[self numFollowers] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}numFollowers...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}numFollowers."];
    }
  }
  if ([self numFollowees]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numFollowees", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}numFollowees."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}numFollowees...");
#endif
    [[self numFollowees] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}numFollowees...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}numFollowees."];
    }
  }
  if ([self numFriendsOnTs]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numFriendsOnTs", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}numFriendsOnTs."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}numFriendsOnTs...");
#endif
    [[self numFriendsOnTs] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}numFriendsOnTs...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}numFriendsOnTs."];
    }
  }
  if ([self numPoints]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numPoints", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}numPoints."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}numPoints...");
#endif
    [[self numPoints] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}numPoints...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}numPoints."];
    }
  }
  if ([self testaurantDetailsList]) {
    __enumerator = [[self testaurantDetailsList] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "testaurantDetailsList", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}testaurantDetailsList."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}testaurantDetailsList...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}testaurantDetailsList...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}testaurantDetailsList."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSUserProfileObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSUserProfileObj_M */
#ifndef DEF_ENUNCIATENS0TSUserProfileRestaurantsObj_M
#define DEF_ENUNCIATENS0TSUserProfileRestaurantsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSUserProfileRestaurantsObj

/**
 * (no documentation provided)
 */
- (NSString *) restauarntId
{
  return _restauarntId;
}

/**
 * (no documentation provided)
 */
- (void) setRestauarntId: (NSString *) newRestauarntId
{
  [newRestauarntId retain];
  [_restauarntId release];
  _restauarntId = newRestauarntId;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName
{
  return _restaurantName;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName
{
  [newRestaurantName retain];
  [_restaurantName release];
  _restaurantName = newRestaurantName;
}

/**
 * (no documentation provided)
 */
- (NSString *) cuisineTier2Name
{
  return _cuisineTier2Name;
}

/**
 * (no documentation provided)
 */
- (void) setCuisineTier2Name: (NSString *) newCuisineTier2Name
{
  [newCuisineTier2Name retain];
  [_cuisineTier2Name release];
  _cuisineTier2Name = newCuisineTier2Name;
}

/**
 * (no documentation provided)
 */
- (NSString *) price
{
  return _price;
}

/**
 * (no documentation provided)
 */
- (void) setPrice: (NSString *) newPrice
{
  [newPrice retain];
  [_price release];
  _price = newPrice;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCity
{
  return _restaurantCity;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantCity: (NSString *) newRestaurantCity
{
  [newRestaurantCity retain];
  [_restaurantCity release];
  _restaurantCity = newRestaurantCity;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantState
{
  return _restaurantState;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantState: (NSString *) newRestaurantState
{
  [newRestaurantState retain];
  [_restaurantState release];
  _restaurantState = newRestaurantState;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCountry
{
  return _restaurantCountry;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantCountry: (NSString *) newRestaurantCountry
{
  [newRestaurantCountry retain];
  [_restaurantCountry release];
  _restaurantCountry = newRestaurantCountry;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLat
{
  return _restaurantLat;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantLat: (NSString *) newRestaurantLat
{
  [newRestaurantLat retain];
  [_restaurantLat release];
  _restaurantLat = newRestaurantLat;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLong
{
  return _restaurantLong;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantLong: (NSString *) newRestaurantLong
{
  [newRestaurantLong retain];
  [_restaurantLong release];
  _restaurantLong = newRestaurantLong;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantDealFlag
{
  return _restaurantDealFlag;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantDealFlag: (NSString *) newRestaurantDealFlag
{
  [newRestaurantDealFlag retain];
  [_restaurantDealFlag release];
  _restaurantDealFlag = newRestaurantDealFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantRating
{
  return _restaurantRating;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantRating: (NSString *) newRestaurantRating
{
  [newRestaurantRating retain];
  [_restaurantRating release];
  _restaurantRating = newRestaurantRating;
}

/**
 * (no documentation provided)
 */
- (NSString *) userSavedFlag
{
  return _userSavedFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserSavedFlag: (NSString *) newUserSavedFlag
{
  [newUserSavedFlag retain];
  [_userSavedFlag release];
  _userSavedFlag = newUserSavedFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userFavFlag
{
  return _userFavFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserFavFlag: (NSString *) newUserFavFlag
{
  [newUserFavFlag retain];
  [_userFavFlag release];
  _userFavFlag = newUserFavFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userRecommendedFlag
{
  return _userRecommendedFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserRecommendedFlag: (NSString *) newUserRecommendedFlag
{
  [newUserRecommendedFlag retain];
  [_userRecommendedFlag release];
  _userRecommendedFlag = newUserRecommendedFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userTipFlag
{
  return _userTipFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserTipFlag: (NSString *) newUserTipFlag
{
  [newUserTipFlag retain];
  [_userTipFlag release];
  _userTipFlag = newUserTipFlag;
}

- (void) dealloc
{
  [self setRestauarntId: nil];
  [self setRestaurantName: nil];
  [self setCuisineTier2Name: nil];
  [self setPrice: nil];
  [self setRestaurantCity: nil];
  [self setRestaurantState: nil];
  [self setRestaurantCountry: nil];
  [self setRestaurantLat: nil];
  [self setRestaurantLong: nil];
  [self setRestaurantDealFlag: nil];
  [self setRestaurantRating: nil];
  [self setUserSavedFlag: nil];
  [self setUserFavFlag: nil];
  [self setUserRecommendedFlag: nil];
  [self setUserTipFlag: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSUserProfileRestaurantsObj *_eNUNCIATENS0TSUserProfileRestaurantsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSUserProfileRestaurantsObj = (ENUNCIATENS0TSUserProfileRestaurantsObj *) [ENUNCIATENS0TSUserProfileRestaurantsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSUserProfileRestaurantsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSUserProfileRestaurantsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSUserProfileRestaurantsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSUserProfileRestaurantsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSUserProfileRestaurantsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSUserProfileRestaurantsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSUserProfileRestaurantsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSUserProfileRestaurantsObj *_eNUNCIATENS0TSUserProfileRestaurantsObj = [[ENUNCIATENS0TSUserProfileRestaurantsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSUserProfileRestaurantsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSUserProfileRestaurantsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSUserProfileRestaurantsObj autorelease];
  return _eNUNCIATENS0TSUserProfileRestaurantsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSUserProfileRestaurantsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSUserProfileRestaurantsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSUserProfileRestaurantsObj from an XML reader. The element to be read is
 * "userprofilerestaurants".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSUserProfileRestaurantsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element userprofilerestaurants."];
    }
  }

  if (xmlStrcmp(BAD_CAST "userprofilerestaurants", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}userprofilerestaurants.");
#endif
    _tSUserProfileRestaurantsObj = (ENUNCIATENS0TSUserProfileRestaurantsObj *)[ENUNCIATENS0TSUserProfileRestaurantsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}userprofilerestaurants.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserProfileRestaurantsObj. Expected element userprofilerestaurants. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserProfileRestaurantsObj. Expected element userprofilerestaurants. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSUserProfileRestaurantsObj;
}

/**
 * Writes this ENUNCIATENS0TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSUserProfileRestaurantsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userprofilerestaurants", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}userprofilerestaurants. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSUserProfileRestaurantsObj for root element {}userprofilerestaurants...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSUserProfileRestaurantsObj for root element {}userprofilerestaurants...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}userprofilerestaurants. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restauarntId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restauarntId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restauarntId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestauarntId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "cuisineTier2Name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}cuisineTier2Name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}cuisineTier2Name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCuisineTier2Name: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "price", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}price of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}price of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPrice: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantCity", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantCity of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantCity of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantCity: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantState", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantState of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantState of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantState: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantCountry", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantCountry of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantCountry of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantCountry: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantLat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantLat: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantLong", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantLong of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantLong of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantLong: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantDealFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantDealFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantDealFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantDealFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantRating", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantRating of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantRating of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantRating: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userSavedFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserSavedFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userFavFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userFavFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userFavFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserFavFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userRecommendedFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userRecommendedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userRecommendedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserRecommendedFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userTipFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userTipFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userTipFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserTipFlag: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self restauarntId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restauarntId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restauarntId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restauarntId...");
#endif
    [[self restauarntId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restauarntId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restauarntId."];
    }
  }
  if ([self restaurantName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantName...");
#endif
    [[self restaurantName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantName."];
    }
  }
  if ([self cuisineTier2Name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineTier2Name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cuisineTier2Name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cuisineTier2Name...");
#endif
    [[self cuisineTier2Name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cuisineTier2Name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cuisineTier2Name."];
    }
  }
  if ([self price]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "price", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}price."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}price...");
#endif
    [[self price] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}price...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}price."];
    }
  }
  if ([self restaurantCity]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantCity", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantCity."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantCity...");
#endif
    [[self restaurantCity] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantCity...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantCity."];
    }
  }
  if ([self restaurantState]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantState", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantState."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantState...");
#endif
    [[self restaurantState] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantState...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantState."];
    }
  }
  if ([self restaurantCountry]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantCountry", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantCountry."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantCountry...");
#endif
    [[self restaurantCountry] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantCountry...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantCountry."];
    }
  }
  if ([self restaurantLat]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLat", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantLat."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantLat...");
#endif
    [[self restaurantLat] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantLat...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantLat."];
    }
  }
  if ([self restaurantLong]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLong", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantLong."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantLong...");
#endif
    [[self restaurantLong] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantLong...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantLong."];
    }
  }
  if ([self restaurantDealFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantDealFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantDealFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantDealFlag...");
#endif
    [[self restaurantDealFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantDealFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantDealFlag."];
    }
  }
  if ([self restaurantRating]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantRating", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantRating."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantRating...");
#endif
    [[self restaurantRating] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantRating...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantRating."];
    }
  }
  if ([self userSavedFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userSavedFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userSavedFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userSavedFlag...");
#endif
    [[self userSavedFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userSavedFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userSavedFlag."];
    }
  }
  if ([self userFavFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userFavFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userFavFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userFavFlag...");
#endif
    [[self userFavFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userFavFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userFavFlag."];
    }
  }
  if ([self userRecommendedFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRecommendedFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userRecommendedFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userRecommendedFlag...");
#endif
    [[self userRecommendedFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userRecommendedFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userRecommendedFlag."];
    }
  }
  if ([self userTipFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userTipFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userTipFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userTipFlag...");
#endif
    [[self userTipFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userTipFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userTipFlag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSUserProfileRestaurantsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSUserProfileRestaurantsObj_M */
#ifndef DEF_ENUNCIATENS0TSUserObj_M
#define DEF_ENUNCIATENS0TSUserObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSUserObj

/**
 * (no documentation provided)
 */
- (NSString *) userId
{
  return _userId;
}

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId
{
  [newUserId retain];
  [_userId release];
  _userId = newUserId;
}

/**
 * (no documentation provided)
 */
- (NSString *) tsUserId
{
  return _tsUserId;
}

/**
 * (no documentation provided)
 */
- (void) setTsUserId: (NSString *) newTsUserId
{
  [newTsUserId retain];
  [_tsUserId release];
  _tsUserId = newTsUserId;
}

/**
 * (no documentation provided)
 */
- (NSString *) tsUserEmail
{
  return _tsUserEmail;
}

/**
 * (no documentation provided)
 */
- (void) setTsUserEmail: (NSString *) newTsUserEmail
{
  [newTsUserEmail retain];
  [_tsUserEmail release];
  _tsUserEmail = newTsUserEmail;
}

/**
 * (no documentation provided)
 */
- (NSString *) tsUserPw
{
  return _tsUserPw;
}

/**
 * (no documentation provided)
 */
- (void) setTsUserPw: (NSString *) newTsUserPw
{
  [newTsUserPw retain];
  [_tsUserPw release];
  _tsUserPw = newTsUserPw;
}

/**
 * (no documentation provided)
 */
- (NSString *) tsFirstName
{
  return _tsFirstName;
}

/**
 * (no documentation provided)
 */
- (void) setTsFirstName: (NSString *) newTsFirstName
{
  [newTsFirstName retain];
  [_tsFirstName release];
  _tsFirstName = newTsFirstName;
}

/**
 * (no documentation provided)
 */
- (NSString *) tsLastName
{
  return _tsLastName;
}

/**
 * (no documentation provided)
 */
- (void) setTsLastName: (NSString *) newTsLastName
{
  [newTsLastName retain];
  [_tsLastName release];
  _tsLastName = newTsLastName;
}

/**
 * (no documentation provided)
 */
- (NSString *) maxInvites
{
  return _maxInvites;
}

/**
 * (no documentation provided)
 */
- (void) setMaxInvites: (NSString *) newMaxInvites
{
  [newMaxInvites retain];
  [_maxInvites release];
  _maxInvites = newMaxInvites;
}

/**
 * (no documentation provided)
 */
- (NSString *) userCreatedInitialDatetime
{
  return _userCreatedInitialDatetime;
}

/**
 * (no documentation provided)
 */
- (void) setUserCreatedInitialDatetime: (NSString *) newUserCreatedInitialDatetime
{
  [newUserCreatedInitialDatetime retain];
  [_userCreatedInitialDatetime release];
  _userCreatedInitialDatetime = newUserCreatedInitialDatetime;
}

/**
 * (no documentation provided)
 */
- (NSString *) userPoints
{
  return _userPoints;
}

/**
 * (no documentation provided)
 */
- (void) setUserPoints: (NSString *) newUserPoints
{
  [newUserPoints retain];
  [_userPoints release];
  _userPoints = newUserPoints;
}

/**
 * (no documentation provided)
 */
- (NSString *) twitterUsrUrl
{
  return _twitterUsrUrl;
}

/**
 * (no documentation provided)
 */
- (void) setTwitterUsrUrl: (NSString *) newTwitterUsrUrl
{
  [newTwitterUsrUrl retain];
  [_twitterUsrUrl release];
  _twitterUsrUrl = newTwitterUsrUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) userDisabledFlag
{
  return _userDisabledFlag;
}

/**
 * (no documentation provided)
 */
- (void) setUserDisabledFlag: (NSString *) newUserDisabledFlag
{
  [newUserDisabledFlag retain];
  [_userDisabledFlag release];
  _userDisabledFlag = newUserDisabledFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) userActivationKey
{
  return _userActivationKey;
}

/**
 * (no documentation provided)
 */
- (void) setUserActivationKey: (NSString *) newUserActivationKey
{
  [newUserActivationKey retain];
  [_userActivationKey release];
  _userActivationKey = newUserActivationKey;
}

/**
 * (no documentation provided)
 */
- (NSString *) userGender
{
  return _userGender;
}

/**
 * (no documentation provided)
 */
- (void) setUserGender: (NSString *) newUserGender
{
  [newUserGender retain];
  [_userGender release];
  _userGender = newUserGender;
}

/**
 * (no documentation provided)
 */
- (NSString *) userCityId
{
  return _userCityId;
}

/**
 * (no documentation provided)
 */
- (void) setUserCityId: (NSString *) newUserCityId
{
  [newUserCityId retain];
  [_userCityId release];
  _userCityId = newUserCityId;
}

/**
 * (no documentation provided)
 */
- (NSString *) userState
{
  return _userState;
}

/**
 * (no documentation provided)
 */
- (void) setUserState: (NSString *) newUserState
{
  [newUserState retain];
  [_userState release];
  _userState = newUserState;
}

/**
 * (no documentation provided)
 */
- (NSString *) isOnline
{
  return _isOnline;
}

/**
 * (no documentation provided)
 */
- (void) setIsOnline: (NSString *) newIsOnline
{
  [newIsOnline retain];
  [_isOnline release];
  _isOnline = newIsOnline;
}

/**
 * (no documentation provided)
 */
- (NSString *) userCountry
{
  return _userCountry;
}

/**
 * (no documentation provided)
 */
- (void) setUserCountry: (NSString *) newUserCountry
{
  [newUserCountry retain];
  [_userCountry release];
  _userCountry = newUserCountry;
}

/**
 * (no documentation provided)
 */
- (NSString *) userFbId
{
  return _userFbId;
}

/**
 * (no documentation provided)
 */
- (void) setUserFbId: (NSString *) newUserFbId
{
  [newUserFbId retain];
  [_userFbId release];
  _userFbId = newUserFbId;
}

/**
 * (no documentation provided)
 */
- (NSString *) about
{
  return _about;
}

/**
 * (no documentation provided)
 */
- (void) setAbout: (NSString *) newAbout
{
  [newAbout retain];
  [_about release];
  _about = newAbout;
}

/**
 * (no documentation provided)
 */
- (NSString *) currentStatus
{
  return _currentStatus;
}

/**
 * (no documentation provided)
 */
- (void) setCurrentStatus: (NSString *) newCurrentStatus
{
  [newCurrentStatus retain];
  [_currentStatus release];
  _currentStatus = newCurrentStatus;
}

- (void) dealloc
{
  [self setUserId: nil];
  [self setTsUserId: nil];
  [self setTsUserEmail: nil];
  [self setTsUserPw: nil];
  [self setTsFirstName: nil];
  [self setTsLastName: nil];
  [self setMaxInvites: nil];
  [self setUserCreatedInitialDatetime: nil];
  [self setUserPoints: nil];
  [self setTwitterUsrUrl: nil];
  [self setUserDisabledFlag: nil];
  [self setUserActivationKey: nil];
  [self setUserGender: nil];
  [self setUserCityId: nil];
  [self setUserState: nil];
  [self setIsOnline: nil];
  [self setUserCountry: nil];
  [self setUserFbId: nil];
  [self setAbout: nil];
  [self setCurrentStatus: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSUserObj *_eNUNCIATENS0TSUserObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSUserObj = (ENUNCIATENS0TSUserObj *) [ENUNCIATENS0TSUserObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSUserObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSUserObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSUserObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSUserObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSUserObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSUserObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSUserObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSUserObj *_eNUNCIATENS0TSUserObj = [[ENUNCIATENS0TSUserObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSUserObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSUserObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSUserObj autorelease];
  return _eNUNCIATENS0TSUserObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSUserObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSUserObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSUserObj from an XML reader. The element to be read is
 * "user".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSUserObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSUserObj *_tSUserObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element user."];
    }
  }

  if (xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}user.");
#endif
    _tSUserObj = (ENUNCIATENS0TSUserObj *)[ENUNCIATENS0TSUserObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}user.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserObj. Expected element user. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserObj. Expected element user. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSUserObj;
}

/**
 * Writes this ENUNCIATENS0TSUserObj to XML under element name "user".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSUserObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}user. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSUserObj for root element {}user...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSUserObj for root element {}user...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}user. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsUserId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsUserId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsUserId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTsUserId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsUserEmail", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsUserEmail of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsUserEmail of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTsUserEmail: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsUserPw", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsUserPw of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsUserPw of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTsUserPw: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsFirstName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsFirstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsFirstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTsFirstName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsLastName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsLastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsLastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTsLastName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "maxInvites", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}maxInvites of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}maxInvites of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMaxInvites: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userCreatedInitialDatetime", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userCreatedInitialDatetime of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userCreatedInitialDatetime of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserCreatedInitialDatetime: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userPoints", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userPoints of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userPoints of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserPoints: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "twitterUsrUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}twitterUsrUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}twitterUsrUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTwitterUsrUrl: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userDisabledFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userDisabledFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userDisabledFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserDisabledFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userActivationKey", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userActivationKey of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userActivationKey of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserActivationKey: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userGender", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userGender of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userGender of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserGender: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userCityId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userCityId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userCityId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserCityId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userState", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userState of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userState of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserState: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "isOnline", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}isOnline of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}isOnline of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIsOnline: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userCountry", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userCountry of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userCountry of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserCountry: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userFbId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userFbId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userFbId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserFbId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "about", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}about of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}about of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAbout: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "currentStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}currentStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}currentStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCurrentStatus: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self userId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userId...");
#endif
    [[self userId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userId."];
    }
  }
  if ([self tsUserId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsUserId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsUserId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsUserId...");
#endif
    [[self tsUserId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsUserId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsUserId."];
    }
  }
  if ([self tsUserEmail]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsUserEmail", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsUserEmail."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsUserEmail...");
#endif
    [[self tsUserEmail] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsUserEmail...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsUserEmail."];
    }
  }
  if ([self tsUserPw]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsUserPw", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsUserPw."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsUserPw...");
#endif
    [[self tsUserPw] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsUserPw...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsUserPw."];
    }
  }
  if ([self tsFirstName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsFirstName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsFirstName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsFirstName...");
#endif
    [[self tsFirstName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsFirstName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsFirstName."];
    }
  }
  if ([self tsLastName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsLastName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsLastName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsLastName...");
#endif
    [[self tsLastName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsLastName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsLastName."];
    }
  }
  if ([self maxInvites]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "maxInvites", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}maxInvites."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}maxInvites...");
#endif
    [[self maxInvites] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}maxInvites...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}maxInvites."];
    }
  }
  if ([self userCreatedInitialDatetime]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userCreatedInitialDatetime", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userCreatedInitialDatetime."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userCreatedInitialDatetime...");
#endif
    [[self userCreatedInitialDatetime] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userCreatedInitialDatetime...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userCreatedInitialDatetime."];
    }
  }
  if ([self userPoints]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userPoints", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userPoints."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userPoints...");
#endif
    [[self userPoints] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userPoints...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userPoints."];
    }
  }
  if ([self twitterUsrUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "twitterUsrUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}twitterUsrUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}twitterUsrUrl...");
#endif
    [[self twitterUsrUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}twitterUsrUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}twitterUsrUrl."];
    }
  }
  if ([self userDisabledFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userDisabledFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userDisabledFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userDisabledFlag...");
#endif
    [[self userDisabledFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userDisabledFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userDisabledFlag."];
    }
  }
  if ([self userActivationKey]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userActivationKey", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userActivationKey."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userActivationKey...");
#endif
    [[self userActivationKey] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userActivationKey...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userActivationKey."];
    }
  }
  if ([self userGender]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userGender", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userGender."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userGender...");
#endif
    [[self userGender] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userGender...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userGender."];
    }
  }
  if ([self userCityId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userCityId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userCityId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userCityId...");
#endif
    [[self userCityId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userCityId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userCityId."];
    }
  }
  if ([self userState]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userState", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userState."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userState...");
#endif
    [[self userState] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userState...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userState."];
    }
  }
  if ([self isOnline]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "isOnline", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}isOnline."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}isOnline...");
#endif
    [[self isOnline] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}isOnline...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}isOnline."];
    }
  }
  if ([self userCountry]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userCountry", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userCountry."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userCountry...");
#endif
    [[self userCountry] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userCountry...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userCountry."];
    }
  }
  if ([self userFbId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userFbId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userFbId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userFbId...");
#endif
    [[self userFbId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userFbId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userFbId."];
    }
  }
  if ([self about]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "about", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}about."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}about...");
#endif
    [[self about] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}about...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}about."];
    }
  }
  if ([self currentStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "currentStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}currentStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}currentStatus...");
#endif
    [[self currentStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}currentStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}currentStatus."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSUserObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSUserObj_M */
#ifndef DEF_ENUNCIATENS0TSSocialSettingsObj_M
#define DEF_ENUNCIATENS0TSSocialSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSSocialSettingsObj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSSocialAutoPubSettingsObj *) tsSocialAutoPubSettingsObj
{
  return _tsSocialAutoPubSettingsObj;
}

/**
 * (no documentation provided)
 */
- (void) setTsSocialAutoPubSettingsObj: (ENUNCIATENS0TSSocialAutoPubSettingsObj *) newTsSocialAutoPubSettingsObj
{
  [newTsSocialAutoPubSettingsObj retain];
  [_tsSocialAutoPubSettingsObj release];
  _tsSocialAutoPubSettingsObj = newTsSocialAutoPubSettingsObj;
}

/**
 * (no documentation provided)
 */
- (NSString *) facebookStatus
{
  return _facebookStatus;
}

/**
 * (no documentation provided)
 */
- (void) setFacebookStatus: (NSString *) newFacebookStatus
{
  [newFacebookStatus retain];
  [_facebookStatus release];
  _facebookStatus = newFacebookStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) twitterStatus
{
  return _twitterStatus;
}

/**
 * (no documentation provided)
 */
- (void) setTwitterStatus: (NSString *) newTwitterStatus
{
  [newTwitterStatus retain];
  [_twitterStatus release];
  _twitterStatus = newTwitterStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) foursquareStatus
{
  return _foursquareStatus;
}

/**
 * (no documentation provided)
 */
- (void) setFoursquareStatus: (NSString *) newFoursquareStatus
{
  [newFoursquareStatus retain];
  [_foursquareStatus release];
  _foursquareStatus = newFoursquareStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) tumblrStatus
{
  return _tumblrStatus;
}

/**
 * (no documentation provided)
 */
- (void) setTumblrStatus: (NSString *) newTumblrStatus
{
  [newTumblrStatus retain];
  [_tumblrStatus release];
  _tumblrStatus = newTumblrStatus;
}

- (void) dealloc
{
  [self setTsSocialAutoPubSettingsObj: nil];
  [self setFacebookStatus: nil];
  [self setTwitterStatus: nil];
  [self setFoursquareStatus: nil];
  [self setTumblrStatus: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSSocialSettingsObj *_eNUNCIATENS0TSSocialSettingsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSSocialSettingsObj = (ENUNCIATENS0TSSocialSettingsObj *) [ENUNCIATENS0TSSocialSettingsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSSocialSettingsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSSocialSettingsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSSocialSettingsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSSocialSettingsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSSocialSettingsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSSocialSettingsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSSocialSettingsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSSocialSettingsObj *_eNUNCIATENS0TSSocialSettingsObj = [[ENUNCIATENS0TSSocialSettingsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSSocialSettingsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSSocialSettingsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSSocialSettingsObj autorelease];
  return _eNUNCIATENS0TSSocialSettingsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSSocialSettingsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSSocialSettingsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSSocialSettingsObj from an XML reader. The element to be read is
 * "social".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSSocialSettingsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSSocialSettingsObj *_tSSocialSettingsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element social."];
    }
  }

  if (xmlStrcmp(BAD_CAST "social", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}social.");
#endif
    _tSSocialSettingsObj = (ENUNCIATENS0TSSocialSettingsObj *)[ENUNCIATENS0TSSocialSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}social.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSocialSettingsObj. Expected element social. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSocialSettingsObj. Expected element social. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSSocialSettingsObj;
}

/**
 * Writes this ENUNCIATENS0TSSocialSettingsObj to XML under element name "social".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSSocialSettingsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "social", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}social. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSSocialSettingsObj for root element {}social...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSSocialSettingsObj for root element {}social...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}social. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsSocialAutoPubSettingsObj", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsSocialAutoPubSettingsObj of type {}TSSocialAutoPubSettingsObj.");
#endif
    __child = [ENUNCIATENS0TSSocialAutoPubSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsSocialAutoPubSettingsObj of type {}TSSocialAutoPubSettingsObj.");
#endif

    [self setTsSocialAutoPubSettingsObj: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "facebookStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}facebookStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}facebookStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFacebookStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "twitterStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}twitterStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}twitterStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTwitterStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "foursquareStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}foursquareStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}foursquareStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFoursquareStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tumblrStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tumblrStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tumblrStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTumblrStatus: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self tsSocialAutoPubSettingsObj]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsSocialAutoPubSettingsObj", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsSocialAutoPubSettingsObj."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsSocialAutoPubSettingsObj...");
#endif
    [[self tsSocialAutoPubSettingsObj] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsSocialAutoPubSettingsObj...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsSocialAutoPubSettingsObj."];
    }
  }
  if ([self facebookStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebookStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}facebookStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}facebookStatus...");
#endif
    [[self facebookStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}facebookStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}facebookStatus."];
    }
  }
  if ([self twitterStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "twitterStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}twitterStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}twitterStatus...");
#endif
    [[self twitterStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}twitterStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}twitterStatus."];
    }
  }
  if ([self foursquareStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "foursquareStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}foursquareStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}foursquareStatus...");
#endif
    [[self foursquareStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}foursquareStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}foursquareStatus."];
    }
  }
  if ([self tumblrStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tumblrStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tumblrStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tumblrStatus...");
#endif
    [[self tumblrStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tumblrStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tumblrStatus."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSSocialSettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSSocialSettingsObj_M */
#ifndef DEF_ENUNCIATENS0TSRestaurantObj_M
#define DEF_ENUNCIATENS0TSRestaurantObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRestaurantObj

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId
{
  return _restaurantId;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId
{
  [newRestaurantId retain];
  [_restaurantId release];
  _restaurantId = newRestaurantId;
}

/**
 * (no documentation provided)
 */
- (NSString *) factualId
{
  return _factualId;
}

/**
 * (no documentation provided)
 */
- (void) setFactualId: (NSString *) newFactualId
{
  [newFactualId retain];
  [_factualId release];
  _factualId = newFactualId;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantName
{
  return _restaurantName;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantName: (NSString *) newRestaurantName
{
  [newRestaurantName retain];
  [_restaurantName release];
  _restaurantName = newRestaurantName;
}

/**
 * (no documentation provided)
 */
- (NSString *) factualRating
{
  return _factualRating;
}

/**
 * (no documentation provided)
 */
- (void) setFactualRating: (NSString *) newFactualRating
{
  [newFactualRating retain];
  [_factualRating release];
  _factualRating = newFactualRating;
}

/**
 * (no documentation provided)
 */
- (NSString *) priceRange
{
  return _priceRange;
}

/**
 * (no documentation provided)
 */
- (void) setPriceRange: (NSString *) newPriceRange
{
  [newPriceRange retain];
  [_priceRange release];
  _priceRange = newPriceRange;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantCityId
{
  return _restaurantCityId;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantCityId: (NSString *) newRestaurantCityId
{
  [newRestaurantCityId retain];
  [_restaurantCityId release];
  _restaurantCityId = newRestaurantCityId;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantHours
{
  return _restaurantHours;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantHours: (NSString *) newRestaurantHours
{
  [newRestaurantHours retain];
  [_restaurantHours release];
  _restaurantHours = newRestaurantHours;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLat
{
  return _restaurantLat;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantLat: (NSString *) newRestaurantLat
{
  [newRestaurantLat retain];
  [_restaurantLat release];
  _restaurantLat = newRestaurantLat;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantLon
{
  return _restaurantLon;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantLon: (NSString *) newRestaurantLon
{
  [newRestaurantLon retain];
  [_restaurantLon release];
  _restaurantLon = newRestaurantLon;
}

/**
 * (no documentation provided)
 */
- (NSString *) sumVoteCount
{
  return _sumVoteCount;
}

/**
 * (no documentation provided)
 */
- (void) setSumVoteCount: (NSString *) newSumVoteCount
{
  [newSumVoteCount retain];
  [_sumVoteCount release];
  _sumVoteCount = newSumVoteCount;
}

/**
 * (no documentation provided)
 */
- (NSString *) sumVoteValue
{
  return _sumVoteValue;
}

/**
 * (no documentation provided)
 */
- (void) setSumVoteValue: (NSString *) newSumVoteValue
{
  [newSumVoteValue retain];
  [_sumVoteValue release];
  _sumVoteValue = newSumVoteValue;
}

/**
 * (no documentation provided)
 */
- (NSString *) tbdOpenTableId
{
  return _tbdOpenTableId;
}

/**
 * (no documentation provided)
 */
- (void) setTbdOpenTableId: (NSString *) newTbdOpenTableId
{
  [newTbdOpenTableId retain];
  [_tbdOpenTableId release];
  _tbdOpenTableId = newTbdOpenTableId;
}

- (void) dealloc
{
  [self setRestaurantId: nil];
  [self setFactualId: nil];
  [self setRestaurantName: nil];
  [self setFactualRating: nil];
  [self setPriceRange: nil];
  [self setRestaurantCityId: nil];
  [self setRestaurantHours: nil];
  [self setRestaurantLat: nil];
  [self setRestaurantLon: nil];
  [self setSumVoteCount: nil];
  [self setSumVoteValue: nil];
  [self setTbdOpenTableId: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRestaurantObj *_eNUNCIATENS0TSRestaurantObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRestaurantObj = (ENUNCIATENS0TSRestaurantObj *) [ENUNCIATENS0TSRestaurantObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRestaurantObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSRestaurantObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRestaurantObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRestaurantObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRestaurantObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRestaurantObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRestaurantObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRestaurantObj *_eNUNCIATENS0TSRestaurantObj = [[ENUNCIATENS0TSRestaurantObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRestaurantObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRestaurantObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRestaurantObj autorelease];
  return _eNUNCIATENS0TSRestaurantObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRestaurantObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRestaurantObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSRestaurantObj from an XML reader. The element to be read is
 * "restaurant".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRestaurantObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRestaurantObj *_tSRestaurantObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurant."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurant", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurant.");
#endif
    _tSRestaurantObj = (ENUNCIATENS0TSRestaurantObj *)[ENUNCIATENS0TSRestaurantObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurant.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantObj. Expected element restaurant. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantObj. Expected element restaurant. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRestaurantObj;
}

/**
 * Writes this ENUNCIATENS0TSRestaurantObj to XML under element name "restaurant".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRestaurantObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurant", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurant. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRestaurantObj for root element {}restaurant...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRestaurantObj for root element {}restaurant...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurant. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "factualId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}factualId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}factualId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFactualId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "factualRating", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}factualRating of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}factualRating of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFactualRating: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "priceRange", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}priceRange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}priceRange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPriceRange: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantCityId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantCityId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantCityId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantCityId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantHours", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantHours of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantHours of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantHours: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantLat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantLat: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantLon", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantLon of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantLon of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantLon: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "sumVoteCount", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}sumVoteCount of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}sumVoteCount of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSumVoteCount: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "sumVoteValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}sumVoteValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}sumVoteValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSumVoteValue: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tbdOpenTableId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tbdOpenTableId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tbdOpenTableId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTbdOpenTableId: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self restaurantId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantId...");
#endif
    [[self restaurantId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantId."];
    }
  }
  if ([self factualId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "factualId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}factualId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}factualId...");
#endif
    [[self factualId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}factualId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}factualId."];
    }
  }
  if ([self restaurantName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantName...");
#endif
    [[self restaurantName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantName."];
    }
  }
  if ([self factualRating]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "factualRating", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}factualRating."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}factualRating...");
#endif
    [[self factualRating] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}factualRating...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}factualRating."];
    }
  }
  if ([self priceRange]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priceRange", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}priceRange."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}priceRange...");
#endif
    [[self priceRange] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}priceRange...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}priceRange."];
    }
  }
  if ([self restaurantCityId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantCityId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantCityId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantCityId...");
#endif
    [[self restaurantCityId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantCityId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantCityId."];
    }
  }
  if ([self restaurantHours]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantHours", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantHours."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantHours...");
#endif
    [[self restaurantHours] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantHours...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantHours."];
    }
  }
  if ([self restaurantLat]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLat", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantLat."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantLat...");
#endif
    [[self restaurantLat] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantLat...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantLat."];
    }
  }
  if ([self restaurantLon]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLon", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantLon."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantLon...");
#endif
    [[self restaurantLon] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantLon...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantLon."];
    }
  }
  if ([self sumVoteCount]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sumVoteCount", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}sumVoteCount."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}sumVoteCount...");
#endif
    [[self sumVoteCount] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}sumVoteCount...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}sumVoteCount."];
    }
  }
  if ([self sumVoteValue]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sumVoteValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}sumVoteValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}sumVoteValue...");
#endif
    [[self sumVoteValue] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}sumVoteValue...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}sumVoteValue."];
    }
  }
  if ([self tbdOpenTableId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tbdOpenTableId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tbdOpenTableId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tbdOpenTableId...");
#endif
    [[self tbdOpenTableId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tbdOpenTableId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tbdOpenTableId."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRestaurantObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRestaurantObj_M */
#ifndef DEF_ENUNCIATENS0TSRecommendersDetailsObj_M
#define DEF_ENUNCIATENS0TSRecommendersDetailsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRecommendersDetailsObj

/**
 * (no documentation provided)
 */
- (NSString *) userId
{
  return _userId;
}

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId
{
  [newUserId retain];
  [_userId release];
  _userId = newUserId;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSPhotoObj *) photo
{
  return _photo;
}

/**
 * (no documentation provided)
 */
- (void) setPhoto: (ENUNCIATENS0TSPhotoObj *) newPhoto
{
  [newPhoto retain];
  [_photo release];
  _photo = newPhoto;
}

- (void) dealloc
{
  [self setUserId: nil];
  [self setName: nil];
  [self setPhoto: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRecommendersDetailsObj *_eNUNCIATENS0TSRecommendersDetailsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRecommendersDetailsObj = (ENUNCIATENS0TSRecommendersDetailsObj *) [ENUNCIATENS0TSRecommendersDetailsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRecommendersDetailsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSRecommendersDetailsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRecommendersDetailsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRecommendersDetailsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRecommendersDetailsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRecommendersDetailsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRecommendersDetailsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRecommendersDetailsObj *_eNUNCIATENS0TSRecommendersDetailsObj = [[ENUNCIATENS0TSRecommendersDetailsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRecommendersDetailsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRecommendersDetailsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRecommendersDetailsObj autorelease];
  return _eNUNCIATENS0TSRecommendersDetailsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRecommendersDetailsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRecommendersDetailsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSRecommendersDetailsObj from an XML reader. The element to be read is
 * "recommenders".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRecommendersDetailsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRecommendersDetailsObj *_tSRecommendersDetailsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element recommenders."];
    }
  }

  if (xmlStrcmp(BAD_CAST "recommenders", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}recommenders.");
#endif
    _tSRecommendersDetailsObj = (ENUNCIATENS0TSRecommendersDetailsObj *)[ENUNCIATENS0TSRecommendersDetailsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}recommenders.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendersDetailsObj. Expected element recommenders. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendersDetailsObj. Expected element recommenders. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRecommendersDetailsObj;
}

/**
 * Writes this ENUNCIATENS0TSRecommendersDetailsObj to XML under element name "recommenders".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRecommendersDetailsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommenders", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}recommenders. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRecommendersDetailsObj for root element {}recommenders...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRecommendersDetailsObj for root element {}recommenders...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}recommenders. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photo of type {}TSPhotoObj.");
#endif
    __child = [ENUNCIATENS0TSPhotoObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photo of type {}TSPhotoObj.");
#endif

    [self setPhoto: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self userId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userId...");
#endif
    [[self userId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userId."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self photo]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}photo."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}photo...");
#endif
    [[self photo] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}photo...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}photo."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRecommendersDetailsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRecommendersDetailsObj_M */
#ifndef DEF_ENUNCIATENS0TSPhotoObj_M
#define DEF_ENUNCIATENS0TSPhotoObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSPhotoObj

/**
 * (no documentation provided)
 */
- (NSString *) userId
{
  return _userId;
}

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId
{
  [newUserId retain];
  [_userId release];
  _userId = newUserId;
}

/**
 * (no documentation provided)
 */
- (NSString *) name
{
  return _name;
}

/**
 * (no documentation provided)
 */
- (void) setName: (NSString *) newName
{
  [newName retain];
  [_name release];
  _name = newName;
}

/**
 * (no documentation provided)
 */
- (NSString *) photo
{
  return _photo;
}

/**
 * (no documentation provided)
 */
- (void) setPhoto: (NSString *) newPhoto
{
  [newPhoto retain];
  [_photo release];
  _photo = newPhoto;
}

- (void) dealloc
{
  [self setUserId: nil];
  [self setName: nil];
  [self setPhoto: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSPhotoObj *_eNUNCIATENS0TSPhotoObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSPhotoObj = (ENUNCIATENS0TSPhotoObj *) [ENUNCIATENS0TSPhotoObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSPhotoObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSPhotoObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSPhotoObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSPhotoObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSPhotoObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSPhotoObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSPhotoObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSPhotoObj *_eNUNCIATENS0TSPhotoObj = [[ENUNCIATENS0TSPhotoObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSPhotoObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSPhotoObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSPhotoObj autorelease];
  return _eNUNCIATENS0TSPhotoObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSPhotoObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSPhotoObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSPhotoObj from an XML reader. The element to be read is
 * "photo".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSPhotoObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSPhotoObj *_tSPhotoObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element photo."];
    }
  }

  if (xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}photo.");
#endif
    _tSPhotoObj = (ENUNCIATENS0TSPhotoObj *)[ENUNCIATENS0TSPhotoObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}photo.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSPhotoObj. Expected element photo. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSPhotoObj. Expected element photo. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSPhotoObj;
}

/**
 * Writes this ENUNCIATENS0TSPhotoObj to XML under element name "photo".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSPhotoObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}photo. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSPhotoObj for root element {}photo...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSPhotoObj for root element {}photo...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}photo. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhoto: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self userId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userId...");
#endif
    [[self userId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userId."];
    }
  }
  if ([self name]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}name."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}name...");
#endif
    [[self name] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}name...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}name."];
    }
  }
  if ([self photo]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}photo."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}photo...");
#endif
    [[self photo] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}photo...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}photo."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSPhotoObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSPhotoObj_M */
#ifndef DEF_ENUNCIATENS0TSErrorObj_M
#define DEF_ENUNCIATENS0TSErrorObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSErrorObj

/**
 * (no documentation provided)
 */
- (NSString *) errorMsg
{
  return _errorMsg;
}

/**
 * (no documentation provided)
 */
- (void) setErrorMsg: (NSString *) newErrorMsg
{
  [newErrorMsg retain];
  [_errorMsg release];
  _errorMsg = newErrorMsg;
}

- (void) dealloc
{
  [self setErrorMsg: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSErrorObj *_eNUNCIATENS0TSErrorObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSErrorObj = (ENUNCIATENS0TSErrorObj *) [ENUNCIATENS0TSErrorObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSErrorObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSErrorObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSErrorObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSErrorObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSErrorObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSErrorObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSErrorObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSErrorObj *_eNUNCIATENS0TSErrorObj = [[ENUNCIATENS0TSErrorObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSErrorObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSErrorObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSErrorObj autorelease];
  return _eNUNCIATENS0TSErrorObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSErrorObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSErrorObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSErrorObj from an XML reader. The element to be read is
 * "error".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSErrorObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSErrorObj *_tSErrorObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element error."];
    }
  }

  if (xmlStrcmp(BAD_CAST "error", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}error.");
#endif
    _tSErrorObj = (ENUNCIATENS0TSErrorObj *)[ENUNCIATENS0TSErrorObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}error.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSErrorObj. Expected element error. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSErrorObj. Expected element error. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSErrorObj;
}

/**
 * Writes this ENUNCIATENS0TSErrorObj to XML under element name "error".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSErrorObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "error", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}error. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSErrorObj for root element {}error...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSErrorObj for root element {}error...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}error. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "errorMsg", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}errorMsg of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}errorMsg of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setErrorMsg: __child];
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self errorMsg]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "errorMsg", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}errorMsg."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}errorMsg...");
#endif
    [[self errorMsg] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}errorMsg...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}errorMsg."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSErrorObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSErrorObj_M */
#ifndef DEF_ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj_M
#define DEF_ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj

/**
 * (no documentation provided)
 */
- (NSString *) userId
{
  return _userId;
}

/**
 * (no documentation provided)
 */
- (void) setUserId: (NSString *) newUserId
{
  [newUserId retain];
  [_userId release];
  _userId = newUserId;
}

/**
 * (no documentation provided)
 */
- (NSString *) restaurantId
{
  return _restaurantId;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantId: (NSString *) newRestaurantId
{
  [newRestaurantId retain];
  [_restaurantId release];
  _restaurantId = newRestaurantId;
}

/**
 * (no documentation provided)
 */
- (NSString *) questionId
{
  return _questionId;
}

/**
 * (no documentation provided)
 */
- (void) setQuestionId: (NSString *) newQuestionId
{
  [newQuestionId retain];
  [_questionId release];
  _questionId = newQuestionId;
}

/**
 * (no documentation provided)
 */
- (NSArray *) tsRecommendersDetailsObj
{
  return _tsRecommendersDetailsObj;
}

/**
 * (no documentation provided)
 */
- (void) setTsRecommendersDetailsObj: (NSArray *) newTsRecommendersDetailsObj
{
  [newTsRecommendersDetailsObj retain];
  [_tsRecommendersDetailsObj release];
  _tsRecommendersDetailsObj = newTsRecommendersDetailsObj;
}

- (void) dealloc
{
  [self setUserId: nil];
  [self setRestaurantId: nil];
  [self setQuestionId: nil];
  [self setTsRecommendersDetailsObj: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj *_eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj = (ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj *) [ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj;
}

//documentation inherited.
- (NSData *) writeToXML
{
  xmlBufferPtr buf;
  xmlTextWriterPtr writer;
  int rc;
  NSData *data;

  buf = xmlBufferCreate();
  if (buf == NULL) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML buffer."];
    return nil;
  }

  writer = xmlNewTextWriterMemory(buf, 0);
  if (writer == NULL) {
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error creating an XML writer."];
    return nil;
  }

  rc = xmlTextWriterStartDocument(writer, NULL, "utf-8", NULL);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML start document."];
    return nil;
  }

  NS_DURING
  {
    [self writeXMLElement: writer];
  }
  NS_HANDLER
  {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [localException raise];
  }
  NS_ENDHANDLER

  rc = xmlTextWriterEndDocument(writer);
  if (rc < 0) {
    xmlFreeTextWriter(writer);
    xmlBufferFree(buf);
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing XML end document."];
    return nil;
  }

  xmlFreeTextWriter(writer);
  data = [NSData dataWithBytes: buf->content length: buf->use];
  xmlBufferFree(buf);
  return data;
}
@end /* implementation ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj *_eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj = [[ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj autorelease];
  return _eNUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
}

/**
 * Reads a ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj from an XML reader. The element to be read is
 * "restaurants".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurants."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurants", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurants.");
#endif
    _tSCurrentRecommendedRestaurantDetailsObj = (ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj *)[ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurants.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj. Expected element restaurants. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj. Expected element restaurants. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSCurrentRecommendedRestaurantDetailsObj;
}

/**
 * Writes this ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurants", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurants. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSCurrentRecommendedRestaurantDetailsObj for root element {}restaurants...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSCurrentRecommendedRestaurantDetailsObj for root element {}restaurants...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurants. XML writer status: %i\n", rc];
  }
}

//documentation inherited.
- (BOOL) readJAXBAttribute: (xmlTextReaderPtr) reader
{
  void *_child_accessor;

  if ([super readJAXBAttribute: reader]) {
    return YES;
  }

  return NO;
}

//documentation inherited.
- (BOOL) readJAXBValue: (xmlTextReaderPtr) reader
{
  return [super readJAXBValue: reader];
}

//documentation inherited.
- (BOOL) readJAXBChildElement: (xmlTextReaderPtr) reader
{
  id __child;
  void *_child_accessor;
  int status, depth;

  if ([super readJAXBChildElement: reader]) {
    return YES;
  }
  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRestaurantId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "questionId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}questionId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}questionId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setQuestionId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsRecommendersDetailsObj", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsRecommendersDetailsObj of type {}TSRecommendersDetailsObj.");
#endif

    __child = [ENUNCIATENS0TSRecommendersDetailsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsRecommendersDetailsObj of type {}TSRecommendersDetailsObj.");
#endif

    if ([self tsRecommendersDetailsObj]) {
      [self setTsRecommendersDetailsObj: [[self tsRecommendersDetailsObj] arrayByAddingObject: __child]];
    }
    else {
      [self setTsRecommendersDetailsObj: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"


  return NO;
}

//documentation inherited.
- (int) readUnknownJAXBChildElement: (xmlTextReaderPtr) reader
{
  return [super readUnknownJAXBChildElement: reader];
}

//documentation inherited.
- (void) readUnknownJAXBAttribute: (xmlTextReaderPtr) reader
{
  [super readUnknownJAXBAttribute: reader];
}

//documentation inherited.
- (void) writeJAXBAttributes: (xmlTextWriterPtr) writer
{
  int status;

  [super writeJAXBAttributes: writer];

}

//documentation inherited.
- (void) writeJAXBValue: (xmlTextWriterPtr) writer
{
  [super writeJAXBValue: writer];
}

/**
 * Method for writing the child elements.
 *
 * @param writer The writer.
 */
- (void) writeJAXBChildElements: (xmlTextWriterPtr) writer
{
  int status;
  id __item;
  NSEnumerator *__enumerator;

  [super writeJAXBChildElements: writer];

  if ([self userId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userId...");
#endif
    [[self userId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userId."];
    }
  }
  if ([self restaurantId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurantId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurantId...");
#endif
    [[self restaurantId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurantId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurantId."];
    }
  }
  if ([self questionId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}questionId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}questionId...");
#endif
    [[self questionId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}questionId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}questionId."];
    }
  }
  if ([self tsRecommendersDetailsObj]) {
    __enumerator = [[self tsRecommendersDetailsObj] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsRecommendersDetailsObj", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}tsRecommendersDetailsObj."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}tsRecommendersDetailsObj...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}tsRecommendersDetailsObj...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}tsRecommendersDetailsObj."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSCurrentRecommendedRestaurantDetailsObj_M */
