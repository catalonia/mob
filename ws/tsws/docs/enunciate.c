#include <enunciate-common.c>
#ifndef DEF_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj_H
#define DEF_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *userId;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantId;

  /**
   * (no documentation provided)
   */
  xmlChar *questionId;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRecommendersDetailsObj *tsRecommendersDetailsObj;

  /**
   * Size of the tsRecommendersDetailsObj array.
   */
  int _sizeof_tsRecommendersDetailsObj;
};

/**
 * Reads a TSCurrentRecommendedRestaurantDetailsObj element from XML. The element to be read is "restaurants", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSCurrentRecommendedRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *xml_read_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj);

/**
 * Frees a TSCurrentRecommendedRestaurantDetailsObj.
 *
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to free.
 */
void free_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj);

/**
 * Reads a TSCurrentRecommendedRestaurantDetailsObj element from XML. The element to be read is "restaurants", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSCurrentRecommendedRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *xmlTextReaderReadNs0RestaurantsElement(xmlTextReaderPtr reader);

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj);

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj, int writeNamespaces);

/**
 * Frees the children of a TSCurrentRecommendedRestaurantDetailsObj.
 *
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj whose children are to be free.
 */
static void freeNs0RestaurantsElement(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj);

/**
 * Reads a TSCurrentRecommendedRestaurantDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSCurrentRecommendedRestaurantDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *xmlTextReaderReadNs0TSCurrentRecommendedRestaurantDetailsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSCurrentRecommendedRestaurantDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj);

/**
 * Frees the elements of a TSCurrentRecommendedRestaurantDetailsObj.
 *
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to free.
 */
static void freeNs0TSCurrentRecommendedRestaurantDetailsObjType(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj);

#endif /* DEF_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj_H */
#ifndef DEF_enunciate_ns0_TSErrorObj_H
#define DEF_enunciate_ns0_TSErrorObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSErrorObj {


  /**
   * (no documentation provided)
   */
  xmlChar *errorMsg;
};

/**
 * Reads a TSErrorObj element from XML. The element to be read is "error", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSErrorObj, or NULL in case of error.
 */
struct enunciate_ns0_TSErrorObj *xml_read_enunciate_ns0_TSErrorObj(xmlTextReaderPtr reader);

/**
 * Writes a TSErrorObj to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSErrorObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj);

/**
 * Frees a TSErrorObj.
 *
 * @param _tSErrorObj The TSErrorObj to free.
 */
void free_enunciate_ns0_TSErrorObj(struct enunciate_ns0_TSErrorObj *_tSErrorObj);

/**
 * Reads a TSErrorObj element from XML. The element to be read is "error", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSErrorObj, or NULL in case of error.
 */
struct enunciate_ns0_TSErrorObj *xmlTextReaderReadNs0ErrorElement(xmlTextReaderPtr reader);

/**
 * Writes a TSErrorObj to XML under element name "error".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ErrorElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj);

/**
 * Writes a TSErrorObj to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ErrorElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj, int writeNamespaces);

/**
 * Frees the children of a TSErrorObj.
 *
 * @param _tSErrorObj The TSErrorObj whose children are to be free.
 */
static void freeNs0ErrorElement(struct enunciate_ns0_TSErrorObj *_tSErrorObj);

/**
 * Reads a TSErrorObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSErrorObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSErrorObj *xmlTextReaderReadNs0TSErrorObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSErrorObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSErrorObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj);

/**
 * Frees the elements of a TSErrorObj.
 *
 * @param _tSErrorObj The TSErrorObj to free.
 */
static void freeNs0TSErrorObjType(struct enunciate_ns0_TSErrorObj *_tSErrorObj);

#endif /* DEF_enunciate_ns0_TSErrorObj_H */
#ifndef DEF_enunciate_ns0_TSFacebookUserDataObj_H
#define DEF_enunciate_ns0_TSFacebookUserDataObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSFacebookUserDataObj {


  /**
   * (no documentation provided)
   */
  xmlChar *userName;

  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *firstName;

  /**
   * (no documentation provided)
   */
  xmlChar *middleName;

  /**
   * (no documentation provided)
   */
  xmlChar *lastName;

  /**
   * (no documentation provided)
   */
  xmlChar *gender;

  /**
   * (no documentation provided)
   */
  xmlChar *locale;

  /**
   * (no documentation provided)
   */
  xmlChar *link;

  /**
   * (no documentation provided)
   */
  xmlChar *ageRange;

  /**
   * (no documentation provided)
   */
  xmlChar *birthday;

  /**
   * (no documentation provided)
   */
  xmlChar *thirdPartyId;

  /**
   * (no documentation provided)
   */
  xmlChar *friendlists;

  /**
   * (no documentation provided)
   */
  xmlChar *installed;

  /**
   * (no documentation provided)
   */
  xmlChar *timezone;

  /**
   * (no documentation provided)
   */
  xmlChar *updatedTime;

  /**
   * (no documentation provided)
   */
  xmlChar *verified;

  /**
   * (no documentation provided)
   */
  xmlChar *devices;

  /**
   * (no documentation provided)
   */
  xmlChar *email;

  /**
   * (no documentation provided)
   */
  xmlChar *hometown;

  /**
   * (no documentation provided)
   */
  xmlChar *location;

  /**
   * (no documentation provided)
   */
  xmlChar *picture;

  /**
   * (no documentation provided)
   */
  xmlChar *relationshipStatus;

  /**
   * (no documentation provided)
   */
  xmlChar *checkins;

  /**
   * (no documentation provided)
   */
  xmlChar *friends;

  /**
   * (no documentation provided)
   */
  xmlChar *likes;

  /**
   * (no documentation provided)
   */
  xmlChar *permissions;

  /**
   * (no documentation provided)
   */
  xmlChar *create;
};

/**
 * Reads a TSFacebookUserDataObj element from XML. The element to be read is "facebook_user_data", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSFacebookUserDataObj *xml_read_enunciate_ns0_TSFacebookUserDataObj(xmlTextReaderPtr reader);

/**
 * Writes a TSFacebookUserDataObj to XML under element name "facebook_user_data".
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSFacebookUserDataObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj);

/**
 * Frees a TSFacebookUserDataObj.
 *
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to free.
 */
void free_enunciate_ns0_TSFacebookUserDataObj(struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj);

/**
 * Reads a TSFacebookUserDataObj element from XML. The element to be read is "facebook_user_data", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSFacebookUserDataObj *xmlTextReaderReadNs0Facebook_user_dataElement(xmlTextReaderPtr reader);

/**
 * Writes a TSFacebookUserDataObj to XML under element name "facebook_user_data".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Facebook_user_dataElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj);

/**
 * Writes a TSFacebookUserDataObj to XML under element name "facebook_user_data".
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Facebook_user_dataElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj, int writeNamespaces);

/**
 * Frees the children of a TSFacebookUserDataObj.
 *
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj whose children are to be free.
 */
static void freeNs0Facebook_user_dataElement(struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj);

/**
 * Reads a TSFacebookUserDataObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSFacebookUserDataObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSFacebookUserDataObj *xmlTextReaderReadNs0TSFacebookUserDataObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSFacebookUserDataObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSFacebookUserDataObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj);

/**
 * Frees the elements of a TSFacebookUserDataObj.
 *
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to free.
 */
static void freeNs0TSFacebookUserDataObjType(struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj);

#endif /* DEF_enunciate_ns0_TSFacebookUserDataObj_H */
#ifndef DEF_enunciate_ns0_TSListFacebookUserDataObj_H
#define DEF_enunciate_ns0_TSListFacebookUserDataObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSListFacebookUserDataObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSFacebookUserDataObj *user_profile_current;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSFacebookUserDataObj *list_user_profile_fb;

  /**
   * Size of the list_user_profile_fb array.
   */
  int _sizeof_list_user_profile_fb;
};

/**
 * Reads a TSListFacebookUserDataObj element from XML. The element to be read is "list_user_profile_fb", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSListFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListFacebookUserDataObj *xml_read_enunciate_ns0_TSListFacebookUserDataObj(xmlTextReaderPtr reader);

/**
 * Writes a TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSListFacebookUserDataObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj);

/**
 * Frees a TSListFacebookUserDataObj.
 *
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to free.
 */
void free_enunciate_ns0_TSListFacebookUserDataObj(struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj);

/**
 * Reads a TSListFacebookUserDataObj element from XML. The element to be read is "list_user_profile_fb", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSListFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListFacebookUserDataObj *xmlTextReaderReadNs0List_user_profile_fbElement(xmlTextReaderPtr reader);

/**
 * Writes a TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0List_user_profile_fbElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj);

/**
 * Writes a TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0List_user_profile_fbElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj, int writeNamespaces);

/**
 * Frees the children of a TSListFacebookUserDataObj.
 *
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj whose children are to be free.
 */
static void freeNs0List_user_profile_fbElement(struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj);

/**
 * Reads a TSListFacebookUserDataObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSListFacebookUserDataObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSListFacebookUserDataObj *xmlTextReaderReadNs0TSListFacebookUserDataObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSListFacebookUserDataObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSListFacebookUserDataObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj);

/**
 * Frees the elements of a TSListFacebookUserDataObj.
 *
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to free.
 */
static void freeNs0TSListFacebookUserDataObjType(struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj);

#endif /* DEF_enunciate_ns0_TSListFacebookUserDataObj_H */
#ifndef DEF_enunciate_ns0_TSListNotificationSettingsObj_H
#define DEF_enunciate_ns0_TSListNotificationSettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSListNotificationSettingsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *userId;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *friendsAskReco;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *peopleFollowAskReco;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *otherPeopleAskReco;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *peopleLikeMyReco;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *peopleAskMeFollowReco;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *friendsSendMeReco;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *peopleLikeCommentTips;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *friendsPostQuestionForum;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *friendsJoinTasteSync;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSNotificationSettingsObj *newslettersDigestsTasteSync;
};

/**
 * Reads a TSListNotificationSettingsObj element from XML. The element to be read is "listNotifications", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSListNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListNotificationSettingsObj *xml_read_enunciate_ns0_TSListNotificationSettingsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSListNotificationSettingsObj to XML under element name "listNotifications".
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSListNotificationSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj);

/**
 * Frees a TSListNotificationSettingsObj.
 *
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to free.
 */
void free_enunciate_ns0_TSListNotificationSettingsObj(struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj);

/**
 * Reads a TSListNotificationSettingsObj element from XML. The element to be read is "listNotifications", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSListNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListNotificationSettingsObj *xmlTextReaderReadNs0ListNotificationsElement(xmlTextReaderPtr reader);

/**
 * Writes a TSListNotificationSettingsObj to XML under element name "listNotifications".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListNotificationsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj);

/**
 * Writes a TSListNotificationSettingsObj to XML under element name "listNotifications".
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0ListNotificationsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj, int writeNamespaces);

/**
 * Frees the children of a TSListNotificationSettingsObj.
 *
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj whose children are to be free.
 */
static void freeNs0ListNotificationsElement(struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj);

/**
 * Reads a TSListNotificationSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSListNotificationSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSListNotificationSettingsObj *xmlTextReaderReadNs0TSListNotificationSettingsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSListNotificationSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSListNotificationSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj);

/**
 * Frees the elements of a TSListNotificationSettingsObj.
 *
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to free.
 */
static void freeNs0TSListNotificationSettingsObjType(struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj);

#endif /* DEF_enunciate_ns0_TSListNotificationSettingsObj_H */
#ifndef DEF_enunciate_ns0_TSNotificationSettingsObj_H
#define DEF_enunciate_ns0_TSNotificationSettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSNotificationSettingsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *phoneFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *emailFlag;
};

/**
 * Reads a TSNotificationSettingsObj element from XML. The element to be read is "notifications", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSNotificationSettingsObj *xml_read_enunciate_ns0_TSNotificationSettingsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSNotificationSettingsObj to XML under element name "notifications".
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSNotificationSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj);

/**
 * Frees a TSNotificationSettingsObj.
 *
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to free.
 */
void free_enunciate_ns0_TSNotificationSettingsObj(struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj);

/**
 * Reads a TSNotificationSettingsObj element from XML. The element to be read is "notifications", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSNotificationSettingsObj *xmlTextReaderReadNs0NotificationsElement(xmlTextReaderPtr reader);

/**
 * Writes a TSNotificationSettingsObj to XML under element name "notifications".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NotificationsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj);

/**
 * Writes a TSNotificationSettingsObj to XML under element name "notifications".
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0NotificationsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj, int writeNamespaces);

/**
 * Frees the children of a TSNotificationSettingsObj.
 *
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj whose children are to be free.
 */
static void freeNs0NotificationsElement(struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj);

/**
 * Reads a TSNotificationSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSNotificationSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSNotificationSettingsObj *xmlTextReaderReadNs0TSNotificationSettingsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSNotificationSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSNotificationSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj);

/**
 * Frees the elements of a TSNotificationSettingsObj.
 *
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to free.
 */
static void freeNs0TSNotificationSettingsObjType(struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj);

#endif /* DEF_enunciate_ns0_TSNotificationSettingsObj_H */
#ifndef DEF_enunciate_ns0_TSPhotoObj_H
#define DEF_enunciate_ns0_TSPhotoObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSPhotoObj {


  /**
   * (no documentation provided)
   */
  xmlChar *userId;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *photo;
};

/**
 * Reads a TSPhotoObj element from XML. The element to be read is "photo", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPhotoObj *xml_read_enunciate_ns0_TSPhotoObj(xmlTextReaderPtr reader);

/**
 * Writes a TSPhotoObj to XML under element name "photo".
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSPhotoObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj);

/**
 * Frees a TSPhotoObj.
 *
 * @param _tSPhotoObj The TSPhotoObj to free.
 */
void free_enunciate_ns0_TSPhotoObj(struct enunciate_ns0_TSPhotoObj *_tSPhotoObj);

/**
 * Reads a TSPhotoObj element from XML. The element to be read is "photo", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPhotoObj *xmlTextReaderReadNs0PhotoElement(xmlTextReaderPtr reader);

/**
 * Writes a TSPhotoObj to XML under element name "photo".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PhotoElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj);

/**
 * Writes a TSPhotoObj to XML under element name "photo".
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PhotoElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj, int writeNamespaces);

/**
 * Frees the children of a TSPhotoObj.
 *
 * @param _tSPhotoObj The TSPhotoObj whose children are to be free.
 */
static void freeNs0PhotoElement(struct enunciate_ns0_TSPhotoObj *_tSPhotoObj);

/**
 * Reads a TSPhotoObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSPhotoObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSPhotoObj *xmlTextReaderReadNs0TSPhotoObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSPhotoObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSPhotoObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj);

/**
 * Frees the elements of a TSPhotoObj.
 *
 * @param _tSPhotoObj The TSPhotoObj to free.
 */
static void freeNs0TSPhotoObjType(struct enunciate_ns0_TSPhotoObj *_tSPhotoObj);

#endif /* DEF_enunciate_ns0_TSPhotoObj_H */
#ifndef DEF_enunciate_ns0_TSPrivacySettingsObj_H
#define DEF_enunciate_ns0_TSPrivacySettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSPrivacySettingsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *privacySettingsIds;

  /**
   * (no documentation provided)
   */
  xmlChar *privacyUserFlag;
};

/**
 * Reads a TSPrivacySettingsObj element from XML. The element to be read is "privacy", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSPrivacySettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPrivacySettingsObj *xml_read_enunciate_ns0_TSPrivacySettingsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSPrivacySettingsObj to XML under element name "privacy".
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSPrivacySettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj);

/**
 * Frees a TSPrivacySettingsObj.
 *
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to free.
 */
void free_enunciate_ns0_TSPrivacySettingsObj(struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj);

/**
 * Reads a TSPrivacySettingsObj element from XML. The element to be read is "privacy", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSPrivacySettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPrivacySettingsObj *xmlTextReaderReadNs0PrivacyElement(xmlTextReaderPtr reader);

/**
 * Writes a TSPrivacySettingsObj to XML under element name "privacy".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PrivacyElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj);

/**
 * Writes a TSPrivacySettingsObj to XML under element name "privacy".
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0PrivacyElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj, int writeNamespaces);

/**
 * Frees the children of a TSPrivacySettingsObj.
 *
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj whose children are to be free.
 */
static void freeNs0PrivacyElement(struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj);

/**
 * Reads a TSPrivacySettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSPrivacySettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSPrivacySettingsObj *xmlTextReaderReadNs0TSPrivacySettingsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSPrivacySettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSPrivacySettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj);

/**
 * Frees the elements of a TSPrivacySettingsObj.
 *
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to free.
 */
static void freeNs0TSPrivacySettingsObjType(struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj);

#endif /* DEF_enunciate_ns0_TSPrivacySettingsObj_H */
#ifndef DEF_enunciate_ns0_TSRecommendersDetailsObj_H
#define DEF_enunciate_ns0_TSRecommendersDetailsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecommendersDetailsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *userId;

  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSPhotoObj *photo;
};

/**
 * Reads a TSRecommendersDetailsObj element from XML. The element to be read is "recommenders", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendersDetailsObj *xml_read_enunciate_ns0_TSRecommendersDetailsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendersDetailsObj to XML under element name "recommenders".
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecommendersDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj);

/**
 * Frees a TSRecommendersDetailsObj.
 *
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to free.
 */
void free_enunciate_ns0_TSRecommendersDetailsObj(struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj);

/**
 * Reads a TSRecommendersDetailsObj element from XML. The element to be read is "recommenders", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendersDetailsObj *xmlTextReaderReadNs0RecommendersElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendersDetailsObj to XML under element name "recommenders".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecommendersElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj);

/**
 * Writes a TSRecommendersDetailsObj to XML under element name "recommenders".
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecommendersElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj, int writeNamespaces);

/**
 * Frees the children of a TSRecommendersDetailsObj.
 *
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj whose children are to be free.
 */
static void freeNs0RecommendersElement(struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj);

/**
 * Reads a TSRecommendersDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendersDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendersDetailsObj *xmlTextReaderReadNs0TSRecommendersDetailsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendersDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecommendersDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj);

/**
 * Frees the elements of a TSRecommendersDetailsObj.
 *
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to free.
 */
static void freeNs0TSRecommendersDetailsObjType(struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj);

#endif /* DEF_enunciate_ns0_TSRecommendersDetailsObj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantDetailsObj_H
#define DEF_enunciate_ns0_TSRestaurantDetailsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantDetailsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *openNowFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *dealHeadline;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSPhotoObj *photoList;

  /**
   * Size of the photoList array.
   */
  int _sizeof_photoList;

  /**
   * (no documentation provided)
   */
  xmlChar *moreInfoFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *menuFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userRestaurantSavedFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userRestaurantFavFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userRestaurantTipFlag;
};

/**
 * Reads a TSRestaurantDetailsObj element from XML. The element to be read is "restaurantdetails", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantDetailsObj *xml_read_enunciate_ns0_TSRestaurantDetailsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj);

/**
 * Frees a TSRestaurantDetailsObj.
 *
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to free.
 */
void free_enunciate_ns0_TSRestaurantDetailsObj(struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj);

/**
 * Reads a TSRestaurantDetailsObj element from XML. The element to be read is "restaurantdetails", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantDetailsObj *xmlTextReaderReadNs0RestaurantdetailsElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantdetailsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj);

/**
 * Writes a TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantdetailsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantDetailsObj.
 *
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj whose children are to be free.
 */
static void freeNs0RestaurantdetailsElement(struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj);

/**
 * Reads a TSRestaurantDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantDetailsObj *xmlTextReaderReadNs0TSRestaurantDetailsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj);

/**
 * Frees the elements of a TSRestaurantDetailsObj.
 *
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to free.
 */
static void freeNs0TSRestaurantDetailsObjType(struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj);

#endif /* DEF_enunciate_ns0_TSRestaurantDetailsObj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantObj_H
#define DEF_enunciate_ns0_TSRestaurantObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantObj {


  /**
   * (no documentation provided)
   */
  xmlChar *restaurantId;

  /**
   * (no documentation provided)
   */
  xmlChar *factualId;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantName;

  /**
   * (no documentation provided)
   */
  xmlChar *factualRating;

  /**
   * (no documentation provided)
   */
  xmlChar *priceRange;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantCityId;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantHours;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantLat;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantLon;

  /**
   * (no documentation provided)
   */
  xmlChar *sumVoteCount;

  /**
   * (no documentation provided)
   */
  xmlChar *sumVoteValue;

  /**
   * (no documentation provided)
   */
  xmlChar *tbdOpenTableId;
};

/**
 * Reads a TSRestaurantObj element from XML. The element to be read is "restaurant", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantObj *xml_read_enunciate_ns0_TSRestaurantObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantObj to XML under element name "restaurant".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj);

/**
 * Frees a TSRestaurantObj.
 *
 * @param _tSRestaurantObj The TSRestaurantObj to free.
 */
void free_enunciate_ns0_TSRestaurantObj(struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj);

/**
 * Reads a TSRestaurantObj element from XML. The element to be read is "restaurant", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantObj *xmlTextReaderReadNs0RestaurantElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantObj to XML under element name "restaurant".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj);

/**
 * Writes a TSRestaurantObj to XML under element name "restaurant".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantObj.
 *
 * @param _tSRestaurantObj The TSRestaurantObj whose children are to be free.
 */
static void freeNs0RestaurantElement(struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj);

/**
 * Reads a TSRestaurantObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantObj *xmlTextReaderReadNs0TSRestaurantObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj);

/**
 * Frees the elements of a TSRestaurantObj.
 *
 * @param _tSRestaurantObj The TSRestaurantObj to free.
 */
static void freeNs0TSRestaurantObjType(struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj);

#endif /* DEF_enunciate_ns0_TSRestaurantObj_H */
#ifndef DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_H
#define DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSSocialAutoPubSettingsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *favFbFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *favTwitterFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *favTumblrFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *tipsFbFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *tipsTwitterFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *tipsTumblrFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *recoFbFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *recoTwitterFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *recoTumblrFlag;
};

/**
 * Reads a TSSocialAutoPubSettingsObj element from XML. The element to be read is "autopub", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSocialAutoPubSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialAutoPubSettingsObj *xml_read_enunciate_ns0_TSSocialAutoPubSettingsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSSocialAutoPubSettingsObj to XML under element name "autopub".
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSSocialAutoPubSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj);

/**
 * Frees a TSSocialAutoPubSettingsObj.
 *
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to free.
 */
void free_enunciate_ns0_TSSocialAutoPubSettingsObj(struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj);

/**
 * Reads a TSSocialAutoPubSettingsObj element from XML. The element to be read is "autopub", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSSocialAutoPubSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialAutoPubSettingsObj *xmlTextReaderReadNs0AutopubElement(xmlTextReaderPtr reader);

/**
 * Writes a TSSocialAutoPubSettingsObj to XML under element name "autopub".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AutopubElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj);

/**
 * Writes a TSSocialAutoPubSettingsObj to XML under element name "autopub".
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0AutopubElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj, int writeNamespaces);

/**
 * Frees the children of a TSSocialAutoPubSettingsObj.
 *
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj whose children are to be free.
 */
static void freeNs0AutopubElement(struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj);

/**
 * Reads a TSSocialAutoPubSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSSocialAutoPubSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSocialAutoPubSettingsObj *xmlTextReaderReadNs0TSSocialAutoPubSettingsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSSocialAutoPubSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSSocialAutoPubSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj);

/**
 * Frees the elements of a TSSocialAutoPubSettingsObj.
 *
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to free.
 */
static void freeNs0TSSocialAutoPubSettingsObjType(struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj);

#endif /* DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_H */
#ifndef DEF_enunciate_ns0_TSSocialSettingsObj_H
#define DEF_enunciate_ns0_TSSocialSettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSSocialSettingsObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSSocialAutoPubSettingsObj *tsSocialAutoPubSettingsObj;

  /**
   * (no documentation provided)
   */
  xmlChar *userId;

  /**
   * (no documentation provided)
   */
  xmlChar *facebookStatus;

  /**
   * (no documentation provided)
   */
  xmlChar *twitterStatus;

  /**
   * (no documentation provided)
   */
  xmlChar *foursquareStatus;

  /**
   * (no documentation provided)
   */
  xmlChar *tumblrStatus;
};

/**
 * Reads a TSSocialSettingsObj element from XML. The element to be read is "social", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSocialSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialSettingsObj *xml_read_enunciate_ns0_TSSocialSettingsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSSocialSettingsObj to XML under element name "social".
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSSocialSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj);

/**
 * Frees a TSSocialSettingsObj.
 *
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to free.
 */
void free_enunciate_ns0_TSSocialSettingsObj(struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj);

/**
 * Reads a TSSocialSettingsObj element from XML. The element to be read is "social", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSSocialSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialSettingsObj *xmlTextReaderReadNs0SocialElement(xmlTextReaderPtr reader);

/**
 * Writes a TSSocialSettingsObj to XML under element name "social".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SocialElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj);

/**
 * Writes a TSSocialSettingsObj to XML under element name "social".
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SocialElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj, int writeNamespaces);

/**
 * Frees the children of a TSSocialSettingsObj.
 *
 * @param _tSSocialSettingsObj The TSSocialSettingsObj whose children are to be free.
 */
static void freeNs0SocialElement(struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj);

/**
 * Reads a TSSocialSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSSocialSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSocialSettingsObj *xmlTextReaderReadNs0TSSocialSettingsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSSocialSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSSocialSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj);

/**
 * Frees the elements of a TSSocialSettingsObj.
 *
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to free.
 */
static void freeNs0TSSocialSettingsObjType(struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj);

#endif /* DEF_enunciate_ns0_TSSocialSettingsObj_H */
#ifndef DEF_enunciate_ns0_TSSuccessObj_H
#define DEF_enunciate_ns0_TSSuccessObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSSuccessObj {


  /**
   * (no documentation provided)
   */
  xmlChar *successMsg;
};

/**
 * Reads a TSSuccessObj element from XML. The element to be read is "success", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSuccessObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSuccessObj *xml_read_enunciate_ns0_TSSuccessObj(xmlTextReaderPtr reader);

/**
 * Writes a TSSuccessObj to XML under element name "success".
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSSuccessObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj);

/**
 * Frees a TSSuccessObj.
 *
 * @param _tSSuccessObj The TSSuccessObj to free.
 */
void free_enunciate_ns0_TSSuccessObj(struct enunciate_ns0_TSSuccessObj *_tSSuccessObj);

/**
 * Reads a TSSuccessObj element from XML. The element to be read is "success", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSSuccessObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSuccessObj *xmlTextReaderReadNs0SuccessElement(xmlTextReaderPtr reader);

/**
 * Writes a TSSuccessObj to XML under element name "success".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SuccessElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj);

/**
 * Writes a TSSuccessObj to XML under element name "success".
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SuccessElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj, int writeNamespaces);

/**
 * Frees the children of a TSSuccessObj.
 *
 * @param _tSSuccessObj The TSSuccessObj whose children are to be free.
 */
static void freeNs0SuccessElement(struct enunciate_ns0_TSSuccessObj *_tSSuccessObj);

/**
 * Reads a TSSuccessObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSSuccessObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSuccessObj *xmlTextReaderReadNs0TSSuccessObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSSuccessObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSSuccessObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj);

/**
 * Frees the elements of a TSSuccessObj.
 *
 * @param _tSSuccessObj The TSSuccessObj to free.
 */
static void freeNs0TSSuccessObjType(struct enunciate_ns0_TSSuccessObj *_tSSuccessObj);

#endif /* DEF_enunciate_ns0_TSSuccessObj_H */
#ifndef DEF_enunciate_ns0_TSUserObj_H
#define DEF_enunciate_ns0_TSUserObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSUserObj {


  /**
   * (no documentation provided)
   */
  xmlChar *userId;

  /**
   * (no documentation provided)
   */
  xmlChar *tsUserId;

  /**
   * (no documentation provided)
   */
  xmlChar *tsUserEmail;

  /**
   * (no documentation provided)
   */
  xmlChar *tsUserPw;

  /**
   * (no documentation provided)
   */
  xmlChar *tsFirstName;

  /**
   * (no documentation provided)
   */
  xmlChar *tsLastName;

  /**
   * (no documentation provided)
   */
  xmlChar *maxInvites;

  /**
   * (no documentation provided)
   */
  xmlChar *userCreatedInitialDatetime;

  /**
   * (no documentation provided)
   */
  xmlChar *userPoints;

  /**
   * (no documentation provided)
   */
  xmlChar *twitterUsrUrl;

  /**
   * (no documentation provided)
   */
  xmlChar *userDisabledFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userActivationKey;

  /**
   * (no documentation provided)
   */
  xmlChar *userGender;

  /**
   * (no documentation provided)
   */
  xmlChar *userCityId;

  /**
   * (no documentation provided)
   */
  xmlChar *userState;

  /**
   * (no documentation provided)
   */
  xmlChar *isOnline;

  /**
   * (no documentation provided)
   */
  xmlChar *userCountry;

  /**
   * (no documentation provided)
   */
  xmlChar *userFbId;

  /**
   * (no documentation provided)
   */
  xmlChar *about;

  /**
   * (no documentation provided)
   */
  xmlChar *currentStatus;
};

/**
 * Reads a TSUserObj element from XML. The element to be read is "user", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserObj *xml_read_enunciate_ns0_TSUserObj(xmlTextReaderPtr reader);

/**
 * Writes a TSUserObj to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSUserObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj);

/**
 * Frees a TSUserObj.
 *
 * @param _tSUserObj The TSUserObj to free.
 */
void free_enunciate_ns0_TSUserObj(struct enunciate_ns0_TSUserObj *_tSUserObj);

/**
 * Reads a TSUserObj element from XML. The element to be read is "user", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserObj *xmlTextReaderReadNs0UserElement(xmlTextReaderPtr reader);

/**
 * Writes a TSUserObj to XML under element name "user".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj);

/**
 * Writes a TSUserObj to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj, int writeNamespaces);

/**
 * Frees the children of a TSUserObj.
 *
 * @param _tSUserObj The TSUserObj whose children are to be free.
 */
static void freeNs0UserElement(struct enunciate_ns0_TSUserObj *_tSUserObj);

/**
 * Reads a TSUserObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSUserObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserObj *xmlTextReaderReadNs0TSUserObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSUserObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSUserObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj);

/**
 * Frees the elements of a TSUserObj.
 *
 * @param _tSUserObj The TSUserObj to free.
 */
static void freeNs0TSUserObjType(struct enunciate_ns0_TSUserObj *_tSUserObj);

#endif /* DEF_enunciate_ns0_TSUserObj_H */
#ifndef DEF_enunciate_ns0_TSUserProfileObj_H
#define DEF_enunciate_ns0_TSUserProfileObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSUserProfileObj {


  /**
   * (no documentation provided)
   */
  xmlChar *name;

  /**
   * (no documentation provided)
   */
  xmlChar *photo;

  /**
   * (no documentation provided)
   */
  xmlChar *facebookCity;

  /**
   * (no documentation provided)
   */
  xmlChar *facebookUrl;

  /**
   * (no documentation provided)
   */
  xmlChar *twitterUrl;

  /**
   * (no documentation provided)
   */
  xmlChar *blogUrl;

  /**
   * (no documentation provided)
   */
  xmlChar *aboutMeText;

  /**
   * (no documentation provided)
   */
  xmlChar *numFollowers;

  /**
   * (no documentation provided)
   */
  xmlChar *numFollowees;

  /**
   * (no documentation provided)
   */
  xmlChar *numFriendsOnTs;

  /**
   * (no documentation provided)
   */
  xmlChar *numPoints;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRestaurantDetailsObj *testaurantDetailsList;

  /**
   * Size of the testaurantDetailsList array.
   */
  int _sizeof_testaurantDetailsList;
};

/**
 * Reads a TSUserProfileObj element from XML. The element to be read is "userprofile", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserProfileObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileObj *xml_read_enunciate_ns0_TSUserProfileObj(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileObj to XML under element name "userprofile".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSUserProfileObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj);

/**
 * Frees a TSUserProfileObj.
 *
 * @param _tSUserProfileObj The TSUserProfileObj to free.
 */
void free_enunciate_ns0_TSUserProfileObj(struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj);

/**
 * Reads a TSUserProfileObj element from XML. The element to be read is "userprofile", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileObj *xmlTextReaderReadNs0UserprofileElement(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileObj to XML under element name "userprofile".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserprofileElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj);

/**
 * Writes a TSUserProfileObj to XML under element name "userprofile".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserprofileElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj, int writeNamespaces);

/**
 * Frees the children of a TSUserProfileObj.
 *
 * @param _tSUserProfileObj The TSUserProfileObj whose children are to be free.
 */
static void freeNs0UserprofileElement(struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj);

/**
 * Reads a TSUserProfileObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserProfileObj *xmlTextReaderReadNs0TSUserProfileObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSUserProfileObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj);

/**
 * Frees the elements of a TSUserProfileObj.
 *
 * @param _tSUserProfileObj The TSUserProfileObj to free.
 */
static void freeNs0TSUserProfileObjType(struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj);

#endif /* DEF_enunciate_ns0_TSUserProfileObj_H */
#ifndef DEF_enunciate_ns0_TSUserProfileRestaurantsObj_H
#define DEF_enunciate_ns0_TSUserProfileRestaurantsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSUserProfileRestaurantsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *restauarntId;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantName;

  /**
   * (no documentation provided)
   */
  xmlChar *cuisineTier2Name;

  /**
   * (no documentation provided)
   */
  xmlChar *price;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantCity;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantState;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantCountry;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantLat;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantLong;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantDealFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantRating;

  /**
   * (no documentation provided)
   */
  xmlChar *userSavedFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userFavFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userRecommendedFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *userTipFlag;
};

/**
 * Reads a TSUserProfileRestaurantsObj element from XML. The element to be read is "userprofilerestaurants", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserProfileRestaurantsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileRestaurantsObj *xml_read_enunciate_ns0_TSUserProfileRestaurantsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSUserProfileRestaurantsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj);

/**
 * Frees a TSUserProfileRestaurantsObj.
 *
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to free.
 */
void free_enunciate_ns0_TSUserProfileRestaurantsObj(struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj);

/**
 * Reads a TSUserProfileRestaurantsObj element from XML. The element to be read is "userprofilerestaurants", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileRestaurantsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileRestaurantsObj *xmlTextReaderReadNs0UserprofilerestaurantsElement(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserprofilerestaurantsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj);

/**
 * Writes a TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserprofilerestaurantsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj, int writeNamespaces);

/**
 * Frees the children of a TSUserProfileRestaurantsObj.
 *
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj whose children are to be free.
 */
static void freeNs0UserprofilerestaurantsElement(struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj);

/**
 * Reads a TSUserProfileRestaurantsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileRestaurantsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserProfileRestaurantsObj *xmlTextReaderReadNs0TSUserProfileRestaurantsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileRestaurantsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSUserProfileRestaurantsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj);

/**
 * Frees the elements of a TSUserProfileRestaurantsObj.
 *
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to free.
 */
static void freeNs0TSUserProfileRestaurantsObjType(struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj);

#endif /* DEF_enunciate_ns0_TSUserProfileRestaurantsObj_H */
#ifndef DEF_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj_M
#define DEF_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj_M

/**
 * Reads a TSCurrentRecommendedRestaurantDetailsObj element from XML. The element to be read is "restaurants", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSCurrentRecommendedRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *xml_read_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantsElement(reader);
}

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj) {
  return xmlTextWriterWriteNs0RestaurantsElementNS(writer, _tSCurrentRecommendedRestaurantDetailsObj, 1);
}

/**
 * Frees a TSCurrentRecommendedRestaurantDetailsObj.
 *
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to free.
 */
void free_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj) {
  freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
  free(_tSCurrentRecommendedRestaurantDetailsObj);
}

/**
 * Reads a TSCurrentRecommendedRestaurantDetailsObj element from XML. The element to be read is "restaurants", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSCurrentRecommendedRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *xmlTextReaderReadNs0RestaurantsElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurants", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurants.\n");
#endif
    _tSCurrentRecommendedRestaurantDetailsObj = xmlTextReaderReadNs0TSCurrentRecommendedRestaurantDetailsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSCurrentRecommendedRestaurantDetailsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurants failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurants failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSCurrentRecommendedRestaurantDetailsObj;
}

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj) {
  return xmlTextWriterWriteNs0RestaurantsElementNS(writer, _tSCurrentRecommendedRestaurantDetailsObj, 0);
}

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML under element name "restaurants".
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurants", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurants. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSCurrentRecommendedRestaurantDetailsObj for root element {}restaurants...\n");
#endif
  status = xmlTextWriterWriteNs0TSCurrentRecommendedRestaurantDetailsObjType(writer, _tSCurrentRecommendedRestaurantDetailsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurants. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurants. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSCurrentRecommendedRestaurantDetailsObj.
 *
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj whose children are to be free.
 */
static void freeNs0RestaurantsElement(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj) {
  freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
}

/**
 * Reads a TSCurrentRecommendedRestaurantDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSCurrentRecommendedRestaurantDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *xmlTextReaderReadNs0TSCurrentRecommendedRestaurantDetailsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj = calloc(1, sizeof(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
        free(_tSCurrentRecommendedRestaurantDetailsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
          free(_tSCurrentRecommendedRestaurantDetailsObj);
          return NULL;
        }

        _tSCurrentRecommendedRestaurantDetailsObj->userId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
          free(_tSCurrentRecommendedRestaurantDetailsObj);
          return NULL;
        }

        _tSCurrentRecommendedRestaurantDetailsObj->restaurantId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "questionId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}questionId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}questionId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
          free(_tSCurrentRecommendedRestaurantDetailsObj);
          return NULL;
        }

        _tSCurrentRecommendedRestaurantDetailsObj->questionId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsRecommendersDetailsObj", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsRecommendersDetailsObj of type {}TSRecommendersDetailsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRecommendersDetailsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsRecommendersDetailsObj of type {}TSRecommendersDetailsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCurrentRecommendedRestaurantDetailsObjType(_tSCurrentRecommendedRestaurantDetailsObj);
          free(_tSCurrentRecommendedRestaurantDetailsObj);
          return NULL;
        }

        _tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj = realloc(_tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj, (_tSCurrentRecommendedRestaurantDetailsObj->_sizeof_tsRecommendersDetailsObj + 1) * sizeof(struct enunciate_ns0_TSRecommendersDetailsObj));
        memcpy(&(_tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj[_tSCurrentRecommendedRestaurantDetailsObj->_sizeof_tsRecommendersDetailsObj++]), _child_accessor, sizeof(struct enunciate_ns0_TSRecommendersDetailsObj));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSCurrentRecommendedRestaurantDetailsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSCurrentRecommendedRestaurantDetailsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSCurrentRecommendedRestaurantDetailsObj;
}

/**
 * Writes a TSCurrentRecommendedRestaurantDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSCurrentRecommendedRestaurantDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSCurrentRecommendedRestaurantDetailsObj->userId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCurrentRecommendedRestaurantDetailsObj->userId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCurrentRecommendedRestaurantDetailsObj->restaurantId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCurrentRecommendedRestaurantDetailsObj->restaurantId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCurrentRecommendedRestaurantDetailsObj->questionId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}questionId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}questionId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCurrentRecommendedRestaurantDetailsObj->questionId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}questionId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}questionId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSCurrentRecommendedRestaurantDetailsObj->_sizeof_tsRecommendersDetailsObj; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsRecommendersDetailsObj", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsRecommendersDetailsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRecommendersDetailsObj for element {}tsRecommendersDetailsObj...\n");
#endif
    status = xmlTextWriterWriteNs0TSRecommendersDetailsObjType(writer, &(_tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRecommendersDetailsObj for element {}tsRecommendersDetailsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsRecommendersDetailsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSCurrentRecommendedRestaurantDetailsObj.
 *
 * @param _tSCurrentRecommendedRestaurantDetailsObj The TSCurrentRecommendedRestaurantDetailsObj to free.
 */
static void freeNs0TSCurrentRecommendedRestaurantDetailsObjType(struct enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj *_tSCurrentRecommendedRestaurantDetailsObj) {
  int i;
  if (_tSCurrentRecommendedRestaurantDetailsObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSCurrentRecommendedRestaurantDetailsObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    free(_tSCurrentRecommendedRestaurantDetailsObj->userId);
  }
  if (_tSCurrentRecommendedRestaurantDetailsObj->restaurantId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantId of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSCurrentRecommendedRestaurantDetailsObj->restaurantId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantId of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    free(_tSCurrentRecommendedRestaurantDetailsObj->restaurantId);
  }
  if (_tSCurrentRecommendedRestaurantDetailsObj->questionId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor questionId of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSCurrentRecommendedRestaurantDetailsObj->questionId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor questionId of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    free(_tSCurrentRecommendedRestaurantDetailsObj->questionId);
  }
  if (_tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj != NULL) {
    for (i = 0; i < _tSCurrentRecommendedRestaurantDetailsObj->_sizeof_tsRecommendersDetailsObj; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor tsRecommendersDetailsObj[%i] of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n", i);
#endif
      freeNs0TSRecommendersDetailsObjType(&(_tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsRecommendersDetailsObj of type enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj...\n");
#endif
    free(_tSCurrentRecommendedRestaurantDetailsObj->tsRecommendersDetailsObj);
  }
}
#endif /* DEF_enunciate_ns0_TSCurrentRecommendedRestaurantDetailsObj_M */
#ifndef DEF_enunciate_ns0_TSErrorObj_M
#define DEF_enunciate_ns0_TSErrorObj_M

/**
 * Reads a TSErrorObj element from XML. The element to be read is "error", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSErrorObj, or NULL in case of error.
 */
struct enunciate_ns0_TSErrorObj *xml_read_enunciate_ns0_TSErrorObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ErrorElement(reader);
}

/**
 * Writes a TSErrorObj to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSErrorObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj) {
  return xmlTextWriterWriteNs0ErrorElementNS(writer, _tSErrorObj, 1);
}

/**
 * Frees a TSErrorObj.
 *
 * @param _tSErrorObj The TSErrorObj to free.
 */
void free_enunciate_ns0_TSErrorObj(struct enunciate_ns0_TSErrorObj *_tSErrorObj) {
  freeNs0TSErrorObjType(_tSErrorObj);
  free(_tSErrorObj);
}

/**
 * Reads a TSErrorObj element from XML. The element to be read is "error", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSErrorObj, or NULL in case of error.
 */
struct enunciate_ns0_TSErrorObj *xmlTextReaderReadNs0ErrorElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSErrorObj *_tSErrorObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "error", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}error.\n");
#endif
    _tSErrorObj = xmlTextReaderReadNs0TSErrorObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSErrorObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}error failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}error failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSErrorObj;
}

/**
 * Writes a TSErrorObj to XML under element name "error".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ErrorElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj) {
  return xmlTextWriterWriteNs0ErrorElementNS(writer, _tSErrorObj, 0);
}

/**
 * Writes a TSErrorObj to XML under element name "error".
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ErrorElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "error", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}error. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSErrorObj for root element {}error...\n");
#endif
  status = xmlTextWriterWriteNs0TSErrorObjType(writer, _tSErrorObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}error. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}error. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSErrorObj.
 *
 * @param _tSErrorObj The TSErrorObj whose children are to be free.
 */
static void freeNs0ErrorElement(struct enunciate_ns0_TSErrorObj *_tSErrorObj) {
  freeNs0TSErrorObjType(_tSErrorObj);
}

/**
 * Reads a TSErrorObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSErrorObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSErrorObj *xmlTextReaderReadNs0TSErrorObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSErrorObj *_tSErrorObj = calloc(1, sizeof(struct enunciate_ns0_TSErrorObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSErrorObjType(_tSErrorObj);
        free(_tSErrorObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "errorMsg", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}errorMsg of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}errorMsg of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSErrorObjType(_tSErrorObj);
          free(_tSErrorObj);
          return NULL;
        }

        _tSErrorObj->errorMsg = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSErrorObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSErrorObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSErrorObj;
}

/**
 * Writes a TSErrorObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSErrorObj The TSErrorObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSErrorObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSErrorObj *_tSErrorObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSErrorObj->errorMsg != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "errorMsg", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}errorMsg. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}errorMsg...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSErrorObj->errorMsg));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}errorMsg. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}errorMsg. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSErrorObj.
 *
 * @param _tSErrorObj The TSErrorObj to free.
 */
static void freeNs0TSErrorObjType(struct enunciate_ns0_TSErrorObj *_tSErrorObj) {
  int i;
  if (_tSErrorObj->errorMsg != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor errorMsg of type enunciate_ns0_TSErrorObj...\n");
#endif
    freeXsStringType(_tSErrorObj->errorMsg);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor errorMsg of type enunciate_ns0_TSErrorObj...\n");
#endif
    free(_tSErrorObj->errorMsg);
  }
}
#endif /* DEF_enunciate_ns0_TSErrorObj_M */
#ifndef DEF_enunciate_ns0_TSFacebookUserDataObj_M
#define DEF_enunciate_ns0_TSFacebookUserDataObj_M

/**
 * Reads a TSFacebookUserDataObj element from XML. The element to be read is "facebook_user_data", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSFacebookUserDataObj *xml_read_enunciate_ns0_TSFacebookUserDataObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Facebook_user_dataElement(reader);
}

/**
 * Writes a TSFacebookUserDataObj to XML under element name "facebook_user_data".
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSFacebookUserDataObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj) {
  return xmlTextWriterWriteNs0Facebook_user_dataElementNS(writer, _tSFacebookUserDataObj, 1);
}

/**
 * Frees a TSFacebookUserDataObj.
 *
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to free.
 */
void free_enunciate_ns0_TSFacebookUserDataObj(struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj) {
  freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
  free(_tSFacebookUserDataObj);
}

/**
 * Reads a TSFacebookUserDataObj element from XML. The element to be read is "facebook_user_data", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSFacebookUserDataObj *xmlTextReaderReadNs0Facebook_user_dataElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "facebook_user_data", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}facebook_user_data.\n");
#endif
    _tSFacebookUserDataObj = xmlTextReaderReadNs0TSFacebookUserDataObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSFacebookUserDataObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}facebook_user_data failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}facebook_user_data failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSFacebookUserDataObj;
}

/**
 * Writes a TSFacebookUserDataObj to XML under element name "facebook_user_data".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Facebook_user_dataElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj) {
  return xmlTextWriterWriteNs0Facebook_user_dataElementNS(writer, _tSFacebookUserDataObj, 0);
}

/**
 * Writes a TSFacebookUserDataObj to XML under element name "facebook_user_data".
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Facebook_user_dataElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebook_user_data", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}facebook_user_data. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSFacebookUserDataObj for root element {}facebook_user_data...\n");
#endif
  status = xmlTextWriterWriteNs0TSFacebookUserDataObjType(writer, _tSFacebookUserDataObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}facebook_user_data. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}facebook_user_data. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSFacebookUserDataObj.
 *
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj whose children are to be free.
 */
static void freeNs0Facebook_user_dataElement(struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj) {
  freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
}

/**
 * Reads a TSFacebookUserDataObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSFacebookUserDataObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSFacebookUserDataObj *xmlTextReaderReadNs0TSFacebookUserDataObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj = calloc(1, sizeof(struct enunciate_ns0_TSFacebookUserDataObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
        free(_tSFacebookUserDataObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->userName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "firstName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}firstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->firstName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "middleName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}middleName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}middleName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->middleName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lastName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->lastName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "gender", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}gender of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->gender = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "locale", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}locale of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}locale of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->locale = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "link", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}link of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}link of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->link = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ageRange", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ageRange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ageRange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->ageRange = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "birthday", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}birthday of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}birthday of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->birthday = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "thirdPartyId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}thirdPartyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}thirdPartyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->thirdPartyId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friendlists", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friendlists of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friendlists of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->friendlists = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "installed", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}installed of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}installed of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->installed = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "timezone", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}timezone of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}timezone of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->timezone = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "updatedTime", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}updatedTime of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}updatedTime of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->updatedTime = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "verified", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}verified of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}verified of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->verified = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "devices", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}devices of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}devices of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->devices = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "email", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}email of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->email = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "hometown", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}hometown of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}hometown of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->hometown = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "location", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}location of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}location of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->location = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "picture", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}picture of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}picture of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->picture = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "relationshipStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}relationshipStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}relationshipStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->relationshipStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "checkins", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}checkins of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}checkins of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->checkins = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friends", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friends of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friends of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->friends = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "likes", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}likes of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}likes of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->likes = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "permissions", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}permissions of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}permissions of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->permissions = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "create", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}create of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}create of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSFacebookUserDataObjType(_tSFacebookUserDataObj);
          free(_tSFacebookUserDataObj);
          return NULL;
        }

        _tSFacebookUserDataObj->create = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSFacebookUserDataObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSFacebookUserDataObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSFacebookUserDataObj;
}

/**
 * Writes a TSFacebookUserDataObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSFacebookUserDataObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSFacebookUserDataObj->userName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->userName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->firstName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "firstName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}firstName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->firstName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}firstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->middleName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "middleName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}middleName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}middleName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->middleName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}middleName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}middleName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->lastName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lastName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lastName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->lastName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->gender != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "gender", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}gender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}gender...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->gender));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}gender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}gender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->locale != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "locale", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}locale. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}locale...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->locale));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}locale. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}locale. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->link != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "link", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}link. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}link...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->link));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}link. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}link. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->ageRange != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ageRange", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ageRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ageRange...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->ageRange));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ageRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ageRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->birthday != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "birthday", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}birthday. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}birthday...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->birthday));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}birthday. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}birthday. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->thirdPartyId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "thirdPartyId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}thirdPartyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}thirdPartyId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->thirdPartyId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}thirdPartyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}thirdPartyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->friendlists != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendlists", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friendlists. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}friendlists...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->friendlists));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}friendlists. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friendlists. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->installed != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "installed", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}installed. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}installed...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->installed));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}installed. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}installed. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->timezone != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "timezone", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}timezone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}timezone...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->timezone));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}timezone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}timezone. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->updatedTime != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "updatedTime", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}updatedTime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}updatedTime...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->updatedTime));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}updatedTime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}updatedTime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->verified != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "verified", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}verified. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}verified...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->verified));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}verified. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}verified. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->devices != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "devices", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}devices. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}devices...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->devices));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}devices. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}devices. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->email != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "email", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}email...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->email));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}email. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->hometown != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "hometown", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}hometown. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}hometown...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->hometown));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}hometown. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}hometown. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->location != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "location", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}location. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}location...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->location));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}location. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}location. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->picture != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "picture", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}picture. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}picture...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->picture));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}picture. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}picture. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->relationshipStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "relationshipStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}relationshipStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}relationshipStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->relationshipStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}relationshipStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}relationshipStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->checkins != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "checkins", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}checkins. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}checkins...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->checkins));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}checkins. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}checkins. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->friends != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friends", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friends. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}friends...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->friends));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}friends. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friends. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->likes != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "likes", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}likes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}likes...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->likes));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}likes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}likes. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->permissions != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "permissions", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}permissions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}permissions...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->permissions));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}permissions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}permissions. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSFacebookUserDataObj->create != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "create", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}create. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}create...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSFacebookUserDataObj->create));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}create. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}create. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSFacebookUserDataObj.
 *
 * @param _tSFacebookUserDataObj The TSFacebookUserDataObj to free.
 */
static void freeNs0TSFacebookUserDataObjType(struct enunciate_ns0_TSFacebookUserDataObj *_tSFacebookUserDataObj) {
  int i;
  if (_tSFacebookUserDataObj->userName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->userName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->userName);
  }
  if (_tSFacebookUserDataObj->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->id);
  }
  if (_tSFacebookUserDataObj->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->name);
  }
  if (_tSFacebookUserDataObj->firstName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor firstName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->firstName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor firstName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->firstName);
  }
  if (_tSFacebookUserDataObj->middleName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor middleName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->middleName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor middleName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->middleName);
  }
  if (_tSFacebookUserDataObj->lastName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lastName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->lastName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lastName of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->lastName);
  }
  if (_tSFacebookUserDataObj->gender != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor gender of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->gender);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor gender of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->gender);
  }
  if (_tSFacebookUserDataObj->locale != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor locale of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->locale);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor locale of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->locale);
  }
  if (_tSFacebookUserDataObj->link != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor link of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->link);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor link of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->link);
  }
  if (_tSFacebookUserDataObj->ageRange != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ageRange of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->ageRange);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ageRange of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->ageRange);
  }
  if (_tSFacebookUserDataObj->birthday != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor birthday of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->birthday);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor birthday of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->birthday);
  }
  if (_tSFacebookUserDataObj->thirdPartyId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor thirdPartyId of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->thirdPartyId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor thirdPartyId of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->thirdPartyId);
  }
  if (_tSFacebookUserDataObj->friendlists != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor friendlists of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->friendlists);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friendlists of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->friendlists);
  }
  if (_tSFacebookUserDataObj->installed != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor installed of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->installed);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor installed of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->installed);
  }
  if (_tSFacebookUserDataObj->timezone != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor timezone of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->timezone);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor timezone of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->timezone);
  }
  if (_tSFacebookUserDataObj->updatedTime != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor updatedTime of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->updatedTime);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor updatedTime of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->updatedTime);
  }
  if (_tSFacebookUserDataObj->verified != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor verified of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->verified);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor verified of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->verified);
  }
  if (_tSFacebookUserDataObj->devices != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor devices of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->devices);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor devices of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->devices);
  }
  if (_tSFacebookUserDataObj->email != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor email of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->email);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor email of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->email);
  }
  if (_tSFacebookUserDataObj->hometown != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor hometown of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->hometown);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor hometown of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->hometown);
  }
  if (_tSFacebookUserDataObj->location != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor location of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->location);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor location of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->location);
  }
  if (_tSFacebookUserDataObj->picture != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor picture of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->picture);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor picture of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->picture);
  }
  if (_tSFacebookUserDataObj->relationshipStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor relationshipStatus of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->relationshipStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor relationshipStatus of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->relationshipStatus);
  }
  if (_tSFacebookUserDataObj->checkins != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor checkins of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->checkins);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor checkins of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->checkins);
  }
  if (_tSFacebookUserDataObj->friends != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor friends of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->friends);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friends of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->friends);
  }
  if (_tSFacebookUserDataObj->likes != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor likes of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->likes);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor likes of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->likes);
  }
  if (_tSFacebookUserDataObj->permissions != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor permissions of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->permissions);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor permissions of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->permissions);
  }
  if (_tSFacebookUserDataObj->create != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor create of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    freeXsStringType(_tSFacebookUserDataObj->create);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor create of type enunciate_ns0_TSFacebookUserDataObj...\n");
#endif
    free(_tSFacebookUserDataObj->create);
  }
}
#endif /* DEF_enunciate_ns0_TSFacebookUserDataObj_M */
#ifndef DEF_enunciate_ns0_TSListFacebookUserDataObj_M
#define DEF_enunciate_ns0_TSListFacebookUserDataObj_M

/**
 * Reads a TSListFacebookUserDataObj element from XML. The element to be read is "list_user_profile_fb", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSListFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListFacebookUserDataObj *xml_read_enunciate_ns0_TSListFacebookUserDataObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0List_user_profile_fbElement(reader);
}

/**
 * Writes a TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSListFacebookUserDataObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj) {
  return xmlTextWriterWriteNs0List_user_profile_fbElementNS(writer, _tSListFacebookUserDataObj, 1);
}

/**
 * Frees a TSListFacebookUserDataObj.
 *
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to free.
 */
void free_enunciate_ns0_TSListFacebookUserDataObj(struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj) {
  freeNs0TSListFacebookUserDataObjType(_tSListFacebookUserDataObj);
  free(_tSListFacebookUserDataObj);
}

/**
 * Reads a TSListFacebookUserDataObj element from XML. The element to be read is "list_user_profile_fb", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSListFacebookUserDataObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListFacebookUserDataObj *xmlTextReaderReadNs0List_user_profile_fbElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "list_user_profile_fb", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}list_user_profile_fb.\n");
#endif
    _tSListFacebookUserDataObj = xmlTextReaderReadNs0TSListFacebookUserDataObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSListFacebookUserDataObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}list_user_profile_fb failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}list_user_profile_fb failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSListFacebookUserDataObj;
}

/**
 * Writes a TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0List_user_profile_fbElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj) {
  return xmlTextWriterWriteNs0List_user_profile_fbElementNS(writer, _tSListFacebookUserDataObj, 0);
}

/**
 * Writes a TSListFacebookUserDataObj to XML under element name "list_user_profile_fb".
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0List_user_profile_fbElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list_user_profile_fb", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}list_user_profile_fb. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSListFacebookUserDataObj for root element {}list_user_profile_fb...\n");
#endif
  status = xmlTextWriterWriteNs0TSListFacebookUserDataObjType(writer, _tSListFacebookUserDataObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}list_user_profile_fb. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}list_user_profile_fb. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSListFacebookUserDataObj.
 *
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj whose children are to be free.
 */
static void freeNs0List_user_profile_fbElement(struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj) {
  freeNs0TSListFacebookUserDataObjType(_tSListFacebookUserDataObj);
}

/**
 * Reads a TSListFacebookUserDataObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSListFacebookUserDataObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSListFacebookUserDataObj *xmlTextReaderReadNs0TSListFacebookUserDataObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj = calloc(1, sizeof(struct enunciate_ns0_TSListFacebookUserDataObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSListFacebookUserDataObjType(_tSListFacebookUserDataObj);
        free(_tSListFacebookUserDataObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "user_current_profile", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}user_current_profile of type {}TSFacebookUserDataObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSFacebookUserDataObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}user_current_profile of type {}TSFacebookUserDataObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListFacebookUserDataObjType(_tSListFacebookUserDataObj);
          free(_tSListFacebookUserDataObj);
          return NULL;
        }

        _tSListFacebookUserDataObj->user_profile_current = ((struct enunciate_ns0_TSFacebookUserDataObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "list_user_profile", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}list_user_profile of type {}TSFacebookUserDataObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSFacebookUserDataObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}list_user_profile of type {}TSFacebookUserDataObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListFacebookUserDataObjType(_tSListFacebookUserDataObj);
          free(_tSListFacebookUserDataObj);
          return NULL;
        }

        _tSListFacebookUserDataObj->list_user_profile_fb = realloc(_tSListFacebookUserDataObj->list_user_profile_fb, (_tSListFacebookUserDataObj->_sizeof_list_user_profile_fb + 1) * sizeof(struct enunciate_ns0_TSFacebookUserDataObj));
        memcpy(&(_tSListFacebookUserDataObj->list_user_profile_fb[_tSListFacebookUserDataObj->_sizeof_list_user_profile_fb++]), _child_accessor, sizeof(struct enunciate_ns0_TSFacebookUserDataObj));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSListFacebookUserDataObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSListFacebookUserDataObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSListFacebookUserDataObj;
}

/**
 * Writes a TSListFacebookUserDataObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSListFacebookUserDataObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSListFacebookUserDataObj->user_profile_current != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user_current_profile", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}user_current_profile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSFacebookUserDataObj for element {}user_current_profile...\n");
#endif
    status = xmlTextWriterWriteNs0TSFacebookUserDataObjType(writer, (_tSListFacebookUserDataObj->user_profile_current));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSFacebookUserDataObj for element {}user_current_profile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}user_current_profile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSListFacebookUserDataObj->_sizeof_list_user_profile_fb; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "list_user_profile", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}list_user_profile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSFacebookUserDataObj for element {}list_user_profile...\n");
#endif
    status = xmlTextWriterWriteNs0TSFacebookUserDataObjType(writer, &(_tSListFacebookUserDataObj->list_user_profile_fb[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSFacebookUserDataObj for element {}list_user_profile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}list_user_profile. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSListFacebookUserDataObj.
 *
 * @param _tSListFacebookUserDataObj The TSListFacebookUserDataObj to free.
 */
static void freeNs0TSListFacebookUserDataObjType(struct enunciate_ns0_TSListFacebookUserDataObj *_tSListFacebookUserDataObj) {
  int i;
  if (_tSListFacebookUserDataObj->user_profile_current != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor user_profile_current of type enunciate_ns0_TSListFacebookUserDataObj...\n");
#endif
    freeNs0TSFacebookUserDataObjType(_tSListFacebookUserDataObj->user_profile_current);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor user_profile_current of type enunciate_ns0_TSListFacebookUserDataObj...\n");
#endif
    free(_tSListFacebookUserDataObj->user_profile_current);
  }
  if (_tSListFacebookUserDataObj->list_user_profile_fb != NULL) {
    for (i = 0; i < _tSListFacebookUserDataObj->_sizeof_list_user_profile_fb; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor list_user_profile_fb[%i] of type enunciate_ns0_TSListFacebookUserDataObj...\n", i);
#endif
      freeNs0TSFacebookUserDataObjType(&(_tSListFacebookUserDataObj->list_user_profile_fb[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor list_user_profile_fb of type enunciate_ns0_TSListFacebookUserDataObj...\n");
#endif
    free(_tSListFacebookUserDataObj->list_user_profile_fb);
  }
}
#endif /* DEF_enunciate_ns0_TSListFacebookUserDataObj_M */
#ifndef DEF_enunciate_ns0_TSListNotificationSettingsObj_M
#define DEF_enunciate_ns0_TSListNotificationSettingsObj_M

/**
 * Reads a TSListNotificationSettingsObj element from XML. The element to be read is "listNotifications", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSListNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListNotificationSettingsObj *xml_read_enunciate_ns0_TSListNotificationSettingsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0ListNotificationsElement(reader);
}

/**
 * Writes a TSListNotificationSettingsObj to XML under element name "listNotifications".
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSListNotificationSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj) {
  return xmlTextWriterWriteNs0ListNotificationsElementNS(writer, _tSListNotificationSettingsObj, 1);
}

/**
 * Frees a TSListNotificationSettingsObj.
 *
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to free.
 */
void free_enunciate_ns0_TSListNotificationSettingsObj(struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj) {
  freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
  free(_tSListNotificationSettingsObj);
}

/**
 * Reads a TSListNotificationSettingsObj element from XML. The element to be read is "listNotifications", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSListNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSListNotificationSettingsObj *xmlTextReaderReadNs0ListNotificationsElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "listNotifications", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}listNotifications.\n");
#endif
    _tSListNotificationSettingsObj = xmlTextReaderReadNs0TSListNotificationSettingsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSListNotificationSettingsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}listNotifications failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}listNotifications failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSListNotificationSettingsObj;
}

/**
 * Writes a TSListNotificationSettingsObj to XML under element name "listNotifications".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListNotificationsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj) {
  return xmlTextWriterWriteNs0ListNotificationsElementNS(writer, _tSListNotificationSettingsObj, 0);
}

/**
 * Writes a TSListNotificationSettingsObj to XML under element name "listNotifications".
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0ListNotificationsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "listNotifications", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}listNotifications. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSListNotificationSettingsObj for root element {}listNotifications...\n");
#endif
  status = xmlTextWriterWriteNs0TSListNotificationSettingsObjType(writer, _tSListNotificationSettingsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}listNotifications. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}listNotifications. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSListNotificationSettingsObj.
 *
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj whose children are to be free.
 */
static void freeNs0ListNotificationsElement(struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj) {
  freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
}

/**
 * Reads a TSListNotificationSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSListNotificationSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSListNotificationSettingsObj *xmlTextReaderReadNs0TSListNotificationSettingsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj = calloc(1, sizeof(struct enunciate_ns0_TSListNotificationSettingsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
        free(_tSListNotificationSettingsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->userId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friendsAskReco", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friendsAskReco of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friendsAskReco of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->friendsAskReco = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "peopleFollowAskReco", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}peopleFollowAskReco of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}peopleFollowAskReco of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->peopleFollowAskReco = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "otherPeopleAskReco", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}otherPeopleAskReco of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}otherPeopleAskReco of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->otherPeopleAskReco = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "peopleLikeMyReco", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}peopleLikeMyReco of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}peopleLikeMyReco of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->peopleLikeMyReco = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "peopleAskMeFollowReco", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}peopleAskMeFollowReco of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}peopleAskMeFollowReco of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->peopleAskMeFollowReco = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friendsSendMeReco", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friendsSendMeReco of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friendsSendMeReco of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->friendsSendMeReco = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "peopleLikeCommentTips", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}peopleLikeCommentTips of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}peopleLikeCommentTips of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->peopleLikeCommentTips = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friendsPostQuestionForum", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friendsPostQuestionForum of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friendsPostQuestionForum of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->friendsPostQuestionForum = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friendsJoinTasteSync", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friendsJoinTasteSync of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friendsJoinTasteSync of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->friendsJoinTasteSync = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "newslettersDigestsTasteSync", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}newslettersDigestsTasteSync of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}newslettersDigestsTasteSync of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->newslettersDigestsTasteSync = ((struct enunciate_ns0_TSNotificationSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSListNotificationSettingsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSListNotificationSettingsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSListNotificationSettingsObj;
}

/**
 * Writes a TSListNotificationSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSListNotificationSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSListNotificationSettingsObj->userId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSListNotificationSettingsObj->userId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->friendsAskReco != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendsAskReco", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friendsAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}friendsAskReco...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->friendsAskReco));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}friendsAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friendsAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->peopleFollowAskReco != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "peopleFollowAskReco", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}peopleFollowAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}peopleFollowAskReco...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->peopleFollowAskReco));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}peopleFollowAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}peopleFollowAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->otherPeopleAskReco != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "otherPeopleAskReco", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}otherPeopleAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}otherPeopleAskReco...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->otherPeopleAskReco));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}otherPeopleAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}otherPeopleAskReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->peopleLikeMyReco != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "peopleLikeMyReco", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}peopleLikeMyReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}peopleLikeMyReco...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->peopleLikeMyReco));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}peopleLikeMyReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}peopleLikeMyReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->peopleAskMeFollowReco != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "peopleAskMeFollowReco", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}peopleAskMeFollowReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}peopleAskMeFollowReco...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->peopleAskMeFollowReco));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}peopleAskMeFollowReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}peopleAskMeFollowReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->friendsSendMeReco != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendsSendMeReco", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friendsSendMeReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}friendsSendMeReco...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->friendsSendMeReco));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}friendsSendMeReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friendsSendMeReco. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->peopleLikeCommentTips != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "peopleLikeCommentTips", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}peopleLikeCommentTips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}peopleLikeCommentTips...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->peopleLikeCommentTips));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}peopleLikeCommentTips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}peopleLikeCommentTips. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->friendsPostQuestionForum != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendsPostQuestionForum", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friendsPostQuestionForum. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}friendsPostQuestionForum...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->friendsPostQuestionForum));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}friendsPostQuestionForum. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friendsPostQuestionForum. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->friendsJoinTasteSync != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendsJoinTasteSync", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friendsJoinTasteSync. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}friendsJoinTasteSync...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->friendsJoinTasteSync));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}friendsJoinTasteSync. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friendsJoinTasteSync. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSListNotificationSettingsObj->newslettersDigestsTasteSync != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "newslettersDigestsTasteSync", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}newslettersDigestsTasteSync. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}newslettersDigestsTasteSync...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, (_tSListNotificationSettingsObj->newslettersDigestsTasteSync));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}newslettersDigestsTasteSync. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}newslettersDigestsTasteSync. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSListNotificationSettingsObj.
 *
 * @param _tSListNotificationSettingsObj The TSListNotificationSettingsObj to free.
 */
static void freeNs0TSListNotificationSettingsObjType(struct enunciate_ns0_TSListNotificationSettingsObj *_tSListNotificationSettingsObj) {
  int i;
  if (_tSListNotificationSettingsObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeXsStringType(_tSListNotificationSettingsObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->userId);
  }
  if (_tSListNotificationSettingsObj->friendsAskReco != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor friendsAskReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->friendsAskReco);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friendsAskReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->friendsAskReco);
  }
  if (_tSListNotificationSettingsObj->peopleFollowAskReco != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor peopleFollowAskReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->peopleFollowAskReco);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor peopleFollowAskReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->peopleFollowAskReco);
  }
  if (_tSListNotificationSettingsObj->otherPeopleAskReco != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor otherPeopleAskReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->otherPeopleAskReco);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor otherPeopleAskReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->otherPeopleAskReco);
  }
  if (_tSListNotificationSettingsObj->peopleLikeMyReco != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor peopleLikeMyReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->peopleLikeMyReco);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor peopleLikeMyReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->peopleLikeMyReco);
  }
  if (_tSListNotificationSettingsObj->peopleAskMeFollowReco != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor peopleAskMeFollowReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->peopleAskMeFollowReco);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor peopleAskMeFollowReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->peopleAskMeFollowReco);
  }
  if (_tSListNotificationSettingsObj->friendsSendMeReco != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor friendsSendMeReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->friendsSendMeReco);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friendsSendMeReco of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->friendsSendMeReco);
  }
  if (_tSListNotificationSettingsObj->peopleLikeCommentTips != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor peopleLikeCommentTips of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->peopleLikeCommentTips);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor peopleLikeCommentTips of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->peopleLikeCommentTips);
  }
  if (_tSListNotificationSettingsObj->friendsPostQuestionForum != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor friendsPostQuestionForum of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->friendsPostQuestionForum);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friendsPostQuestionForum of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->friendsPostQuestionForum);
  }
  if (_tSListNotificationSettingsObj->friendsJoinTasteSync != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor friendsJoinTasteSync of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->friendsJoinTasteSync);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friendsJoinTasteSync of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->friendsJoinTasteSync);
  }
  if (_tSListNotificationSettingsObj->newslettersDigestsTasteSync != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor newslettersDigestsTasteSync of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    freeNs0TSNotificationSettingsObjType(_tSListNotificationSettingsObj->newslettersDigestsTasteSync);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor newslettersDigestsTasteSync of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->newslettersDigestsTasteSync);
  }
}
#endif /* DEF_enunciate_ns0_TSListNotificationSettingsObj_M */
#ifndef DEF_enunciate_ns0_TSNotificationSettingsObj_M
#define DEF_enunciate_ns0_TSNotificationSettingsObj_M

/**
 * Reads a TSNotificationSettingsObj element from XML. The element to be read is "notifications", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSNotificationSettingsObj *xml_read_enunciate_ns0_TSNotificationSettingsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0NotificationsElement(reader);
}

/**
 * Writes a TSNotificationSettingsObj to XML under element name "notifications".
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSNotificationSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj) {
  return xmlTextWriterWriteNs0NotificationsElementNS(writer, _tSNotificationSettingsObj, 1);
}

/**
 * Frees a TSNotificationSettingsObj.
 *
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to free.
 */
void free_enunciate_ns0_TSNotificationSettingsObj(struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj) {
  freeNs0TSNotificationSettingsObjType(_tSNotificationSettingsObj);
  free(_tSNotificationSettingsObj);
}

/**
 * Reads a TSNotificationSettingsObj element from XML. The element to be read is "notifications", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSNotificationSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSNotificationSettingsObj *xmlTextReaderReadNs0NotificationsElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "notifications", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}notifications.\n");
#endif
    _tSNotificationSettingsObj = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSNotificationSettingsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}notifications failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}notifications failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSNotificationSettingsObj;
}

/**
 * Writes a TSNotificationSettingsObj to XML under element name "notifications".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NotificationsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj) {
  return xmlTextWriterWriteNs0NotificationsElementNS(writer, _tSNotificationSettingsObj, 0);
}

/**
 * Writes a TSNotificationSettingsObj to XML under element name "notifications".
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0NotificationsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "notifications", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}notifications. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSNotificationSettingsObj for root element {}notifications...\n");
#endif
  status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, _tSNotificationSettingsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}notifications. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}notifications. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSNotificationSettingsObj.
 *
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj whose children are to be free.
 */
static void freeNs0NotificationsElement(struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj) {
  freeNs0TSNotificationSettingsObjType(_tSNotificationSettingsObj);
}

/**
 * Reads a TSNotificationSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSNotificationSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSNotificationSettingsObj *xmlTextReaderReadNs0TSNotificationSettingsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj = calloc(1, sizeof(struct enunciate_ns0_TSNotificationSettingsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSNotificationSettingsObjType(_tSNotificationSettingsObj);
        free(_tSNotificationSettingsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "phoneFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}phoneFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}phoneFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSNotificationSettingsObjType(_tSNotificationSettingsObj);
          free(_tSNotificationSettingsObj);
          return NULL;
        }

        _tSNotificationSettingsObj->phoneFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "emailFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}emailFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}emailFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSNotificationSettingsObjType(_tSNotificationSettingsObj);
          free(_tSNotificationSettingsObj);
          return NULL;
        }

        _tSNotificationSettingsObj->emailFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSNotificationSettingsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSNotificationSettingsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSNotificationSettingsObj;
}

/**
 * Writes a TSNotificationSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSNotificationSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSNotificationSettingsObj->phoneFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phoneFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}phoneFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}phoneFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSNotificationSettingsObj->phoneFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}phoneFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}phoneFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSNotificationSettingsObj->emailFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "emailFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}emailFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}emailFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSNotificationSettingsObj->emailFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}emailFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}emailFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSNotificationSettingsObj.
 *
 * @param _tSNotificationSettingsObj The TSNotificationSettingsObj to free.
 */
static void freeNs0TSNotificationSettingsObjType(struct enunciate_ns0_TSNotificationSettingsObj *_tSNotificationSettingsObj) {
  int i;
  if (_tSNotificationSettingsObj->phoneFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor phoneFlag of type enunciate_ns0_TSNotificationSettingsObj...\n");
#endif
    freeXsStringType(_tSNotificationSettingsObj->phoneFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor phoneFlag of type enunciate_ns0_TSNotificationSettingsObj...\n");
#endif
    free(_tSNotificationSettingsObj->phoneFlag);
  }
  if (_tSNotificationSettingsObj->emailFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor emailFlag of type enunciate_ns0_TSNotificationSettingsObj...\n");
#endif
    freeXsStringType(_tSNotificationSettingsObj->emailFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor emailFlag of type enunciate_ns0_TSNotificationSettingsObj...\n");
#endif
    free(_tSNotificationSettingsObj->emailFlag);
  }
}
#endif /* DEF_enunciate_ns0_TSNotificationSettingsObj_M */
#ifndef DEF_enunciate_ns0_TSPhotoObj_M
#define DEF_enunciate_ns0_TSPhotoObj_M

/**
 * Reads a TSPhotoObj element from XML. The element to be read is "photo", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPhotoObj *xml_read_enunciate_ns0_TSPhotoObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PhotoElement(reader);
}

/**
 * Writes a TSPhotoObj to XML under element name "photo".
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSPhotoObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj) {
  return xmlTextWriterWriteNs0PhotoElementNS(writer, _tSPhotoObj, 1);
}

/**
 * Frees a TSPhotoObj.
 *
 * @param _tSPhotoObj The TSPhotoObj to free.
 */
void free_enunciate_ns0_TSPhotoObj(struct enunciate_ns0_TSPhotoObj *_tSPhotoObj) {
  freeNs0TSPhotoObjType(_tSPhotoObj);
  free(_tSPhotoObj);
}

/**
 * Reads a TSPhotoObj element from XML. The element to be read is "photo", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPhotoObj *xmlTextReaderReadNs0PhotoElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSPhotoObj *_tSPhotoObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}photo.\n");
#endif
    _tSPhotoObj = xmlTextReaderReadNs0TSPhotoObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSPhotoObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}photo failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}photo failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSPhotoObj;
}

/**
 * Writes a TSPhotoObj to XML under element name "photo".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PhotoElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj) {
  return xmlTextWriterWriteNs0PhotoElementNS(writer, _tSPhotoObj, 0);
}

/**
 * Writes a TSPhotoObj to XML under element name "photo".
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PhotoElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}photo. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSPhotoObj for root element {}photo...\n");
#endif
  status = xmlTextWriterWriteNs0TSPhotoObjType(writer, _tSPhotoObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}photo. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}photo. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSPhotoObj.
 *
 * @param _tSPhotoObj The TSPhotoObj whose children are to be free.
 */
static void freeNs0PhotoElement(struct enunciate_ns0_TSPhotoObj *_tSPhotoObj) {
  freeNs0TSPhotoObjType(_tSPhotoObj);
}

/**
 * Reads a TSPhotoObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSPhotoObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSPhotoObj *xmlTextReaderReadNs0TSPhotoObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSPhotoObj *_tSPhotoObj = calloc(1, sizeof(struct enunciate_ns0_TSPhotoObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSPhotoObjType(_tSPhotoObj);
        free(_tSPhotoObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPhotoObjType(_tSPhotoObj);
          free(_tSPhotoObj);
          return NULL;
        }

        _tSPhotoObj->userId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPhotoObjType(_tSPhotoObj);
          free(_tSPhotoObj);
          return NULL;
        }

        _tSPhotoObj->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPhotoObjType(_tSPhotoObj);
          free(_tSPhotoObj);
          return NULL;
        }

        _tSPhotoObj->photo = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSPhotoObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSPhotoObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSPhotoObj;
}

/**
 * Writes a TSPhotoObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSPhotoObj The TSPhotoObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSPhotoObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSPhotoObj *_tSPhotoObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSPhotoObj->userId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPhotoObj->userId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSPhotoObj->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPhotoObj->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSPhotoObj->photo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}photo...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPhotoObj->photo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSPhotoObj.
 *
 * @param _tSPhotoObj The TSPhotoObj to free.
 */
static void freeNs0TSPhotoObjType(struct enunciate_ns0_TSPhotoObj *_tSPhotoObj) {
  int i;
  if (_tSPhotoObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSPhotoObj...\n");
#endif
    freeXsStringType(_tSPhotoObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSPhotoObj...\n");
#endif
    free(_tSPhotoObj->userId);
  }
  if (_tSPhotoObj->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_TSPhotoObj...\n");
#endif
    freeXsStringType(_tSPhotoObj->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_TSPhotoObj...\n");
#endif
    free(_tSPhotoObj->name);
  }
  if (_tSPhotoObj->photo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photo of type enunciate_ns0_TSPhotoObj...\n");
#endif
    freeXsStringType(_tSPhotoObj->photo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photo of type enunciate_ns0_TSPhotoObj...\n");
#endif
    free(_tSPhotoObj->photo);
  }
}
#endif /* DEF_enunciate_ns0_TSPhotoObj_M */
#ifndef DEF_enunciate_ns0_TSPrivacySettingsObj_M
#define DEF_enunciate_ns0_TSPrivacySettingsObj_M

/**
 * Reads a TSPrivacySettingsObj element from XML. The element to be read is "privacy", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSPrivacySettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPrivacySettingsObj *xml_read_enunciate_ns0_TSPrivacySettingsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0PrivacyElement(reader);
}

/**
 * Writes a TSPrivacySettingsObj to XML under element name "privacy".
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSPrivacySettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj) {
  return xmlTextWriterWriteNs0PrivacyElementNS(writer, _tSPrivacySettingsObj, 1);
}

/**
 * Frees a TSPrivacySettingsObj.
 *
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to free.
 */
void free_enunciate_ns0_TSPrivacySettingsObj(struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj) {
  freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
  free(_tSPrivacySettingsObj);
}

/**
 * Reads a TSPrivacySettingsObj element from XML. The element to be read is "privacy", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSPrivacySettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSPrivacySettingsObj *xmlTextReaderReadNs0PrivacyElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "privacy", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}privacy.\n");
#endif
    _tSPrivacySettingsObj = xmlTextReaderReadNs0TSPrivacySettingsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSPrivacySettingsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}privacy failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}privacy failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSPrivacySettingsObj;
}

/**
 * Writes a TSPrivacySettingsObj to XML under element name "privacy".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PrivacyElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj) {
  return xmlTextWriterWriteNs0PrivacyElementNS(writer, _tSPrivacySettingsObj, 0);
}

/**
 * Writes a TSPrivacySettingsObj to XML under element name "privacy".
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0PrivacyElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacy", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}privacy. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSPrivacySettingsObj for root element {}privacy...\n");
#endif
  status = xmlTextWriterWriteNs0TSPrivacySettingsObjType(writer, _tSPrivacySettingsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}privacy. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}privacy. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSPrivacySettingsObj.
 *
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj whose children are to be free.
 */
static void freeNs0PrivacyElement(struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj) {
  freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
}

/**
 * Reads a TSPrivacySettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSPrivacySettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSPrivacySettingsObj *xmlTextReaderReadNs0TSPrivacySettingsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj = calloc(1, sizeof(struct enunciate_ns0_TSPrivacySettingsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
        free(_tSPrivacySettingsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "privacySettingsIds", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}privacySettingsIds of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}privacySettingsIds of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
          free(_tSPrivacySettingsObj);
          return NULL;
        }

        _tSPrivacySettingsObj->privacySettingsIds = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "privacyUserFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}privacyUserFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}privacyUserFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
          free(_tSPrivacySettingsObj);
          return NULL;
        }

        _tSPrivacySettingsObj->privacyUserFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSPrivacySettingsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSPrivacySettingsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSPrivacySettingsObj;
}

/**
 * Writes a TSPrivacySettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSPrivacySettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSPrivacySettingsObj->privacySettingsIds != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacySettingsIds", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}privacySettingsIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}privacySettingsIds...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPrivacySettingsObj->privacySettingsIds));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}privacySettingsIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}privacySettingsIds. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSPrivacySettingsObj->privacyUserFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacyUserFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}privacyUserFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}privacyUserFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPrivacySettingsObj->privacyUserFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}privacyUserFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}privacyUserFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSPrivacySettingsObj.
 *
 * @param _tSPrivacySettingsObj The TSPrivacySettingsObj to free.
 */
static void freeNs0TSPrivacySettingsObjType(struct enunciate_ns0_TSPrivacySettingsObj *_tSPrivacySettingsObj) {
  int i;
  if (_tSPrivacySettingsObj->privacySettingsIds != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor privacySettingsIds of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    freeXsStringType(_tSPrivacySettingsObj->privacySettingsIds);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor privacySettingsIds of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    free(_tSPrivacySettingsObj->privacySettingsIds);
  }
  if (_tSPrivacySettingsObj->privacyUserFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor privacyUserFlag of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    freeXsStringType(_tSPrivacySettingsObj->privacyUserFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor privacyUserFlag of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    free(_tSPrivacySettingsObj->privacyUserFlag);
  }
}
#endif /* DEF_enunciate_ns0_TSPrivacySettingsObj_M */
#ifndef DEF_enunciate_ns0_TSRecommendersDetailsObj_M
#define DEF_enunciate_ns0_TSRecommendersDetailsObj_M

/**
 * Reads a TSRecommendersDetailsObj element from XML. The element to be read is "recommenders", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendersDetailsObj *xml_read_enunciate_ns0_TSRecommendersDetailsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RecommendersElement(reader);
}

/**
 * Writes a TSRecommendersDetailsObj to XML under element name "recommenders".
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecommendersDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj) {
  return xmlTextWriterWriteNs0RecommendersElementNS(writer, _tSRecommendersDetailsObj, 1);
}

/**
 * Frees a TSRecommendersDetailsObj.
 *
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to free.
 */
void free_enunciate_ns0_TSRecommendersDetailsObj(struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj) {
  freeNs0TSRecommendersDetailsObjType(_tSRecommendersDetailsObj);
  free(_tSRecommendersDetailsObj);
}

/**
 * Reads a TSRecommendersDetailsObj element from XML. The element to be read is "recommenders", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendersDetailsObj *xmlTextReaderReadNs0RecommendersElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recommenders", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recommenders.\n");
#endif
    _tSRecommendersDetailsObj = xmlTextReaderReadNs0TSRecommendersDetailsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecommendersDetailsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recommenders failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recommenders failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecommendersDetailsObj;
}

/**
 * Writes a TSRecommendersDetailsObj to XML under element name "recommenders".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecommendersElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj) {
  return xmlTextWriterWriteNs0RecommendersElementNS(writer, _tSRecommendersDetailsObj, 0);
}

/**
 * Writes a TSRecommendersDetailsObj to XML under element name "recommenders".
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecommendersElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommenders", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recommenders. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecommendersDetailsObj for root element {}recommenders...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecommendersDetailsObjType(writer, _tSRecommendersDetailsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recommenders. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recommenders. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecommendersDetailsObj.
 *
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj whose children are to be free.
 */
static void freeNs0RecommendersElement(struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj) {
  freeNs0TSRecommendersDetailsObjType(_tSRecommendersDetailsObj);
}

/**
 * Reads a TSRecommendersDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecommendersDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendersDetailsObj *xmlTextReaderReadNs0TSRecommendersDetailsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj = calloc(1, sizeof(struct enunciate_ns0_TSRecommendersDetailsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecommendersDetailsObjType(_tSRecommendersDetailsObj);
        free(_tSRecommendersDetailsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendersDetailsObjType(_tSRecommendersDetailsObj);
          free(_tSRecommendersDetailsObj);
          return NULL;
        }

        _tSRecommendersDetailsObj->userId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendersDetailsObjType(_tSRecommendersDetailsObj);
          free(_tSRecommendersDetailsObj);
          return NULL;
        }

        _tSRecommendersDetailsObj->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photo of type {}TSPhotoObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSPhotoObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photo of type {}TSPhotoObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendersDetailsObjType(_tSRecommendersDetailsObj);
          free(_tSRecommendersDetailsObj);
          return NULL;
        }

        _tSRecommendersDetailsObj->photo = ((struct enunciate_ns0_TSPhotoObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecommendersDetailsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecommendersDetailsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecommendersDetailsObj;
}

/**
 * Writes a TSRecommendersDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecommendersDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecommendersDetailsObj->userId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendersDetailsObj->userId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendersDetailsObj->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendersDetailsObj->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendersDetailsObj->photo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSPhotoObj for element {}photo...\n");
#endif
    status = xmlTextWriterWriteNs0TSPhotoObjType(writer, (_tSRecommendersDetailsObj->photo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSPhotoObj for element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecommendersDetailsObj.
 *
 * @param _tSRecommendersDetailsObj The TSRecommendersDetailsObj to free.
 */
static void freeNs0TSRecommendersDetailsObjType(struct enunciate_ns0_TSRecommendersDetailsObj *_tSRecommendersDetailsObj) {
  int i;
  if (_tSRecommendersDetailsObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSRecommendersDetailsObj...\n");
#endif
    freeXsStringType(_tSRecommendersDetailsObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSRecommendersDetailsObj...\n");
#endif
    free(_tSRecommendersDetailsObj->userId);
  }
  if (_tSRecommendersDetailsObj->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_TSRecommendersDetailsObj...\n");
#endif
    freeXsStringType(_tSRecommendersDetailsObj->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_TSRecommendersDetailsObj...\n");
#endif
    free(_tSRecommendersDetailsObj->name);
  }
  if (_tSRecommendersDetailsObj->photo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photo of type enunciate_ns0_TSRecommendersDetailsObj...\n");
#endif
    freeNs0TSPhotoObjType(_tSRecommendersDetailsObj->photo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photo of type enunciate_ns0_TSRecommendersDetailsObj...\n");
#endif
    free(_tSRecommendersDetailsObj->photo);
  }
}
#endif /* DEF_enunciate_ns0_TSRecommendersDetailsObj_M */
#ifndef DEF_enunciate_ns0_TSRestaurantDetailsObj_M
#define DEF_enunciate_ns0_TSRestaurantDetailsObj_M

/**
 * Reads a TSRestaurantDetailsObj element from XML. The element to be read is "restaurantdetails", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantDetailsObj *xml_read_enunciate_ns0_TSRestaurantDetailsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantdetailsElement(reader);
}

/**
 * Writes a TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj) {
  return xmlTextWriterWriteNs0RestaurantdetailsElementNS(writer, _tSRestaurantDetailsObj, 1);
}

/**
 * Frees a TSRestaurantDetailsObj.
 *
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to free.
 */
void free_enunciate_ns0_TSRestaurantDetailsObj(struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj) {
  freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
  free(_tSRestaurantDetailsObj);
}

/**
 * Reads a TSRestaurantDetailsObj element from XML. The element to be read is "restaurantdetails", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantDetailsObj *xmlTextReaderReadNs0RestaurantdetailsElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantdetails", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantdetails.\n");
#endif
    _tSRestaurantDetailsObj = xmlTextReaderReadNs0TSRestaurantDetailsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantDetailsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantdetails failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantdetails failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantDetailsObj;
}

/**
 * Writes a TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantdetailsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj) {
  return xmlTextWriterWriteNs0RestaurantdetailsElementNS(writer, _tSRestaurantDetailsObj, 0);
}

/**
 * Writes a TSRestaurantDetailsObj to XML under element name "restaurantdetails".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantdetailsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantdetails", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantdetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantDetailsObj for root element {}restaurantdetails...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantDetailsObjType(writer, _tSRestaurantDetailsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantdetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantdetails. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantDetailsObj.
 *
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj whose children are to be free.
 */
static void freeNs0RestaurantdetailsElement(struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj) {
  freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
}

/**
 * Reads a TSRestaurantDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantDetailsObj *xmlTextReaderReadNs0TSRestaurantDetailsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantDetailsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
        free(_tSRestaurantDetailsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "openNowFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}openNowFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}openNowFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->openNowFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "dealHeadline", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}dealHeadline of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}dealHeadline of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->dealHeadline = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photoList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photoList of type {}TSPhotoObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSPhotoObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photoList of type {}TSPhotoObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->photoList = realloc(_tSRestaurantDetailsObj->photoList, (_tSRestaurantDetailsObj->_sizeof_photoList + 1) * sizeof(struct enunciate_ns0_TSPhotoObj));
        memcpy(&(_tSRestaurantDetailsObj->photoList[_tSRestaurantDetailsObj->_sizeof_photoList++]), _child_accessor, sizeof(struct enunciate_ns0_TSPhotoObj));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "moreInfoFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}moreInfoFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}moreInfoFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->moreInfoFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "menuFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}menuFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}menuFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->menuFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userRestaurantSavedFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userRestaurantSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userRestaurantSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->userRestaurantSavedFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userRestaurantFavFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userRestaurantFavFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userRestaurantFavFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->userRestaurantFavFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userRestaurantTipFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userRestaurantTipFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userRestaurantTipFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->userRestaurantTipFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantDetailsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantDetailsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantDetailsObj;
}

/**
 * Writes a TSRestaurantDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantDetailsObj->openNowFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "openNowFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}openNowFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}openNowFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->openNowFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}openNowFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}openNowFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantDetailsObj->dealHeadline != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "dealHeadline", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}dealHeadline. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}dealHeadline...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->dealHeadline));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}dealHeadline. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}dealHeadline. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSRestaurantDetailsObj->_sizeof_photoList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photoList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSPhotoObj for element {}photoList...\n");
#endif
    status = xmlTextWriterWriteNs0TSPhotoObjType(writer, &(_tSRestaurantDetailsObj->photoList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSPhotoObj for element {}photoList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photoList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantDetailsObj->moreInfoFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "moreInfoFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}moreInfoFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}moreInfoFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->moreInfoFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}moreInfoFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}moreInfoFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantDetailsObj->menuFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menuFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}menuFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}menuFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->menuFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}menuFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}menuFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantDetailsObj->userRestaurantSavedFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRestaurantSavedFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userRestaurantSavedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userRestaurantSavedFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->userRestaurantSavedFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userRestaurantSavedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userRestaurantSavedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantDetailsObj->userRestaurantFavFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRestaurantFavFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userRestaurantFavFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userRestaurantFavFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->userRestaurantFavFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userRestaurantFavFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userRestaurantFavFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantDetailsObj->userRestaurantTipFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRestaurantTipFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userRestaurantTipFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userRestaurantTipFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantDetailsObj->userRestaurantTipFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userRestaurantTipFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userRestaurantTipFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantDetailsObj.
 *
 * @param _tSRestaurantDetailsObj The TSRestaurantDetailsObj to free.
 */
static void freeNs0TSRestaurantDetailsObjType(struct enunciate_ns0_TSRestaurantDetailsObj *_tSRestaurantDetailsObj) {
  int i;
  if (_tSRestaurantDetailsObj->openNowFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor openNowFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->openNowFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor openNowFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->openNowFlag);
  }
  if (_tSRestaurantDetailsObj->dealHeadline != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor dealHeadline of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->dealHeadline);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor dealHeadline of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->dealHeadline);
  }
  if (_tSRestaurantDetailsObj->photoList != NULL) {
    for (i = 0; i < _tSRestaurantDetailsObj->_sizeof_photoList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor photoList[%i] of type enunciate_ns0_TSRestaurantDetailsObj...\n", i);
#endif
      freeNs0TSPhotoObjType(&(_tSRestaurantDetailsObj->photoList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photoList of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->photoList);
  }
  if (_tSRestaurantDetailsObj->moreInfoFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor moreInfoFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->moreInfoFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor moreInfoFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->moreInfoFlag);
  }
  if (_tSRestaurantDetailsObj->menuFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor menuFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->menuFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor menuFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->menuFlag);
  }
  if (_tSRestaurantDetailsObj->userRestaurantSavedFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userRestaurantSavedFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->userRestaurantSavedFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userRestaurantSavedFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->userRestaurantSavedFlag);
  }
  if (_tSRestaurantDetailsObj->userRestaurantFavFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userRestaurantFavFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->userRestaurantFavFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userRestaurantFavFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->userRestaurantFavFlag);
  }
  if (_tSRestaurantDetailsObj->userRestaurantTipFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userRestaurantTipFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantDetailsObj->userRestaurantTipFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userRestaurantTipFlag of type enunciate_ns0_TSRestaurantDetailsObj...\n");
#endif
    free(_tSRestaurantDetailsObj->userRestaurantTipFlag);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantDetailsObj_M */
#ifndef DEF_enunciate_ns0_TSRestaurantObj_M
#define DEF_enunciate_ns0_TSRestaurantObj_M

/**
 * Reads a TSRestaurantObj element from XML. The element to be read is "restaurant", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantObj *xml_read_enunciate_ns0_TSRestaurantObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantElement(reader);
}

/**
 * Writes a TSRestaurantObj to XML under element name "restaurant".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj) {
  return xmlTextWriterWriteNs0RestaurantElementNS(writer, _tSRestaurantObj, 1);
}

/**
 * Frees a TSRestaurantObj.
 *
 * @param _tSRestaurantObj The TSRestaurantObj to free.
 */
void free_enunciate_ns0_TSRestaurantObj(struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj) {
  freeNs0TSRestaurantObjType(_tSRestaurantObj);
  free(_tSRestaurantObj);
}

/**
 * Reads a TSRestaurantObj element from XML. The element to be read is "restaurant", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantObj *xmlTextReaderReadNs0RestaurantElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurant", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurant.\n");
#endif
    _tSRestaurantObj = xmlTextReaderReadNs0TSRestaurantObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurant failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurant failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantObj;
}

/**
 * Writes a TSRestaurantObj to XML under element name "restaurant".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj) {
  return xmlTextWriterWriteNs0RestaurantElementNS(writer, _tSRestaurantObj, 0);
}

/**
 * Writes a TSRestaurantObj to XML under element name "restaurant".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurant", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurant. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantObj for root element {}restaurant...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantObjType(writer, _tSRestaurantObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurant. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurant. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantObj.
 *
 * @param _tSRestaurantObj The TSRestaurantObj whose children are to be free.
 */
static void freeNs0RestaurantElement(struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj) {
  freeNs0TSRestaurantObjType(_tSRestaurantObj);
}

/**
 * Reads a TSRestaurantObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantObj *xmlTextReaderReadNs0TSRestaurantObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantObjType(_tSRestaurantObj);
        free(_tSRestaurantObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->restaurantId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "factualId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}factualId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}factualId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->factualId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->restaurantName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "factualRating", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}factualRating of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}factualRating of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->factualRating = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "priceRange", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}priceRange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}priceRange of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->priceRange = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantCityId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantCityId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantCityId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->restaurantCityId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantHours", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantHours of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantHours of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->restaurantHours = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantLat", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->restaurantLat = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantLon", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantLon of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantLon of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->restaurantLon = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "sumVoteCount", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}sumVoteCount of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}sumVoteCount of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->sumVoteCount = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "sumVoteValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}sumVoteValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}sumVoteValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->sumVoteValue = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tbdOpenTableId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tbdOpenTableId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tbdOpenTableId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->tbdOpenTableId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantObj;
}

/**
 * Writes a TSRestaurantObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantObj The TSRestaurantObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantObj->restaurantId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->restaurantId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->factualId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "factualId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}factualId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}factualId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->factualId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}factualId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}factualId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->restaurantName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->restaurantName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->factualRating != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "factualRating", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}factualRating. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}factualRating...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->factualRating));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}factualRating. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}factualRating. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->priceRange != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "priceRange", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}priceRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}priceRange...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->priceRange));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}priceRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}priceRange. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->restaurantCityId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantCityId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantCityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantCityId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->restaurantCityId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantCityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantCityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->restaurantHours != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantHours", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantHours. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantHours...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->restaurantHours));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantHours. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantHours. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->restaurantLat != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLat", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantLat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLat...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->restaurantLat));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantLat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->restaurantLon != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLon", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantLon. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLon...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->restaurantLon));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLon. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantLon. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->sumVoteCount != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sumVoteCount", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}sumVoteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}sumVoteCount...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->sumVoteCount));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}sumVoteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}sumVoteCount. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->sumVoteValue != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "sumVoteValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}sumVoteValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}sumVoteValue...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->sumVoteValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}sumVoteValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}sumVoteValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantObj->tbdOpenTableId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tbdOpenTableId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tbdOpenTableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tbdOpenTableId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->tbdOpenTableId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tbdOpenTableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tbdOpenTableId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantObj.
 *
 * @param _tSRestaurantObj The TSRestaurantObj to free.
 */
static void freeNs0TSRestaurantObjType(struct enunciate_ns0_TSRestaurantObj *_tSRestaurantObj) {
  int i;
  if (_tSRestaurantObj->restaurantId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->restaurantId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->restaurantId);
  }
  if (_tSRestaurantObj->factualId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor factualId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->factualId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor factualId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->factualId);
  }
  if (_tSRestaurantObj->restaurantName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantName of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->restaurantName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantName of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->restaurantName);
  }
  if (_tSRestaurantObj->factualRating != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor factualRating of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->factualRating);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor factualRating of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->factualRating);
  }
  if (_tSRestaurantObj->priceRange != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor priceRange of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->priceRange);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor priceRange of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->priceRange);
  }
  if (_tSRestaurantObj->restaurantCityId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantCityId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->restaurantCityId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantCityId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->restaurantCityId);
  }
  if (_tSRestaurantObj->restaurantHours != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantHours of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->restaurantHours);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantHours of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->restaurantHours);
  }
  if (_tSRestaurantObj->restaurantLat != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantLat of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->restaurantLat);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantLat of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->restaurantLat);
  }
  if (_tSRestaurantObj->restaurantLon != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantLon of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->restaurantLon);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantLon of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->restaurantLon);
  }
  if (_tSRestaurantObj->sumVoteCount != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor sumVoteCount of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->sumVoteCount);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor sumVoteCount of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->sumVoteCount);
  }
  if (_tSRestaurantObj->sumVoteValue != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor sumVoteValue of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->sumVoteValue);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor sumVoteValue of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->sumVoteValue);
  }
  if (_tSRestaurantObj->tbdOpenTableId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tbdOpenTableId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->tbdOpenTableId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tbdOpenTableId of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->tbdOpenTableId);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantObj_M */
#ifndef DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_M
#define DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_M

/**
 * Reads a TSSocialAutoPubSettingsObj element from XML. The element to be read is "autopub", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSocialAutoPubSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialAutoPubSettingsObj *xml_read_enunciate_ns0_TSSocialAutoPubSettingsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0AutopubElement(reader);
}

/**
 * Writes a TSSocialAutoPubSettingsObj to XML under element name "autopub".
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSSocialAutoPubSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj) {
  return xmlTextWriterWriteNs0AutopubElementNS(writer, _tSSocialAutoPubSettingsObj, 1);
}

/**
 * Frees a TSSocialAutoPubSettingsObj.
 *
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to free.
 */
void free_enunciate_ns0_TSSocialAutoPubSettingsObj(struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj) {
  freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
  free(_tSSocialAutoPubSettingsObj);
}

/**
 * Reads a TSSocialAutoPubSettingsObj element from XML. The element to be read is "autopub", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSSocialAutoPubSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialAutoPubSettingsObj *xmlTextReaderReadNs0AutopubElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "autopub", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}autopub.\n");
#endif
    _tSSocialAutoPubSettingsObj = xmlTextReaderReadNs0TSSocialAutoPubSettingsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSSocialAutoPubSettingsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}autopub failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}autopub failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSSocialAutoPubSettingsObj;
}

/**
 * Writes a TSSocialAutoPubSettingsObj to XML under element name "autopub".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AutopubElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj) {
  return xmlTextWriterWriteNs0AutopubElementNS(writer, _tSSocialAutoPubSettingsObj, 0);
}

/**
 * Writes a TSSocialAutoPubSettingsObj to XML under element name "autopub".
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0AutopubElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "autopub", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}autopub. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSSocialAutoPubSettingsObj for root element {}autopub...\n");
#endif
  status = xmlTextWriterWriteNs0TSSocialAutoPubSettingsObjType(writer, _tSSocialAutoPubSettingsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}autopub. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}autopub. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSSocialAutoPubSettingsObj.
 *
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj whose children are to be free.
 */
static void freeNs0AutopubElement(struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj) {
  freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
}

/**
 * Reads a TSSocialAutoPubSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSSocialAutoPubSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSocialAutoPubSettingsObj *xmlTextReaderReadNs0TSSocialAutoPubSettingsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj = calloc(1, sizeof(struct enunciate_ns0_TSSocialAutoPubSettingsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
        free(_tSSocialAutoPubSettingsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "favFbFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}favFbFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}favFbFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->favFbFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "favTwitterFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}favTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}favTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->favTwitterFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "favTumblrFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}favTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}favTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->favTumblrFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tipsFbFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tipsFbFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tipsFbFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->tipsFbFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tipsTwitterFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tipsTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tipsTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->tipsTwitterFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tipsTumblrFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tipsTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tipsTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->tipsTumblrFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recoFbFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recoFbFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recoFbFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->recoFbFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recoTwitterFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recoTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recoTwitterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->recoTwitterFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recoTumblrFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recoTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recoTumblrFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->recoTumblrFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSSocialAutoPubSettingsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSSocialAutoPubSettingsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSSocialAutoPubSettingsObj;
}

/**
 * Writes a TSSocialAutoPubSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSSocialAutoPubSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSSocialAutoPubSettingsObj->favFbFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "favFbFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}favFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}favFbFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->favFbFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}favFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}favFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->favTwitterFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "favTwitterFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}favTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}favTwitterFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->favTwitterFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}favTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}favTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->favTumblrFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "favTumblrFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}favTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}favTumblrFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->favTumblrFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}favTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}favTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->tipsFbFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tipsFbFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tipsFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tipsFbFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->tipsFbFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tipsFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tipsFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->tipsTwitterFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tipsTwitterFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tipsTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tipsTwitterFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->tipsTwitterFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tipsTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tipsTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->tipsTumblrFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tipsTumblrFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tipsTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tipsTumblrFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->tipsTumblrFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tipsTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tipsTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->recoFbFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoFbFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recoFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recoFbFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->recoFbFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recoFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recoFbFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->recoTwitterFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoTwitterFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recoTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recoTwitterFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->recoTwitterFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recoTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recoTwitterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->recoTumblrFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoTumblrFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recoTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recoTumblrFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->recoTumblrFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recoTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recoTumblrFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSSocialAutoPubSettingsObj.
 *
 * @param _tSSocialAutoPubSettingsObj The TSSocialAutoPubSettingsObj to free.
 */
static void freeNs0TSSocialAutoPubSettingsObjType(struct enunciate_ns0_TSSocialAutoPubSettingsObj *_tSSocialAutoPubSettingsObj) {
  int i;
  if (_tSSocialAutoPubSettingsObj->favFbFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor favFbFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->favFbFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor favFbFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->favFbFlag);
  }
  if (_tSSocialAutoPubSettingsObj->favTwitterFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor favTwitterFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->favTwitterFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor favTwitterFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->favTwitterFlag);
  }
  if (_tSSocialAutoPubSettingsObj->favTumblrFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor favTumblrFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->favTumblrFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor favTumblrFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->favTumblrFlag);
  }
  if (_tSSocialAutoPubSettingsObj->tipsFbFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tipsFbFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->tipsFbFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tipsFbFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->tipsFbFlag);
  }
  if (_tSSocialAutoPubSettingsObj->tipsTwitterFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tipsTwitterFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->tipsTwitterFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tipsTwitterFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->tipsTwitterFlag);
  }
  if (_tSSocialAutoPubSettingsObj->tipsTumblrFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tipsTumblrFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->tipsTumblrFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tipsTumblrFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->tipsTumblrFlag);
  }
  if (_tSSocialAutoPubSettingsObj->recoFbFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recoFbFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->recoFbFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recoFbFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->recoFbFlag);
  }
  if (_tSSocialAutoPubSettingsObj->recoTwitterFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recoTwitterFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->recoTwitterFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recoTwitterFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->recoTwitterFlag);
  }
  if (_tSSocialAutoPubSettingsObj->recoTumblrFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recoTumblrFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->recoTumblrFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recoTumblrFlag of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->recoTumblrFlag);
  }
}
#endif /* DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_M */
#ifndef DEF_enunciate_ns0_TSSocialSettingsObj_M
#define DEF_enunciate_ns0_TSSocialSettingsObj_M

/**
 * Reads a TSSocialSettingsObj element from XML. The element to be read is "social", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSocialSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialSettingsObj *xml_read_enunciate_ns0_TSSocialSettingsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SocialElement(reader);
}

/**
 * Writes a TSSocialSettingsObj to XML under element name "social".
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSSocialSettingsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj) {
  return xmlTextWriterWriteNs0SocialElementNS(writer, _tSSocialSettingsObj, 1);
}

/**
 * Frees a TSSocialSettingsObj.
 *
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to free.
 */
void free_enunciate_ns0_TSSocialSettingsObj(struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj) {
  freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
  free(_tSSocialSettingsObj);
}

/**
 * Reads a TSSocialSettingsObj element from XML. The element to be read is "social", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSSocialSettingsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSocialSettingsObj *xmlTextReaderReadNs0SocialElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "social", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}social.\n");
#endif
    _tSSocialSettingsObj = xmlTextReaderReadNs0TSSocialSettingsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSSocialSettingsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}social failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}social failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSSocialSettingsObj;
}

/**
 * Writes a TSSocialSettingsObj to XML under element name "social".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SocialElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj) {
  return xmlTextWriterWriteNs0SocialElementNS(writer, _tSSocialSettingsObj, 0);
}

/**
 * Writes a TSSocialSettingsObj to XML under element name "social".
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SocialElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "social", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}social. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSSocialSettingsObj for root element {}social...\n");
#endif
  status = xmlTextWriterWriteNs0TSSocialSettingsObjType(writer, _tSSocialSettingsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}social. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}social. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSSocialSettingsObj.
 *
 * @param _tSSocialSettingsObj The TSSocialSettingsObj whose children are to be free.
 */
static void freeNs0SocialElement(struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj) {
  freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
}

/**
 * Reads a TSSocialSettingsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSSocialSettingsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSocialSettingsObj *xmlTextReaderReadNs0TSSocialSettingsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj = calloc(1, sizeof(struct enunciate_ns0_TSSocialSettingsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
        free(_tSSocialSettingsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsSocialAutoPubSettingsObj", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsSocialAutoPubSettingsObj of type {}TSSocialAutoPubSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSSocialAutoPubSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsSocialAutoPubSettingsObj of type {}TSSocialAutoPubSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->tsSocialAutoPubSettingsObj = ((struct enunciate_ns0_TSSocialAutoPubSettingsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->userId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "facebookStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}facebookStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}facebookStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->facebookStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "twitterStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}twitterStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}twitterStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->twitterStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "foursquareStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}foursquareStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}foursquareStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->foursquareStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tumblrStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tumblrStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tumblrStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->tumblrStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSSocialSettingsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSSocialSettingsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSSocialSettingsObj;
}

/**
 * Writes a TSSocialSettingsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSSocialSettingsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSSocialSettingsObj->tsSocialAutoPubSettingsObj != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsSocialAutoPubSettingsObj", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsSocialAutoPubSettingsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSSocialAutoPubSettingsObj for element {}tsSocialAutoPubSettingsObj...\n");
#endif
    status = xmlTextWriterWriteNs0TSSocialAutoPubSettingsObjType(writer, (_tSSocialSettingsObj->tsSocialAutoPubSettingsObj));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSSocialAutoPubSettingsObj for element {}tsSocialAutoPubSettingsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsSocialAutoPubSettingsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialSettingsObj->userId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->userId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialSettingsObj->facebookStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebookStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}facebookStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}facebookStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->facebookStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}facebookStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}facebookStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialSettingsObj->twitterStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "twitterStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}twitterStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}twitterStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->twitterStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}twitterStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}twitterStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialSettingsObj->foursquareStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "foursquareStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}foursquareStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}foursquareStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->foursquareStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}foursquareStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}foursquareStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialSettingsObj->tumblrStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tumblrStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tumblrStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tumblrStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->tumblrStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tumblrStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tumblrStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSSocialSettingsObj.
 *
 * @param _tSSocialSettingsObj The TSSocialSettingsObj to free.
 */
static void freeNs0TSSocialSettingsObjType(struct enunciate_ns0_TSSocialSettingsObj *_tSSocialSettingsObj) {
  int i;
  if (_tSSocialSettingsObj->tsSocialAutoPubSettingsObj != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsSocialAutoPubSettingsObj of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeNs0TSSocialAutoPubSettingsObjType(_tSSocialSettingsObj->tsSocialAutoPubSettingsObj);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsSocialAutoPubSettingsObj of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->tsSocialAutoPubSettingsObj);
  }
  if (_tSSocialSettingsObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->userId);
  }
  if (_tSSocialSettingsObj->facebookStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor facebookStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->facebookStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor facebookStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->facebookStatus);
  }
  if (_tSSocialSettingsObj->twitterStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor twitterStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->twitterStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor twitterStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->twitterStatus);
  }
  if (_tSSocialSettingsObj->foursquareStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor foursquareStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->foursquareStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor foursquareStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->foursquareStatus);
  }
  if (_tSSocialSettingsObj->tumblrStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tumblrStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->tumblrStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tumblrStatus of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->tumblrStatus);
  }
}
#endif /* DEF_enunciate_ns0_TSSocialSettingsObj_M */
#ifndef DEF_enunciate_ns0_TSSuccessObj_M
#define DEF_enunciate_ns0_TSSuccessObj_M

/**
 * Reads a TSSuccessObj element from XML. The element to be read is "success", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSuccessObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSuccessObj *xml_read_enunciate_ns0_TSSuccessObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SuccessElement(reader);
}

/**
 * Writes a TSSuccessObj to XML under element name "success".
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSSuccessObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj) {
  return xmlTextWriterWriteNs0SuccessElementNS(writer, _tSSuccessObj, 1);
}

/**
 * Frees a TSSuccessObj.
 *
 * @param _tSSuccessObj The TSSuccessObj to free.
 */
void free_enunciate_ns0_TSSuccessObj(struct enunciate_ns0_TSSuccessObj *_tSSuccessObj) {
  freeNs0TSSuccessObjType(_tSSuccessObj);
  free(_tSSuccessObj);
}

/**
 * Reads a TSSuccessObj element from XML. The element to be read is "success", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSSuccessObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSuccessObj *xmlTextReaderReadNs0SuccessElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSSuccessObj *_tSSuccessObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "success", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}success.\n");
#endif
    _tSSuccessObj = xmlTextReaderReadNs0TSSuccessObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSSuccessObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}success failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}success failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSSuccessObj;
}

/**
 * Writes a TSSuccessObj to XML under element name "success".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SuccessElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj) {
  return xmlTextWriterWriteNs0SuccessElementNS(writer, _tSSuccessObj, 0);
}

/**
 * Writes a TSSuccessObj to XML under element name "success".
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SuccessElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "success", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}success. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSSuccessObj for root element {}success...\n");
#endif
  status = xmlTextWriterWriteNs0TSSuccessObjType(writer, _tSSuccessObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}success. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}success. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSSuccessObj.
 *
 * @param _tSSuccessObj The TSSuccessObj whose children are to be free.
 */
static void freeNs0SuccessElement(struct enunciate_ns0_TSSuccessObj *_tSSuccessObj) {
  freeNs0TSSuccessObjType(_tSSuccessObj);
}

/**
 * Reads a TSSuccessObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSSuccessObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSuccessObj *xmlTextReaderReadNs0TSSuccessObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSSuccessObj *_tSSuccessObj = calloc(1, sizeof(struct enunciate_ns0_TSSuccessObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSSuccessObjType(_tSSuccessObj);
        free(_tSSuccessObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "successMsg", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}successMsg of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}successMsg of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSuccessObjType(_tSSuccessObj);
          free(_tSSuccessObj);
          return NULL;
        }

        _tSSuccessObj->successMsg = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSSuccessObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSSuccessObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSSuccessObj;
}

/**
 * Writes a TSSuccessObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSuccessObj The TSSuccessObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSSuccessObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSuccessObj *_tSSuccessObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSSuccessObj->successMsg != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "successMsg", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}successMsg. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}successMsg...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSuccessObj->successMsg));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}successMsg. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}successMsg. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSSuccessObj.
 *
 * @param _tSSuccessObj The TSSuccessObj to free.
 */
static void freeNs0TSSuccessObjType(struct enunciate_ns0_TSSuccessObj *_tSSuccessObj) {
  int i;
  if (_tSSuccessObj->successMsg != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor successMsg of type enunciate_ns0_TSSuccessObj...\n");
#endif
    freeXsStringType(_tSSuccessObj->successMsg);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor successMsg of type enunciate_ns0_TSSuccessObj...\n");
#endif
    free(_tSSuccessObj->successMsg);
  }
}
#endif /* DEF_enunciate_ns0_TSSuccessObj_M */
#ifndef DEF_enunciate_ns0_TSUserObj_M
#define DEF_enunciate_ns0_TSUserObj_M

/**
 * Reads a TSUserObj element from XML. The element to be read is "user", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserObj *xml_read_enunciate_ns0_TSUserObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserElement(reader);
}

/**
 * Writes a TSUserObj to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSUserObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj) {
  return xmlTextWriterWriteNs0UserElementNS(writer, _tSUserObj, 1);
}

/**
 * Frees a TSUserObj.
 *
 * @param _tSUserObj The TSUserObj to free.
 */
void free_enunciate_ns0_TSUserObj(struct enunciate_ns0_TSUserObj *_tSUserObj) {
  freeNs0TSUserObjType(_tSUserObj);
  free(_tSUserObj);
}

/**
 * Reads a TSUserObj element from XML. The element to be read is "user", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserObj *xmlTextReaderReadNs0UserElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSUserObj *_tSUserObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "user", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}user.\n");
#endif
    _tSUserObj = xmlTextReaderReadNs0TSUserObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSUserObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}user failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}user failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSUserObj;
}

/**
 * Writes a TSUserObj to XML under element name "user".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj) {
  return xmlTextWriterWriteNs0UserElementNS(writer, _tSUserObj, 0);
}

/**
 * Writes a TSUserObj to XML under element name "user".
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "user", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}user. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSUserObj for root element {}user...\n");
#endif
  status = xmlTextWriterWriteNs0TSUserObjType(writer, _tSUserObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}user. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}user. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSUserObj.
 *
 * @param _tSUserObj The TSUserObj whose children are to be free.
 */
static void freeNs0UserElement(struct enunciate_ns0_TSUserObj *_tSUserObj) {
  freeNs0TSUserObjType(_tSUserObj);
}

/**
 * Reads a TSUserObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSUserObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserObj *xmlTextReaderReadNs0TSUserObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSUserObj *_tSUserObj = calloc(1, sizeof(struct enunciate_ns0_TSUserObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSUserObjType(_tSUserObj);
        free(_tSUserObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsUserId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsUserId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsUserId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->tsUserId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsUserEmail", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsUserEmail of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsUserEmail of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->tsUserEmail = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsUserPw", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsUserPw of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsUserPw of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->tsUserPw = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsFirstName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsFirstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsFirstName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->tsFirstName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsLastName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsLastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsLastName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->tsLastName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "maxInvites", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}maxInvites of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}maxInvites of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->maxInvites = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userCreatedInitialDatetime", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userCreatedInitialDatetime of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userCreatedInitialDatetime of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userCreatedInitialDatetime = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userPoints", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userPoints of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userPoints of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userPoints = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "twitterUsrUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}twitterUsrUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}twitterUsrUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->twitterUsrUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userDisabledFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userDisabledFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userDisabledFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userDisabledFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userActivationKey", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userActivationKey of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userActivationKey of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userActivationKey = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userGender", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userGender of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userGender of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userGender = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userCityId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userCityId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userCityId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userCityId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userState", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userState of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userState of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userState = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "isOnline", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}isOnline of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}isOnline of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->isOnline = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userCountry", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userCountry of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userCountry of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userCountry = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userFbId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userFbId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userFbId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->userFbId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "about", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}about of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}about of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->about = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "currentStatus", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}currentStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}currentStatus of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserObjType(_tSUserObj);
          free(_tSUserObj);
          return NULL;
        }

        _tSUserObj->currentStatus = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSUserObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSUserObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSUserObj;
}

/**
 * Writes a TSUserObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserObj The TSUserObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSUserObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserObj *_tSUserObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSUserObj->userId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->tsUserId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsUserId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsUserId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tsUserId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->tsUserId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tsUserId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsUserId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->tsUserEmail != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsUserEmail", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsUserEmail. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tsUserEmail...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->tsUserEmail));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tsUserEmail. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsUserEmail. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->tsUserPw != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsUserPw", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsUserPw. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tsUserPw...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->tsUserPw));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tsUserPw. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsUserPw. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->tsFirstName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsFirstName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsFirstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tsFirstName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->tsFirstName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tsFirstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsFirstName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->tsLastName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsLastName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsLastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}tsLastName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->tsLastName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}tsLastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsLastName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->maxInvites != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "maxInvites", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}maxInvites. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}maxInvites...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->maxInvites));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}maxInvites. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}maxInvites. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userCreatedInitialDatetime != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userCreatedInitialDatetime", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userCreatedInitialDatetime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userCreatedInitialDatetime...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userCreatedInitialDatetime));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userCreatedInitialDatetime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userCreatedInitialDatetime. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userPoints != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userPoints", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userPoints...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userPoints));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->twitterUsrUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "twitterUsrUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}twitterUsrUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}twitterUsrUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->twitterUsrUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}twitterUsrUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}twitterUsrUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userDisabledFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userDisabledFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userDisabledFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userDisabledFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userDisabledFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userDisabledFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userDisabledFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userActivationKey != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userActivationKey", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userActivationKey. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userActivationKey...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userActivationKey));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userActivationKey. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userActivationKey. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userGender != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userGender", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userGender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userGender...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userGender));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userGender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userGender. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userCityId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userCityId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userCityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userCityId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userCityId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userCityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userCityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userState != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userState", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userState. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userState...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userState));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userState. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userState. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->isOnline != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "isOnline", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}isOnline. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}isOnline...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->isOnline));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}isOnline. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}isOnline. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userCountry != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userCountry", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userCountry. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userCountry...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userCountry));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userCountry. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userCountry. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->userFbId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userFbId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userFbId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userFbId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->userFbId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userFbId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userFbId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->about != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "about", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}about. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}about...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->about));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}about. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}about. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserObj->currentStatus != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "currentStatus", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}currentStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}currentStatus...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserObj->currentStatus));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}currentStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}currentStatus. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSUserObj.
 *
 * @param _tSUserObj The TSUserObj to free.
 */
static void freeNs0TSUserObjType(struct enunciate_ns0_TSUserObj *_tSUserObj) {
  int i;
  if (_tSUserObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userId);
  }
  if (_tSUserObj->tsUserId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsUserId of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->tsUserId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsUserId of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->tsUserId);
  }
  if (_tSUserObj->tsUserEmail != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsUserEmail of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->tsUserEmail);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsUserEmail of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->tsUserEmail);
  }
  if (_tSUserObj->tsUserPw != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsUserPw of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->tsUserPw);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsUserPw of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->tsUserPw);
  }
  if (_tSUserObj->tsFirstName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsFirstName of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->tsFirstName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsFirstName of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->tsFirstName);
  }
  if (_tSUserObj->tsLastName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsLastName of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->tsLastName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsLastName of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->tsLastName);
  }
  if (_tSUserObj->maxInvites != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor maxInvites of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->maxInvites);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor maxInvites of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->maxInvites);
  }
  if (_tSUserObj->userCreatedInitialDatetime != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userCreatedInitialDatetime of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userCreatedInitialDatetime);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userCreatedInitialDatetime of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userCreatedInitialDatetime);
  }
  if (_tSUserObj->userPoints != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userPoints of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userPoints);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userPoints of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userPoints);
  }
  if (_tSUserObj->twitterUsrUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor twitterUsrUrl of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->twitterUsrUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor twitterUsrUrl of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->twitterUsrUrl);
  }
  if (_tSUserObj->userDisabledFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userDisabledFlag of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userDisabledFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userDisabledFlag of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userDisabledFlag);
  }
  if (_tSUserObj->userActivationKey != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userActivationKey of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userActivationKey);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userActivationKey of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userActivationKey);
  }
  if (_tSUserObj->userGender != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userGender of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userGender);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userGender of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userGender);
  }
  if (_tSUserObj->userCityId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userCityId of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userCityId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userCityId of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userCityId);
  }
  if (_tSUserObj->userState != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userState of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userState);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userState of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userState);
  }
  if (_tSUserObj->isOnline != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor isOnline of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->isOnline);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor isOnline of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->isOnline);
  }
  if (_tSUserObj->userCountry != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userCountry of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userCountry);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userCountry of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userCountry);
  }
  if (_tSUserObj->userFbId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userFbId of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->userFbId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userFbId of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->userFbId);
  }
  if (_tSUserObj->about != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor about of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->about);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor about of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->about);
  }
  if (_tSUserObj->currentStatus != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor currentStatus of type enunciate_ns0_TSUserObj...\n");
#endif
    freeXsStringType(_tSUserObj->currentStatus);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor currentStatus of type enunciate_ns0_TSUserObj...\n");
#endif
    free(_tSUserObj->currentStatus);
  }
}
#endif /* DEF_enunciate_ns0_TSUserObj_M */
#ifndef DEF_enunciate_ns0_TSUserProfileObj_M
#define DEF_enunciate_ns0_TSUserProfileObj_M

/**
 * Reads a TSUserProfileObj element from XML. The element to be read is "userprofile", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserProfileObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileObj *xml_read_enunciate_ns0_TSUserProfileObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserprofileElement(reader);
}

/**
 * Writes a TSUserProfileObj to XML under element name "userprofile".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSUserProfileObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj) {
  return xmlTextWriterWriteNs0UserprofileElementNS(writer, _tSUserProfileObj, 1);
}

/**
 * Frees a TSUserProfileObj.
 *
 * @param _tSUserProfileObj The TSUserProfileObj to free.
 */
void free_enunciate_ns0_TSUserProfileObj(struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj) {
  freeNs0TSUserProfileObjType(_tSUserProfileObj);
  free(_tSUserProfileObj);
}

/**
 * Reads a TSUserProfileObj element from XML. The element to be read is "userprofile", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileObj *xmlTextReaderReadNs0UserprofileElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userprofile", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}userprofile.\n");
#endif
    _tSUserProfileObj = xmlTextReaderReadNs0TSUserProfileObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSUserProfileObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}userprofile failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}userprofile failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSUserProfileObj;
}

/**
 * Writes a TSUserProfileObj to XML under element name "userprofile".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserprofileElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj) {
  return xmlTextWriterWriteNs0UserprofileElementNS(writer, _tSUserProfileObj, 0);
}

/**
 * Writes a TSUserProfileObj to XML under element name "userprofile".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserprofileElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userprofile", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}userprofile. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSUserProfileObj for root element {}userprofile...\n");
#endif
  status = xmlTextWriterWriteNs0TSUserProfileObjType(writer, _tSUserProfileObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}userprofile. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}userprofile. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSUserProfileObj.
 *
 * @param _tSUserProfileObj The TSUserProfileObj whose children are to be free.
 */
static void freeNs0UserprofileElement(struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj) {
  freeNs0TSUserProfileObjType(_tSUserProfileObj);
}

/**
 * Reads a TSUserProfileObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSUserProfileObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserProfileObj *xmlTextReaderReadNs0TSUserProfileObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj = calloc(1, sizeof(struct enunciate_ns0_TSUserProfileObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSUserProfileObjType(_tSUserProfileObj);
        free(_tSUserProfileObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photo of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->photo = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "facebookCity", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}facebookCity of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}facebookCity of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->facebookCity = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "facebookUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}facebookUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}facebookUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->facebookUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "twitterUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}twitterUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}twitterUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->twitterUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "blogUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}blogUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}blogUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->blogUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "aboutMeText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}aboutMeText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}aboutMeText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->aboutMeText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "numFollowers", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}numFollowers of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}numFollowers of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->numFollowers = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "numFollowees", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}numFollowees of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}numFollowees of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->numFollowees = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "numFriendsOnTs", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}numFriendsOnTs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}numFriendsOnTs of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->numFriendsOnTs = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "numPoints", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}numPoints of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}numPoints of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->numPoints = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "testaurantDetailsList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}testaurantDetailsList of type {}TSRestaurantDetailsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantDetailsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}testaurantDetailsList of type {}TSRestaurantDetailsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->testaurantDetailsList = realloc(_tSUserProfileObj->testaurantDetailsList, (_tSUserProfileObj->_sizeof_testaurantDetailsList + 1) * sizeof(struct enunciate_ns0_TSRestaurantDetailsObj));
        memcpy(&(_tSUserProfileObj->testaurantDetailsList[_tSUserProfileObj->_sizeof_testaurantDetailsList++]), _child_accessor, sizeof(struct enunciate_ns0_TSRestaurantDetailsObj));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSUserProfileObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSUserProfileObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSUserProfileObj;
}

/**
 * Writes a TSUserProfileObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileObj The TSUserProfileObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSUserProfileObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSUserProfileObj->name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->photo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}photo...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->photo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->facebookCity != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebookCity", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}facebookCity. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}facebookCity...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->facebookCity));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}facebookCity. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}facebookCity. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->facebookUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "facebookUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}facebookUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}facebookUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->facebookUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}facebookUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}facebookUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->twitterUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "twitterUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}twitterUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}twitterUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->twitterUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}twitterUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}twitterUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->blogUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "blogUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}blogUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}blogUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->blogUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}blogUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}blogUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->aboutMeText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "aboutMeText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}aboutMeText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}aboutMeText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->aboutMeText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}aboutMeText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}aboutMeText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->numFollowers != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numFollowers", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}numFollowers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}numFollowers...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->numFollowers));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}numFollowers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}numFollowers. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->numFollowees != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numFollowees", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}numFollowees. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}numFollowees...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->numFollowees));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}numFollowees. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}numFollowees. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->numFriendsOnTs != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numFriendsOnTs", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}numFriendsOnTs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}numFriendsOnTs...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->numFriendsOnTs));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}numFriendsOnTs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}numFriendsOnTs. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileObj->numPoints != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "numPoints", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}numPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}numPoints...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileObj->numPoints));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}numPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}numPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSUserProfileObj->_sizeof_testaurantDetailsList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "testaurantDetailsList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}testaurantDetailsList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRestaurantDetailsObj for element {}testaurantDetailsList...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantDetailsObjType(writer, &(_tSUserProfileObj->testaurantDetailsList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantDetailsObj for element {}testaurantDetailsList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}testaurantDetailsList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSUserProfileObj.
 *
 * @param _tSUserProfileObj The TSUserProfileObj to free.
 */
static void freeNs0TSUserProfileObjType(struct enunciate_ns0_TSUserProfileObj *_tSUserProfileObj) {
  int i;
  if (_tSUserProfileObj->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->name);
  }
  if (_tSUserProfileObj->photo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photo of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->photo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photo of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->photo);
  }
  if (_tSUserProfileObj->facebookCity != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor facebookCity of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->facebookCity);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor facebookCity of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->facebookCity);
  }
  if (_tSUserProfileObj->facebookUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor facebookUrl of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->facebookUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor facebookUrl of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->facebookUrl);
  }
  if (_tSUserProfileObj->twitterUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor twitterUrl of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->twitterUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor twitterUrl of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->twitterUrl);
  }
  if (_tSUserProfileObj->blogUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor blogUrl of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->blogUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor blogUrl of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->blogUrl);
  }
  if (_tSUserProfileObj->aboutMeText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor aboutMeText of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->aboutMeText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor aboutMeText of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->aboutMeText);
  }
  if (_tSUserProfileObj->numFollowers != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor numFollowers of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->numFollowers);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor numFollowers of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->numFollowers);
  }
  if (_tSUserProfileObj->numFollowees != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor numFollowees of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->numFollowees);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor numFollowees of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->numFollowees);
  }
  if (_tSUserProfileObj->numFriendsOnTs != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor numFriendsOnTs of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->numFriendsOnTs);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor numFriendsOnTs of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->numFriendsOnTs);
  }
  if (_tSUserProfileObj->numPoints != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor numPoints of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    freeXsStringType(_tSUserProfileObj->numPoints);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor numPoints of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->numPoints);
  }
  if (_tSUserProfileObj->testaurantDetailsList != NULL) {
    for (i = 0; i < _tSUserProfileObj->_sizeof_testaurantDetailsList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor testaurantDetailsList[%i] of type enunciate_ns0_TSUserProfileObj...\n", i);
#endif
      freeNs0TSRestaurantDetailsObjType(&(_tSUserProfileObj->testaurantDetailsList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor testaurantDetailsList of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->testaurantDetailsList);
  }
}
#endif /* DEF_enunciate_ns0_TSUserProfileObj_M */
#ifndef DEF_enunciate_ns0_TSUserProfileRestaurantsObj_M
#define DEF_enunciate_ns0_TSUserProfileRestaurantsObj_M

/**
 * Reads a TSUserProfileRestaurantsObj element from XML. The element to be read is "userprofilerestaurants", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserProfileRestaurantsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileRestaurantsObj *xml_read_enunciate_ns0_TSUserProfileRestaurantsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserprofilerestaurantsElement(reader);
}

/**
 * Writes a TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSUserProfileRestaurantsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj) {
  return xmlTextWriterWriteNs0UserprofilerestaurantsElementNS(writer, _tSUserProfileRestaurantsObj, 1);
}

/**
 * Frees a TSUserProfileRestaurantsObj.
 *
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to free.
 */
void free_enunciate_ns0_TSUserProfileRestaurantsObj(struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj) {
  freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
  free(_tSUserProfileRestaurantsObj);
}

/**
 * Reads a TSUserProfileRestaurantsObj element from XML. The element to be read is "userprofilerestaurants", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileRestaurantsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileRestaurantsObj *xmlTextReaderReadNs0UserprofilerestaurantsElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userprofilerestaurants", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}userprofilerestaurants.\n");
#endif
    _tSUserProfileRestaurantsObj = xmlTextReaderReadNs0TSUserProfileRestaurantsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSUserProfileRestaurantsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}userprofilerestaurants failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}userprofilerestaurants failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSUserProfileRestaurantsObj;
}

/**
 * Writes a TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserprofilerestaurantsElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj) {
  return xmlTextWriterWriteNs0UserprofilerestaurantsElementNS(writer, _tSUserProfileRestaurantsObj, 0);
}

/**
 * Writes a TSUserProfileRestaurantsObj to XML under element name "userprofilerestaurants".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserprofilerestaurantsElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userprofilerestaurants", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}userprofilerestaurants. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSUserProfileRestaurantsObj for root element {}userprofilerestaurants...\n");
#endif
  status = xmlTextWriterWriteNs0TSUserProfileRestaurantsObjType(writer, _tSUserProfileRestaurantsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}userprofilerestaurants. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}userprofilerestaurants. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSUserProfileRestaurantsObj.
 *
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj whose children are to be free.
 */
static void freeNs0UserprofilerestaurantsElement(struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj) {
  freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
}

/**
 * Reads a TSUserProfileRestaurantsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSUserProfileRestaurantsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserProfileRestaurantsObj *xmlTextReaderReadNs0TSUserProfileRestaurantsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj = calloc(1, sizeof(struct enunciate_ns0_TSUserProfileRestaurantsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
        free(_tSUserProfileRestaurantsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restauarntId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restauarntId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restauarntId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restauarntId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cuisineTier2Name", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cuisineTier2Name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cuisineTier2Name of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->cuisineTier2Name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "price", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}price of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}price of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->price = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantCity", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantCity of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantCity of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantCity = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantState", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantState of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantState of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantState = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantCountry", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantCountry of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantCountry of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantCountry = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantLat", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantLat of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantLat = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantLong", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantLong of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantLong of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantLong = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantDealFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantDealFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantDealFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantDealFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantRating", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantRating of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantRating of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantRating = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userSavedFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userSavedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->userSavedFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userFavFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userFavFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userFavFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->userFavFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userRecommendedFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userRecommendedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userRecommendedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->userRecommendedFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "userTipFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}userTipFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}userTipFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->userTipFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSUserProfileRestaurantsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSUserProfileRestaurantsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSUserProfileRestaurantsObj;
}

/**
 * Writes a TSUserProfileRestaurantsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSUserProfileRestaurantsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSUserProfileRestaurantsObj->restauarntId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restauarntId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restauarntId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restauarntId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restauarntId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restauarntId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restauarntId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->cuisineTier2Name != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineTier2Name", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cuisineTier2Name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineTier2Name...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->cuisineTier2Name));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineTier2Name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cuisineTier2Name. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->price != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "price", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}price. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}price...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->price));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}price. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}price. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantCity != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantCity", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantCity. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantCity...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantCity));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantCity. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantCity. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantState != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantState", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantState. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantState...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantState));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantState. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantState. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantCountry != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantCountry", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantCountry. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantCountry...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantCountry));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantCountry. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantCountry. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantLat != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLat", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantLat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLat...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantLat));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantLat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantLong != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantLong", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantLong. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLong...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantLong));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantLong. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantLong. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantDealFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantDealFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantDealFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantDealFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantDealFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantDealFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantDealFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->restaurantRating != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantRating", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantRating. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantRating...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->restaurantRating));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}restaurantRating. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantRating. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->userSavedFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userSavedFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userSavedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userSavedFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->userSavedFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userSavedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userSavedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->userFavFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userFavFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userFavFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userFavFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->userFavFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userFavFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userFavFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->userRecommendedFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userRecommendedFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userRecommendedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userRecommendedFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->userRecommendedFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userRecommendedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userRecommendedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSUserProfileRestaurantsObj->userTipFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userTipFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}userTipFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}userTipFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileRestaurantsObj->userTipFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}userTipFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}userTipFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSUserProfileRestaurantsObj.
 *
 * @param _tSUserProfileRestaurantsObj The TSUserProfileRestaurantsObj to free.
 */
static void freeNs0TSUserProfileRestaurantsObjType(struct enunciate_ns0_TSUserProfileRestaurantsObj *_tSUserProfileRestaurantsObj) {
  int i;
  if (_tSUserProfileRestaurantsObj->restauarntId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restauarntId of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restauarntId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restauarntId of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restauarntId);
  }
  if (_tSUserProfileRestaurantsObj->restaurantName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantName of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantName of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantName);
  }
  if (_tSUserProfileRestaurantsObj->cuisineTier2Name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cuisineTier2Name of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->cuisineTier2Name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cuisineTier2Name of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->cuisineTier2Name);
  }
  if (_tSUserProfileRestaurantsObj->price != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor price of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->price);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor price of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->price);
  }
  if (_tSUserProfileRestaurantsObj->restaurantCity != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantCity of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantCity);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantCity of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantCity);
  }
  if (_tSUserProfileRestaurantsObj->restaurantState != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantState of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantState);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantState of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantState);
  }
  if (_tSUserProfileRestaurantsObj->restaurantCountry != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantCountry of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantCountry);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantCountry of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantCountry);
  }
  if (_tSUserProfileRestaurantsObj->restaurantLat != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantLat of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantLat);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantLat of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantLat);
  }
  if (_tSUserProfileRestaurantsObj->restaurantLong != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantLong of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantLong);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantLong of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantLong);
  }
  if (_tSUserProfileRestaurantsObj->restaurantDealFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantDealFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantDealFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantDealFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantDealFlag);
  }
  if (_tSUserProfileRestaurantsObj->restaurantRating != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantRating of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->restaurantRating);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantRating of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantRating);
  }
  if (_tSUserProfileRestaurantsObj->userSavedFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userSavedFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->userSavedFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userSavedFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->userSavedFlag);
  }
  if (_tSUserProfileRestaurantsObj->userFavFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userFavFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->userFavFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userFavFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->userFavFlag);
  }
  if (_tSUserProfileRestaurantsObj->userRecommendedFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userRecommendedFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->userRecommendedFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userRecommendedFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->userRecommendedFlag);
  }
  if (_tSUserProfileRestaurantsObj->userTipFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userTipFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    freeXsStringType(_tSUserProfileRestaurantsObj->userTipFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userTipFlag of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->userTipFlag);
  }
}
#endif /* DEF_enunciate_ns0_TSUserProfileRestaurantsObj_M */
