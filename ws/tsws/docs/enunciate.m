#import "enunciate.h"
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
#ifndef DEF_ENUNCIATENS0TSFacebookUserDataObj_M
#define DEF_ENUNCIATENS0TSFacebookUserDataObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSFacebookUserDataObj

/**
 * (no documentation provided)
 */
- (NSString *) userName
{
  return _userName;
}

/**
 * (no documentation provided)
 */
- (void) setUserName: (NSString *) newUserName
{
  [newUserName retain];
  [_userName release];
  _userName = newUserName;
}

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
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
- (NSString *) firstName
{
  return _firstName;
}

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName
{
  [newFirstName retain];
  [_firstName release];
  _firstName = newFirstName;
}

/**
 * (no documentation provided)
 */
- (NSString *) middleName
{
  return _middleName;
}

/**
 * (no documentation provided)
 */
- (void) setMiddleName: (NSString *) newMiddleName
{
  [newMiddleName retain];
  [_middleName release];
  _middleName = newMiddleName;
}

/**
 * (no documentation provided)
 */
- (NSString *) lastName
{
  return _lastName;
}

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName
{
  [newLastName retain];
  [_lastName release];
  _lastName = newLastName;
}

/**
 * (no documentation provided)
 */
- (NSString *) gender
{
  return _gender;
}

/**
 * (no documentation provided)
 */
- (void) setGender: (NSString *) newGender
{
  [newGender retain];
  [_gender release];
  _gender = newGender;
}

/**
 * (no documentation provided)
 */
- (NSString *) locale
{
  return _locale;
}

/**
 * (no documentation provided)
 */
- (void) setLocale: (NSString *) newLocale
{
  [newLocale retain];
  [_locale release];
  _locale = newLocale;
}

/**
 * (no documentation provided)
 */
- (NSString *) link
{
  return _link;
}

/**
 * (no documentation provided)
 */
- (void) setLink: (NSString *) newLink
{
  [newLink retain];
  [_link release];
  _link = newLink;
}

/**
 * (no documentation provided)
 */
- (NSString *) ageRange
{
  return _ageRange;
}

/**
 * (no documentation provided)
 */
- (void) setAgeRange: (NSString *) newAgeRange
{
  [newAgeRange retain];
  [_ageRange release];
  _ageRange = newAgeRange;
}

/**
 * (no documentation provided)
 */
- (NSString *) birthday
{
  return _birthday;
}

/**
 * (no documentation provided)
 */
- (void) setBirthday: (NSString *) newBirthday
{
  [newBirthday retain];
  [_birthday release];
  _birthday = newBirthday;
}

/**
 * (no documentation provided)
 */
- (NSString *) thirdPartyId
{
  return _thirdPartyId;
}

/**
 * (no documentation provided)
 */
- (void) setThirdPartyId: (NSString *) newThirdPartyId
{
  [newThirdPartyId retain];
  [_thirdPartyId release];
  _thirdPartyId = newThirdPartyId;
}

/**
 * (no documentation provided)
 */
- (NSString *) friendlists
{
  return _friendlists;
}

/**
 * (no documentation provided)
 */
- (void) setFriendlists: (NSString *) newFriendlists
{
  [newFriendlists retain];
  [_friendlists release];
  _friendlists = newFriendlists;
}

/**
 * (no documentation provided)
 */
- (NSString *) installed
{
  return _installed;
}

/**
 * (no documentation provided)
 */
- (void) setInstalled: (NSString *) newInstalled
{
  [newInstalled retain];
  [_installed release];
  _installed = newInstalled;
}

/**
 * (no documentation provided)
 */
- (NSString *) timezone
{
  return _timezone;
}

/**
 * (no documentation provided)
 */
- (void) setTimezone: (NSString *) newTimezone
{
  [newTimezone retain];
  [_timezone release];
  _timezone = newTimezone;
}

/**
 * (no documentation provided)
 */
- (NSString *) updatedTime
{
  return _updatedTime;
}

/**
 * (no documentation provided)
 */
- (void) setUpdatedTime: (NSString *) newUpdatedTime
{
  [newUpdatedTime retain];
  [_updatedTime release];
  _updatedTime = newUpdatedTime;
}

/**
 * (no documentation provided)
 */
- (NSString *) verified
{
  return _verified;
}

/**
 * (no documentation provided)
 */
- (void) setVerified: (NSString *) newVerified
{
  [newVerified retain];
  [_verified release];
  _verified = newVerified;
}

/**
 * (no documentation provided)
 */
- (NSString *) devices
{
  return _devices;
}

/**
 * (no documentation provided)
 */
- (void) setDevices: (NSString *) newDevices
{
  [newDevices retain];
  [_devices release];
  _devices = newDevices;
}

/**
 * (no documentation provided)
 */
- (NSString *) email
{
  return _email;
}

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail
{
  [newEmail retain];
  [_email release];
  _email = newEmail;
}

/**
 * (no documentation provided)
 */
- (NSString *) hometown
{
  return _hometown;
}

/**
 * (no documentation provided)
 */
- (void) setHometown: (NSString *) newHometown
{
  [newHometown retain];
  [_hometown release];
  _hometown = newHometown;
}

/**
 * (no documentation provided)
 */
- (NSString *) location
{
  return _location;
}

/**
 * (no documentation provided)
 */
- (void) setLocation: (NSString *) newLocation
{
  [newLocation retain];
  [_location release];
  _location = newLocation;
}

/**
 * (no documentation provided)
 */
- (NSString *) picture
{
  return _picture;
}

/**
 * (no documentation provided)
 */
- (void) setPicture: (NSString *) newPicture
{
  [newPicture retain];
  [_picture release];
  _picture = newPicture;
}

/**
 * (no documentation provided)
 */
- (NSString *) relationshipStatus
{
  return _relationshipStatus;
}

/**
 * (no documentation provided)
 */
- (void) setRelationshipStatus: (NSString *) newRelationshipStatus
{
  [newRelationshipStatus retain];
  [_relationshipStatus release];
  _relationshipStatus = newRelationshipStatus;
}

/**
 * (no documentation provided)
 */
- (NSString *) checkins
{
  return _checkins;
}

/**
 * (no documentation provided)
 */
- (void) setCheckins: (NSString *) newCheckins
{
  [newCheckins retain];
  [_checkins release];
  _checkins = newCheckins;
}

/**
 * (no documentation provided)
 */
- (NSString *) friends
{
  return _friends;
}

/**
 * (no documentation provided)
 */
- (void) setFriends: (NSString *) newFriends
{
  [newFriends retain];
  [_friends release];
  _friends = newFriends;
}

/**
 * (no documentation provided)
 */
- (NSString *) likes
{
  return _likes;
}

/**
 * (no documentation provided)
 */
- (void) setLikes: (NSString *) newLikes
{
  [newLikes retain];
  [_likes release];
  _likes = newLikes;
}

/**
 * (no documentation provided)
 */
- (NSString *) permissions
{
  return _permissions;
}

/**
 * (no documentation provided)
 */
- (void) setPermissions: (NSString *) newPermissions
{
  [newPermissions retain];
  [_permissions release];
  _permissions = newPermissions;
}

/**
 * (no documentation provided)
 */
- (NSString *) create
{
  return _create;
}

/**
 * (no documentation provided)
 */
- (void) setCreate: (NSString *) newCreate
{
  [newCreate retain];
  [_create release];
  _create = newCreate;
}

- (void) dealloc
{
  [self setUserName: nil];
  [self setIdentifier: nil];
  [self setName: nil];
  [self setFirstName: nil];
  [self setMiddleName: nil];
  [self setLastName: nil];
  [self setGender: nil];
  [self setLocale: nil];
  [self setLink: nil];
  [self setAgeRange: nil];
  [self setBirthday: nil];
  [self setThirdPartyId: nil];
  [self setFriendlists: nil];
  [self setInstalled: nil];
  [self setTimezone: nil];
  [self setUpdatedTime: nil];
  [self setVerified: nil];
  [self setDevices: nil];
  [self setEmail: nil];
  [self setHometown: nil];
  [self setLocation: nil];
  [self setPicture: nil];
  [self setRelationshipStatus: nil];
  [self setCheckins: nil];
  [self setFriends: nil];
  [self setLikes: nil];
  [self setPermissions: nil];
  [self setCreate: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSFacebookUserDataObj *_eNUNCIATENS0TSFacebookUserDataObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSFacebookUserDataObj = (ENUNCIATENS0TSFacebookUserDataObj *) [ENUNCIATENS0TSFacebookUserDataObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSFacebookUserDataObj;
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
@end /* implementation ENUNCIATENS0TSFacebookUserDataObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSFacebookUserDataObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSFacebookUserDataObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSFacebookUserDataObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSFacebookUserDataObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSFacebookUserDataObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSFacebookUserDataObj *_eNUNCIATENS0TSFacebookUserDataObj = [[ENUNCIATENS0TSFacebookUserDataObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSFacebookUserDataObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSFacebookUserDataObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSFacebookUserDataObj autorelease];
  return _eNUNCIATENS0TSFacebookUserDataObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSFacebookUserDataObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSFacebookUserDataObj to the writer.
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
 * Reads a ENUNCIATENS0TSFacebookUserDataObj from an XML reader. The element to be read is
 * "facebook_user_data".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSFacebookUserDataObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSFacebookUserDataObj *_tSFacebookUserDataObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element facebook_user_data."];
    }
  }

  if (xmlStrcmp(BAD_CAST "facebook_user_data", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}facebook_user_data.");
#endif
    _tSFacebookUserDataObj = (ENUNCIATENS0TSFacebookUserDataObj *)[ENUNCIATENS0TSFacebookUserDataObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}facebook_user_data.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSFacebookUserDataObj. Expected element facebook_user_data. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSFacebookUserDataObj. Expected element facebook_user_data. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSFacebookUserDataObj;
}

/**
 * Writes this ENUNCIATENS0TSFacebookUserDataObj to XML under element name "facebook_user_data".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSFacebookUserDataObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebook_user_data", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}facebook_user_data. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSFacebookUserDataObj for root element {}facebook_user_data...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSFacebookUserDataObj for root element {}facebook_user_data...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}facebook_user_data. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "userName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}userName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}userName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUserName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
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
    && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFirstName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "middleName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}middleName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}middleName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMiddleName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLastName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "gender", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGender: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "locale", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}locale of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}locale of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLocale: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "link", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}link of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}link of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLink: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ageRange", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ageRange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ageRange of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAgeRange: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "birthday", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}birthday of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}birthday of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setBirthday: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "thirdPartyId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}thirdPartyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}thirdPartyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setThirdPartyId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "friendlists", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}friendlists of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}friendlists of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFriendlists: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "installed", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}installed of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}installed of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setInstalled: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "timezone", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}timezone of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}timezone of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setTimezone: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "updatedTime", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}updatedTime of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}updatedTime of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUpdatedTime: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "verified", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}verified of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}verified of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setVerified: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "devices", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}devices of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}devices of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setDevices: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setEmail: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "hometown", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}hometown of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}hometown of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setHometown: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "location", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}location of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}location of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLocation: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "picture", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}picture of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}picture of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPicture: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "relationshipStatus", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}relationshipStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}relationshipStatus of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRelationshipStatus: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "checkins", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}checkins of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}checkins of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCheckins: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "friends", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}friends of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}friends of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setFriends: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "likes", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}likes of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}likes of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLikes: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "permissions", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}permissions of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}permissions of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPermissions: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "create", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}create of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}create of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCreate: __child];
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

  if ([self userName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}userName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}userName...");
#endif
    [[self userName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}userName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}userName."];
    }
  }
  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
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
  if ([self firstName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}firstName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}firstName...");
#endif
    [[self firstName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}firstName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}firstName."];
    }
  }
  if ([self middleName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "middleName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}middleName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}middleName...");
#endif
    [[self middleName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}middleName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}middleName."];
    }
  }
  if ([self lastName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lastName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lastName...");
#endif
    [[self lastName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lastName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lastName."];
    }
  }
  if ([self gender]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gender", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}gender."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}gender...");
#endif
    [[self gender] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}gender...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}gender."];
    }
  }
  if ([self locale]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "locale", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}locale."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}locale...");
#endif
    [[self locale] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}locale...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}locale."];
    }
  }
  if ([self link]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "link", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}link."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}link...");
#endif
    [[self link] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}link...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}link."];
    }
  }
  if ([self ageRange]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ageRange", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ageRange."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ageRange...");
#endif
    [[self ageRange] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ageRange...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ageRange."];
    }
  }
  if ([self birthday]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "birthday", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}birthday."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}birthday...");
#endif
    [[self birthday] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}birthday...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}birthday."];
    }
  }
  if ([self thirdPartyId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "thirdPartyId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}thirdPartyId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}thirdPartyId...");
#endif
    [[self thirdPartyId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}thirdPartyId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}thirdPartyId."];
    }
  }
  if ([self friendlists]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendlists", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}friendlists."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}friendlists...");
#endif
    [[self friendlists] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}friendlists...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}friendlists."];
    }
  }
  if ([self installed]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "installed", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}installed."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}installed...");
#endif
    [[self installed] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}installed...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}installed."];
    }
  }
  if ([self timezone]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timezone", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}timezone."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}timezone...");
#endif
    [[self timezone] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}timezone...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}timezone."];
    }
  }
  if ([self updatedTime]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "updatedTime", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}updatedTime."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}updatedTime...");
#endif
    [[self updatedTime] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}updatedTime...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}updatedTime."];
    }
  }
  if ([self verified]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "verified", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}verified."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}verified...");
#endif
    [[self verified] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}verified...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}verified."];
    }
  }
  if ([self devices]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "devices", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}devices."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}devices...");
#endif
    [[self devices] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}devices...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}devices."];
    }
  }
  if ([self email]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}email."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}email...");
#endif
    [[self email] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}email...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}email."];
    }
  }
  if ([self hometown]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hometown", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}hometown."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}hometown...");
#endif
    [[self hometown] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}hometown...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}hometown."];
    }
  }
  if ([self location]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "location", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}location."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}location...");
#endif
    [[self location] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}location...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}location."];
    }
  }
  if ([self picture]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "picture", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}picture."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}picture...");
#endif
    [[self picture] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}picture...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}picture."];
    }
  }
  if ([self relationshipStatus]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "relationshipStatus", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}relationshipStatus."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}relationshipStatus...");
#endif
    [[self relationshipStatus] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}relationshipStatus...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}relationshipStatus."];
    }
  }
  if ([self checkins]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "checkins", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}checkins."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}checkins...");
#endif
    [[self checkins] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}checkins...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}checkins."];
    }
  }
  if ([self friends]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friends", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}friends."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}friends...");
#endif
    [[self friends] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}friends...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}friends."];
    }
  }
  if ([self likes]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "likes", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}likes."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}likes...");
#endif
    [[self likes] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}likes...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}likes."];
    }
  }
  if ([self permissions]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permissions", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}permissions."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}permissions...");
#endif
    [[self permissions] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}permissions...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}permissions."];
    }
  }
  if ([self create]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "create", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}create."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}create...");
#endif
    [[self create] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}create...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}create."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSFacebookUserDataObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSFacebookUserDataObj_M */
#ifndef DEF_ENUNCIATENS0TSListFacebookUserDataObj_M
#define DEF_ENUNCIATENS0TSListFacebookUserDataObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSListFacebookUserDataObj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSFacebookUserDataObj *) user_profile_current
{
  return _user_profile_current;
}

/**
 * (no documentation provided)
 */
- (void) setUser_profile_current: (ENUNCIATENS0TSFacebookUserDataObj *) newUser_profile_current
{
  [newUser_profile_current retain];
  [_user_profile_current release];
  _user_profile_current = newUser_profile_current;
}

/**
 * (no documentation provided)
 */
- (NSArray *) list_user_profile_fb
{
  return _list_user_profile_fb;
}

/**
 * (no documentation provided)
 */
- (void) setList_user_profile_fb: (NSArray *) newList_user_profile_fb
{
  [newList_user_profile_fb retain];
  [_list_user_profile_fb release];
  _list_user_profile_fb = newList_user_profile_fb;
}

- (void) dealloc
{
  [self setUser_profile_current: nil];
  [self setList_user_profile_fb: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSListFacebookUserDataObj *_eNUNCIATENS0TSListFacebookUserDataObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSListFacebookUserDataObj = (ENUNCIATENS0TSListFacebookUserDataObj *) [ENUNCIATENS0TSListFacebookUserDataObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSListFacebookUserDataObj;
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
@end /* implementation ENUNCIATENS0TSListFacebookUserDataObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSListFacebookUserDataObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSListFacebookUserDataObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSListFacebookUserDataObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSListFacebookUserDataObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSListFacebookUserDataObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSListFacebookUserDataObj *_eNUNCIATENS0TSListFacebookUserDataObj = [[ENUNCIATENS0TSListFacebookUserDataObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSListFacebookUserDataObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSListFacebookUserDataObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSListFacebookUserDataObj autorelease];
  return _eNUNCIATENS0TSListFacebookUserDataObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSListFacebookUserDataObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSListFacebookUserDataObj to the writer.
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
 * Reads a ENUNCIATENS0TSListFacebookUserDataObj from an XML reader. The element to be read is
 * "list_user_profile_fb".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSListFacebookUserDataObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSListFacebookUserDataObj *_tSListFacebookUserDataObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element list_user_profile_fb."];
    }
  }

  if (xmlStrcmp(BAD_CAST "list_user_profile_fb", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}list_user_profile_fb.");
#endif
    _tSListFacebookUserDataObj = (ENUNCIATENS0TSListFacebookUserDataObj *)[ENUNCIATENS0TSListFacebookUserDataObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}list_user_profile_fb.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSListFacebookUserDataObj. Expected element list_user_profile_fb. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSListFacebookUserDataObj. Expected element list_user_profile_fb. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSListFacebookUserDataObj;
}

/**
 * Writes this ENUNCIATENS0TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSListFacebookUserDataObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list_user_profile_fb", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}list_user_profile_fb. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSListFacebookUserDataObj for root element {}list_user_profile_fb...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSListFacebookUserDataObj for root element {}list_user_profile_fb...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}list_user_profile_fb. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "user_current_profile", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}user_current_profile of type {}TSFacebookUserDataObj.");
#endif
    __child = [ENUNCIATENS0TSFacebookUserDataObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}user_current_profile of type {}TSFacebookUserDataObj.");
#endif

    [self setUser_profile_current: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list_user_profile", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}list_user_profile of type {}TSFacebookUserDataObj.");
#endif

    __child = [ENUNCIATENS0TSFacebookUserDataObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}list_user_profile of type {}TSFacebookUserDataObj.");
#endif

    if ([self list_user_profile_fb]) {
      [self setList_user_profile_fb: [[self list_user_profile_fb] arrayByAddingObject: __child]];
    }
    else {
      [self setList_user_profile_fb: [NSArray arrayWithObject: __child]];
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

  if ([self user_profile_current]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user_current_profile", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}user_current_profile."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}user_current_profile...");
#endif
    [[self user_profile_current] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}user_current_profile...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}user_current_profile."];
    }
  }
  if ([self list_user_profile_fb]) {
    __enumerator = [[self list_user_profile_fb] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list_user_profile", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}list_user_profile."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}list_user_profile...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}list_user_profile...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}list_user_profile."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSListFacebookUserDataObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSListFacebookUserDataObj_M */
#ifndef DEF_ENUNCIATENS0TSMenuObj_M
#define DEF_ENUNCIATENS0TSMenuObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSMenuObj

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
- (NSString *) menuSource
{
  return _menuSource;
}

/**
 * (no documentation provided)
 */
- (void) setMenuSource: (NSString *) newMenuSource
{
  [newMenuSource retain];
  [_menuSource release];
  _menuSource = newMenuSource;
}

/**
 * (no documentation provided)
 */
- (NSString *) menuMobileUrl
{
  return _menuMobileUrl;
}

/**
 * (no documentation provided)
 */
- (void) setMenuMobileUrl: (NSString *) newMenuMobileUrl
{
  [newMenuMobileUrl retain];
  [_menuMobileUrl release];
  _menuMobileUrl = newMenuMobileUrl;
}

- (void) dealloc
{
  [self setRestaurantId: nil];
  [self setMenuSource: nil];
  [self setMenuMobileUrl: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSMenuObj *_eNUNCIATENS0TSMenuObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSMenuObj = (ENUNCIATENS0TSMenuObj *) [ENUNCIATENS0TSMenuObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSMenuObj;
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
@end /* implementation ENUNCIATENS0TSMenuObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSMenuObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSMenuObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSMenuObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSMenuObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSMenuObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSMenuObj *_eNUNCIATENS0TSMenuObj = [[ENUNCIATENS0TSMenuObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSMenuObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSMenuObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSMenuObj autorelease];
  return _eNUNCIATENS0TSMenuObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSMenuObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSMenuObj to the writer.
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
 * Reads a ENUNCIATENS0TSMenuObj from an XML reader. The element to be read is
 * "menu".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSMenuObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSMenuObj *_tSMenuObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element menu."];
    }
  }

  if (xmlStrcmp(BAD_CAST "menu", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}menu.");
#endif
    _tSMenuObj = (ENUNCIATENS0TSMenuObj *)[ENUNCIATENS0TSMenuObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}menu.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSMenuObj. Expected element menu. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSMenuObj. Expected element menu. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSMenuObj;
}

/**
 * Writes this ENUNCIATENS0TSMenuObj to XML under element name "menu".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSMenuObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menu", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}menu. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSMenuObj for root element {}menu...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSMenuObj for root element {}menu...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}menu. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "menuSource", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}menuSource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}menuSource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMenuSource: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "menuMobileUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}menuMobileUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}menuMobileUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMenuMobileUrl: __child];
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
  if ([self menuSource]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menuSource", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}menuSource."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}menuSource...");
#endif
    [[self menuSource] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}menuSource...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}menuSource."];
    }
  }
  if ([self menuMobileUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menuMobileUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}menuMobileUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}menuMobileUrl...");
#endif
    [[self menuMobileUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}menuMobileUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}menuMobileUrl."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSMenuObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSMenuObj_M */
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
#ifndef DEF_ENUNCIATENS0TSRestaurantView_M
#define DEF_ENUNCIATENS0TSRestaurantView_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRestaurantView

/**
 * (no documentation provided)
 */
- (NSString *) identifier
{
  return _identifier;
}

/**
 * (no documentation provided)
 */
- (void) setIdentifier: (NSString *) newIdentifier
{
  [newIdentifier retain];
  [_identifier release];
  _identifier = newIdentifier;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantPhotoObj *) photo
{
  return _photo;
}

/**
 * (no documentation provided)
 */
- (void) setPhoto: (ENUNCIATENS0TSRestaurantPhotoObj *) newPhoto
{
  [newPhoto retain];
  [_photo release];
  _photo = newPhoto;
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

- (void) dealloc
{
  [self setIdentifier: nil];
  [self setPhoto: nil];
  [self setName: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRestaurantView *_eNUNCIATENS0TSRestaurantView;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRestaurantView = (ENUNCIATENS0TSRestaurantView *) [ENUNCIATENS0TSRestaurantView readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRestaurantView;
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
@end /* implementation ENUNCIATENS0TSRestaurantView */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRestaurantView (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRestaurantView (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRestaurantView (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRestaurantView from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRestaurantView defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRestaurantView *_eNUNCIATENS0TSRestaurantView = [[ENUNCIATENS0TSRestaurantView alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRestaurantView initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRestaurantView = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRestaurantView autorelease];
  return _eNUNCIATENS0TSRestaurantView;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRestaurantView according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRestaurantView to the writer.
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
 * Reads a ENUNCIATENS0TSRestaurantView from an XML reader. The element to be read is
 * "restaurantsUserProfileHome".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRestaurantView.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRestaurantView *_tSRestaurantView = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurantsUserProfileHome."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurantsUserProfileHome", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurantsUserProfileHome.");
#endif
    _tSRestaurantView = (ENUNCIATENS0TSRestaurantView *)[ENUNCIATENS0TSRestaurantView readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurantsUserProfileHome.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantView. Expected element restaurantsUserProfileHome. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantView. Expected element restaurantsUserProfileHome. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRestaurantView;
}

/**
 * Writes this ENUNCIATENS0TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRestaurantView to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantsUserProfileHome", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurantsUserProfileHome. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRestaurantView for root element {}restaurantsUserProfileHome...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRestaurantView for root element {}restaurantsUserProfileHome...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurantsUserProfileHome. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setIdentifier: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photo of type {}TSRestaurantPhotoObj.");
#endif
    __child = [ENUNCIATENS0TSRestaurantPhotoObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photo of type {}TSRestaurantPhotoObj.");
#endif

    [self setPhoto: __child];
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

  if ([self identifier]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}id...");
#endif
    [[self identifier] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}id."];
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
}
@end /* implementation ENUNCIATENS0TSRestaurantView (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRestaurantView_M */
#ifndef DEF_ENUNCIATENS0TSSocialSettingsObj_M
#define DEF_ENUNCIATENS0TSSocialSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSSocialSettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) usncORDER
{
  return _usncORDER;
}

/**
 * (no documentation provided)
 */
- (void) setUsncORDER: (NSString *) newUsncORDER
{
  [newUsncORDER retain];
  [_usncORDER release];
  _usncORDER = newUsncORDER;
}

/**
 * (no documentation provided)
 */
- (NSString *) usncYN
{
  return _usncYN;
}

/**
 * (no documentation provided)
 */
- (void) setUsncYN: (NSString *) newUsncYN
{
  [newUsncYN retain];
  [_usncYN release];
  _usncYN = newUsncYN;
}

/**
 * (no documentation provided)
 */
- (NSArray *) auto_publishing
{
  return _auto_publishing;
}

/**
 * (no documentation provided)
 */
- (void) setAuto_publishing: (NSArray *) newAuto_publishing
{
  [newAuto_publishing retain];
  [_auto_publishing release];
  _auto_publishing = newAuto_publishing;
}

- (void) dealloc
{
  [self setUsncORDER: nil];
  [self setUsncYN: nil];
  [self setAuto_publishing: nil];
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
    && xmlStrcmp(BAD_CAST "usncORDER", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsncORDER: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "usncYN", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsncYN: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "auto_publishing", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}auto_publishing of type {}TSSocialAutoPubSettingsObj.");
#endif

    __child = [ENUNCIATENS0TSSocialAutoPubSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}auto_publishing of type {}TSSocialAutoPubSettingsObj.");
#endif

    if ([self auto_publishing]) {
      [self setAuto_publishing: [[self auto_publishing] arrayByAddingObject: __child]];
    }
    else {
      [self setAuto_publishing: [NSArray arrayWithObject: __child]];
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

  if ([self usncORDER]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncORDER", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}usncORDER."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}usncORDER...");
#endif
    [[self usncORDER] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}usncORDER...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}usncORDER."];
    }
  }
  if ([self usncYN]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncYN", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}usncYN."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}usncYN...");
#endif
    [[self usncYN] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}usncYN...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}usncYN."];
    }
  }
  if ([self auto_publishing]) {
    __enumerator = [[self auto_publishing] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "auto_publishing", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}auto_publishing."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}auto_publishing...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}auto_publishing...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}auto_publishing."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSSocialSettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSSocialSettingsObj_M */
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
- (NSArray *) restaurantList
{
  return _restaurantList;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantList: (NSArray *) newRestaurantList
{
  [newRestaurantList retain];
  [_restaurantList release];
  _restaurantList = newRestaurantList;
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
  [self setRestaurantList: nil];
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
    && xmlStrcmp(BAD_CAST "restaurantList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantList of type {}TSRestaurantView.");
#endif

    __child = [ENUNCIATENS0TSRestaurantView readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantList of type {}TSRestaurantView.");
#endif

    if ([self restaurantList]) {
      [self setRestaurantList: [[self restaurantList] arrayByAddingObject: __child]];
    }
    else {
      [self setRestaurantList: [NSArray arrayWithObject: __child]];
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
  if ([self restaurantList]) {
    __enumerator = [[self restaurantList] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantList", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}restaurantList."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}restaurantList...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}restaurantList...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}restaurantList."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSUserProfileObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSUserProfileObj_M */
#ifndef DEF_ENUNCIATENS0TSRecoRequestObj_M
#define DEF_ENUNCIATENS0TSRecoRequestObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRecoRequestObj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRecommendeeUserObj *) recommendeeUser
{
  return _recommendeeUser;
}

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSRecommendeeUserObj *) newRecommendeeUser
{
  [newRecommendeeUser retain];
  [_recommendeeUser release];
  _recommendeeUser = newRecommendeeUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) recorequestText
{
  return _recorequestText;
}

/**
 * (no documentation provided)
 */
- (void) setRecorequestText: (NSString *) newRecorequestText
{
  [newRecorequestText retain];
  [_recorequestText release];
  _recorequestText = newRecorequestText;
}

/**
 * (no documentation provided)
 */
- (NSString *) recommendeeUserFolloweeFlag
{
  return _recommendeeUserFolloweeFlag;
}

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUserFolloweeFlag: (NSString *) newRecommendeeUserFolloweeFlag
{
  [newRecommendeeUserFolloweeFlag retain];
  [_recommendeeUserFolloweeFlag release];
  _recommendeeUserFolloweeFlag = newRecommendeeUserFolloweeFlag;
}

- (void) dealloc
{
  [self setRecommendeeUser: nil];
  [self setRecorequestText: nil];
  [self setRecommendeeUserFolloweeFlag: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRecoRequestObj *_eNUNCIATENS0TSRecoRequestObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRecoRequestObj = (ENUNCIATENS0TSRecoRequestObj *) [ENUNCIATENS0TSRecoRequestObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRecoRequestObj;
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
@end /* implementation ENUNCIATENS0TSRecoRequestObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRecoRequestObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRecoRequestObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRecoRequestObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRecoRequestObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRecoRequestObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRecoRequestObj *_eNUNCIATENS0TSRecoRequestObj = [[ENUNCIATENS0TSRecoRequestObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRecoRequestObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRecoRequestObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRecoRequestObj autorelease];
  return _eNUNCIATENS0TSRecoRequestObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRecoRequestObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRecoRequestObj to the writer.
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
 * Reads a ENUNCIATENS0TSRecoRequestObj from an XML reader. The element to be read is
 * "recorequest".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRecoRequestObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRecoRequestObj *_tSRecoRequestObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element recorequest."];
    }
  }

  if (xmlStrcmp(BAD_CAST "recorequest", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}recorequest.");
#endif
    _tSRecoRequestObj = (ENUNCIATENS0TSRecoRequestObj *)[ENUNCIATENS0TSRecoRequestObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}recorequest.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecoRequestObj. Expected element recorequest. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecoRequestObj. Expected element recorequest. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRecoRequestObj;
}

/**
 * Writes this ENUNCIATENS0TSRecoRequestObj to XML under element name "recorequest".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRecoRequestObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recorequest", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}recorequest. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRecoRequestObj for root element {}recorequest...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRecoRequestObj for root element {}recorequest...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}recorequest. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "recommendeeUser", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recommendeeUser of type {}TSRecommendeeUserObj.");
#endif
    __child = [ENUNCIATENS0TSRecommendeeUserObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recommendeeUser of type {}TSRecommendeeUserObj.");
#endif

    [self setRecommendeeUser: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recorequestText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recorequestText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recorequestText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRecorequestText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recommendeeUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recommendeeUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recommendeeUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRecommendeeUserFolloweeFlag: __child];
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

  if ([self recommendeeUser]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUser", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recommendeeUser."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recommendeeUser...");
#endif
    [[self recommendeeUser] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recommendeeUser...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recommendeeUser."];
    }
  }
  if ([self recorequestText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recorequestText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recorequestText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recorequestText...");
#endif
    [[self recorequestText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recorequestText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recorequestText."];
    }
  }
  if ([self recommendeeUserFolloweeFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUserFolloweeFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recommendeeUserFolloweeFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recommendeeUserFolloweeFlag...");
#endif
    [[self recommendeeUserFolloweeFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recommendeeUserFolloweeFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recommendeeUserFolloweeFlag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRecoRequestObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRecoRequestObj_M */
#ifndef DEF_ENUNCIATENS0TSRecommendationsForYouObj_M
#define DEF_ENUNCIATENS0TSRecommendationsForYouObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRecommendationsForYouObj

/**
 * (no documentation provided)
 */
- (NSArray *) recoRequestList
{
  return _recoRequestList;
}

/**
 * (no documentation provided)
 */
- (void) setRecoRequestList: (NSArray *) newRecoRequestList
{
  [newRecoRequestList retain];
  [_recoRequestList release];
  _recoRequestList = newRecoRequestList;
}

/**
 * (no documentation provided)
 */
- (NSArray *) restaurantList
{
  return _restaurantList;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantList: (NSArray *) newRestaurantList
{
  [newRestaurantList retain];
  [_restaurantList release];
  _restaurantList = newRestaurantList;
}

- (void) dealloc
{
  [self setRecoRequestList: nil];
  [self setRestaurantList: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRecommendationsForYouObj *_eNUNCIATENS0TSRecommendationsForYouObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRecommendationsForYouObj = (ENUNCIATENS0TSRecommendationsForYouObj *) [ENUNCIATENS0TSRecommendationsForYouObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRecommendationsForYouObj;
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
@end /* implementation ENUNCIATENS0TSRecommendationsForYouObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRecommendationsForYouObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRecommendationsForYouObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRecommendationsForYouObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRecommendationsForYouObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRecommendationsForYouObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRecommendationsForYouObj *_eNUNCIATENS0TSRecommendationsForYouObj = [[ENUNCIATENS0TSRecommendationsForYouObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRecommendationsForYouObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRecommendationsForYouObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRecommendationsForYouObj autorelease];
  return _eNUNCIATENS0TSRecommendationsForYouObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRecommendationsForYouObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRecommendationsForYouObj to the writer.
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
 * Reads a ENUNCIATENS0TSRecommendationsForYouObj from an XML reader. The element to be read is
 * "recos4u".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRecommendationsForYouObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRecommendationsForYouObj *_tSRecommendationsForYouObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element recos4u."];
    }
  }

  if (xmlStrcmp(BAD_CAST "recos4u", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}recos4u.");
#endif
    _tSRecommendationsForYouObj = (ENUNCIATENS0TSRecommendationsForYouObj *)[ENUNCIATENS0TSRecommendationsForYouObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}recos4u.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendationsForYouObj. Expected element recos4u. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendationsForYouObj. Expected element recos4u. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRecommendationsForYouObj;
}

/**
 * Writes this ENUNCIATENS0TSRecommendationsForYouObj to XML under element name "recos4u".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRecommendationsForYouObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recos4u", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}recos4u. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRecommendationsForYouObj for root element {}recos4u...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRecommendationsForYouObj for root element {}recos4u...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}recos4u. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "recoRequestList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recoRequestList of type {}TSRecoRequestObj.");
#endif

    __child = [ENUNCIATENS0TSRecoRequestObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recoRequestList of type {}TSRecoRequestObj.");
#endif

    if ([self recoRequestList]) {
      [self setRecoRequestList: [[self recoRequestList] arrayByAddingObject: __child]];
    }
    else {
      [self setRecoRequestList: [NSArray arrayWithObject: __child]];
    }
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurantList of type {}TSRestaurantObj.");
#endif

    __child = [ENUNCIATENS0TSRestaurantObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantList of type {}TSRestaurantObj.");
#endif

    if ([self restaurantList]) {
      [self setRestaurantList: [[self restaurantList] arrayByAddingObject: __child]];
    }
    else {
      [self setRestaurantList: [NSArray arrayWithObject: __child]];
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

  if ([self recoRequestList]) {
    __enumerator = [[self recoRequestList] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoRequestList", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}recoRequestList."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}recoRequestList...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}recoRequestList...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}recoRequestList."];
      }
    } //end item iterator.
  }
  if ([self restaurantList]) {
    __enumerator = [[self restaurantList] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantList", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}restaurantList."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}restaurantList...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}restaurantList...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}restaurantList."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSRecommendationsForYouObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRecommendationsForYouObj_M */
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
#ifndef DEF_ENUNCIATENS0TSSenderUserObj_M
#define DEF_ENUNCIATENS0TSSenderUserObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSSenderUserObj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) senderUser
{
  return _senderUser;
}

/**
 * (no documentation provided)
 */
- (void) setSenderUser: (ENUNCIATENS0TSUserProfileBasicObj *) newSenderUser
{
  [newSenderUser retain];
  [_senderUser release];
  _senderUser = newSenderUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) senderUserFolloweeFlag
{
  return _senderUserFolloweeFlag;
}

/**
 * (no documentation provided)
 */
- (void) setSenderUserFolloweeFlag: (NSString *) newSenderUserFolloweeFlag
{
  [newSenderUserFolloweeFlag retain];
  [_senderUserFolloweeFlag release];
  _senderUserFolloweeFlag = newSenderUserFolloweeFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) message
{
  return _message;
}

/**
 * (no documentation provided)
 */
- (void) setMessage: (NSString *) newMessage
{
  [newMessage retain];
  [_message release];
  _message = newMessage;
}

- (void) dealloc
{
  [self setSenderUser: nil];
  [self setSenderUserFolloweeFlag: nil];
  [self setMessage: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSSenderUserObj *_eNUNCIATENS0TSSenderUserObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSSenderUserObj = (ENUNCIATENS0TSSenderUserObj *) [ENUNCIATENS0TSSenderUserObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSSenderUserObj;
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
@end /* implementation ENUNCIATENS0TSSenderUserObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSSenderUserObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSSenderUserObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSSenderUserObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSSenderUserObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSSenderUserObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSSenderUserObj *_eNUNCIATENS0TSSenderUserObj = [[ENUNCIATENS0TSSenderUserObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSSenderUserObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSSenderUserObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSSenderUserObj autorelease];
  return _eNUNCIATENS0TSSenderUserObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSSenderUserObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSSenderUserObj to the writer.
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
 * Reads a ENUNCIATENS0TSSenderUserObj from an XML reader. The element to be read is
 * "senderuser".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSSenderUserObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSSenderUserObj *_tSSenderUserObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element senderuser."];
    }
  }

  if (xmlStrcmp(BAD_CAST "senderuser", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}senderuser.");
#endif
    _tSSenderUserObj = (ENUNCIATENS0TSSenderUserObj *)[ENUNCIATENS0TSSenderUserObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}senderuser.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSenderUserObj. Expected element senderuser. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSSenderUserObj. Expected element senderuser. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSSenderUserObj;
}

/**
 * Writes this ENUNCIATENS0TSSenderUserObj to XML under element name "senderuser".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSSenderUserObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "senderuser", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}senderuser. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSSenderUserObj for root element {}senderuser...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSSenderUserObj for root element {}senderuser...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}senderuser. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "senderUser", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}senderUser of type {}TSUserProfileBasicObj.");
#endif
    __child = [ENUNCIATENS0TSUserProfileBasicObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}senderUser of type {}TSUserProfileBasicObj.");
#endif

    [self setSenderUser: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "senderUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}senderUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}senderUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSenderUserFolloweeFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "message", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMessage: __child];
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

  if ([self senderUser]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "senderUser", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}senderUser."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}senderUser...");
#endif
    [[self senderUser] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}senderUser...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}senderUser."];
    }
  }
  if ([self senderUserFolloweeFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "senderUserFolloweeFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}senderUserFolloweeFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}senderUserFolloweeFlag...");
#endif
    [[self senderUserFolloweeFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}senderUserFolloweeFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}senderUserFolloweeFlag."];
    }
  }
  if ([self message]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "message", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}message."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}message...");
#endif
    [[self message] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}message...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}message."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSSenderUserObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSSenderUserObj_M */
#ifndef DEF_ENUNCIATENS0JSONObject_M
#define DEF_ENUNCIATENS0JSONObject_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0JSONObject

- (void) dealloc
{
  [super dealloc];
}
@end /* implementation ENUNCIATENS0JSONObject */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0JSONObject (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface ENUNCIATENS0JSONObject (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0JSONObject (JAXB)

/**
 * Read an instance of ENUNCIATENS0JSONObject from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0JSONObject defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0JSONObject *_eNUNCIATENS0JSONObject = [[ENUNCIATENS0JSONObject alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0JSONObject initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0JSONObject = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0JSONObject autorelease];
  return _eNUNCIATENS0JSONObject;
}

/**
 * Initialize this instance of ENUNCIATENS0JSONObject according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0JSONObject to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
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

}
@end /* implementation ENUNCIATENS0JSONObject (JAXB) */

#endif /* DEF_ENUNCIATENS0JSONObject_M */
#ifndef DEF_ENUNCIATENS0TSRestaurantCusineTier2Obj_M
#define DEF_ENUNCIATENS0TSRestaurantCusineTier2Obj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRestaurantCusineTier2Obj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantDetailsObj *) tsRestaurantDetailsObj
{
  return _tsRestaurantDetailsObj;
}

/**
 * (no documentation provided)
 */
- (void) setTsRestaurantDetailsObj: (ENUNCIATENS0TSRestaurantDetailsObj *) newTsRestaurantDetailsObj
{
  [newTsRestaurantDetailsObj retain];
  [_tsRestaurantDetailsObj release];
  _tsRestaurantDetailsObj = newTsRestaurantDetailsObj;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSCuisineTier2Obj *) tsCuisineTier2Obj
{
  return _tsCuisineTier2Obj;
}

/**
 * (no documentation provided)
 */
- (void) setTsCuisineTier2Obj: (ENUNCIATENS0TSCuisineTier2Obj *) newTsCuisineTier2Obj
{
  [newTsCuisineTier2Obj retain];
  [_tsCuisineTier2Obj release];
  _tsCuisineTier2Obj = newTsCuisineTier2Obj;
}

- (void) dealloc
{
  [self setTsRestaurantDetailsObj: nil];
  [self setTsCuisineTier2Obj: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRestaurantCusineTier2Obj *_eNUNCIATENS0TSRestaurantCusineTier2Obj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRestaurantCusineTier2Obj = (ENUNCIATENS0TSRestaurantCusineTier2Obj *) [ENUNCIATENS0TSRestaurantCusineTier2Obj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRestaurantCusineTier2Obj;
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
@end /* implementation ENUNCIATENS0TSRestaurantCusineTier2Obj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRestaurantCusineTier2Obj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRestaurantCusineTier2Obj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRestaurantCusineTier2Obj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRestaurantCusineTier2Obj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRestaurantCusineTier2Obj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRestaurantCusineTier2Obj *_eNUNCIATENS0TSRestaurantCusineTier2Obj = [[ENUNCIATENS0TSRestaurantCusineTier2Obj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRestaurantCusineTier2Obj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRestaurantCusineTier2Obj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRestaurantCusineTier2Obj autorelease];
  return _eNUNCIATENS0TSRestaurantCusineTier2Obj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRestaurantCusineTier2Obj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRestaurantCusineTier2Obj to the writer.
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
 * Reads a ENUNCIATENS0TSRestaurantCusineTier2Obj from an XML reader. The element to be read is
 * "restaurantcuisinetier2".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRestaurantCusineTier2Obj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurantcuisinetier2."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurantcuisinetier2", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurantcuisinetier2.");
#endif
    _tSRestaurantCusineTier2Obj = (ENUNCIATENS0TSRestaurantCusineTier2Obj *)[ENUNCIATENS0TSRestaurantCusineTier2Obj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurantcuisinetier2.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantCusineTier2Obj. Expected element restaurantcuisinetier2. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantCusineTier2Obj. Expected element restaurantcuisinetier2. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRestaurantCusineTier2Obj;
}

/**
 * Writes this ENUNCIATENS0TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRestaurantCusineTier2Obj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantcuisinetier2", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurantcuisinetier2. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRestaurantCusineTier2Obj for root element {}restaurantcuisinetier2...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRestaurantCusineTier2Obj for root element {}restaurantcuisinetier2...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurantcuisinetier2. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "tsRestaurantDetailsObj", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsRestaurantDetailsObj of type {}TSRestaurantDetailsObj.");
#endif
    __child = [ENUNCIATENS0TSRestaurantDetailsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsRestaurantDetailsObj of type {}TSRestaurantDetailsObj.");
#endif

    [self setTsRestaurantDetailsObj: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "tsCuisineTier2Obj", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}tsCuisineTier2Obj of type {}TSCuisineTier2Obj.");
#endif
    __child = [ENUNCIATENS0TSCuisineTier2Obj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}tsCuisineTier2Obj of type {}TSCuisineTier2Obj.");
#endif

    [self setTsCuisineTier2Obj: __child];
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

  if ([self tsRestaurantDetailsObj]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsRestaurantDetailsObj", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsRestaurantDetailsObj."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsRestaurantDetailsObj...");
#endif
    [[self tsRestaurantDetailsObj] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsRestaurantDetailsObj...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsRestaurantDetailsObj."];
    }
  }
  if ([self tsCuisineTier2Obj]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsCuisineTier2Obj", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}tsCuisineTier2Obj."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}tsCuisineTier2Obj...");
#endif
    [[self tsCuisineTier2Obj] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}tsCuisineTier2Obj...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}tsCuisineTier2Obj."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRestaurantCusineTier2Obj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRestaurantCusineTier2Obj_M */
#ifndef DEF_ENUNCIATENS0TSRecommendeeUserObj_M
#define DEF_ENUNCIATENS0TSRecommendeeUserObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRecommendeeUserObj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) recommendeeUser
{
  return _recommendeeUser;
}

/**
 * (no documentation provided)
 */
- (void) setRecommendeeUser: (ENUNCIATENS0TSUserProfileBasicObj *) newRecommendeeUser
{
  [newRecommendeeUser retain];
  [_recommendeeUser release];
  _recommendeeUser = newRecommendeeUser;
}

/**
 * (no documentation provided)
 */
- (NSString *) replyId
{
  return _replyId;
}

/**
 * (no documentation provided)
 */
- (void) setReplyId: (NSString *) newReplyId
{
  [newReplyId retain];
  [_replyId release];
  _replyId = newReplyId;
}

/**
 * (no documentation provided)
 */
- (NSString *) replyText
{
  return _replyText;
}

/**
 * (no documentation provided)
 */
- (void) setReplyText: (NSString *) newReplyText
{
  [newReplyText retain];
  [_replyText release];
  _replyText = newReplyText;
}

/**
 * (no documentation provided)
 */
- (NSString *) addedPoints
{
  return _addedPoints;
}

/**
 * (no documentation provided)
 */
- (void) setAddedPoints: (NSString *) newAddedPoints
{
  [newAddedPoints retain];
  [_addedPoints release];
  _addedPoints = newAddedPoints;
}

- (void) dealloc
{
  [self setRecommendeeUser: nil];
  [self setReplyId: nil];
  [self setReplyText: nil];
  [self setAddedPoints: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRecommendeeUserObj *_eNUNCIATENS0TSRecommendeeUserObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRecommendeeUserObj = (ENUNCIATENS0TSRecommendeeUserObj *) [ENUNCIATENS0TSRecommendeeUserObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRecommendeeUserObj;
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
@end /* implementation ENUNCIATENS0TSRecommendeeUserObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRecommendeeUserObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRecommendeeUserObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRecommendeeUserObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRecommendeeUserObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRecommendeeUserObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRecommendeeUserObj *_eNUNCIATENS0TSRecommendeeUserObj = [[ENUNCIATENS0TSRecommendeeUserObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRecommendeeUserObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRecommendeeUserObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRecommendeeUserObj autorelease];
  return _eNUNCIATENS0TSRecommendeeUserObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRecommendeeUserObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRecommendeeUserObj to the writer.
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
 * Reads a ENUNCIATENS0TSRecommendeeUserObj from an XML reader. The element to be read is
 * "recommendeeusers".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRecommendeeUserObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRecommendeeUserObj *_tSRecommendeeUserObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element recommendeeusers."];
    }
  }

  if (xmlStrcmp(BAD_CAST "recommendeeusers", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}recommendeeusers.");
#endif
    _tSRecommendeeUserObj = (ENUNCIATENS0TSRecommendeeUserObj *)[ENUNCIATENS0TSRecommendeeUserObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}recommendeeusers.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendeeUserObj. Expected element recommendeeusers. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendeeUserObj. Expected element recommendeeusers. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRecommendeeUserObj;
}

/**
 * Writes this ENUNCIATENS0TSRecommendeeUserObj to XML under element name "recommendeeusers".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRecommendeeUserObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeusers", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}recommendeeusers. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRecommendeeUserObj for root element {}recommendeeusers...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRecommendeeUserObj for root element {}recommendeeusers...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}recommendeeusers. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "recommendeeUser", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.");
#endif
    __child = [ENUNCIATENS0TSUserProfileBasicObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}recommendeeUser of type {}TSUserProfileBasicObj.");
#endif

    [self setRecommendeeUser: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "replyId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}replyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}replyId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setReplyId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "replyText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}replyText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}replyText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setReplyText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "addedPoints", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}addedPoints of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}addedPoints of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddedPoints: __child];
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

  if ([self recommendeeUser]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUser", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}recommendeeUser."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}recommendeeUser...");
#endif
    [[self recommendeeUser] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}recommendeeUser...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}recommendeeUser."];
    }
  }
  if ([self replyId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "replyId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}replyId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}replyId...");
#endif
    [[self replyId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}replyId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}replyId."];
    }
  }
  if ([self replyText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "replyText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}replyText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}replyText...");
#endif
    [[self replyText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}replyText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}replyText."];
    }
  }
  if ([self addedPoints]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "addedPoints", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}addedPoints."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}addedPoints...");
#endif
    [[self addedPoints] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}addedPoints...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}addedPoints."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRecommendeeUserObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRecommendeeUserObj_M */
#ifndef DEF_ENUNCIATENS0TSRecommendationsFollowupObj_M
#define DEF_ENUNCIATENS0TSRecommendationsFollowupObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRecommendationsFollowupObj

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSUserProfileBasicObj *) questionUse
{
  return _questionUse;
}

/**
 * (no documentation provided)
 */
- (void) setQuestionUse: (ENUNCIATENS0TSUserProfileBasicObj *) newQuestionUse
{
  [newQuestionUse retain];
  [_questionUse release];
  _questionUse = newQuestionUse;
}

/**
 * (no documentation provided)
 */
- (NSString *) questionText
{
  return _questionText;
}

/**
 * (no documentation provided)
 */
- (void) setQuestionText: (NSString *) newQuestionText
{
  [newQuestionText retain];
  [_questionText release];
  _questionText = newQuestionText;
}

/**
 * (no documentation provided)
 */
- (NSString *) questionUserFolloweeFlag
{
  return _questionUserFolloweeFlag;
}

/**
 * (no documentation provided)
 */
- (void) setQuestionUserFolloweeFlag: (NSString *) newQuestionUserFolloweeFlag
{
  [newQuestionUserFolloweeFlag retain];
  [_questionUserFolloweeFlag release];
  _questionUserFolloweeFlag = newQuestionUserFolloweeFlag;
}

/**
 * (no documentation provided)
 */
- (ENUNCIATENS0TSRestaurantObj *) restaurant
{
  return _restaurant;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurant: (ENUNCIATENS0TSRestaurantObj *) newRestaurant
{
  [newRestaurant retain];
  [_restaurant release];
  _restaurant = newRestaurant;
}

- (void) dealloc
{
  [self setQuestionUse: nil];
  [self setQuestionText: nil];
  [self setQuestionUserFolloweeFlag: nil];
  [self setRestaurant: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRecommendationsFollowupObj *_eNUNCIATENS0TSRecommendationsFollowupObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRecommendationsFollowupObj = (ENUNCIATENS0TSRecommendationsFollowupObj *) [ENUNCIATENS0TSRecommendationsFollowupObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRecommendationsFollowupObj;
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
@end /* implementation ENUNCIATENS0TSRecommendationsFollowupObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRecommendationsFollowupObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRecommendationsFollowupObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRecommendationsFollowupObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRecommendationsFollowupObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRecommendationsFollowupObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRecommendationsFollowupObj *_eNUNCIATENS0TSRecommendationsFollowupObj = [[ENUNCIATENS0TSRecommendationsFollowupObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRecommendationsFollowupObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRecommendationsFollowupObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRecommendationsFollowupObj autorelease];
  return _eNUNCIATENS0TSRecommendationsFollowupObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRecommendationsFollowupObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRecommendationsFollowupObj to the writer.
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
 * Reads a ENUNCIATENS0TSRecommendationsFollowupObj from an XML reader. The element to be read is
 * "recosfollowup".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRecommendationsFollowupObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element recosfollowup."];
    }
  }

  if (xmlStrcmp(BAD_CAST "recosfollowup", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}recosfollowup.");
#endif
    _tSRecommendationsFollowupObj = (ENUNCIATENS0TSRecommendationsFollowupObj *)[ENUNCIATENS0TSRecommendationsFollowupObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}recosfollowup.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendationsFollowupObj. Expected element recosfollowup. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRecommendationsFollowupObj. Expected element recosfollowup. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRecommendationsFollowupObj;
}

/**
 * Writes this ENUNCIATENS0TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRecommendationsFollowupObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recosfollowup", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}recosfollowup. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRecommendationsFollowupObj for root element {}recosfollowup...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRecommendationsFollowupObj for root element {}recosfollowup...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}recosfollowup. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "questionUse", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}questionUse of type {}TSUserProfileBasicObj.");
#endif
    __child = [ENUNCIATENS0TSUserProfileBasicObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}questionUse of type {}TSUserProfileBasicObj.");
#endif

    [self setQuestionUse: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "questionText", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}questionText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}questionText of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setQuestionText: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "questionUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}questionUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}questionUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setQuestionUserFolloweeFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurant", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}restaurant of type {}TSRestaurantObj.");
#endif
    __child = [ENUNCIATENS0TSRestaurantObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurant of type {}TSRestaurantObj.");
#endif

    [self setRestaurant: __child];
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

  if ([self questionUse]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionUse", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}questionUse."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}questionUse...");
#endif
    [[self questionUse] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}questionUse...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}questionUse."];
    }
  }
  if ([self questionText]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionText", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}questionText."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}questionText...");
#endif
    [[self questionText] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}questionText...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}questionText."];
    }
  }
  if ([self questionUserFolloweeFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionUserFolloweeFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}questionUserFolloweeFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}questionUserFolloweeFlag...");
#endif
    [[self questionUserFolloweeFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}questionUserFolloweeFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}questionUserFolloweeFlag."];
    }
  }
  if ([self restaurant]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurant", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}restaurant."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}restaurant...");
#endif
    [[self restaurant] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}restaurant...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}restaurant."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRecommendationsFollowupObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRecommendationsFollowupObj_M */
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
- (ENUNCIATENS0TSCityObj *) restaurantCity
{
  return _restaurantCity;
}

/**
 * (no documentation provided)
 */
- (void) setRestaurantCity: (ENUNCIATENS0TSCityObj *) newRestaurantCity
{
  [newRestaurantCity retain];
  [_restaurantCity release];
  _restaurantCity = newRestaurantCity;
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
    NSLog(@"Attempting to read choice {}restaurantCity of type {}TSCityObj.");
#endif
    __child = [ENUNCIATENS0TSCityObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}restaurantCity of type {}TSCityObj.");
#endif

    [self setRestaurantCity: __child];
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
#ifndef DEF_ENUNCIATENS0TSUserProfileBasicObj_M
#define DEF_ENUNCIATENS0TSUserProfileBasicObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSUserProfileBasicObj

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
  ENUNCIATENS0TSUserProfileBasicObj *_eNUNCIATENS0TSUserProfileBasicObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSUserProfileBasicObj = (ENUNCIATENS0TSUserProfileBasicObj *) [ENUNCIATENS0TSUserProfileBasicObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSUserProfileBasicObj;
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
@end /* implementation ENUNCIATENS0TSUserProfileBasicObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSUserProfileBasicObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSUserProfileBasicObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSUserProfileBasicObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSUserProfileBasicObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSUserProfileBasicObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSUserProfileBasicObj *_eNUNCIATENS0TSUserProfileBasicObj = [[ENUNCIATENS0TSUserProfileBasicObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSUserProfileBasicObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSUserProfileBasicObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSUserProfileBasicObj autorelease];
  return _eNUNCIATENS0TSUserProfileBasicObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSUserProfileBasicObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSUserProfileBasicObj to the writer.
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
 * Reads a ENUNCIATENS0TSUserProfileBasicObj from an XML reader. The element to be read is
 * "userprofilebasic".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSUserProfileBasicObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSUserProfileBasicObj *_tSUserProfileBasicObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element userprofilebasic."];
    }
  }

  if (xmlStrcmp(BAD_CAST "userprofilebasic", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}userprofilebasic.");
#endif
    _tSUserProfileBasicObj = (ENUNCIATENS0TSUserProfileBasicObj *)[ENUNCIATENS0TSUserProfileBasicObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}userprofilebasic.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserProfileBasicObj. Expected element userprofilebasic. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSUserProfileBasicObj. Expected element userprofilebasic. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSUserProfileBasicObj;
}

/**
 * Writes this ENUNCIATENS0TSUserProfileBasicObj to XML under element name "userprofilebasic".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSUserProfileBasicObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userprofilebasic", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}userprofilebasic. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSUserProfileBasicObj for root element {}userprofilebasic...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSUserProfileBasicObj for root element {}userprofilebasic...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}userprofilebasic. XML writer status: %i\n", rc];
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
@end /* implementation ENUNCIATENS0TSUserProfileBasicObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSUserProfileBasicObj_M */
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
#ifndef DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_M
#define DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSSocialAutoPubSettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) usncORDER
{
  return _usncORDER;
}

/**
 * (no documentation provided)
 */
- (void) setUsncORDER: (NSString *) newUsncORDER
{
  [newUsncORDER retain];
  [_usncORDER release];
  _usncORDER = newUsncORDER;
}

/**
 * (no documentation provided)
 */
- (NSString *) usncYN
{
  return _usncYN;
}

/**
 * (no documentation provided)
 */
- (void) setUsncYN: (NSString *) newUsncYN
{
  [newUsncYN retain];
  [_usncYN release];
  _usncYN = newUsncYN;
}

- (void) dealloc
{
  [self setUsncORDER: nil];
  [self setUsncYN: nil];
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
    && xmlStrcmp(BAD_CAST "usncORDER", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsncORDER: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "usncYN", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUsncYN: __child];
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

  if ([self usncORDER]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncORDER", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}usncORDER."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}usncORDER...");
#endif
    [[self usncORDER] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}usncORDER...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}usncORDER."];
    }
  }
  if ([self usncYN]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncYN", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}usncYN."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}usncYN...");
#endif
    [[self usncYN] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}usncYN...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}usncYN."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSSocialAutoPubSettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSSocialAutoPubSettingsObj_M */
#ifndef DEF_ENUNCIATENS0TSRestaurantPhotoObj_M
#define DEF_ENUNCIATENS0TSRestaurantPhotoObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRestaurantPhotoObj

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
- (NSString *) photoId
{
  return _photoId;
}

/**
 * (no documentation provided)
 */
- (void) setPhotoId: (NSString *) newPhotoId
{
  [newPhotoId retain];
  [_photoId release];
  _photoId = newPhotoId;
}

/**
 * (no documentation provided)
 */
- (NSString *) prefix
{
  return _prefix;
}

/**
 * (no documentation provided)
 */
- (void) setPrefix: (NSString *) newPrefix
{
  [newPrefix retain];
  [_prefix release];
  _prefix = newPrefix;
}

/**
 * (no documentation provided)
 */
- (NSString *) suffix
{
  return _suffix;
}

/**
 * (no documentation provided)
 */
- (void) setSuffix: (NSString *) newSuffix
{
  [newSuffix retain];
  [_suffix release];
  _suffix = newSuffix;
}

/**
 * (no documentation provided)
 */
- (NSString *) width
{
  return _width;
}

/**
 * (no documentation provided)
 */
- (void) setWidth: (NSString *) newWidth
{
  [newWidth retain];
  [_width release];
  _width = newWidth;
}

/**
 * (no documentation provided)
 */
- (NSString *) height
{
  return _height;
}

/**
 * (no documentation provided)
 */
- (void) setHeight: (NSString *) newHeight
{
  [newHeight retain];
  [_height release];
  _height = newHeight;
}

/**
 * (no documentation provided)
 */
- (NSString *) ultimateSourceName
{
  return _ultimateSourceName;
}

/**
 * (no documentation provided)
 */
- (void) setUltimateSourceName: (NSString *) newUltimateSourceName
{
  [newUltimateSourceName retain];
  [_ultimateSourceName release];
  _ultimateSourceName = newUltimateSourceName;
}

/**
 * (no documentation provided)
 */
- (NSString *) ultimateSourceUrl
{
  return _ultimateSourceUrl;
}

/**
 * (no documentation provided)
 */
- (void) setUltimateSourceUrl: (NSString *) newUltimateSourceUrl
{
  [newUltimateSourceUrl retain];
  [_ultimateSourceUrl release];
  _ultimateSourceUrl = newUltimateSourceUrl;
}

/**
 * (no documentation provided)
 */
- (NSString *) photoSource
{
  return _photoSource;
}

/**
 * (no documentation provided)
 */
- (void) setPhotoSource: (NSString *) newPhotoSource
{
  [newPhotoSource retain];
  [_photoSource release];
  _photoSource = newPhotoSource;
}

- (void) dealloc
{
  [self setRestaurantId: nil];
  [self setPhotoId: nil];
  [self setPrefix: nil];
  [self setSuffix: nil];
  [self setWidth: nil];
  [self setHeight: nil];
  [self setUltimateSourceName: nil];
  [self setUltimateSourceUrl: nil];
  [self setPhotoSource: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRestaurantPhotoObj *_eNUNCIATENS0TSRestaurantPhotoObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRestaurantPhotoObj = (ENUNCIATENS0TSRestaurantPhotoObj *) [ENUNCIATENS0TSRestaurantPhotoObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRestaurantPhotoObj;
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
@end /* implementation ENUNCIATENS0TSRestaurantPhotoObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRestaurantPhotoObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRestaurantPhotoObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRestaurantPhotoObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRestaurantPhotoObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRestaurantPhotoObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRestaurantPhotoObj *_eNUNCIATENS0TSRestaurantPhotoObj = [[ENUNCIATENS0TSRestaurantPhotoObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRestaurantPhotoObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRestaurantPhotoObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRestaurantPhotoObj autorelease];
  return _eNUNCIATENS0TSRestaurantPhotoObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRestaurantPhotoObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRestaurantPhotoObj to the writer.
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
 * Reads a ENUNCIATENS0TSRestaurantPhotoObj from an XML reader. The element to be read is
 * "restaurantphoto".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRestaurantPhotoObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRestaurantPhotoObj *_tSRestaurantPhotoObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurantphoto."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurantphoto", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurantphoto.");
#endif
    _tSRestaurantPhotoObj = (ENUNCIATENS0TSRestaurantPhotoObj *)[ENUNCIATENS0TSRestaurantPhotoObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurantphoto.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantPhotoObj. Expected element restaurantphoto. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantPhotoObj. Expected element restaurantphoto. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRestaurantPhotoObj;
}

/**
 * Writes this ENUNCIATENS0TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRestaurantPhotoObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantphoto", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurantphoto. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRestaurantPhotoObj for root element {}restaurantphoto...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRestaurantPhotoObj for root element {}restaurantphoto...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurantphoto. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "photoId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photoId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photoId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhotoId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "prefix", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}prefix of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}prefix of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPrefix: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "suffix", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}suffix of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}suffix of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSuffix: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "width", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}width of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}width of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setWidth: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "height", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setHeight: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ultimateSourceName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ultimateSourceName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ultimateSourceName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUltimateSourceName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "ultimateSourceUrl", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}ultimateSourceUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}ultimateSourceUrl of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setUltimateSourceUrl: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photoSource", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}photoSource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}photoSource of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhotoSource: __child];
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
  if ([self photoId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}photoId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}photoId...");
#endif
    [[self photoId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}photoId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}photoId."];
    }
  }
  if ([self prefix]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "prefix", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}prefix."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}prefix...");
#endif
    [[self prefix] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}prefix...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}prefix."];
    }
  }
  if ([self suffix]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "suffix", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}suffix."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}suffix...");
#endif
    [[self suffix] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}suffix...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}suffix."];
    }
  }
  if ([self width]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "width", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}width."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}width...");
#endif
    [[self width] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}width...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}width."];
    }
  }
  if ([self height]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "height", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}height."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}height...");
#endif
    [[self height] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}height...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}height."];
    }
  }
  if ([self ultimateSourceName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ultimateSourceName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ultimateSourceName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ultimateSourceName...");
#endif
    [[self ultimateSourceName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ultimateSourceName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ultimateSourceName."];
    }
  }
  if ([self ultimateSourceUrl]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ultimateSourceUrl", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}ultimateSourceUrl."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}ultimateSourceUrl...");
#endif
    [[self ultimateSourceUrl] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}ultimateSourceUrl...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}ultimateSourceUrl."];
    }
  }
  if ([self photoSource]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoSource", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}photoSource."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}photoSource...");
#endif
    [[self photoSource] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}photoSource...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}photoSource."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRestaurantPhotoObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRestaurantPhotoObj_M */
#ifndef DEF_ENUNCIATENS0TSRestaurantExtendInfoObj_M
#define DEF_ENUNCIATENS0TSRestaurantExtendInfoObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSRestaurantExtendInfoObj

/**
 * (no documentation provided)
 */
- (NSString *) phoneNumber
{
  return _phoneNumber;
}

/**
 * (no documentation provided)
 */
- (void) setPhoneNumber: (NSString *) newPhoneNumber
{
  [newPhoneNumber retain];
  [_phoneNumber release];
  _phoneNumber = newPhoneNumber;
}

/**
 * (no documentation provided)
 */
- (NSString *) website
{
  return _website;
}

/**
 * (no documentation provided)
 */
- (void) setWebsite: (NSString *) newWebsite
{
  [newWebsite retain];
  [_website release];
  _website = newWebsite;
}

/**
 * (no documentation provided)
 */
- (NSString *) healthyOptionsFlag
{
  return _healthyOptionsFlag;
}

/**
 * (no documentation provided)
 */
- (void) setHealthyOptionsFlag: (NSString *) newHealthyOptionsFlag
{
  [newHealthyOptionsFlag retain];
  [_healthyOptionsFlag release];
  _healthyOptionsFlag = newHealthyOptionsFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) wifiFlag
{
  return _wifiFlag;
}

/**
 * (no documentation provided)
 */
- (void) setWifiFlag: (NSString *) newWifiFlag
{
  [newWifiFlag retain];
  [_wifiFlag release];
  _wifiFlag = newWifiFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) payCashonlyFlag
{
  return _payCashonlyFlag;
}

/**
 * (no documentation provided)
 */
- (void) setPayCashonlyFlag: (NSString *) newPayCashonlyFlag
{
  [newPayCashonlyFlag retain];
  [_payCashonlyFlag release];
  _payCashonlyFlag = newPayCashonlyFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) reservationsFlag
{
  return _reservationsFlag;
}

/**
 * (no documentation provided)
 */
- (void) setReservationsFlag: (NSString *) newReservationsFlag
{
  [newReservationsFlag retain];
  [_reservationsFlag release];
  _reservationsFlag = newReservationsFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) open24HoursFlag
{
  return _open24HoursFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOpen24HoursFlag: (NSString *) newOpen24HoursFlag
{
  [newOpen24HoursFlag retain];
  [_open24HoursFlag release];
  _open24HoursFlag = newOpen24HoursFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) attire
{
  return _attire;
}

/**
 * (no documentation provided)
 */
- (void) setAttire: (NSString *) newAttire
{
  [newAttire retain];
  [_attire release];
  _attire = newAttire;
}

/**
 * (no documentation provided)
 */
- (NSString *) attireRequiredList
{
  return _attireRequiredList;
}

/**
 * (no documentation provided)
 */
- (void) setAttireRequiredList: (NSString *) newAttireRequiredList
{
  [newAttireRequiredList retain];
  [_attireRequiredList release];
  _attireRequiredList = newAttireRequiredList;
}

/**
 * (no documentation provided)
 */
- (NSString *) attireProhibitedList
{
  return _attireProhibitedList;
}

/**
 * (no documentation provided)
 */
- (void) setAttireProhibitedList: (NSString *) newAttireProhibitedList
{
  [newAttireProhibitedList retain];
  [_attireProhibitedList release];
  _attireProhibitedList = newAttireProhibitedList;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingFlag
{
  return _parkingFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingFlag: (NSString *) newParkingFlag
{
  [newParkingFlag retain];
  [_parkingFlag release];
  _parkingFlag = newParkingFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingValetFlag
{
  return _parkingValetFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingValetFlag: (NSString *) newParkingValetFlag
{
  [newParkingValetFlag retain];
  [_parkingValetFlag release];
  _parkingValetFlag = newParkingValetFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingFreeFlag
{
  return _parkingFreeFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingFreeFlag: (NSString *) newParkingFreeFlag
{
  [newParkingFreeFlag retain];
  [_parkingFreeFlag release];
  _parkingFreeFlag = newParkingFreeFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingGarageFlag
{
  return _parkingGarageFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingGarageFlag: (NSString *) newParkingGarageFlag
{
  [newParkingGarageFlag retain];
  [_parkingGarageFlag release];
  _parkingGarageFlag = newParkingGarageFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingLotFlag
{
  return _parkingLotFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingLotFlag: (NSString *) newParkingLotFlag
{
  [newParkingLotFlag retain];
  [_parkingLotFlag release];
  _parkingLotFlag = newParkingLotFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingStreetFlag
{
  return _parkingStreetFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingStreetFlag: (NSString *) newParkingStreetFlag
{
  [newParkingStreetFlag retain];
  [_parkingStreetFlag release];
  _parkingStreetFlag = newParkingStreetFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) parkingValidatedFlag
{
  return _parkingValidatedFlag;
}

/**
 * (no documentation provided)
 */
- (void) setParkingValidatedFlag: (NSString *) newParkingValidatedFlag
{
  [newParkingValidatedFlag retain];
  [_parkingValidatedFlag release];
  _parkingValidatedFlag = newParkingValidatedFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) smokingFlag
{
  return _smokingFlag;
}

/**
 * (no documentation provided)
 */
- (void) setSmokingFlag: (NSString *) newSmokingFlag
{
  [newSmokingFlag retain];
  [_smokingFlag release];
  _smokingFlag = newSmokingFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) accessibleWheelchairFlag
{
  return _accessibleWheelchairFlag;
}

/**
 * (no documentation provided)
 */
- (void) setAccessibleWheelchairFlag: (NSString *) newAccessibleWheelchairFlag
{
  [newAccessibleWheelchairFlag retain];
  [_accessibleWheelchairFlag release];
  _accessibleWheelchairFlag = newAccessibleWheelchairFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) alcoholFlag
{
  return _alcoholFlag;
}

/**
 * (no documentation provided)
 */
- (void) setAlcoholFlag: (NSString *) newAlcoholFlag
{
  [newAlcoholFlag retain];
  [_alcoholFlag release];
  _alcoholFlag = newAlcoholFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) alcoholBarFlag
{
  return _alcoholBarFlag;
}

/**
 * (no documentation provided)
 */
- (void) setAlcoholBarFlag: (NSString *) newAlcoholBarFlag
{
  [newAlcoholBarFlag retain];
  [_alcoholBarFlag release];
  _alcoholBarFlag = newAlcoholBarFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) alcoholBeerWineFlag
{
  return _alcoholBeerWineFlag;
}

/**
 * (no documentation provided)
 */
- (void) setAlcoholBeerWineFlag: (NSString *) newAlcoholBeerWineFlag
{
  [newAlcoholBeerWineFlag retain];
  [_alcoholBeerWineFlag release];
  _alcoholBeerWineFlag = newAlcoholBeerWineFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) alcoholByobFlag
{
  return _alcoholByobFlag;
}

/**
 * (no documentation provided)
 */
- (void) setAlcoholByobFlag: (NSString *) newAlcoholByobFlag
{
  [newAlcoholByobFlag retain];
  [_alcoholByobFlag release];
  _alcoholByobFlag = newAlcoholByobFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) groupsGoodForFlag
{
  return _groupsGoodForFlag;
}

/**
 * (no documentation provided)
 */
- (void) setGroupsGoodForFlag: (NSString *) newGroupsGoodForFlag
{
  [newGroupsGoodForFlag retain];
  [_groupsGoodForFlag release];
  _groupsGoodForFlag = newGroupsGoodForFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) kidsGoodForFlag
{
  return _kidsGoodForFlag;
}

/**
 * (no documentation provided)
 */
- (void) setKidsGoodForFlag: (NSString *) newKidsGoodForFlag
{
  [newKidsGoodForFlag retain];
  [_kidsGoodForFlag release];
  _kidsGoodForFlag = newKidsGoodForFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) kidsMenuFlag
{
  return _kidsMenuFlag;
}

/**
 * (no documentation provided)
 */
- (void) setKidsMenuFlag: (NSString *) newKidsMenuFlag
{
  [newKidsMenuFlag retain];
  [_kidsMenuFlag release];
  _kidsMenuFlag = newKidsMenuFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) mealBreakfastFlag
{
  return _mealBreakfastFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMealBreakfastFlag: (NSString *) newMealBreakfastFlag
{
  [newMealBreakfastFlag retain];
  [_mealBreakfastFlag release];
  _mealBreakfastFlag = newMealBreakfastFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) mealCaterFlag
{
  return _mealCaterFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMealCaterFlag: (NSString *) newMealCaterFlag
{
  [newMealCaterFlag retain];
  [_mealCaterFlag release];
  _mealCaterFlag = newMealCaterFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) mealDeliverFlag
{
  return _mealDeliverFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMealDeliverFlag: (NSString *) newMealDeliverFlag
{
  [newMealDeliverFlag retain];
  [_mealDeliverFlag release];
  _mealDeliverFlag = newMealDeliverFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) mealDinnerFlag
{
  return _mealDinnerFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMealDinnerFlag: (NSString *) newMealDinnerFlag
{
  [newMealDinnerFlag retain];
  [_mealDinnerFlag release];
  _mealDinnerFlag = newMealDinnerFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) mealLunchFlag
{
  return _mealLunchFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMealLunchFlag: (NSString *) newMealLunchFlag
{
  [newMealLunchFlag retain];
  [_mealLunchFlag release];
  _mealLunchFlag = newMealLunchFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) mealTakeoutFlag
{
  return _mealTakeoutFlag;
}

/**
 * (no documentation provided)
 */
- (void) setMealTakeoutFlag: (NSString *) newMealTakeoutFlag
{
  [newMealTakeoutFlag retain];
  [_mealTakeoutFlag release];
  _mealTakeoutFlag = newMealTakeoutFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) optionsGlutenfreeFlag
{
  return _optionsGlutenfreeFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOptionsGlutenfreeFlag: (NSString *) newOptionsGlutenfreeFlag
{
  [newOptionsGlutenfreeFlag retain];
  [_optionsGlutenfreeFlag release];
  _optionsGlutenfreeFlag = newOptionsGlutenfreeFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) optionsLowfatFlag
{
  return _optionsLowfatFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOptionsLowfatFlag: (NSString *) newOptionsLowfatFlag
{
  [newOptionsLowfatFlag retain];
  [_optionsLowfatFlag release];
  _optionsLowfatFlag = newOptionsLowfatFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) optionsOrganicFlag
{
  return _optionsOrganicFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOptionsOrganicFlag: (NSString *) newOptionsOrganicFlag
{
  [newOptionsOrganicFlag retain];
  [_optionsOrganicFlag release];
  _optionsOrganicFlag = newOptionsOrganicFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) optionsVeganFlag
{
  return _optionsVeganFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOptionsVeganFlag: (NSString *) newOptionsVeganFlag
{
  [newOptionsVeganFlag retain];
  [_optionsVeganFlag release];
  _optionsVeganFlag = newOptionsVeganFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) optionsVegetarianFlag
{
  return _optionsVegetarianFlag;
}

/**
 * (no documentation provided)
 */
- (void) setOptionsVegetarianFlag: (NSString *) newOptionsVegetarianFlag
{
  [newOptionsVegetarianFlag retain];
  [_optionsVegetarianFlag release];
  _optionsVegetarianFlag = newOptionsVegetarianFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) roomPrivateFlag
{
  return _roomPrivateFlag;
}

/**
 * (no documentation provided)
 */
- (void) setRoomPrivateFlag: (NSString *) newRoomPrivateFlag
{
  [newRoomPrivateFlag retain];
  [_roomPrivateFlag release];
  _roomPrivateFlag = newRoomPrivateFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) seatingOutdoorFlag
{
  return _seatingOutdoorFlag;
}

/**
 * (no documentation provided)
 */
- (void) setSeatingOutdoorFlag: (NSString *) newSeatingOutdoorFlag
{
  [newSeatingOutdoorFlag retain];
  [_seatingOutdoorFlag release];
  _seatingOutdoorFlag = newSeatingOutdoorFlag;
}

/**
 * (no documentation provided)
 */
- (NSString *) address
{
  return _address;
}

/**
 * (no documentation provided)
 */
- (void) setAddress: (NSString *) newAddress
{
  [newAddress retain];
  [_address release];
  _address = newAddress;
}

/**
 * (no documentation provided)
 */
- (NSString *) lat
{
  return _lat;
}

/**
 * (no documentation provided)
 */
- (void) setLat: (NSString *) newLat
{
  [newLat retain];
  [_lat release];
  _lat = newLat;
}

/**
 * (no documentation provided)
 */
- (NSString *) lon
{
  return _lon;
}

/**
 * (no documentation provided)
 */
- (void) setLon: (NSString *) newLon
{
  [newLon retain];
  [_lon release];
  _lon = newLon;
}

- (void) dealloc
{
  [self setPhoneNumber: nil];
  [self setWebsite: nil];
  [self setHealthyOptionsFlag: nil];
  [self setWifiFlag: nil];
  [self setPayCashonlyFlag: nil];
  [self setReservationsFlag: nil];
  [self setOpen24HoursFlag: nil];
  [self setAttire: nil];
  [self setAttireRequiredList: nil];
  [self setAttireProhibitedList: nil];
  [self setParkingFlag: nil];
  [self setParkingValetFlag: nil];
  [self setParkingFreeFlag: nil];
  [self setParkingGarageFlag: nil];
  [self setParkingLotFlag: nil];
  [self setParkingStreetFlag: nil];
  [self setParkingValidatedFlag: nil];
  [self setSmokingFlag: nil];
  [self setAccessibleWheelchairFlag: nil];
  [self setAlcoholFlag: nil];
  [self setAlcoholBarFlag: nil];
  [self setAlcoholBeerWineFlag: nil];
  [self setAlcoholByobFlag: nil];
  [self setGroupsGoodForFlag: nil];
  [self setKidsGoodForFlag: nil];
  [self setKidsMenuFlag: nil];
  [self setMealBreakfastFlag: nil];
  [self setMealCaterFlag: nil];
  [self setMealDeliverFlag: nil];
  [self setMealDinnerFlag: nil];
  [self setMealLunchFlag: nil];
  [self setMealTakeoutFlag: nil];
  [self setOptionsGlutenfreeFlag: nil];
  [self setOptionsLowfatFlag: nil];
  [self setOptionsOrganicFlag: nil];
  [self setOptionsVeganFlag: nil];
  [self setOptionsVegetarianFlag: nil];
  [self setRoomPrivateFlag: nil];
  [self setSeatingOutdoorFlag: nil];
  [self setAddress: nil];
  [self setLat: nil];
  [self setLon: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSRestaurantExtendInfoObj *_eNUNCIATENS0TSRestaurantExtendInfoObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSRestaurantExtendInfoObj = (ENUNCIATENS0TSRestaurantExtendInfoObj *) [ENUNCIATENS0TSRestaurantExtendInfoObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSRestaurantExtendInfoObj;
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
@end /* implementation ENUNCIATENS0TSRestaurantExtendInfoObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSRestaurantExtendInfoObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSRestaurantExtendInfoObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSRestaurantExtendInfoObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSRestaurantExtendInfoObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSRestaurantExtendInfoObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSRestaurantExtendInfoObj *_eNUNCIATENS0TSRestaurantExtendInfoObj = [[ENUNCIATENS0TSRestaurantExtendInfoObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSRestaurantExtendInfoObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSRestaurantExtendInfoObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSRestaurantExtendInfoObj autorelease];
  return _eNUNCIATENS0TSRestaurantExtendInfoObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSRestaurantExtendInfoObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSRestaurantExtendInfoObj to the writer.
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
 * Reads a ENUNCIATENS0TSRestaurantExtendInfoObj from an XML reader. The element to be read is
 * "restaurantextendedinfo".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSRestaurantExtendInfoObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element restaurantextendedinfo."];
    }
  }

  if (xmlStrcmp(BAD_CAST "restaurantextendedinfo", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}restaurantextendedinfo.");
#endif
    _tSRestaurantExtendInfoObj = (ENUNCIATENS0TSRestaurantExtendInfoObj *)[ENUNCIATENS0TSRestaurantExtendInfoObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}restaurantextendedinfo.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantExtendInfoObj. Expected element restaurantextendedinfo. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSRestaurantExtendInfoObj. Expected element restaurantextendedinfo. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSRestaurantExtendInfoObj;
}

/**
 * Writes this ENUNCIATENS0TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSRestaurantExtendInfoObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantextendedinfo", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}restaurantextendedinfo. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSRestaurantExtendInfoObj for root element {}restaurantextendedinfo...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSRestaurantExtendInfoObj for root element {}restaurantextendedinfo...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}restaurantextendedinfo. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "phoneNumber", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}phoneNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}phoneNumber of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPhoneNumber: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "website", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}website of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}website of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setWebsite: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "healthyOptionsFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}healthyOptionsFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}healthyOptionsFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setHealthyOptionsFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "wifiFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}wifiFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}wifiFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setWifiFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "payCashonlyFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}payCashonlyFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}payCashonlyFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPayCashonlyFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "reservationsFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}reservationsFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}reservationsFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setReservationsFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "open24HoursFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}open24HoursFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}open24HoursFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOpen24HoursFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "attire", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}attire of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}attire of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAttire: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "attireRequiredList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}attireRequiredList of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}attireRequiredList of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAttireRequiredList: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "attireProhibitedList", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}attireProhibitedList of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}attireProhibitedList of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAttireProhibitedList: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingValetFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingValetFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingValetFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingValetFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingFreeFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingFreeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingFreeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingFreeFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingGarageFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingGarageFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingGarageFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingGarageFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingLotFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingLotFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingLotFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingLotFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingStreetFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingStreetFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingStreetFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingStreetFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "parkingValidatedFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}parkingValidatedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}parkingValidatedFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setParkingValidatedFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "smokingFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}smokingFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}smokingFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSmokingFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "accessibleWheelchairFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}accessibleWheelchairFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}accessibleWheelchairFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAccessibleWheelchairFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "alcoholFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}alcoholFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}alcoholFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAlcoholFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "alcoholBarFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}alcoholBarFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}alcoholBarFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAlcoholBarFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "alcoholBeerWineFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}alcoholBeerWineFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}alcoholBeerWineFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAlcoholBeerWineFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "alcoholByobFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}alcoholByobFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}alcoholByobFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAlcoholByobFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "groupsGoodForFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}groupsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}groupsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setGroupsGoodForFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "kidsGoodForFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}kidsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}kidsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setKidsGoodForFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "kidsMenuFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}kidsMenuFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}kidsMenuFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setKidsMenuFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mealBreakfastFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mealBreakfastFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mealBreakfastFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMealBreakfastFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mealCaterFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mealCaterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mealCaterFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMealCaterFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mealDeliverFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mealDeliverFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mealDeliverFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMealDeliverFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mealDinnerFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mealDinnerFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mealDinnerFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMealDinnerFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mealLunchFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mealLunchFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mealLunchFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMealLunchFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "mealTakeoutFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}mealTakeoutFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}mealTakeoutFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setMealTakeoutFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "optionsGlutenfreeFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}optionsGlutenfreeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}optionsGlutenfreeFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOptionsGlutenfreeFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "optionsLowfatFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}optionsLowfatFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}optionsLowfatFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOptionsLowfatFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "optionsOrganicFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}optionsOrganicFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}optionsOrganicFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOptionsOrganicFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "optionsVeganFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}optionsVeganFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}optionsVeganFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOptionsVeganFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "optionsVegetarianFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}optionsVegetarianFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}optionsVegetarianFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOptionsVegetarianFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "roomPrivateFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}roomPrivateFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}roomPrivateFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setRoomPrivateFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "seatingOutdoorFlag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}seatingOutdoorFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}seatingOutdoorFlag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setSeatingOutdoorFlag: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setAddress: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lat", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lat of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lat of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLat: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "lon", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}lon of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}lon of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setLon: __child];
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

  if ([self phoneNumber]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phoneNumber", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}phoneNumber."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}phoneNumber...");
#endif
    [[self phoneNumber] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}phoneNumber...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}phoneNumber."];
    }
  }
  if ([self website]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "website", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}website."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}website...");
#endif
    [[self website] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}website...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}website."];
    }
  }
  if ([self healthyOptionsFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "healthyOptionsFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}healthyOptionsFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}healthyOptionsFlag...");
#endif
    [[self healthyOptionsFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}healthyOptionsFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}healthyOptionsFlag."];
    }
  }
  if ([self wifiFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "wifiFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}wifiFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}wifiFlag...");
#endif
    [[self wifiFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}wifiFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}wifiFlag."];
    }
  }
  if ([self payCashonlyFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "payCashonlyFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}payCashonlyFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}payCashonlyFlag...");
#endif
    [[self payCashonlyFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}payCashonlyFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}payCashonlyFlag."];
    }
  }
  if ([self reservationsFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "reservationsFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}reservationsFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}reservationsFlag...");
#endif
    [[self reservationsFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}reservationsFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}reservationsFlag."];
    }
  }
  if ([self open24HoursFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "open24HoursFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}open24HoursFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}open24HoursFlag...");
#endif
    [[self open24HoursFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}open24HoursFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}open24HoursFlag."];
    }
  }
  if ([self attire]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "attire", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}attire."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}attire...");
#endif
    [[self attire] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}attire...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}attire."];
    }
  }
  if ([self attireRequiredList]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "attireRequiredList", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}attireRequiredList."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}attireRequiredList...");
#endif
    [[self attireRequiredList] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}attireRequiredList...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}attireRequiredList."];
    }
  }
  if ([self attireProhibitedList]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "attireProhibitedList", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}attireProhibitedList."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}attireProhibitedList...");
#endif
    [[self attireProhibitedList] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}attireProhibitedList...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}attireProhibitedList."];
    }
  }
  if ([self parkingFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingFlag...");
#endif
    [[self parkingFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingFlag."];
    }
  }
  if ([self parkingValetFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingValetFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingValetFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingValetFlag...");
#endif
    [[self parkingValetFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingValetFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingValetFlag."];
    }
  }
  if ([self parkingFreeFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingFreeFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingFreeFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingFreeFlag...");
#endif
    [[self parkingFreeFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingFreeFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingFreeFlag."];
    }
  }
  if ([self parkingGarageFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingGarageFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingGarageFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingGarageFlag...");
#endif
    [[self parkingGarageFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingGarageFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingGarageFlag."];
    }
  }
  if ([self parkingLotFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingLotFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingLotFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingLotFlag...");
#endif
    [[self parkingLotFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingLotFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingLotFlag."];
    }
  }
  if ([self parkingStreetFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingStreetFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingStreetFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingStreetFlag...");
#endif
    [[self parkingStreetFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingStreetFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingStreetFlag."];
    }
  }
  if ([self parkingValidatedFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingValidatedFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}parkingValidatedFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}parkingValidatedFlag...");
#endif
    [[self parkingValidatedFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}parkingValidatedFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}parkingValidatedFlag."];
    }
  }
  if ([self smokingFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "smokingFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}smokingFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}smokingFlag...");
#endif
    [[self smokingFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}smokingFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}smokingFlag."];
    }
  }
  if ([self accessibleWheelchairFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "accessibleWheelchairFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}accessibleWheelchairFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}accessibleWheelchairFlag...");
#endif
    [[self accessibleWheelchairFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}accessibleWheelchairFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}accessibleWheelchairFlag."];
    }
  }
  if ([self alcoholFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}alcoholFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}alcoholFlag...");
#endif
    [[self alcoholFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}alcoholFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}alcoholFlag."];
    }
  }
  if ([self alcoholBarFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholBarFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}alcoholBarFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}alcoholBarFlag...");
#endif
    [[self alcoholBarFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}alcoholBarFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}alcoholBarFlag."];
    }
  }
  if ([self alcoholBeerWineFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholBeerWineFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}alcoholBeerWineFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}alcoholBeerWineFlag...");
#endif
    [[self alcoholBeerWineFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}alcoholBeerWineFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}alcoholBeerWineFlag."];
    }
  }
  if ([self alcoholByobFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholByobFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}alcoholByobFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}alcoholByobFlag...");
#endif
    [[self alcoholByobFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}alcoholByobFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}alcoholByobFlag."];
    }
  }
  if ([self groupsGoodForFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "groupsGoodForFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}groupsGoodForFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}groupsGoodForFlag...");
#endif
    [[self groupsGoodForFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}groupsGoodForFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}groupsGoodForFlag."];
    }
  }
  if ([self kidsGoodForFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "kidsGoodForFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}kidsGoodForFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}kidsGoodForFlag...");
#endif
    [[self kidsGoodForFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}kidsGoodForFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}kidsGoodForFlag."];
    }
  }
  if ([self kidsMenuFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "kidsMenuFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}kidsMenuFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}kidsMenuFlag...");
#endif
    [[self kidsMenuFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}kidsMenuFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}kidsMenuFlag."];
    }
  }
  if ([self mealBreakfastFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealBreakfastFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mealBreakfastFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mealBreakfastFlag...");
#endif
    [[self mealBreakfastFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mealBreakfastFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mealBreakfastFlag."];
    }
  }
  if ([self mealCaterFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealCaterFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mealCaterFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mealCaterFlag...");
#endif
    [[self mealCaterFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mealCaterFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mealCaterFlag."];
    }
  }
  if ([self mealDeliverFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealDeliverFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mealDeliverFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mealDeliverFlag...");
#endif
    [[self mealDeliverFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mealDeliverFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mealDeliverFlag."];
    }
  }
  if ([self mealDinnerFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealDinnerFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mealDinnerFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mealDinnerFlag...");
#endif
    [[self mealDinnerFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mealDinnerFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mealDinnerFlag."];
    }
  }
  if ([self mealLunchFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealLunchFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mealLunchFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mealLunchFlag...");
#endif
    [[self mealLunchFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mealLunchFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mealLunchFlag."];
    }
  }
  if ([self mealTakeoutFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealTakeoutFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}mealTakeoutFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}mealTakeoutFlag...");
#endif
    [[self mealTakeoutFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}mealTakeoutFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}mealTakeoutFlag."];
    }
  }
  if ([self optionsGlutenfreeFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsGlutenfreeFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}optionsGlutenfreeFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}optionsGlutenfreeFlag...");
#endif
    [[self optionsGlutenfreeFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}optionsGlutenfreeFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}optionsGlutenfreeFlag."];
    }
  }
  if ([self optionsLowfatFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsLowfatFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}optionsLowfatFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}optionsLowfatFlag...");
#endif
    [[self optionsLowfatFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}optionsLowfatFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}optionsLowfatFlag."];
    }
  }
  if ([self optionsOrganicFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsOrganicFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}optionsOrganicFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}optionsOrganicFlag...");
#endif
    [[self optionsOrganicFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}optionsOrganicFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}optionsOrganicFlag."];
    }
  }
  if ([self optionsVeganFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsVeganFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}optionsVeganFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}optionsVeganFlag...");
#endif
    [[self optionsVeganFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}optionsVeganFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}optionsVeganFlag."];
    }
  }
  if ([self optionsVegetarianFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsVegetarianFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}optionsVegetarianFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}optionsVegetarianFlag...");
#endif
    [[self optionsVegetarianFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}optionsVegetarianFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}optionsVegetarianFlag."];
    }
  }
  if ([self roomPrivateFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roomPrivateFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}roomPrivateFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}roomPrivateFlag...");
#endif
    [[self roomPrivateFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}roomPrivateFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}roomPrivateFlag."];
    }
  }
  if ([self seatingOutdoorFlag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "seatingOutdoorFlag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}seatingOutdoorFlag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}seatingOutdoorFlag...");
#endif
    [[self seatingOutdoorFlag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}seatingOutdoorFlag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}seatingOutdoorFlag."];
    }
  }
  if ([self address]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}address."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}address...");
#endif
    [[self address] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}address...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}address."];
    }
  }
  if ([self lat]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lat", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lat."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lat...");
#endif
    [[self lat] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lat...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lat."];
    }
  }
  if ([self lon]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lon", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}lon."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}lon...");
#endif
    [[self lon] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}lon...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}lon."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSRestaurantExtendInfoObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSRestaurantExtendInfoObj_M */
#ifndef DEF_ENUNCIATENS0TSPrivacySettingsObj_M
#define DEF_ENUNCIATENS0TSPrivacySettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSPrivacySettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) privacy_id_order
{
  return _privacy_id_order;
}

/**
 * (no documentation provided)
 */
- (void) setPrivacy_id_order: (NSString *) newPrivacy_id_order
{
  [newPrivacy_id_order retain];
  [_privacy_id_order release];
  _privacy_id_order = newPrivacy_id_order;
}

/**
 * (no documentation provided)
 */
- (NSString *) privacy_flag
{
  return _privacy_flag;
}

/**
 * (no documentation provided)
 */
- (void) setPrivacy_flag: (NSString *) newPrivacy_flag
{
  [newPrivacy_flag retain];
  [_privacy_flag release];
  _privacy_flag = newPrivacy_flag;
}

- (void) dealloc
{
  [self setPrivacy_id_order: nil];
  [self setPrivacy_flag: nil];
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
    && xmlStrcmp(BAD_CAST "privacy_id_order", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}privacy_id_order of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}privacy_id_order of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPrivacy_id_order: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "privacy_flag", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}privacy_flag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}privacy_flag of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setPrivacy_flag: __child];
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

  if ([self privacy_id_order]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacy_id_order", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}privacy_id_order."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}privacy_id_order...");
#endif
    [[self privacy_id_order] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}privacy_id_order...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}privacy_id_order."];
    }
  }
  if ([self privacy_flag]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacy_flag", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}privacy_flag."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}privacy_flag...");
#endif
    [[self privacy_flag] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}privacy_flag...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}privacy_flag."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSPrivacySettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSPrivacySettingsObj_M */
#ifndef DEF_ENUNCIATENS0TSNotificationSettingsObj_M
#define DEF_ENUNCIATENS0TSNotificationSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSNotificationSettingsObj

/**
 * (no documentation provided)
 */
- (NSString *) order_id
{
  return _order_id;
}

/**
 * (no documentation provided)
 */
- (void) setOrder_id: (NSString *) newOrder_id
{
  [newOrder_id retain];
  [_order_id release];
  _order_id = newOrder_id;
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
  [self setOrder_id: nil];
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
    && xmlStrcmp(BAD_CAST "order_id", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}order_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}order_id of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setOrder_id: __child];
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

  if ([self order_id]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order_id", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}order_id."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}order_id...");
#endif
    [[self order_id] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}order_id...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}order_id."];
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
#ifndef DEF_ENUNCIATENS0TSListNotificationSettingsObj_M
#define DEF_ENUNCIATENS0TSListNotificationSettingsObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSListNotificationSettingsObj

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
- (NSArray *) notification
{
  return _notification;
}

/**
 * (no documentation provided)
 */
- (void) setNotification: (NSArray *) newNotification
{
  [newNotification retain];
  [_notification release];
  _notification = newNotification;
}

- (void) dealloc
{
  [self setUserId: nil];
  [self setNotification: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSListNotificationSettingsObj *_eNUNCIATENS0TSListNotificationSettingsObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSListNotificationSettingsObj = (ENUNCIATENS0TSListNotificationSettingsObj *) [ENUNCIATENS0TSListNotificationSettingsObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSListNotificationSettingsObj;
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
@end /* implementation ENUNCIATENS0TSListNotificationSettingsObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSListNotificationSettingsObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSListNotificationSettingsObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSListNotificationSettingsObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSListNotificationSettingsObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSListNotificationSettingsObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSListNotificationSettingsObj *_eNUNCIATENS0TSListNotificationSettingsObj = [[ENUNCIATENS0TSListNotificationSettingsObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSListNotificationSettingsObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSListNotificationSettingsObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSListNotificationSettingsObj autorelease];
  return _eNUNCIATENS0TSListNotificationSettingsObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSListNotificationSettingsObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSListNotificationSettingsObj to the writer.
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
 * Reads a ENUNCIATENS0TSListNotificationSettingsObj from an XML reader. The element to be read is
 * "listNotifications".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSListNotificationSettingsObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSListNotificationSettingsObj *_tSListNotificationSettingsObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element listNotifications."];
    }
  }

  if (xmlStrcmp(BAD_CAST "listNotifications", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}listNotifications.");
#endif
    _tSListNotificationSettingsObj = (ENUNCIATENS0TSListNotificationSettingsObj *)[ENUNCIATENS0TSListNotificationSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}listNotifications.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSListNotificationSettingsObj. Expected element listNotifications. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSListNotificationSettingsObj. Expected element listNotifications. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSListNotificationSettingsObj;
}

/**
 * Writes this ENUNCIATENS0TSListNotificationSettingsObj to XML under element name "listNotifications".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSListNotificationSettingsObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "listNotifications", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}listNotifications. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSListNotificationSettingsObj for root element {}listNotifications...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSListNotificationSettingsObj for root element {}listNotifications...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}listNotifications. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "notification", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}notification of type {}TSNotificationSettingsObj.");
#endif

    __child = [ENUNCIATENS0TSNotificationSettingsObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}notification of type {}TSNotificationSettingsObj.");
#endif

    if ([self notification]) {
      [self setNotification: [[self notification] arrayByAddingObject: __child]];
    }
    else {
      [self setNotification: [NSArray arrayWithObject: __child]];
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
  if ([self notification]) {
    __enumerator = [[self notification] objectEnumerator];

    while ( (__item = [__enumerator nextObject]) ) {
      status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "notification", NULL);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing start child element {}notification."];
      }

#if DEBUG_ENUNCIATE > 1
      NSLog(@"writing element {}notification...");
#endif
      [__item writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
      NSLog(@"successfully wrote element {}notification...");
#endif

      status = xmlTextWriterEndElement(writer);
      if (status < 0) {
        [NSException raise: @"XMLWriteError"
                     format: @"Error writing end child element {}notification."];
      }
    } //end item iterator.
  }
}
@end /* implementation ENUNCIATENS0TSListNotificationSettingsObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSListNotificationSettingsObj_M */
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
#ifndef DEF_ENUNCIATENS0TSCuisineTier2Obj_M
#define DEF_ENUNCIATENS0TSCuisineTier2Obj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSCuisineTier2Obj

/**
 * (no documentation provided)
 */
- (NSString *) cuisineId
{
  return _cuisineId;
}

/**
 * (no documentation provided)
 */
- (void) setCuisineId: (NSString *) newCuisineId
{
  [newCuisineId retain];
  [_cuisineId release];
  _cuisineId = newCuisineId;
}

/**
 * (no documentation provided)
 */
- (NSString *) cuisineDesc
{
  return _cuisineDesc;
}

/**
 * (no documentation provided)
 */
- (void) setCuisineDesc: (NSString *) newCuisineDesc
{
  [newCuisineDesc retain];
  [_cuisineDesc release];
  _cuisineDesc = newCuisineDesc;
}

/**
 * (no documentation provided)
 */
- (NSString *) cuisineValidCurrent
{
  return _cuisineValidCurrent;
}

/**
 * (no documentation provided)
 */
- (void) setCuisineValidCurrent: (NSString *) newCuisineValidCurrent
{
  [newCuisineValidCurrent retain];
  [_cuisineValidCurrent release];
  _cuisineValidCurrent = newCuisineValidCurrent;
}

- (void) dealloc
{
  [self setCuisineId: nil];
  [self setCuisineDesc: nil];
  [self setCuisineValidCurrent: nil];
  [super dealloc];
}
@end /* implementation ENUNCIATENS0TSCuisineTier2Obj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSCuisineTier2Obj (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface ENUNCIATENS0TSCuisineTier2Obj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSCuisineTier2Obj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSCuisineTier2Obj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSCuisineTier2Obj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSCuisineTier2Obj *_eNUNCIATENS0TSCuisineTier2Obj = [[ENUNCIATENS0TSCuisineTier2Obj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSCuisineTier2Obj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSCuisineTier2Obj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSCuisineTier2Obj autorelease];
  return _eNUNCIATENS0TSCuisineTier2Obj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSCuisineTier2Obj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSCuisineTier2Obj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
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
    && xmlStrcmp(BAD_CAST "cuisineId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}cuisineId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}cuisineId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCuisineId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "cuisineDesc", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}cuisineDesc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}cuisineDesc of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCuisineDesc: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "cuisineValidCurrent", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}cuisineValidCurrent of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}cuisineValidCurrent of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCuisineValidCurrent: __child];
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

  if ([self cuisineId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cuisineId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cuisineId...");
#endif
    [[self cuisineId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cuisineId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cuisineId."];
    }
  }
  if ([self cuisineDesc]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineDesc", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cuisineDesc."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cuisineDesc...");
#endif
    [[self cuisineDesc] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cuisineDesc...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cuisineDesc."];
    }
  }
  if ([self cuisineValidCurrent]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineValidCurrent", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cuisineValidCurrent."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cuisineValidCurrent...");
#endif
    [[self cuisineValidCurrent] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cuisineValidCurrent...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cuisineValidCurrent."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSCuisineTier2Obj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSCuisineTier2Obj_M */
#ifndef DEF_ENUNCIATENS0TSCityObj_M
#define DEF_ENUNCIATENS0TSCityObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSCityObj

/**
 * (no documentation provided)
 */
- (NSString *) cityId
{
  return _cityId;
}

/**
 * (no documentation provided)
 */
- (void) setCityId: (NSString *) newCityId
{
  [newCityId retain];
  [_cityId release];
  _cityId = newCityId;
}

/**
 * (no documentation provided)
 */
- (NSString *) country
{
  return _country;
}

/**
 * (no documentation provided)
 */
- (void) setCountry: (NSString *) newCountry
{
  [newCountry retain];
  [_country release];
  _country = newCountry;
}

/**
 * (no documentation provided)
 */
- (NSString *) state
{
  return _state;
}

/**
 * (no documentation provided)
 */
- (void) setState: (NSString *) newState
{
  [newState retain];
  [_state release];
  _state = newState;
}

/**
 * (no documentation provided)
 */
- (NSString *) city
{
  return _city;
}

/**
 * (no documentation provided)
 */
- (void) setCity: (NSString *) newCity
{
  [newCity retain];
  [_city release];
  _city = newCity;
}

- (void) dealloc
{
  [self setCityId: nil];
  [self setCountry: nil];
  [self setState: nil];
  [self setCity: nil];
  [super dealloc];
}
@end /* implementation ENUNCIATENS0TSCityObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSCityObj (JAXB) <JAXBReading, JAXBWriting, JAXBType>

@end /*interface ENUNCIATENS0TSCityObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSCityObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSCityObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSCityObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSCityObj *_eNUNCIATENS0TSCityObj = [[ENUNCIATENS0TSCityObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSCityObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSCityObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSCityObj autorelease];
  return _eNUNCIATENS0TSCityObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSCityObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSCityObj to the writer.
 * Note that since we're only writing the XML type,
 * No start/end element will be written.
 *
 * @param reader The reader.
 */
- (void) writeXMLType: (xmlTextWriterPtr) writer
{
  [super writeXMLType:writer];
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
    && xmlStrcmp(BAD_CAST "cityId", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}cityId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}cityId of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCityId: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "country", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCountry: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}state of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}state of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setState: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setCity: __child];
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

  if ([self cityId]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cityId", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}cityId."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}cityId...");
#endif
    [[self cityId] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}cityId...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}cityId."];
    }
  }
  if ([self country]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "country", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}country."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}country...");
#endif
    [[self country] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}country...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}country."];
    }
  }
  if ([self state]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "state", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}state."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}state...");
#endif
    [[self state] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}state...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}state."];
    }
  }
  if ([self city]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}city."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}city...");
#endif
    [[self city] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}city...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}city."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSCityObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSCityObj_M */
#ifndef DEF_ENUNCIATENS0TSKeyValueObj_M
#define DEF_ENUNCIATENS0TSKeyValueObj_M

/**
 * (no documentation provided)
 */
@implementation ENUNCIATENS0TSKeyValueObj

/**
 * (no documentation provided)
 */
- (NSString *) keyName
{
  return _keyName;
}

/**
 * (no documentation provided)
 */
- (void) setKeyName: (NSString *) newKeyName
{
  [newKeyName retain];
  [_keyName release];
  _keyName = newKeyName;
}

/**
 * (no documentation provided)
 */
- (NSString *) keyNameValue
{
  return _keyNameValue;
}

/**
 * (no documentation provided)
 */
- (void) setKeyNameValue: (NSString *) newKeyNameValue
{
  [newKeyNameValue retain];
  [_keyNameValue release];
  _keyNameValue = newKeyNameValue;
}

/**
 * (no documentation provided)
 */
- (NSString *) valueName
{
  return _valueName;
}

/**
 * (no documentation provided)
 */
- (void) setValueName: (NSString *) newValueName
{
  [newValueName retain];
  [_valueName release];
  _valueName = newValueName;
}

/**
 * (no documentation provided)
 */
- (NSString *) valueNameValue
{
  return _valueNameValue;
}

/**
 * (no documentation provided)
 */
- (void) setValueNameValue: (NSString *) newValueNameValue
{
  [newValueNameValue retain];
  [_valueNameValue release];
  _valueNameValue = newValueNameValue;
}

- (void) dealloc
{
  [self setKeyName: nil];
  [self setKeyNameValue: nil];
  [self setValueName: nil];
  [self setValueNameValue: nil];
  [super dealloc];
}

//documentation inherited.
+ (id<EnunciateXML>) readFromXML: (NSData *) xml
{
  ENUNCIATENS0TSKeyValueObj *_eNUNCIATENS0TSKeyValueObj;
  xmlTextReaderPtr reader = xmlReaderForMemory([xml bytes], [xml length], NULL, NULL, 0);
  if (reader == NULL) {
    [NSException raise: @"XMLReadError"
                 format: @"Error instantiating an XML reader."];
    return nil;
  }

  _eNUNCIATENS0TSKeyValueObj = (ENUNCIATENS0TSKeyValueObj *) [ENUNCIATENS0TSKeyValueObj readXMLElement: reader];
  xmlFreeTextReader(reader); //free the reader
  return _eNUNCIATENS0TSKeyValueObj;
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
@end /* implementation ENUNCIATENS0TSKeyValueObj */

/**
 * Internal, private interface for JAXB reading and writing.
 */
@interface ENUNCIATENS0TSKeyValueObj (JAXB) <JAXBReading, JAXBWriting, JAXBType, JAXBElement>

@end /*interface ENUNCIATENS0TSKeyValueObj (JAXB)*/

/**
 * Internal, private implementation for JAXB reading and writing.
 */
@implementation ENUNCIATENS0TSKeyValueObj (JAXB)

/**
 * Read an instance of ENUNCIATENS0TSKeyValueObj from an XML reader.
 *
 * @param reader The reader.
 * @return An instance of ENUNCIATENS0TSKeyValueObj defined by the XML reader.
 */
+ (id<JAXBType>) readXMLType: (xmlTextReaderPtr) reader
{
  ENUNCIATENS0TSKeyValueObj *_eNUNCIATENS0TSKeyValueObj = [[ENUNCIATENS0TSKeyValueObj alloc] init];
  NS_DURING
  {
    [_eNUNCIATENS0TSKeyValueObj initWithReader: reader];
  }
  NS_HANDLER
  {
    _eNUNCIATENS0TSKeyValueObj = nil;
    [localException raise];
  }
  NS_ENDHANDLER

  [_eNUNCIATENS0TSKeyValueObj autorelease];
  return _eNUNCIATENS0TSKeyValueObj;
}

/**
 * Initialize this instance of ENUNCIATENS0TSKeyValueObj according to
 * the XML being read from the reader.
 *
 * @param reader The reader.
 */
- (id) initWithReader: (xmlTextReaderPtr) reader
{
  return [super initWithReader: reader];
}

/**
 * Write the XML for this instance of ENUNCIATENS0TSKeyValueObj to the writer.
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
 * Reads a ENUNCIATENS0TSKeyValueObj from an XML reader. The element to be read is
 * "keyvalue".
 *
 * @param reader The XML reader.
 * @return The ENUNCIATENS0TSKeyValueObj.
 */
+ (id<JAXBElement>) readXMLElement: (xmlTextReaderPtr) reader {
  int status;
  ENUNCIATENS0TSKeyValueObj *_tSKeyValueObj = nil;

  if (xmlTextReaderNodeType(reader) != XML_READER_TYPE_ELEMENT) {
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
    if (status < 1) {
      [NSException raise: @"XMLReadError"
                   format: @"Error advancing the reader to start element keyvalue."];
    }
  }

  if (xmlStrcmp(BAD_CAST "keyvalue", xmlTextReaderConstLocalName(reader)) == 0
      && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read root element {}keyvalue.");
#endif
    _tSKeyValueObj = (ENUNCIATENS0TSKeyValueObj *)[ENUNCIATENS0TSKeyValueObj readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"Successfully read root element {}keyvalue.");
#endif
  }
  else {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSKeyValueObj. Expected element keyvalue. Current element: {}%s", xmlTextReaderConstLocalName(reader)];
    }
    else {
      [NSException raise: @"XMLReadError"
                   format: @"Unable to read ENUNCIATENS0TSKeyValueObj. Expected element keyvalue. Current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader)];
    }
  }

  return _tSKeyValueObj;
}

/**
 * Writes this ENUNCIATENS0TSKeyValueObj to XML under element name "keyvalue".
 * The namespace declarations for the element will be written.
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return 1 if successful, 0 otherwise.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer
{
  [self writeXMLElement: writer writeNamespaces: YES];
}

/**
 * Writes this ENUNCIATENS0TSKeyValueObj to an XML writer.
 *
 * @param writer The writer.
 * @param writeNs Whether to write the namespaces for this element to the xml writer.
 */
- (void) writeXMLElement: (xmlTextWriterPtr) writer writeNamespaces: (BOOL) writeNs
{
  int rc = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "keyvalue", NULL);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing start element {}keyvalue. XML writer status: %i\n", rc];
  }

#if DEBUG_ENUNCIATE > 1
  NSLog(@"writing type {}TSKeyValueObj for root element {}keyvalue...");
#endif
  [self writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
  NSLog(@"successfully wrote type {}TSKeyValueObj for root element {}keyvalue...");
#endif
  rc = xmlTextWriterEndElement(writer);
  if (rc < 0) {
    [NSException raise: @"XMLWriteError"
                 format: @"Error writing end element {}keyvalue. XML writer status: %i\n", rc];
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
    && xmlStrcmp(BAD_CAST "keyName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}keyName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}keyName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setKeyName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "keyNameValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}keyNameValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}keyNameValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setKeyNameValue: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "valueName", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}valueName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}valueName of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setValueName: __child];
    return YES;
  } //end "if choice"

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "valueNameValue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
    NSLog(@"Attempting to read choice {}valueNameValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif
    __child = [NSString readXMLType: reader];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully read choice {}valueNameValue of type {http://www.w3.org/2001/XMLSchema}string.");
#endif

    [self setValueNameValue: __child];
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

  if ([self keyName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "keyName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}keyName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}keyName...");
#endif
    [[self keyName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}keyName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}keyName."];
    }
  }
  if ([self keyNameValue]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "keyNameValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}keyNameValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}keyNameValue...");
#endif
    [[self keyNameValue] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}keyNameValue...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}keyNameValue."];
    }
  }
  if ([self valueName]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueName", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}valueName."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}valueName...");
#endif
    [[self valueName] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}valueName...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}valueName."];
    }
  }
  if ([self valueNameValue]) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueNameValue", NULL);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing start child element {}valueNameValue."];
    }

#if DEBUG_ENUNCIATE > 1
    NSLog(@"writing element {}valueNameValue...");
#endif
    [[self valueNameValue] writeXMLType: writer];
#if DEBUG_ENUNCIATE > 1
    NSLog(@"successfully wrote element {}valueNameValue...");
#endif

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
      [NSException raise: @"XMLWriteError"
                   format: @"Error writing end child element {}valueNameValue."];
    }
  }
}
@end /* implementation ENUNCIATENS0TSKeyValueObj (JAXB) */

#endif /* DEF_ENUNCIATENS0TSKeyValueObj_M */
