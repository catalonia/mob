#include <enunciate-common.c>
#ifndef DEF_enunciate_ns0_TSCityObj_H
#define DEF_enunciate_ns0_TSCityObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSCityObj {


  /**
   * (no documentation provided)
   */
  xmlChar *cityId;

  /**
   * (no documentation provided)
   */
  xmlChar *country;

  /**
   * (no documentation provided)
   */
  xmlChar *state;

  /**
   * (no documentation provided)
   */
  xmlChar *city;
};

/**
 * Reads a TSCityObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSCityObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSCityObj *xmlTextReaderReadNs0TSCityObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSCityObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSCityObj The TSCityObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSCityObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSCityObj *_tSCityObj);

/**
 * Frees the elements of a TSCityObj.
 *
 * @param _tSCityObj The TSCityObj to free.
 */
static void freeNs0TSCityObjType(struct enunciate_ns0_TSCityObj *_tSCityObj);

#endif /* DEF_enunciate_ns0_TSCityObj_H */
#ifndef DEF_enunciate_ns0_TSCuisineTier2Obj_H
#define DEF_enunciate_ns0_TSCuisineTier2Obj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSCuisineTier2Obj {


  /**
   * (no documentation provided)
   */
  xmlChar *cuisineId;

  /**
   * (no documentation provided)
   */
  xmlChar *cuisineDesc;

  /**
   * (no documentation provided)
   */
  xmlChar *cuisineValidCurrent;
};

/**
 * Reads a TSCuisineTier2Obj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSCuisineTier2Obj, or NULL in case of error.
 */
static struct enunciate_ns0_TSCuisineTier2Obj *xmlTextReaderReadNs0TSCuisineTier2ObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSCuisineTier2Obj to XML.
 *
 * @param writer The XML writer.
 * @param _tSCuisineTier2Obj The TSCuisineTier2Obj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSCuisineTier2ObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSCuisineTier2Obj *_tSCuisineTier2Obj);

/**
 * Frees the elements of a TSCuisineTier2Obj.
 *
 * @param _tSCuisineTier2Obj The TSCuisineTier2Obj to free.
 */
static void freeNs0TSCuisineTier2ObjType(struct enunciate_ns0_TSCuisineTier2Obj *_tSCuisineTier2Obj);

#endif /* DEF_enunciate_ns0_TSCuisineTier2Obj_H */
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
#ifndef DEF_enunciate_ns0_TSKeyValueObj_H
#define DEF_enunciate_ns0_TSKeyValueObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSKeyValueObj {


  /**
   * (no documentation provided)
   */
  xmlChar *keyName;

  /**
   * (no documentation provided)
   */
  xmlChar *keyNameValue;

  /**
   * (no documentation provided)
   */
  xmlChar *valueName;

  /**
   * (no documentation provided)
   */
  xmlChar *valueNameValue;
};

/**
 * Reads a TSKeyValueObj element from XML. The element to be read is "keyvalue", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSKeyValueObj, or NULL in case of error.
 */
struct enunciate_ns0_TSKeyValueObj *xml_read_enunciate_ns0_TSKeyValueObj(xmlTextReaderPtr reader);

/**
 * Writes a TSKeyValueObj to XML under element name "keyvalue".
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSKeyValueObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj);

/**
 * Frees a TSKeyValueObj.
 *
 * @param _tSKeyValueObj The TSKeyValueObj to free.
 */
void free_enunciate_ns0_TSKeyValueObj(struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj);

/**
 * Reads a TSKeyValueObj element from XML. The element to be read is "keyvalue", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSKeyValueObj, or NULL in case of error.
 */
struct enunciate_ns0_TSKeyValueObj *xmlTextReaderReadNs0KeyvalueElement(xmlTextReaderPtr reader);

/**
 * Writes a TSKeyValueObj to XML under element name "keyvalue".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0KeyvalueElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj);

/**
 * Writes a TSKeyValueObj to XML under element name "keyvalue".
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0KeyvalueElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj, int writeNamespaces);

/**
 * Frees the children of a TSKeyValueObj.
 *
 * @param _tSKeyValueObj The TSKeyValueObj whose children are to be free.
 */
static void freeNs0KeyvalueElement(struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj);

/**
 * Reads a TSKeyValueObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSKeyValueObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSKeyValueObj *xmlTextReaderReadNs0TSKeyValueObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSKeyValueObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSKeyValueObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj);

/**
 * Frees the elements of a TSKeyValueObj.
 *
 * @param _tSKeyValueObj The TSKeyValueObj to free.
 */
static void freeNs0TSKeyValueObjType(struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj);

#endif /* DEF_enunciate_ns0_TSKeyValueObj_H */
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
  struct enunciate_ns0_TSNotificationSettingsObj *notification;

  /**
   * Size of the notification array.
   */
  int _sizeof_notification;
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
#ifndef DEF_enunciate_ns0_TSMenuObj_H
#define DEF_enunciate_ns0_TSMenuObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSMenuObj {


  /**
   * (no documentation provided)
   */
  xmlChar *restaurantId;

  /**
   * (no documentation provided)
   */
  xmlChar *menuSource;

  /**
   * (no documentation provided)
   */
  xmlChar *menuMobileUrl;
};

/**
 * Reads a TSMenuObj element from XML. The element to be read is "menu", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSMenuObj, or NULL in case of error.
 */
struct enunciate_ns0_TSMenuObj *xml_read_enunciate_ns0_TSMenuObj(xmlTextReaderPtr reader);

/**
 * Writes a TSMenuObj to XML under element name "menu".
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSMenuObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj);

/**
 * Frees a TSMenuObj.
 *
 * @param _tSMenuObj The TSMenuObj to free.
 */
void free_enunciate_ns0_TSMenuObj(struct enunciate_ns0_TSMenuObj *_tSMenuObj);

/**
 * Reads a TSMenuObj element from XML. The element to be read is "menu", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSMenuObj, or NULL in case of error.
 */
struct enunciate_ns0_TSMenuObj *xmlTextReaderReadNs0MenuElement(xmlTextReaderPtr reader);

/**
 * Writes a TSMenuObj to XML under element name "menu".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MenuElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj);

/**
 * Writes a TSMenuObj to XML under element name "menu".
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0MenuElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj, int writeNamespaces);

/**
 * Frees the children of a TSMenuObj.
 *
 * @param _tSMenuObj The TSMenuObj whose children are to be free.
 */
static void freeNs0MenuElement(struct enunciate_ns0_TSMenuObj *_tSMenuObj);

/**
 * Reads a TSMenuObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSMenuObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSMenuObj *xmlTextReaderReadNs0TSMenuObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSMenuObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSMenuObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj);

/**
 * Frees the elements of a TSMenuObj.
 *
 * @param _tSMenuObj The TSMenuObj to free.
 */
static void freeNs0TSMenuObjType(struct enunciate_ns0_TSMenuObj *_tSMenuObj);

#endif /* DEF_enunciate_ns0_TSMenuObj_H */
#ifndef DEF_enunciate_ns0_TSNotificationSettingsObj_H
#define DEF_enunciate_ns0_TSNotificationSettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSNotificationSettingsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *order_id;

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
  xmlChar *privacy_id_order;

  /**
   * (no documentation provided)
   */
  xmlChar *privacy_flag;
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
  struct enunciate_ns0_TSRestaurantPhotoObj *photoList;

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
#ifndef DEF_enunciate_ns0_TSRestaurantExtendInfoObj_H
#define DEF_enunciate_ns0_TSRestaurantExtendInfoObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantExtendInfoObj {


  /**
   * (no documentation provided)
   */
  xmlChar *phoneNumber;

  /**
   * (no documentation provided)
   */
  xmlChar *website;

  /**
   * (no documentation provided)
   */
  xmlChar *healthyOptionsFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *wifiFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *payCashonlyFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *reservationsFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *open24HoursFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *attire;

  /**
   * (no documentation provided)
   */
  xmlChar *attireRequiredList;

  /**
   * (no documentation provided)
   */
  xmlChar *attireProhibitedList;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingValetFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingFreeFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingGarageFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingLotFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingStreetFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *parkingValidatedFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *smokingFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *accessibleWheelchairFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *alcoholFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *alcoholBarFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *alcoholBeerWineFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *alcoholByobFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *groupsGoodForFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *kidsGoodForFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *kidsMenuFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *mealBreakfastFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *mealCaterFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *mealDeliverFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *mealDinnerFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *mealLunchFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *mealTakeoutFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *optionsGlutenfreeFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *optionsLowfatFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *optionsOrganicFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *optionsVeganFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *optionsVegetarianFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *roomPrivateFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *seatingOutdoorFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *address;

  /**
   * (no documentation provided)
   */
  xmlChar *lat;

  /**
   * (no documentation provided)
   */
  xmlChar *lon;
};

/**
 * Reads a TSRestaurantExtendInfoObj element from XML. The element to be read is "restaurantextendedinfo", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantExtendInfoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantExtendInfoObj *xml_read_enunciate_ns0_TSRestaurantExtendInfoObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantExtendInfoObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj);

/**
 * Frees a TSRestaurantExtendInfoObj.
 *
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to free.
 */
void free_enunciate_ns0_TSRestaurantExtendInfoObj(struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj);

/**
 * Reads a TSRestaurantExtendInfoObj element from XML. The element to be read is "restaurantextendedinfo", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantExtendInfoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantExtendInfoObj *xmlTextReaderReadNs0RestaurantextendedinfoElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantextendedinfoElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj);

/**
 * Writes a TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantextendedinfoElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantExtendInfoObj.
 *
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj whose children are to be free.
 */
static void freeNs0RestaurantextendedinfoElement(struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj);

/**
 * Reads a TSRestaurantExtendInfoObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantExtendInfoObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantExtendInfoObj *xmlTextReaderReadNs0TSRestaurantExtendInfoObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantExtendInfoObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantExtendInfoObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj);

/**
 * Frees the elements of a TSRestaurantExtendInfoObj.
 *
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to free.
 */
static void freeNs0TSRestaurantExtendInfoObjType(struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj);

#endif /* DEF_enunciate_ns0_TSRestaurantExtendInfoObj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantObj_H
#define DEF_enunciate_ns0_TSRestaurantObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantObj {


  /**
   * (no documentation provided)
   */
  xmlChar *moreInfoFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *openNowFlag;

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
#ifndef DEF_enunciate_ns0_TSRestaurantPhotoObj_H
#define DEF_enunciate_ns0_TSRestaurantPhotoObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantPhotoObj {


  /**
   * (no documentation provided)
   */
  xmlChar *restaurantId;

  /**
   * (no documentation provided)
   */
  xmlChar *photoId;

  /**
   * (no documentation provided)
   */
  xmlChar *prefix;

  /**
   * (no documentation provided)
   */
  xmlChar *suffix;

  /**
   * (no documentation provided)
   */
  xmlChar *width;

  /**
   * (no documentation provided)
   */
  xmlChar *height;

  /**
   * (no documentation provided)
   */
  xmlChar *ultimateSourceName;

  /**
   * (no documentation provided)
   */
  xmlChar *ultimateSourceUrl;

  /**
   * (no documentation provided)
   */
  xmlChar *photoSource;
};

/**
 * Reads a TSRestaurantPhotoObj element from XML. The element to be read is "restaurantphoto", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantPhotoObj *xml_read_enunciate_ns0_TSRestaurantPhotoObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantPhotoObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj);

/**
 * Frees a TSRestaurantPhotoObj.
 *
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to free.
 */
void free_enunciate_ns0_TSRestaurantPhotoObj(struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj);

/**
 * Reads a TSRestaurantPhotoObj element from XML. The element to be read is "restaurantphoto", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantPhotoObj *xmlTextReaderReadNs0RestaurantphotoElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantphotoElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj);

/**
 * Writes a TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantphotoElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantPhotoObj.
 *
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj whose children are to be free.
 */
static void freeNs0RestaurantphotoElement(struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj);

/**
 * Reads a TSRestaurantPhotoObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantPhotoObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantPhotoObj *xmlTextReaderReadNs0TSRestaurantPhotoObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantPhotoObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantPhotoObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj);

/**
 * Frees the elements of a TSRestaurantPhotoObj.
 *
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to free.
 */
static void freeNs0TSRestaurantPhotoObjType(struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj);

#endif /* DEF_enunciate_ns0_TSRestaurantPhotoObj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj_H
#define DEF_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj {


  /**
   * (no documentation provided)
   */
  xmlChar *questionId;

  /**
   * (no documentation provided)
   */
  xmlChar *friendsNonTsUserFacebookId;

  /**
   * Size of the friendsNonTsUserFacebookId array.
   */
  int _sizeof_friendsNonTsUserFacebookId;
};

/**
 * Reads a TSRestaurantQuesionNonTsAssignedObj element from XML. The element to be read is "restaurantquesionnontsassigned", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantQuesionNonTsAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *xml_read_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML under element name "restaurantquesionnontsassigned".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj);

/**
 * Frees a TSRestaurantQuesionNonTsAssignedObj.
 *
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to free.
 */
void free_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj);

/**
 * Reads a TSRestaurantQuesionNonTsAssignedObj element from XML. The element to be read is "restaurantquesionnontsassigned", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantQuesionNonTsAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *xmlTextReaderReadNs0RestaurantquesionnontsassignedElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML under element name "restaurantquesionnontsassigned".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantquesionnontsassignedElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj);

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML under element name "restaurantquesionnontsassigned".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantquesionnontsassignedElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantQuesionNonTsAssignedObj.
 *
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj whose children are to be free.
 */
static void freeNs0RestaurantquesionnontsassignedElement(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj);

/**
 * Reads a TSRestaurantQuesionNonTsAssignedObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantQuesionNonTsAssignedObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *xmlTextReaderReadNs0TSRestaurantQuesionNonTsAssignedObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantQuesionNonTsAssignedObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj);

/**
 * Frees the elements of a TSRestaurantQuesionNonTsAssignedObj.
 *
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to free.
 */
static void freeNs0TSRestaurantQuesionNonTsAssignedObjType(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj);

#endif /* DEF_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantView_H
#define DEF_enunciate_ns0_TSRestaurantView_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantView {


  /**
   * (no documentation provided)
   */
  xmlChar *id;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRestaurantPhotoObj *photo;

  /**
   * (no documentation provided)
   */
  xmlChar *name;
};

/**
 * Reads a TSRestaurantView element from XML. The element to be read is "restaurantsUserProfileHome", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantView, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantView *xml_read_enunciate_ns0_TSRestaurantView(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantView(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView);

/**
 * Frees a TSRestaurantView.
 *
 * @param _tSRestaurantView The TSRestaurantView to free.
 */
void free_enunciate_ns0_TSRestaurantView(struct enunciate_ns0_TSRestaurantView *_tSRestaurantView);

/**
 * Reads a TSRestaurantView element from XML. The element to be read is "restaurantsUserProfileHome", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantView, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantView *xmlTextReaderReadNs0RestaurantsUserProfileHomeElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantsUserProfileHomeElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView);

/**
 * Writes a TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantsUserProfileHomeElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantView.
 *
 * @param _tSRestaurantView The TSRestaurantView whose children are to be free.
 */
static void freeNs0RestaurantsUserProfileHomeElement(struct enunciate_ns0_TSRestaurantView *_tSRestaurantView);

/**
 * Reads a TSRestaurantView from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantView, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantView *xmlTextReaderReadNs0TSRestaurantViewType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantView to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantViewType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView);

/**
 * Frees the elements of a TSRestaurantView.
 *
 * @param _tSRestaurantView The TSRestaurantView to free.
 */
static void freeNs0TSRestaurantViewType(struct enunciate_ns0_TSRestaurantView *_tSRestaurantView);

#endif /* DEF_enunciate_ns0_TSRestaurantView_H */
#ifndef DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_H
#define DEF_enunciate_ns0_TSSocialAutoPubSettingsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSSocialAutoPubSettingsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *usncORDER;

  /**
   * (no documentation provided)
   */
  xmlChar *usncYN;
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
  xmlChar *usncORDER;

  /**
   * (no documentation provided)
   */
  xmlChar *usncYN;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSSocialAutoPubSettingsObj *auto_publishing;

  /**
   * Size of the auto_publishing array.
   */
  int _sizeof_auto_publishing;
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
#ifndef DEF_enunciate_ns0_TSUserProfileBasicObj_H
#define DEF_enunciate_ns0_TSUserProfileBasicObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSUserProfileBasicObj {


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

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSPhotoObj *photoDetails;
};

/**
 * Reads a TSUserProfileBasicObj element from XML. The element to be read is "userprofilebasic", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserProfileBasicObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileBasicObj *xml_read_enunciate_ns0_TSUserProfileBasicObj(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileBasicObj to XML under element name "userprofilebasic".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSUserProfileBasicObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj);

/**
 * Frees a TSUserProfileBasicObj.
 *
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to free.
 */
void free_enunciate_ns0_TSUserProfileBasicObj(struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj);

/**
 * Reads a TSUserProfileBasicObj element from XML. The element to be read is "userprofilebasic", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileBasicObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileBasicObj *xmlTextReaderReadNs0UserprofilebasicElement(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileBasicObj to XML under element name "userprofilebasic".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserprofilebasicElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj);

/**
 * Writes a TSUserProfileBasicObj to XML under element name "userprofilebasic".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0UserprofilebasicElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj, int writeNamespaces);

/**
 * Frees the children of a TSUserProfileBasicObj.
 *
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj whose children are to be free.
 */
static void freeNs0UserprofilebasicElement(struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj);

/**
 * Reads a TSUserProfileBasicObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileBasicObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserProfileBasicObj *xmlTextReaderReadNs0TSUserProfileBasicObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSUserProfileBasicObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSUserProfileBasicObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj);

/**
 * Frees the elements of a TSUserProfileBasicObj.
 *
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to free.
 */
static void freeNs0TSUserProfileBasicObjType(struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj);

#endif /* DEF_enunciate_ns0_TSUserProfileBasicObj_H */
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
  struct enunciate_ns0_TSRestaurantView *restaurantList;

  /**
   * Size of the restaurantList array.
   */
  int _sizeof_restaurantList;
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
  struct enunciate_ns0_TSCityObj *restaurantCity;

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
#ifndef DEF_enunciate_ns0_TSRecoRequestNonAssignedObj_H
#define DEF_enunciate_ns0_TSRecoRequestNonAssignedObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecoRequestNonAssignedObj {


  /**
   * (no documentation provided)
   */
  xmlChar *recoRequestId;

  /**
   * (no documentation provided)
   */
  xmlChar *nonassignedFacebookIdList;

  /**
   * Size of the nonassignedFacebookIdList array.
   */
  int _sizeof_nonassignedFacebookIdList;
};

/**
 * Reads a TSRecoRequestNonAssignedObj element from XML. The element to be read is "recorequestnonassigned", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestNonAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestNonAssignedObj *xml_read_enunciate_ns0_TSRecoRequestNonAssignedObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecoRequestNonAssignedObj to XML under element name "recorequestnonassigned".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecoRequestNonAssignedObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj);

/**
 * Frees a TSRecoRequestNonAssignedObj.
 *
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to free.
 */
void free_enunciate_ns0_TSRecoRequestNonAssignedObj(struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj);

/**
 * Reads a TSRecoRequestNonAssignedObj element from XML. The element to be read is "recorequestnonassigned", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestNonAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestNonAssignedObj *xmlTextReaderReadNs0RecorequestnonassignedElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecoRequestNonAssignedObj to XML under element name "recorequestnonassigned".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecorequestnonassignedElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj);

/**
 * Writes a TSRecoRequestNonAssignedObj to XML under element name "recorequestnonassigned".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecorequestnonassignedElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj, int writeNamespaces);

/**
 * Frees the children of a TSRecoRequestNonAssignedObj.
 *
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj whose children are to be free.
 */
static void freeNs0RecorequestnonassignedElement(struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj);

/**
 * Reads a TSRecoRequestNonAssignedObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestNonAssignedObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecoRequestNonAssignedObj *xmlTextReaderReadNs0TSRecoRequestNonAssignedObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecoRequestNonAssignedObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecoRequestNonAssignedObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj);

/**
 * Frees the elements of a TSRecoRequestNonAssignedObj.
 *
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to free.
 */
static void freeNs0TSRecoRequestNonAssignedObjType(struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj);

#endif /* DEF_enunciate_ns0_TSRecoRequestNonAssignedObj_H */
#ifndef DEF_enunciate_ns0_TSRecoRequestObj_H
#define DEF_enunciate_ns0_TSRecoRequestObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecoRequestObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSUserProfileBasicObj *recommendeeUser;

  /**
   * (no documentation provided)
   */
  xmlChar *recorequestText;

  /**
   * (no documentation provided)
   */
  xmlChar *recommendeeUserFolloweeFlag;
};

/**
 * Reads a TSRecoRequestObj element from XML. The element to be read is "recorequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestObj *xml_read_enunciate_ns0_TSRecoRequestObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecoRequestObj to XML under element name "recorequest".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecoRequestObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj);

/**
 * Frees a TSRecoRequestObj.
 *
 * @param _tSRecoRequestObj The TSRecoRequestObj to free.
 */
void free_enunciate_ns0_TSRecoRequestObj(struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj);

/**
 * Reads a TSRecoRequestObj element from XML. The element to be read is "recorequest", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestObj *xmlTextReaderReadNs0RecorequestElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecoRequestObj to XML under element name "recorequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecorequestElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj);

/**
 * Writes a TSRecoRequestObj to XML under element name "recorequest".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecorequestElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj, int writeNamespaces);

/**
 * Frees the children of a TSRecoRequestObj.
 *
 * @param _tSRecoRequestObj The TSRecoRequestObj whose children are to be free.
 */
static void freeNs0RecorequestElement(struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj);

/**
 * Reads a TSRecoRequestObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecoRequestObj *xmlTextReaderReadNs0TSRecoRequestObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecoRequestObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecoRequestObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj);

/**
 * Frees the elements of a TSRecoRequestObj.
 *
 * @param _tSRecoRequestObj The TSRecoRequestObj to free.
 */
static void freeNs0TSRecoRequestObjType(struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj);

#endif /* DEF_enunciate_ns0_TSRecoRequestObj_H */
#ifndef DEF_enunciate_ns0_TSRecommendationsFollowupObj_H
#define DEF_enunciate_ns0_TSRecommendationsFollowupObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecommendationsFollowupObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSUserProfileBasicObj *questionUse;

  /**
   * (no documentation provided)
   */
  xmlChar *questionText;

  /**
   * (no documentation provided)
   */
  xmlChar *questionUserFolloweeFlag;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRestaurantObj *questionRestaurant;
};

/**
 * Reads a TSRecommendationsFollowupObj element from XML. The element to be read is "recosfollowup", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsFollowupObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsFollowupObj *xml_read_enunciate_ns0_TSRecommendationsFollowupObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecommendationsFollowupObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj);

/**
 * Frees a TSRecommendationsFollowupObj.
 *
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to free.
 */
void free_enunciate_ns0_TSRecommendationsFollowupObj(struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj);

/**
 * Reads a TSRecommendationsFollowupObj element from XML. The element to be read is "recosfollowup", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsFollowupObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsFollowupObj *xmlTextReaderReadNs0RecosfollowupElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecosfollowupElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj);

/**
 * Writes a TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecosfollowupElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj, int writeNamespaces);

/**
 * Frees the children of a TSRecommendationsFollowupObj.
 *
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj whose children are to be free.
 */
static void freeNs0RecosfollowupElement(struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj);

/**
 * Reads a TSRecommendationsFollowupObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsFollowupObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendationsFollowupObj *xmlTextReaderReadNs0TSRecommendationsFollowupObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsFollowupObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecommendationsFollowupObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj);

/**
 * Frees the elements of a TSRecommendationsFollowupObj.
 *
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to free.
 */
static void freeNs0TSRecommendationsFollowupObjType(struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj);

#endif /* DEF_enunciate_ns0_TSRecommendationsFollowupObj_H */
#ifndef DEF_enunciate_ns0_TSRecommendationsForYouObj_H
#define DEF_enunciate_ns0_TSRecommendationsForYouObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecommendationsForYouObj {


  /**
   * (no documentation provided)
   */
  xmlChar *recorequestText;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRestaurantsForYouObj *restaurantsForYouObjList;

  /**
   * Size of the restaurantsForYouObjList array.
   */
  int _sizeof_restaurantsForYouObjList;
};

/**
 * Reads a TSRecommendationsForYouObj element from XML. The element to be read is "recos4u", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsForYouObj *xml_read_enunciate_ns0_TSRecommendationsForYouObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsForYouObj to XML under element name "recos4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecommendationsForYouObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj);

/**
 * Frees a TSRecommendationsForYouObj.
 *
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to free.
 */
void free_enunciate_ns0_TSRecommendationsForYouObj(struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj);

/**
 * Reads a TSRecommendationsForYouObj element from XML. The element to be read is "recos4u", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsForYouObj *xmlTextReaderReadNs0Recos4uElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsForYouObj to XML under element name "recos4u".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Recos4uElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj);

/**
 * Writes a TSRecommendationsForYouObj to XML under element name "recos4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Recos4uElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj, int writeNamespaces);

/**
 * Frees the children of a TSRecommendationsForYouObj.
 *
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj whose children are to be free.
 */
static void freeNs0Recos4uElement(struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj);

/**
 * Reads a TSRecommendationsForYouObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsForYouObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendationsForYouObj *xmlTextReaderReadNs0TSRecommendationsForYouObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsForYouObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecommendationsForYouObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj);

/**
 * Frees the elements of a TSRecommendationsForYouObj.
 *
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to free.
 */
static void freeNs0TSRecommendationsForYouObjType(struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj);

#endif /* DEF_enunciate_ns0_TSRecommendationsForYouObj_H */
#ifndef DEF_enunciate_ns0_TSRecommendationsObj_H
#define DEF_enunciate_ns0_TSRecommendationsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecommendationsObj {


  /**
   * (no documentation provided)
   */
  xmlChar *replyText;

  /**
   * (no documentation provided)
   */
  xmlChar *recommenderUserFolloweeFlag;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSUserProfileBasicObj *recommendeeUser;
};

/**
 * Reads a TSRecommendationsObj element from XML. The element to be read is "recommendations4u", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsObj *xml_read_enunciate_ns0_TSRecommendationsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsObj to XML under element name "recommendations4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecommendationsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj);

/**
 * Frees a TSRecommendationsObj.
 *
 * @param _tSRecommendationsObj The TSRecommendationsObj to free.
 */
void free_enunciate_ns0_TSRecommendationsObj(struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj);

/**
 * Reads a TSRecommendationsObj element from XML. The element to be read is "recommendations4u", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsObj *xmlTextReaderReadNs0Recommendations4uElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsObj to XML under element name "recommendations4u".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Recommendations4uElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj);

/**
 * Writes a TSRecommendationsObj to XML under element name "recommendations4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Recommendations4uElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj, int writeNamespaces);

/**
 * Frees the children of a TSRecommendationsObj.
 *
 * @param _tSRecommendationsObj The TSRecommendationsObj whose children are to be free.
 */
static void freeNs0Recommendations4uElement(struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj);

/**
 * Reads a TSRecommendationsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendationsObj *xmlTextReaderReadNs0TSRecommendationsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendationsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecommendationsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj);

/**
 * Frees the elements of a TSRecommendationsObj.
 *
 * @param _tSRecommendationsObj The TSRecommendationsObj to free.
 */
static void freeNs0TSRecommendationsObjType(struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj);

#endif /* DEF_enunciate_ns0_TSRecommendationsObj_H */
#ifndef DEF_enunciate_ns0_TSRecommendeeUserObj_H
#define DEF_enunciate_ns0_TSRecommendeeUserObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRecommendeeUserObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSUserProfileBasicObj *recommendeeUser;

  /**
   * (no documentation provided)
   */
  xmlChar *replyId;

  /**
   * (no documentation provided)
   */
  xmlChar *replyText;

  /**
   * (no documentation provided)
   */
  xmlChar *addedPoints;
};

/**
 * Reads a TSRecommendeeUserObj element from XML. The element to be read is "recommendeeusers", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendeeUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendeeUserObj *xml_read_enunciate_ns0_TSRecommendeeUserObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendeeUserObj to XML under element name "recommendeeusers".
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRecommendeeUserObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj);

/**
 * Frees a TSRecommendeeUserObj.
 *
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to free.
 */
void free_enunciate_ns0_TSRecommendeeUserObj(struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj);

/**
 * Reads a TSRecommendeeUserObj element from XML. The element to be read is "recommendeeusers", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendeeUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendeeUserObj *xmlTextReaderReadNs0RecommendeeusersElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendeeUserObj to XML under element name "recommendeeusers".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecommendeeusersElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj);

/**
 * Writes a TSRecommendeeUserObj to XML under element name "recommendeeusers".
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RecommendeeusersElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj, int writeNamespaces);

/**
 * Frees the children of a TSRecommendeeUserObj.
 *
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj whose children are to be free.
 */
static void freeNs0RecommendeeusersElement(struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj);

/**
 * Reads a TSRecommendeeUserObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendeeUserObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendeeUserObj *xmlTextReaderReadNs0TSRecommendeeUserObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRecommendeeUserObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRecommendeeUserObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj);

/**
 * Frees the elements of a TSRecommendeeUserObj.
 *
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to free.
 */
static void freeNs0TSRecommendeeUserObjType(struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj);

#endif /* DEF_enunciate_ns0_TSRecommendeeUserObj_H */
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
#ifndef DEF_enunciate_ns0_TSRestaurantCusineTier2Obj_H
#define DEF_enunciate_ns0_TSRestaurantCusineTier2Obj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantCusineTier2Obj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRestaurantDetailsObj *tsRestaurantDetailsObj;

  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSCuisineTier2Obj *tsCuisineTier2Obj;
};

/**
 * Reads a TSRestaurantCusineTier2Obj element from XML. The element to be read is "restaurantcuisinetier2", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantCusineTier2Obj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantCusineTier2Obj *xml_read_enunciate_ns0_TSRestaurantCusineTier2Obj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantCusineTier2Obj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj);

/**
 * Frees a TSRestaurantCusineTier2Obj.
 *
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to free.
 */
void free_enunciate_ns0_TSRestaurantCusineTier2Obj(struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj);

/**
 * Reads a TSRestaurantCusineTier2Obj element from XML. The element to be read is "restaurantcuisinetier2", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantCusineTier2Obj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantCusineTier2Obj *xmlTextReaderReadNs0Restaurantcuisinetier2Element(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Restaurantcuisinetier2Element(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj);

/**
 * Writes a TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Restaurantcuisinetier2ElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantCusineTier2Obj.
 *
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj whose children are to be free.
 */
static void freeNs0Restaurantcuisinetier2Element(struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj);

/**
 * Reads a TSRestaurantCusineTier2Obj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantCusineTier2Obj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantCusineTier2Obj *xmlTextReaderReadNs0TSRestaurantCusineTier2ObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantCusineTier2Obj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantCusineTier2ObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj);

/**
 * Frees the elements of a TSRestaurantCusineTier2Obj.
 *
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to free.
 */
static void freeNs0TSRestaurantCusineTier2ObjType(struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj);

#endif /* DEF_enunciate_ns0_TSRestaurantCusineTier2Obj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantRecommendersDetailsObj_H
#define DEF_enunciate_ns0_TSRestaurantRecommendersDetailsObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantRecommendersDetailsObj {


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
  struct enunciate_ns0_TSUserProfileBasicObj *recommendersDetailsList;

  /**
   * Size of the recommendersDetailsList array.
   */
  int _sizeof_recommendersDetailsList;
};

/**
 * Reads a TSRestaurantRecommendersDetailsObj element from XML. The element to be read is "restaurantrecommenders", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *xml_read_enunciate_ns0_TSRestaurantRecommendersDetailsObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML under element name "restaurantrecommenders".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantRecommendersDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj);

/**
 * Frees a TSRestaurantRecommendersDetailsObj.
 *
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to free.
 */
void free_enunciate_ns0_TSRestaurantRecommendersDetailsObj(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj);

/**
 * Reads a TSRestaurantRecommendersDetailsObj element from XML. The element to be read is "restaurantrecommenders", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *xmlTextReaderReadNs0RestaurantrecommendersElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML under element name "restaurantrecommenders".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantrecommendersElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj);

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML under element name "restaurantrecommenders".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0RestaurantrecommendersElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantRecommendersDetailsObj.
 *
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj whose children are to be free.
 */
static void freeNs0RestaurantrecommendersElement(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj);

/**
 * Reads a TSRestaurantRecommendersDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantRecommendersDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *xmlTextReaderReadNs0TSRestaurantRecommendersDetailsObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantRecommendersDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj);

/**
 * Frees the elements of a TSRestaurantRecommendersDetailsObj.
 *
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to free.
 */
static void freeNs0TSRestaurantRecommendersDetailsObjType(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj);

#endif /* DEF_enunciate_ns0_TSRestaurantRecommendersDetailsObj_H */
#ifndef DEF_enunciate_ns0_TSRestaurantsForYouObj_H
#define DEF_enunciate_ns0_TSRestaurantsForYouObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSRestaurantsForYouObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSRecommendationsObj *recommendationsForYouList;

  /**
   * Size of the recommendationsForYouList array.
   */
  int _sizeof_recommendationsForYouList;

  /**
   * (no documentation provided)
   */
  xmlChar *restaurantId;

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
};

/**
 * Reads a TSRestaurantsForYouObj element from XML. The element to be read is "rests4u", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantsForYouObj *xml_read_enunciate_ns0_TSRestaurantsForYouObj(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantsForYouObj to XML under element name "rests4u".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSRestaurantsForYouObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj);

/**
 * Frees a TSRestaurantsForYouObj.
 *
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to free.
 */
void free_enunciate_ns0_TSRestaurantsForYouObj(struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj);

/**
 * Reads a TSRestaurantsForYouObj element from XML. The element to be read is "rests4u", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantsForYouObj *xmlTextReaderReadNs0Rests4uElement(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantsForYouObj to XML under element name "rests4u".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Rests4uElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj);

/**
 * Writes a TSRestaurantsForYouObj to XML under element name "rests4u".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0Rests4uElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj, int writeNamespaces);

/**
 * Frees the children of a TSRestaurantsForYouObj.
 *
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj whose children are to be free.
 */
static void freeNs0Rests4uElement(struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj);

/**
 * Reads a TSRestaurantsForYouObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantsForYouObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantsForYouObj *xmlTextReaderReadNs0TSRestaurantsForYouObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSRestaurantsForYouObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSRestaurantsForYouObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj);

/**
 * Frees the elements of a TSRestaurantsForYouObj.
 *
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to free.
 */
static void freeNs0TSRestaurantsForYouObjType(struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj);

#endif /* DEF_enunciate_ns0_TSRestaurantsForYouObj_H */
#ifndef DEF_enunciate_ns0_TSSenderUserObj_H
#define DEF_enunciate_ns0_TSSenderUserObj_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_TSSenderUserObj {


  /**
   * (no documentation provided)
   */
  struct enunciate_ns0_TSUserProfileBasicObj *senderUser;

  /**
   * (no documentation provided)
   */
  xmlChar *senderUserFolloweeFlag;

  /**
   * (no documentation provided)
   */
  xmlChar *message;
};

/**
 * Reads a TSSenderUserObj element from XML. The element to be read is "senderuser", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSenderUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSenderUserObj *xml_read_enunciate_ns0_TSSenderUserObj(xmlTextReaderPtr reader);

/**
 * Writes a TSSenderUserObj to XML under element name "senderuser".
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
int xml_write_enunciate_ns0_TSSenderUserObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj);

/**
 * Frees a TSSenderUserObj.
 *
 * @param _tSSenderUserObj The TSSenderUserObj to free.
 */
void free_enunciate_ns0_TSSenderUserObj(struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj);

/**
 * Reads a TSSenderUserObj element from XML. The element to be read is "senderuser", and
 * it is assumed that the reader is already pointing to the element.
 *
 * @param reader The XML reader.
 * @return The TSSenderUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSenderUserObj *xmlTextReaderReadNs0SenderuserElement(xmlTextReaderPtr reader);

/**
 * Writes a TSSenderUserObj to XML under element name "senderuser".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SenderuserElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj);

/**
 * Writes a TSSenderUserObj to XML under element name "senderuser".
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0SenderuserElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj, int writeNamespaces);

/**
 * Frees the children of a TSSenderUserObj.
 *
 * @param _tSSenderUserObj The TSSenderUserObj whose children are to be free.
 */
static void freeNs0SenderuserElement(struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj);

/**
 * Reads a TSSenderUserObj from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The TSSenderUserObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSenderUserObj *xmlTextReaderReadNs0TSSenderUserObjType(xmlTextReaderPtr reader);

/**
 * Writes a TSSenderUserObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0TSSenderUserObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj);

/**
 * Frees the elements of a TSSenderUserObj.
 *
 * @param _tSSenderUserObj The TSSenderUserObj to free.
 */
static void freeNs0TSSenderUserObjType(struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj);

#endif /* DEF_enunciate_ns0_TSSenderUserObj_H */
#ifndef DEF_enunciate_ns0_JSONObject_H
#define DEF_enunciate_ns0_JSONObject_H

/**
 * (no documentation provided)
 */
struct enunciate_ns0_JSONObject {

};

/**
 * Reads a JSONObject from XML. The reader is assumed to be at the start element.
 *
 * @param reader The XML reader.
 * @return The JSONObject, or NULL in case of error.
 */
static struct enunciate_ns0_JSONObject *xmlTextReaderReadNs0JSONObjectType(xmlTextReaderPtr reader);

/**
 * Writes a JSONObject to XML.
 *
 * @param writer The XML writer.
 * @param _jSONObject The JSONObject to write.
 * @return The bytes written (may be 0 in case of buffering) or -1 in case of error.
 */
static int xmlTextWriterWriteNs0JSONObjectType(xmlTextWriterPtr writer, struct enunciate_ns0_JSONObject *_jSONObject);

/**
 * Frees the elements of a JSONObject.
 *
 * @param _jSONObject The JSONObject to free.
 */
static void freeNs0JSONObjectType(struct enunciate_ns0_JSONObject *_jSONObject);

#endif /* DEF_enunciate_ns0_JSONObject_H */
#ifndef DEF_enunciate_ns0_TSCityObj_M
#define DEF_enunciate_ns0_TSCityObj_M

/**
 * Reads a TSCityObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSCityObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSCityObj *xmlTextReaderReadNs0TSCityObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSCityObj *_tSCityObj = calloc(1, sizeof(struct enunciate_ns0_TSCityObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSCityObjType(_tSCityObj);
        free(_tSCityObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cityId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cityId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cityId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCityObjType(_tSCityObj);
          free(_tSCityObj);
          return NULL;
        }

        _tSCityObj->cityId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "country", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}country of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCityObjType(_tSCityObj);
          free(_tSCityObj);
          return NULL;
        }

        _tSCityObj->country = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "state", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}state of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}state of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCityObjType(_tSCityObj);
          free(_tSCityObj);
          return NULL;
        }

        _tSCityObj->state = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "city", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}city of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCityObjType(_tSCityObj);
          free(_tSCityObj);
          return NULL;
        }

        _tSCityObj->city = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSCityObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSCityObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSCityObj;
}

/**
 * Writes a TSCityObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSCityObj The TSCityObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSCityObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSCityObj *_tSCityObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSCityObj->cityId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cityId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cityId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCityObj->cityId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cityId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCityObj->country != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "country", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}country. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}country...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCityObj->country));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}country. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}country. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCityObj->state != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "state", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}state. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}state...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCityObj->state));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}state. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}state. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCityObj->city != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "city", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}city...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCityObj->city));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}city. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSCityObj.
 *
 * @param _tSCityObj The TSCityObj to free.
 */
static void freeNs0TSCityObjType(struct enunciate_ns0_TSCityObj *_tSCityObj) {
  int i;
  if (_tSCityObj->cityId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cityId of type enunciate_ns0_TSCityObj...\n");
#endif
    freeXsStringType(_tSCityObj->cityId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cityId of type enunciate_ns0_TSCityObj...\n");
#endif
    free(_tSCityObj->cityId);
  }
  if (_tSCityObj->country != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor country of type enunciate_ns0_TSCityObj...\n");
#endif
    freeXsStringType(_tSCityObj->country);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor country of type enunciate_ns0_TSCityObj...\n");
#endif
    free(_tSCityObj->country);
  }
  if (_tSCityObj->state != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor state of type enunciate_ns0_TSCityObj...\n");
#endif
    freeXsStringType(_tSCityObj->state);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor state of type enunciate_ns0_TSCityObj...\n");
#endif
    free(_tSCityObj->state);
  }
  if (_tSCityObj->city != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor city of type enunciate_ns0_TSCityObj...\n");
#endif
    freeXsStringType(_tSCityObj->city);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor city of type enunciate_ns0_TSCityObj...\n");
#endif
    free(_tSCityObj->city);
  }
}
#endif /* DEF_enunciate_ns0_TSCityObj_M */
#ifndef DEF_enunciate_ns0_TSCuisineTier2Obj_M
#define DEF_enunciate_ns0_TSCuisineTier2Obj_M

/**
 * Reads a TSCuisineTier2Obj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSCuisineTier2Obj, or NULL in case of error.
 */
static struct enunciate_ns0_TSCuisineTier2Obj *xmlTextReaderReadNs0TSCuisineTier2ObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSCuisineTier2Obj *_tSCuisineTier2Obj = calloc(1, sizeof(struct enunciate_ns0_TSCuisineTier2Obj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSCuisineTier2ObjType(_tSCuisineTier2Obj);
        free(_tSCuisineTier2Obj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cuisineId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cuisineId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cuisineId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCuisineTier2ObjType(_tSCuisineTier2Obj);
          free(_tSCuisineTier2Obj);
          return NULL;
        }

        _tSCuisineTier2Obj->cuisineId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cuisineDesc", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cuisineDesc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cuisineDesc of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCuisineTier2ObjType(_tSCuisineTier2Obj);
          free(_tSCuisineTier2Obj);
          return NULL;
        }

        _tSCuisineTier2Obj->cuisineDesc = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "cuisineValidCurrent", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}cuisineValidCurrent of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}cuisineValidCurrent of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSCuisineTier2ObjType(_tSCuisineTier2Obj);
          free(_tSCuisineTier2Obj);
          return NULL;
        }

        _tSCuisineTier2Obj->cuisineValidCurrent = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSCuisineTier2Obj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSCuisineTier2Obj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSCuisineTier2Obj;
}

/**
 * Writes a TSCuisineTier2Obj to XML.
 *
 * @param writer The XML writer.
 * @param _tSCuisineTier2Obj The TSCuisineTier2Obj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSCuisineTier2ObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSCuisineTier2Obj *_tSCuisineTier2Obj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSCuisineTier2Obj->cuisineId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cuisineId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCuisineTier2Obj->cuisineId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cuisineId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCuisineTier2Obj->cuisineDesc != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineDesc", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cuisineDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineDesc...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCuisineTier2Obj->cuisineDesc));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cuisineDesc. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSCuisineTier2Obj->cuisineValidCurrent != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "cuisineValidCurrent", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}cuisineValidCurrent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineValidCurrent...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSCuisineTier2Obj->cuisineValidCurrent));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}cuisineValidCurrent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}cuisineValidCurrent. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSCuisineTier2Obj.
 *
 * @param _tSCuisineTier2Obj The TSCuisineTier2Obj to free.
 */
static void freeNs0TSCuisineTier2ObjType(struct enunciate_ns0_TSCuisineTier2Obj *_tSCuisineTier2Obj) {
  int i;
  if (_tSCuisineTier2Obj->cuisineId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cuisineId of type enunciate_ns0_TSCuisineTier2Obj...\n");
#endif
    freeXsStringType(_tSCuisineTier2Obj->cuisineId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cuisineId of type enunciate_ns0_TSCuisineTier2Obj...\n");
#endif
    free(_tSCuisineTier2Obj->cuisineId);
  }
  if (_tSCuisineTier2Obj->cuisineDesc != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cuisineDesc of type enunciate_ns0_TSCuisineTier2Obj...\n");
#endif
    freeXsStringType(_tSCuisineTier2Obj->cuisineDesc);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cuisineDesc of type enunciate_ns0_TSCuisineTier2Obj...\n");
#endif
    free(_tSCuisineTier2Obj->cuisineDesc);
  }
  if (_tSCuisineTier2Obj->cuisineValidCurrent != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cuisineValidCurrent of type enunciate_ns0_TSCuisineTier2Obj...\n");
#endif
    freeXsStringType(_tSCuisineTier2Obj->cuisineValidCurrent);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cuisineValidCurrent of type enunciate_ns0_TSCuisineTier2Obj...\n");
#endif
    free(_tSCuisineTier2Obj->cuisineValidCurrent);
  }
}
#endif /* DEF_enunciate_ns0_TSCuisineTier2Obj_M */
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
#ifndef DEF_enunciate_ns0_TSKeyValueObj_M
#define DEF_enunciate_ns0_TSKeyValueObj_M

/**
 * Reads a TSKeyValueObj element from XML. The element to be read is "keyvalue", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSKeyValueObj, or NULL in case of error.
 */
struct enunciate_ns0_TSKeyValueObj *xml_read_enunciate_ns0_TSKeyValueObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0KeyvalueElement(reader);
}

/**
 * Writes a TSKeyValueObj to XML under element name "keyvalue".
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSKeyValueObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj) {
  return xmlTextWriterWriteNs0KeyvalueElementNS(writer, _tSKeyValueObj, 1);
}

/**
 * Frees a TSKeyValueObj.
 *
 * @param _tSKeyValueObj The TSKeyValueObj to free.
 */
void free_enunciate_ns0_TSKeyValueObj(struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj) {
  freeNs0TSKeyValueObjType(_tSKeyValueObj);
  free(_tSKeyValueObj);
}

/**
 * Reads a TSKeyValueObj element from XML. The element to be read is "keyvalue", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSKeyValueObj, or NULL in case of error.
 */
struct enunciate_ns0_TSKeyValueObj *xmlTextReaderReadNs0KeyvalueElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "keyvalue", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}keyvalue.\n");
#endif
    _tSKeyValueObj = xmlTextReaderReadNs0TSKeyValueObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSKeyValueObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}keyvalue failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}keyvalue failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSKeyValueObj;
}

/**
 * Writes a TSKeyValueObj to XML under element name "keyvalue".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0KeyvalueElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj) {
  return xmlTextWriterWriteNs0KeyvalueElementNS(writer, _tSKeyValueObj, 0);
}

/**
 * Writes a TSKeyValueObj to XML under element name "keyvalue".
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0KeyvalueElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "keyvalue", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}keyvalue. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSKeyValueObj for root element {}keyvalue...\n");
#endif
  status = xmlTextWriterWriteNs0TSKeyValueObjType(writer, _tSKeyValueObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}keyvalue. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}keyvalue. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSKeyValueObj.
 *
 * @param _tSKeyValueObj The TSKeyValueObj whose children are to be free.
 */
static void freeNs0KeyvalueElement(struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj) {
  freeNs0TSKeyValueObjType(_tSKeyValueObj);
}

/**
 * Reads a TSKeyValueObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSKeyValueObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSKeyValueObj *xmlTextReaderReadNs0TSKeyValueObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj = calloc(1, sizeof(struct enunciate_ns0_TSKeyValueObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSKeyValueObjType(_tSKeyValueObj);
        free(_tSKeyValueObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "keyName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}keyName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}keyName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSKeyValueObjType(_tSKeyValueObj);
          free(_tSKeyValueObj);
          return NULL;
        }

        _tSKeyValueObj->keyName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "keyNameValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}keyNameValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}keyNameValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSKeyValueObjType(_tSKeyValueObj);
          free(_tSKeyValueObj);
          return NULL;
        }

        _tSKeyValueObj->keyNameValue = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "valueName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}valueName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}valueName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSKeyValueObjType(_tSKeyValueObj);
          free(_tSKeyValueObj);
          return NULL;
        }

        _tSKeyValueObj->valueName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "valueNameValue", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}valueNameValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}valueNameValue of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSKeyValueObjType(_tSKeyValueObj);
          free(_tSKeyValueObj);
          return NULL;
        }

        _tSKeyValueObj->valueNameValue = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSKeyValueObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSKeyValueObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSKeyValueObj;
}

/**
 * Writes a TSKeyValueObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSKeyValueObj The TSKeyValueObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSKeyValueObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSKeyValueObj->keyName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "keyName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}keyName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}keyName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSKeyValueObj->keyName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}keyName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}keyName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSKeyValueObj->keyNameValue != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "keyNameValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}keyNameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}keyNameValue...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSKeyValueObj->keyNameValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}keyNameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}keyNameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSKeyValueObj->valueName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}valueName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}valueName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSKeyValueObj->valueName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}valueName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}valueName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSKeyValueObj->valueNameValue != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "valueNameValue", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}valueNameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}valueNameValue...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSKeyValueObj->valueNameValue));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}valueNameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}valueNameValue. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSKeyValueObj.
 *
 * @param _tSKeyValueObj The TSKeyValueObj to free.
 */
static void freeNs0TSKeyValueObjType(struct enunciate_ns0_TSKeyValueObj *_tSKeyValueObj) {
  int i;
  if (_tSKeyValueObj->keyName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor keyName of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    freeXsStringType(_tSKeyValueObj->keyName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor keyName of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    free(_tSKeyValueObj->keyName);
  }
  if (_tSKeyValueObj->keyNameValue != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor keyNameValue of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    freeXsStringType(_tSKeyValueObj->keyNameValue);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor keyNameValue of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    free(_tSKeyValueObj->keyNameValue);
  }
  if (_tSKeyValueObj->valueName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor valueName of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    freeXsStringType(_tSKeyValueObj->valueName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor valueName of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    free(_tSKeyValueObj->valueName);
  }
  if (_tSKeyValueObj->valueNameValue != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor valueNameValue of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    freeXsStringType(_tSKeyValueObj->valueNameValue);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor valueNameValue of type enunciate_ns0_TSKeyValueObj...\n");
#endif
    free(_tSKeyValueObj->valueNameValue);
  }
}
#endif /* DEF_enunciate_ns0_TSKeyValueObj_M */
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
        && xmlStrcmp(BAD_CAST "notification", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}notification of type {}TSNotificationSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSNotificationSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}notification of type {}TSNotificationSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSListNotificationSettingsObjType(_tSListNotificationSettingsObj);
          free(_tSListNotificationSettingsObj);
          return NULL;
        }

        _tSListNotificationSettingsObj->notification = realloc(_tSListNotificationSettingsObj->notification, (_tSListNotificationSettingsObj->_sizeof_notification + 1) * sizeof(struct enunciate_ns0_TSNotificationSettingsObj));
        memcpy(&(_tSListNotificationSettingsObj->notification[_tSListNotificationSettingsObj->_sizeof_notification++]), _child_accessor, sizeof(struct enunciate_ns0_TSNotificationSettingsObj));
        free(_child_accessor);
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
  for (i = 0; i < _tSListNotificationSettingsObj->_sizeof_notification; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "notification", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}notification. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSNotificationSettingsObj for element {}notification...\n");
#endif
    status = xmlTextWriterWriteNs0TSNotificationSettingsObjType(writer, &(_tSListNotificationSettingsObj->notification[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSNotificationSettingsObj for element {}notification. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}notification. status: %i\n", status);
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
  if (_tSListNotificationSettingsObj->notification != NULL) {
    for (i = 0; i < _tSListNotificationSettingsObj->_sizeof_notification; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor notification[%i] of type enunciate_ns0_TSListNotificationSettingsObj...\n", i);
#endif
      freeNs0TSNotificationSettingsObjType(&(_tSListNotificationSettingsObj->notification[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor notification of type enunciate_ns0_TSListNotificationSettingsObj...\n");
#endif
    free(_tSListNotificationSettingsObj->notification);
  }
}
#endif /* DEF_enunciate_ns0_TSListNotificationSettingsObj_M */
#ifndef DEF_enunciate_ns0_TSMenuObj_M
#define DEF_enunciate_ns0_TSMenuObj_M

/**
 * Reads a TSMenuObj element from XML. The element to be read is "menu", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSMenuObj, or NULL in case of error.
 */
struct enunciate_ns0_TSMenuObj *xml_read_enunciate_ns0_TSMenuObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0MenuElement(reader);
}

/**
 * Writes a TSMenuObj to XML under element name "menu".
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSMenuObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj) {
  return xmlTextWriterWriteNs0MenuElementNS(writer, _tSMenuObj, 1);
}

/**
 * Frees a TSMenuObj.
 *
 * @param _tSMenuObj The TSMenuObj to free.
 */
void free_enunciate_ns0_TSMenuObj(struct enunciate_ns0_TSMenuObj *_tSMenuObj) {
  freeNs0TSMenuObjType(_tSMenuObj);
  free(_tSMenuObj);
}

/**
 * Reads a TSMenuObj element from XML. The element to be read is "menu", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSMenuObj, or NULL in case of error.
 */
struct enunciate_ns0_TSMenuObj *xmlTextReaderReadNs0MenuElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSMenuObj *_tSMenuObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "menu", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}menu.\n");
#endif
    _tSMenuObj = xmlTextReaderReadNs0TSMenuObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSMenuObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}menu failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}menu failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSMenuObj;
}

/**
 * Writes a TSMenuObj to XML under element name "menu".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MenuElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj) {
  return xmlTextWriterWriteNs0MenuElementNS(writer, _tSMenuObj, 0);
}

/**
 * Writes a TSMenuObj to XML under element name "menu".
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0MenuElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menu", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}menu. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSMenuObj for root element {}menu...\n");
#endif
  status = xmlTextWriterWriteNs0TSMenuObjType(writer, _tSMenuObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}menu. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}menu. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSMenuObj.
 *
 * @param _tSMenuObj The TSMenuObj whose children are to be free.
 */
static void freeNs0MenuElement(struct enunciate_ns0_TSMenuObj *_tSMenuObj) {
  freeNs0TSMenuObjType(_tSMenuObj);
}

/**
 * Reads a TSMenuObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSMenuObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSMenuObj *xmlTextReaderReadNs0TSMenuObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSMenuObj *_tSMenuObj = calloc(1, sizeof(struct enunciate_ns0_TSMenuObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSMenuObjType(_tSMenuObj);
        free(_tSMenuObj);
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
          freeNs0TSMenuObjType(_tSMenuObj);
          free(_tSMenuObj);
          return NULL;
        }

        _tSMenuObj->restaurantId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "menuSource", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}menuSource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}menuSource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSMenuObjType(_tSMenuObj);
          free(_tSMenuObj);
          return NULL;
        }

        _tSMenuObj->menuSource = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "menuMobileUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}menuMobileUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}menuMobileUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSMenuObjType(_tSMenuObj);
          free(_tSMenuObj);
          return NULL;
        }

        _tSMenuObj->menuMobileUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSMenuObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSMenuObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSMenuObj;
}

/**
 * Writes a TSMenuObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSMenuObj The TSMenuObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSMenuObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSMenuObj *_tSMenuObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSMenuObj->restaurantId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSMenuObj->restaurantId));
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
  if (_tSMenuObj->menuSource != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menuSource", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}menuSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}menuSource...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSMenuObj->menuSource));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}menuSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}menuSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSMenuObj->menuMobileUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "menuMobileUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}menuMobileUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}menuMobileUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSMenuObj->menuMobileUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}menuMobileUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}menuMobileUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSMenuObj.
 *
 * @param _tSMenuObj The TSMenuObj to free.
 */
static void freeNs0TSMenuObjType(struct enunciate_ns0_TSMenuObj *_tSMenuObj) {
  int i;
  if (_tSMenuObj->restaurantId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantId of type enunciate_ns0_TSMenuObj...\n");
#endif
    freeXsStringType(_tSMenuObj->restaurantId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantId of type enunciate_ns0_TSMenuObj...\n");
#endif
    free(_tSMenuObj->restaurantId);
  }
  if (_tSMenuObj->menuSource != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor menuSource of type enunciate_ns0_TSMenuObj...\n");
#endif
    freeXsStringType(_tSMenuObj->menuSource);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor menuSource of type enunciate_ns0_TSMenuObj...\n");
#endif
    free(_tSMenuObj->menuSource);
  }
  if (_tSMenuObj->menuMobileUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor menuMobileUrl of type enunciate_ns0_TSMenuObj...\n");
#endif
    freeXsStringType(_tSMenuObj->menuMobileUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor menuMobileUrl of type enunciate_ns0_TSMenuObj...\n");
#endif
    free(_tSMenuObj->menuMobileUrl);
  }
}
#endif /* DEF_enunciate_ns0_TSMenuObj_M */
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
        && xmlStrcmp(BAD_CAST "order_id", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}order_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}order_id of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSNotificationSettingsObjType(_tSNotificationSettingsObj);
          free(_tSNotificationSettingsObj);
          return NULL;
        }

        _tSNotificationSettingsObj->order_id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
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
  if (_tSNotificationSettingsObj->order_id != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "order_id", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}order_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}order_id...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSNotificationSettingsObj->order_id));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}order_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}order_id. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
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
  if (_tSNotificationSettingsObj->order_id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor order_id of type enunciate_ns0_TSNotificationSettingsObj...\n");
#endif
    freeXsStringType(_tSNotificationSettingsObj->order_id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor order_id of type enunciate_ns0_TSNotificationSettingsObj...\n");
#endif
    free(_tSNotificationSettingsObj->order_id);
  }
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
        && xmlStrcmp(BAD_CAST "privacy_id_order", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}privacy_id_order of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}privacy_id_order of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
          free(_tSPrivacySettingsObj);
          return NULL;
        }

        _tSPrivacySettingsObj->privacy_id_order = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "privacy_flag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}privacy_flag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}privacy_flag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSPrivacySettingsObjType(_tSPrivacySettingsObj);
          free(_tSPrivacySettingsObj);
          return NULL;
        }

        _tSPrivacySettingsObj->privacy_flag = ((xmlChar*)_child_accessor);
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
  if (_tSPrivacySettingsObj->privacy_id_order != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacy_id_order", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}privacy_id_order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}privacy_id_order...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPrivacySettingsObj->privacy_id_order));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}privacy_id_order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}privacy_id_order. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSPrivacySettingsObj->privacy_flag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "privacy_flag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}privacy_flag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}privacy_flag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSPrivacySettingsObj->privacy_flag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}privacy_flag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}privacy_flag. status: %i\n", status);
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
  if (_tSPrivacySettingsObj->privacy_id_order != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor privacy_id_order of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    freeXsStringType(_tSPrivacySettingsObj->privacy_id_order);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor privacy_id_order of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    free(_tSPrivacySettingsObj->privacy_id_order);
  }
  if (_tSPrivacySettingsObj->privacy_flag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor privacy_flag of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    freeXsStringType(_tSPrivacySettingsObj->privacy_flag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor privacy_flag of type enunciate_ns0_TSPrivacySettingsObj...\n");
#endif
    free(_tSPrivacySettingsObj->privacy_flag);
  }
}
#endif /* DEF_enunciate_ns0_TSPrivacySettingsObj_M */
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
        printf("Attempting to read choice {}photoList of type {}TSRestaurantPhotoObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantPhotoObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photoList of type {}TSRestaurantPhotoObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantDetailsObjType(_tSRestaurantDetailsObj);
          free(_tSRestaurantDetailsObj);
          return NULL;
        }

        _tSRestaurantDetailsObj->photoList = realloc(_tSRestaurantDetailsObj->photoList, (_tSRestaurantDetailsObj->_sizeof_photoList + 1) * sizeof(struct enunciate_ns0_TSRestaurantPhotoObj));
        memcpy(&(_tSRestaurantDetailsObj->photoList[_tSRestaurantDetailsObj->_sizeof_photoList++]), _child_accessor, sizeof(struct enunciate_ns0_TSRestaurantPhotoObj));
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
    printf("writing type {}TSRestaurantPhotoObj for element {}photoList...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantPhotoObjType(writer, &(_tSRestaurantDetailsObj->photoList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantPhotoObj for element {}photoList. status: %i\n", status);
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
      freeNs0TSRestaurantPhotoObjType(&(_tSRestaurantDetailsObj->photoList[i]));
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
#ifndef DEF_enunciate_ns0_TSRestaurantExtendInfoObj_M
#define DEF_enunciate_ns0_TSRestaurantExtendInfoObj_M

/**
 * Reads a TSRestaurantExtendInfoObj element from XML. The element to be read is "restaurantextendedinfo", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantExtendInfoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantExtendInfoObj *xml_read_enunciate_ns0_TSRestaurantExtendInfoObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantextendedinfoElement(reader);
}

/**
 * Writes a TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantExtendInfoObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj) {
  return xmlTextWriterWriteNs0RestaurantextendedinfoElementNS(writer, _tSRestaurantExtendInfoObj, 1);
}

/**
 * Frees a TSRestaurantExtendInfoObj.
 *
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to free.
 */
void free_enunciate_ns0_TSRestaurantExtendInfoObj(struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj) {
  freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
  free(_tSRestaurantExtendInfoObj);
}

/**
 * Reads a TSRestaurantExtendInfoObj element from XML. The element to be read is "restaurantextendedinfo", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantExtendInfoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantExtendInfoObj *xmlTextReaderReadNs0RestaurantextendedinfoElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantextendedinfo", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantextendedinfo.\n");
#endif
    _tSRestaurantExtendInfoObj = xmlTextReaderReadNs0TSRestaurantExtendInfoObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantExtendInfoObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantextendedinfo failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantextendedinfo failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantExtendInfoObj;
}

/**
 * Writes a TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantextendedinfoElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj) {
  return xmlTextWriterWriteNs0RestaurantextendedinfoElementNS(writer, _tSRestaurantExtendInfoObj, 0);
}

/**
 * Writes a TSRestaurantExtendInfoObj to XML under element name "restaurantextendedinfo".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantextendedinfoElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantextendedinfo", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantextendedinfo. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantExtendInfoObj for root element {}restaurantextendedinfo...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantExtendInfoObjType(writer, _tSRestaurantExtendInfoObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantextendedinfo. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantextendedinfo. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantExtendInfoObj.
 *
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj whose children are to be free.
 */
static void freeNs0RestaurantextendedinfoElement(struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj) {
  freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
}

/**
 * Reads a TSRestaurantExtendInfoObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantExtendInfoObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantExtendInfoObj *xmlTextReaderReadNs0TSRestaurantExtendInfoObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantExtendInfoObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
        free(_tSRestaurantExtendInfoObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "phoneNumber", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}phoneNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}phoneNumber of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->phoneNumber = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "website", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}website of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}website of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->website = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "healthyOptionsFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}healthyOptionsFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}healthyOptionsFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->healthyOptionsFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "wifiFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}wifiFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}wifiFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->wifiFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "payCashonlyFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}payCashonlyFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}payCashonlyFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->payCashonlyFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "reservationsFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}reservationsFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}reservationsFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->reservationsFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "open24HoursFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}open24HoursFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}open24HoursFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->open24HoursFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "attire", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}attire of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}attire of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->attire = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "attireRequiredList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}attireRequiredList of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}attireRequiredList of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->attireRequiredList = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "attireProhibitedList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}attireProhibitedList of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}attireProhibitedList of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->attireProhibitedList = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingValetFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingValetFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingValetFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingValetFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingFreeFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingFreeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingFreeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingFreeFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingGarageFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingGarageFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingGarageFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingGarageFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingLotFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingLotFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingLotFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingLotFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingStreetFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingStreetFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingStreetFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingStreetFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "parkingValidatedFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}parkingValidatedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}parkingValidatedFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->parkingValidatedFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "smokingFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}smokingFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}smokingFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->smokingFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "accessibleWheelchairFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}accessibleWheelchairFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}accessibleWheelchairFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->accessibleWheelchairFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "alcoholFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}alcoholFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}alcoholFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->alcoholFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "alcoholBarFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}alcoholBarFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}alcoholBarFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->alcoholBarFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "alcoholBeerWineFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}alcoholBeerWineFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}alcoholBeerWineFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->alcoholBeerWineFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "alcoholByobFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}alcoholByobFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}alcoholByobFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->alcoholByobFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "groupsGoodForFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}groupsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}groupsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->groupsGoodForFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "kidsGoodForFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}kidsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}kidsGoodForFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->kidsGoodForFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "kidsMenuFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}kidsMenuFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}kidsMenuFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->kidsMenuFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mealBreakfastFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mealBreakfastFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mealBreakfastFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->mealBreakfastFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mealCaterFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mealCaterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mealCaterFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->mealCaterFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mealDeliverFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mealDeliverFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mealDeliverFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->mealDeliverFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mealDinnerFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mealDinnerFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mealDinnerFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->mealDinnerFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mealLunchFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mealLunchFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mealLunchFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->mealLunchFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "mealTakeoutFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}mealTakeoutFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}mealTakeoutFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->mealTakeoutFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "optionsGlutenfreeFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}optionsGlutenfreeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}optionsGlutenfreeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->optionsGlutenfreeFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "optionsLowfatFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}optionsLowfatFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}optionsLowfatFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->optionsLowfatFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "optionsOrganicFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}optionsOrganicFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}optionsOrganicFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->optionsOrganicFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "optionsVeganFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}optionsVeganFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}optionsVeganFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->optionsVeganFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "optionsVegetarianFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}optionsVegetarianFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}optionsVegetarianFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->optionsVegetarianFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "roomPrivateFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}roomPrivateFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}roomPrivateFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->roomPrivateFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "seatingOutdoorFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}seatingOutdoorFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}seatingOutdoorFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->seatingOutdoorFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "address", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}address of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->address = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lat", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lat of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lat of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->lat = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "lon", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}lon of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}lon of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantExtendInfoObjType(_tSRestaurantExtendInfoObj);
          free(_tSRestaurantExtendInfoObj);
          return NULL;
        }

        _tSRestaurantExtendInfoObj->lon = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantExtendInfoObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantExtendInfoObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantExtendInfoObj;
}

/**
 * Writes a TSRestaurantExtendInfoObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantExtendInfoObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantExtendInfoObj->phoneNumber != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "phoneNumber", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}phoneNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}phoneNumber...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->phoneNumber));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}phoneNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}phoneNumber. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->website != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "website", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}website. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}website...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->website));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}website. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}website. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->healthyOptionsFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "healthyOptionsFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}healthyOptionsFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}healthyOptionsFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->healthyOptionsFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}healthyOptionsFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}healthyOptionsFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->wifiFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "wifiFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}wifiFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}wifiFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->wifiFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}wifiFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}wifiFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->payCashonlyFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "payCashonlyFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}payCashonlyFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}payCashonlyFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->payCashonlyFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}payCashonlyFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}payCashonlyFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->reservationsFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "reservationsFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}reservationsFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}reservationsFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->reservationsFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}reservationsFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}reservationsFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->open24HoursFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "open24HoursFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}open24HoursFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}open24HoursFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->open24HoursFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}open24HoursFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}open24HoursFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->attire != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "attire", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}attire. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}attire...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->attire));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}attire. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}attire. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->attireRequiredList != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "attireRequiredList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}attireRequiredList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}attireRequiredList...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->attireRequiredList));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}attireRequiredList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}attireRequiredList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->attireProhibitedList != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "attireProhibitedList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}attireProhibitedList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}attireProhibitedList...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->attireProhibitedList));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}attireProhibitedList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}attireProhibitedList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingValetFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingValetFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingValetFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingValetFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingValetFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingValetFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingValetFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingFreeFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingFreeFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingFreeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingFreeFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingFreeFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingFreeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingFreeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingGarageFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingGarageFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingGarageFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingGarageFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingGarageFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingGarageFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingGarageFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingLotFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingLotFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingLotFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingLotFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingLotFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingLotFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingLotFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingStreetFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingStreetFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingStreetFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingStreetFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingStreetFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingStreetFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingStreetFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->parkingValidatedFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "parkingValidatedFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}parkingValidatedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}parkingValidatedFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->parkingValidatedFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}parkingValidatedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}parkingValidatedFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->smokingFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "smokingFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}smokingFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}smokingFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->smokingFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}smokingFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}smokingFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->accessibleWheelchairFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "accessibleWheelchairFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}accessibleWheelchairFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}accessibleWheelchairFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->accessibleWheelchairFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}accessibleWheelchairFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}accessibleWheelchairFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->alcoholFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}alcoholFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->alcoholFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}alcoholFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->alcoholBarFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholBarFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}alcoholBarFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholBarFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->alcoholBarFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholBarFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}alcoholBarFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->alcoholBeerWineFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholBeerWineFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}alcoholBeerWineFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholBeerWineFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->alcoholBeerWineFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholBeerWineFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}alcoholBeerWineFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->alcoholByobFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "alcoholByobFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}alcoholByobFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholByobFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->alcoholByobFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}alcoholByobFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}alcoholByobFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->groupsGoodForFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "groupsGoodForFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}groupsGoodForFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}groupsGoodForFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->groupsGoodForFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}groupsGoodForFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}groupsGoodForFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->kidsGoodForFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "kidsGoodForFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}kidsGoodForFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}kidsGoodForFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->kidsGoodForFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}kidsGoodForFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}kidsGoodForFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->kidsMenuFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "kidsMenuFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}kidsMenuFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}kidsMenuFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->kidsMenuFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}kidsMenuFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}kidsMenuFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->mealBreakfastFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealBreakfastFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mealBreakfastFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mealBreakfastFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->mealBreakfastFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mealBreakfastFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mealBreakfastFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->mealCaterFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealCaterFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mealCaterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mealCaterFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->mealCaterFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mealCaterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mealCaterFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->mealDeliverFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealDeliverFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mealDeliverFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mealDeliverFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->mealDeliverFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mealDeliverFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mealDeliverFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->mealDinnerFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealDinnerFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mealDinnerFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mealDinnerFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->mealDinnerFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mealDinnerFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mealDinnerFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->mealLunchFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealLunchFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mealLunchFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mealLunchFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->mealLunchFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mealLunchFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mealLunchFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->mealTakeoutFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "mealTakeoutFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}mealTakeoutFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}mealTakeoutFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->mealTakeoutFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}mealTakeoutFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}mealTakeoutFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->optionsGlutenfreeFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsGlutenfreeFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}optionsGlutenfreeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}optionsGlutenfreeFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->optionsGlutenfreeFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}optionsGlutenfreeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}optionsGlutenfreeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->optionsLowfatFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsLowfatFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}optionsLowfatFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}optionsLowfatFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->optionsLowfatFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}optionsLowfatFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}optionsLowfatFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->optionsOrganicFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsOrganicFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}optionsOrganicFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}optionsOrganicFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->optionsOrganicFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}optionsOrganicFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}optionsOrganicFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->optionsVeganFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsVeganFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}optionsVeganFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}optionsVeganFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->optionsVeganFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}optionsVeganFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}optionsVeganFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->optionsVegetarianFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "optionsVegetarianFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}optionsVegetarianFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}optionsVegetarianFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->optionsVegetarianFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}optionsVegetarianFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}optionsVegetarianFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->roomPrivateFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "roomPrivateFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}roomPrivateFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}roomPrivateFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->roomPrivateFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}roomPrivateFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}roomPrivateFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->seatingOutdoorFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "seatingOutdoorFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}seatingOutdoorFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}seatingOutdoorFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->seatingOutdoorFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}seatingOutdoorFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}seatingOutdoorFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->address != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "address", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}address...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->address));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}address. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->lat != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lat", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lat...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->lat));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lat. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantExtendInfoObj->lon != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "lon", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}lon. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}lon...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantExtendInfoObj->lon));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}lon. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}lon. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantExtendInfoObj.
 *
 * @param _tSRestaurantExtendInfoObj The TSRestaurantExtendInfoObj to free.
 */
static void freeNs0TSRestaurantExtendInfoObjType(struct enunciate_ns0_TSRestaurantExtendInfoObj *_tSRestaurantExtendInfoObj) {
  int i;
  if (_tSRestaurantExtendInfoObj->phoneNumber != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor phoneNumber of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->phoneNumber);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor phoneNumber of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->phoneNumber);
  }
  if (_tSRestaurantExtendInfoObj->website != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor website of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->website);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor website of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->website);
  }
  if (_tSRestaurantExtendInfoObj->healthyOptionsFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor healthyOptionsFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->healthyOptionsFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor healthyOptionsFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->healthyOptionsFlag);
  }
  if (_tSRestaurantExtendInfoObj->wifiFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor wifiFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->wifiFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor wifiFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->wifiFlag);
  }
  if (_tSRestaurantExtendInfoObj->payCashonlyFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor payCashonlyFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->payCashonlyFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor payCashonlyFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->payCashonlyFlag);
  }
  if (_tSRestaurantExtendInfoObj->reservationsFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor reservationsFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->reservationsFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor reservationsFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->reservationsFlag);
  }
  if (_tSRestaurantExtendInfoObj->open24HoursFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor open24HoursFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->open24HoursFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor open24HoursFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->open24HoursFlag);
  }
  if (_tSRestaurantExtendInfoObj->attire != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor attire of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->attire);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor attire of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->attire);
  }
  if (_tSRestaurantExtendInfoObj->attireRequiredList != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor attireRequiredList of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->attireRequiredList);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor attireRequiredList of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->attireRequiredList);
  }
  if (_tSRestaurantExtendInfoObj->attireProhibitedList != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor attireProhibitedList of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->attireProhibitedList);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor attireProhibitedList of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->attireProhibitedList);
  }
  if (_tSRestaurantExtendInfoObj->parkingFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingFlag);
  }
  if (_tSRestaurantExtendInfoObj->parkingValetFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingValetFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingValetFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingValetFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingValetFlag);
  }
  if (_tSRestaurantExtendInfoObj->parkingFreeFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingFreeFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingFreeFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingFreeFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingFreeFlag);
  }
  if (_tSRestaurantExtendInfoObj->parkingGarageFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingGarageFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingGarageFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingGarageFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingGarageFlag);
  }
  if (_tSRestaurantExtendInfoObj->parkingLotFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingLotFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingLotFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingLotFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingLotFlag);
  }
  if (_tSRestaurantExtendInfoObj->parkingStreetFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingStreetFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingStreetFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingStreetFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingStreetFlag);
  }
  if (_tSRestaurantExtendInfoObj->parkingValidatedFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor parkingValidatedFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->parkingValidatedFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor parkingValidatedFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->parkingValidatedFlag);
  }
  if (_tSRestaurantExtendInfoObj->smokingFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor smokingFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->smokingFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor smokingFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->smokingFlag);
  }
  if (_tSRestaurantExtendInfoObj->accessibleWheelchairFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor accessibleWheelchairFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->accessibleWheelchairFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor accessibleWheelchairFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->accessibleWheelchairFlag);
  }
  if (_tSRestaurantExtendInfoObj->alcoholFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alcoholFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->alcoholFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alcoholFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->alcoholFlag);
  }
  if (_tSRestaurantExtendInfoObj->alcoholBarFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alcoholBarFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->alcoholBarFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alcoholBarFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->alcoholBarFlag);
  }
  if (_tSRestaurantExtendInfoObj->alcoholBeerWineFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alcoholBeerWineFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->alcoholBeerWineFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alcoholBeerWineFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->alcoholBeerWineFlag);
  }
  if (_tSRestaurantExtendInfoObj->alcoholByobFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor alcoholByobFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->alcoholByobFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor alcoholByobFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->alcoholByobFlag);
  }
  if (_tSRestaurantExtendInfoObj->groupsGoodForFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor groupsGoodForFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->groupsGoodForFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor groupsGoodForFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->groupsGoodForFlag);
  }
  if (_tSRestaurantExtendInfoObj->kidsGoodForFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor kidsGoodForFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->kidsGoodForFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor kidsGoodForFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->kidsGoodForFlag);
  }
  if (_tSRestaurantExtendInfoObj->kidsMenuFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor kidsMenuFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->kidsMenuFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor kidsMenuFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->kidsMenuFlag);
  }
  if (_tSRestaurantExtendInfoObj->mealBreakfastFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mealBreakfastFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->mealBreakfastFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mealBreakfastFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->mealBreakfastFlag);
  }
  if (_tSRestaurantExtendInfoObj->mealCaterFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mealCaterFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->mealCaterFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mealCaterFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->mealCaterFlag);
  }
  if (_tSRestaurantExtendInfoObj->mealDeliverFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mealDeliverFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->mealDeliverFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mealDeliverFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->mealDeliverFlag);
  }
  if (_tSRestaurantExtendInfoObj->mealDinnerFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mealDinnerFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->mealDinnerFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mealDinnerFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->mealDinnerFlag);
  }
  if (_tSRestaurantExtendInfoObj->mealLunchFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mealLunchFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->mealLunchFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mealLunchFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->mealLunchFlag);
  }
  if (_tSRestaurantExtendInfoObj->mealTakeoutFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor mealTakeoutFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->mealTakeoutFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor mealTakeoutFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->mealTakeoutFlag);
  }
  if (_tSRestaurantExtendInfoObj->optionsGlutenfreeFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor optionsGlutenfreeFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->optionsGlutenfreeFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor optionsGlutenfreeFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->optionsGlutenfreeFlag);
  }
  if (_tSRestaurantExtendInfoObj->optionsLowfatFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor optionsLowfatFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->optionsLowfatFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor optionsLowfatFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->optionsLowfatFlag);
  }
  if (_tSRestaurantExtendInfoObj->optionsOrganicFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor optionsOrganicFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->optionsOrganicFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor optionsOrganicFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->optionsOrganicFlag);
  }
  if (_tSRestaurantExtendInfoObj->optionsVeganFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor optionsVeganFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->optionsVeganFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor optionsVeganFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->optionsVeganFlag);
  }
  if (_tSRestaurantExtendInfoObj->optionsVegetarianFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor optionsVegetarianFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->optionsVegetarianFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor optionsVegetarianFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->optionsVegetarianFlag);
  }
  if (_tSRestaurantExtendInfoObj->roomPrivateFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor roomPrivateFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->roomPrivateFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor roomPrivateFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->roomPrivateFlag);
  }
  if (_tSRestaurantExtendInfoObj->seatingOutdoorFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor seatingOutdoorFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->seatingOutdoorFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor seatingOutdoorFlag of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->seatingOutdoorFlag);
  }
  if (_tSRestaurantExtendInfoObj->address != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor address of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->address);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor address of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->address);
  }
  if (_tSRestaurantExtendInfoObj->lat != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lat of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->lat);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lat of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->lat);
  }
  if (_tSRestaurantExtendInfoObj->lon != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor lon of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    freeXsStringType(_tSRestaurantExtendInfoObj->lon);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor lon of type enunciate_ns0_TSRestaurantExtendInfoObj...\n");
#endif
    free(_tSRestaurantExtendInfoObj->lon);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantExtendInfoObj_M */
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
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->moreInfoFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
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
          freeNs0TSRestaurantObjType(_tSRestaurantObj);
          free(_tSRestaurantObj);
          return NULL;
        }

        _tSRestaurantObj->openNowFlag = ((xmlChar*)_child_accessor);
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
  if (_tSRestaurantObj->moreInfoFlag != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->moreInfoFlag));
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
  if (_tSRestaurantObj->openNowFlag != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantObj->openNowFlag));
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
  if (_tSRestaurantObj->moreInfoFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor moreInfoFlag of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->moreInfoFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor moreInfoFlag of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->moreInfoFlag);
  }
  if (_tSRestaurantObj->openNowFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor openNowFlag of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    freeXsStringType(_tSRestaurantObj->openNowFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor openNowFlag of type enunciate_ns0_TSRestaurantObj...\n");
#endif
    free(_tSRestaurantObj->openNowFlag);
  }
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
#ifndef DEF_enunciate_ns0_TSRestaurantPhotoObj_M
#define DEF_enunciate_ns0_TSRestaurantPhotoObj_M

/**
 * Reads a TSRestaurantPhotoObj element from XML. The element to be read is "restaurantphoto", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantPhotoObj *xml_read_enunciate_ns0_TSRestaurantPhotoObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantphotoElement(reader);
}

/**
 * Writes a TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantPhotoObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj) {
  return xmlTextWriterWriteNs0RestaurantphotoElementNS(writer, _tSRestaurantPhotoObj, 1);
}

/**
 * Frees a TSRestaurantPhotoObj.
 *
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to free.
 */
void free_enunciate_ns0_TSRestaurantPhotoObj(struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj) {
  freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
  free(_tSRestaurantPhotoObj);
}

/**
 * Reads a TSRestaurantPhotoObj element from XML. The element to be read is "restaurantphoto", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantPhotoObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantPhotoObj *xmlTextReaderReadNs0RestaurantphotoElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantphoto", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantphoto.\n");
#endif
    _tSRestaurantPhotoObj = xmlTextReaderReadNs0TSRestaurantPhotoObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantPhotoObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantphoto failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantphoto failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantPhotoObj;
}

/**
 * Writes a TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantphotoElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj) {
  return xmlTextWriterWriteNs0RestaurantphotoElementNS(writer, _tSRestaurantPhotoObj, 0);
}

/**
 * Writes a TSRestaurantPhotoObj to XML under element name "restaurantphoto".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantphotoElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantphoto", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantphoto. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantPhotoObj for root element {}restaurantphoto...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantPhotoObjType(writer, _tSRestaurantPhotoObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantphoto. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantphoto. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantPhotoObj.
 *
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj whose children are to be free.
 */
static void freeNs0RestaurantphotoElement(struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj) {
  freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
}

/**
 * Reads a TSRestaurantPhotoObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantPhotoObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantPhotoObj *xmlTextReaderReadNs0TSRestaurantPhotoObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantPhotoObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
        free(_tSRestaurantPhotoObj);
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
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->restaurantId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photoId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photoId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photoId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->photoId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "prefix", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}prefix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}prefix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->prefix = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "suffix", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}suffix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}suffix of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->suffix = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "width", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}width of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}width of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->width = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "height", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}height of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->height = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ultimateSourceName", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ultimateSourceName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ultimateSourceName of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->ultimateSourceName = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "ultimateSourceUrl", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}ultimateSourceUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}ultimateSourceUrl of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->ultimateSourceUrl = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photoSource", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photoSource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photoSource of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantPhotoObjType(_tSRestaurantPhotoObj);
          free(_tSRestaurantPhotoObj);
          return NULL;
        }

        _tSRestaurantPhotoObj->photoSource = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantPhotoObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantPhotoObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantPhotoObj;
}

/**
 * Writes a TSRestaurantPhotoObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantPhotoObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantPhotoObj->restaurantId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->restaurantId));
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
  if (_tSRestaurantPhotoObj->photoId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photoId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}photoId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->photoId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}photoId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photoId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->prefix != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "prefix", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}prefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}prefix...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->prefix));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}prefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}prefix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->suffix != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "suffix", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}suffix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}suffix...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->suffix));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}suffix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}suffix. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->width != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "width", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}width. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}width...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->width));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}width. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}width. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->height != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "height", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}height. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}height...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->height));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}height. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}height. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->ultimateSourceName != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ultimateSourceName", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ultimateSourceName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ultimateSourceName...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->ultimateSourceName));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ultimateSourceName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ultimateSourceName. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->ultimateSourceUrl != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "ultimateSourceUrl", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}ultimateSourceUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}ultimateSourceUrl...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->ultimateSourceUrl));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}ultimateSourceUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}ultimateSourceUrl. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantPhotoObj->photoSource != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoSource", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photoSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}photoSource...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantPhotoObj->photoSource));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}photoSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photoSource. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantPhotoObj.
 *
 * @param _tSRestaurantPhotoObj The TSRestaurantPhotoObj to free.
 */
static void freeNs0TSRestaurantPhotoObjType(struct enunciate_ns0_TSRestaurantPhotoObj *_tSRestaurantPhotoObj) {
  int i;
  if (_tSRestaurantPhotoObj->restaurantId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantId of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->restaurantId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantId of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->restaurantId);
  }
  if (_tSRestaurantPhotoObj->photoId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photoId of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->photoId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photoId of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->photoId);
  }
  if (_tSRestaurantPhotoObj->prefix != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor prefix of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->prefix);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor prefix of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->prefix);
  }
  if (_tSRestaurantPhotoObj->suffix != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor suffix of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->suffix);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor suffix of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->suffix);
  }
  if (_tSRestaurantPhotoObj->width != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor width of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->width);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor width of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->width);
  }
  if (_tSRestaurantPhotoObj->height != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor height of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->height);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor height of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->height);
  }
  if (_tSRestaurantPhotoObj->ultimateSourceName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ultimateSourceName of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->ultimateSourceName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ultimateSourceName of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->ultimateSourceName);
  }
  if (_tSRestaurantPhotoObj->ultimateSourceUrl != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor ultimateSourceUrl of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->ultimateSourceUrl);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor ultimateSourceUrl of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->ultimateSourceUrl);
  }
  if (_tSRestaurantPhotoObj->photoSource != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photoSource of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    freeXsStringType(_tSRestaurantPhotoObj->photoSource);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photoSource of type enunciate_ns0_TSRestaurantPhotoObj...\n");
#endif
    free(_tSRestaurantPhotoObj->photoSource);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantPhotoObj_M */
#ifndef DEF_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj_M
#define DEF_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj_M

/**
 * Reads a TSRestaurantQuesionNonTsAssignedObj element from XML. The element to be read is "restaurantquesionnontsassigned", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantQuesionNonTsAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *xml_read_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantquesionnontsassignedElement(reader);
}

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML under element name "restaurantquesionnontsassigned".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj) {
  return xmlTextWriterWriteNs0RestaurantquesionnontsassignedElementNS(writer, _tSRestaurantQuesionNonTsAssignedObj, 1);
}

/**
 * Frees a TSRestaurantQuesionNonTsAssignedObj.
 *
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to free.
 */
void free_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj) {
  freeNs0TSRestaurantQuesionNonTsAssignedObjType(_tSRestaurantQuesionNonTsAssignedObj);
  free(_tSRestaurantQuesionNonTsAssignedObj);
}

/**
 * Reads a TSRestaurantQuesionNonTsAssignedObj element from XML. The element to be read is "restaurantquesionnontsassigned", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantQuesionNonTsAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *xmlTextReaderReadNs0RestaurantquesionnontsassignedElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantquesionnontsassigned", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantquesionnontsassigned.\n");
#endif
    _tSRestaurantQuesionNonTsAssignedObj = xmlTextReaderReadNs0TSRestaurantQuesionNonTsAssignedObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantQuesionNonTsAssignedObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantquesionnontsassigned failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantquesionnontsassigned failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantQuesionNonTsAssignedObj;
}

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML under element name "restaurantquesionnontsassigned".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantquesionnontsassignedElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj) {
  return xmlTextWriterWriteNs0RestaurantquesionnontsassignedElementNS(writer, _tSRestaurantQuesionNonTsAssignedObj, 0);
}

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML under element name "restaurantquesionnontsassigned".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantquesionnontsassignedElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantquesionnontsassigned", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantquesionnontsassigned. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantQuesionNonTsAssignedObj for root element {}restaurantquesionnontsassigned...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantQuesionNonTsAssignedObjType(writer, _tSRestaurantQuesionNonTsAssignedObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantquesionnontsassigned. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantquesionnontsassigned. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantQuesionNonTsAssignedObj.
 *
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj whose children are to be free.
 */
static void freeNs0RestaurantquesionnontsassignedElement(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj) {
  freeNs0TSRestaurantQuesionNonTsAssignedObjType(_tSRestaurantQuesionNonTsAssignedObj);
}

/**
 * Reads a TSRestaurantQuesionNonTsAssignedObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantQuesionNonTsAssignedObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *xmlTextReaderReadNs0TSRestaurantQuesionNonTsAssignedObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantQuesionNonTsAssignedObjType(_tSRestaurantQuesionNonTsAssignedObj);
        free(_tSRestaurantQuesionNonTsAssignedObj);
        return NULL;
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
          freeNs0TSRestaurantQuesionNonTsAssignedObjType(_tSRestaurantQuesionNonTsAssignedObj);
          free(_tSRestaurantQuesionNonTsAssignedObj);
          return NULL;
        }

        _tSRestaurantQuesionNonTsAssignedObj->questionId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "friendsNonTsUserFacebookId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}friendsNonTsUserFacebookId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}friendsNonTsUserFacebookId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantQuesionNonTsAssignedObjType(_tSRestaurantQuesionNonTsAssignedObj);
          free(_tSRestaurantQuesionNonTsAssignedObj);
          return NULL;
        }

        _tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId = realloc(_tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId, (_tSRestaurantQuesionNonTsAssignedObj->_sizeof_friendsNonTsUserFacebookId + 1) * sizeof(xmlChar));
        memcpy(&(_tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId[_tSRestaurantQuesionNonTsAssignedObj->_sizeof_friendsNonTsUserFacebookId++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantQuesionNonTsAssignedObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantQuesionNonTsAssignedObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantQuesionNonTsAssignedObj;
}

/**
 * Writes a TSRestaurantQuesionNonTsAssignedObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantQuesionNonTsAssignedObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantQuesionNonTsAssignedObj->questionId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantQuesionNonTsAssignedObj->questionId));
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
  for (i = 0; i < _tSRestaurantQuesionNonTsAssignedObj->_sizeof_friendsNonTsUserFacebookId; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "friendsNonTsUserFacebookId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}friendsNonTsUserFacebookId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}friendsNonTsUserFacebookId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}friendsNonTsUserFacebookId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}friendsNonTsUserFacebookId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantQuesionNonTsAssignedObj.
 *
 * @param _tSRestaurantQuesionNonTsAssignedObj The TSRestaurantQuesionNonTsAssignedObj to free.
 */
static void freeNs0TSRestaurantQuesionNonTsAssignedObjType(struct enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj *_tSRestaurantQuesionNonTsAssignedObj) {
  int i;
  if (_tSRestaurantQuesionNonTsAssignedObj->questionId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor questionId of type enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj...\n");
#endif
    freeXsStringType(_tSRestaurantQuesionNonTsAssignedObj->questionId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor questionId of type enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj...\n");
#endif
    free(_tSRestaurantQuesionNonTsAssignedObj->questionId);
  }
  if (_tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId != NULL) {
    for (i = 0; i < _tSRestaurantQuesionNonTsAssignedObj->_sizeof_friendsNonTsUserFacebookId; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor friendsNonTsUserFacebookId[%i] of type enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj...\n", i);
#endif
      freeXsStringType(&(_tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor friendsNonTsUserFacebookId of type enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj...\n");
#endif
    free(_tSRestaurantQuesionNonTsAssignedObj->friendsNonTsUserFacebookId);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantQuesionNonTsAssignedObj_M */
#ifndef DEF_enunciate_ns0_TSRestaurantView_M
#define DEF_enunciate_ns0_TSRestaurantView_M

/**
 * Reads a TSRestaurantView element from XML. The element to be read is "restaurantsUserProfileHome", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantView, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantView *xml_read_enunciate_ns0_TSRestaurantView(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantsUserProfileHomeElement(reader);
}

/**
 * Writes a TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantView(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView) {
  return xmlTextWriterWriteNs0RestaurantsUserProfileHomeElementNS(writer, _tSRestaurantView, 1);
}

/**
 * Frees a TSRestaurantView.
 *
 * @param _tSRestaurantView The TSRestaurantView to free.
 */
void free_enunciate_ns0_TSRestaurantView(struct enunciate_ns0_TSRestaurantView *_tSRestaurantView) {
  freeNs0TSRestaurantViewType(_tSRestaurantView);
  free(_tSRestaurantView);
}

/**
 * Reads a TSRestaurantView element from XML. The element to be read is "restaurantsUserProfileHome", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantView, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantView *xmlTextReaderReadNs0RestaurantsUserProfileHomeElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantView *_tSRestaurantView = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantsUserProfileHome", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantsUserProfileHome.\n");
#endif
    _tSRestaurantView = xmlTextReaderReadNs0TSRestaurantViewType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantView == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantsUserProfileHome failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantsUserProfileHome failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantView;
}

/**
 * Writes a TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantsUserProfileHomeElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView) {
  return xmlTextWriterWriteNs0RestaurantsUserProfileHomeElementNS(writer, _tSRestaurantView, 0);
}

/**
 * Writes a TSRestaurantView to XML under element name "restaurantsUserProfileHome".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantsUserProfileHomeElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantsUserProfileHome", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantsUserProfileHome. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantView for root element {}restaurantsUserProfileHome...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantViewType(writer, _tSRestaurantView);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantsUserProfileHome. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantsUserProfileHome. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantView.
 *
 * @param _tSRestaurantView The TSRestaurantView whose children are to be free.
 */
static void freeNs0RestaurantsUserProfileHomeElement(struct enunciate_ns0_TSRestaurantView *_tSRestaurantView) {
  freeNs0TSRestaurantViewType(_tSRestaurantView);
}

/**
 * Reads a TSRestaurantView from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantView, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantView *xmlTextReaderReadNs0TSRestaurantViewType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantView *_tSRestaurantView = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantView));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantViewType(_tSRestaurantView);
        free(_tSRestaurantView);
        return NULL;
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
          freeNs0TSRestaurantViewType(_tSRestaurantView);
          free(_tSRestaurantView);
          return NULL;
        }

        _tSRestaurantView->id = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photo", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photo of type {}TSRestaurantPhotoObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantPhotoObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photo of type {}TSRestaurantPhotoObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantViewType(_tSRestaurantView);
          free(_tSRestaurantView);
          return NULL;
        }

        _tSRestaurantView->photo = ((struct enunciate_ns0_TSRestaurantPhotoObj*)_child_accessor);
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
          freeNs0TSRestaurantViewType(_tSRestaurantView);
          free(_tSRestaurantView);
          return NULL;
        }

        _tSRestaurantView->name = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantView.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantView. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantView;
}

/**
 * Writes a TSRestaurantView to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantView The TSRestaurantView to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantViewType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantView *_tSRestaurantView) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantView->id != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantView->id));
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
  if (_tSRestaurantView->photo != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photo", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photo. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRestaurantPhotoObj for element {}photo...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantPhotoObjType(writer, (_tSRestaurantView->photo));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantPhotoObj for element {}photo. status: %i\n", status);
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
  if (_tSRestaurantView->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantView->name));
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

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantView.
 *
 * @param _tSRestaurantView The TSRestaurantView to free.
 */
static void freeNs0TSRestaurantViewType(struct enunciate_ns0_TSRestaurantView *_tSRestaurantView) {
  int i;
  if (_tSRestaurantView->id != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor id of type enunciate_ns0_TSRestaurantView...\n");
#endif
    freeXsStringType(_tSRestaurantView->id);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor id of type enunciate_ns0_TSRestaurantView...\n");
#endif
    free(_tSRestaurantView->id);
  }
  if (_tSRestaurantView->photo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photo of type enunciate_ns0_TSRestaurantView...\n");
#endif
    freeNs0TSRestaurantPhotoObjType(_tSRestaurantView->photo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photo of type enunciate_ns0_TSRestaurantView...\n");
#endif
    free(_tSRestaurantView->photo);
  }
  if (_tSRestaurantView->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_TSRestaurantView...\n");
#endif
    freeXsStringType(_tSRestaurantView->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_TSRestaurantView...\n");
#endif
    free(_tSRestaurantView->name);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantView_M */
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
        && xmlStrcmp(BAD_CAST "usncORDER", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->usncORDER = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "usncYN", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialAutoPubSettingsObjType(_tSSocialAutoPubSettingsObj);
          free(_tSSocialAutoPubSettingsObj);
          return NULL;
        }

        _tSSocialAutoPubSettingsObj->usncYN = ((xmlChar*)_child_accessor);
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
  if (_tSSocialAutoPubSettingsObj->usncORDER != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncORDER", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}usncORDER. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}usncORDER...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->usncORDER));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}usncORDER. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}usncORDER. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialAutoPubSettingsObj->usncYN != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncYN", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}usncYN. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}usncYN...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialAutoPubSettingsObj->usncYN));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}usncYN. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}usncYN. status: %i\n", status);
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
  if (_tSSocialAutoPubSettingsObj->usncORDER != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor usncORDER of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->usncORDER);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor usncORDER of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->usncORDER);
  }
  if (_tSSocialAutoPubSettingsObj->usncYN != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor usncYN of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialAutoPubSettingsObj->usncYN);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor usncYN of type enunciate_ns0_TSSocialAutoPubSettingsObj...\n");
#endif
    free(_tSSocialAutoPubSettingsObj->usncYN);
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
        && xmlStrcmp(BAD_CAST "usncORDER", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}usncORDER of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->usncORDER = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "usncYN", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}usncYN of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->usncYN = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "auto_publishing", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}auto_publishing of type {}TSSocialAutoPubSettingsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSSocialAutoPubSettingsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}auto_publishing of type {}TSSocialAutoPubSettingsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSocialSettingsObjType(_tSSocialSettingsObj);
          free(_tSSocialSettingsObj);
          return NULL;
        }

        _tSSocialSettingsObj->auto_publishing = realloc(_tSSocialSettingsObj->auto_publishing, (_tSSocialSettingsObj->_sizeof_auto_publishing + 1) * sizeof(struct enunciate_ns0_TSSocialAutoPubSettingsObj));
        memcpy(&(_tSSocialSettingsObj->auto_publishing[_tSSocialSettingsObj->_sizeof_auto_publishing++]), _child_accessor, sizeof(struct enunciate_ns0_TSSocialAutoPubSettingsObj));
        free(_child_accessor);
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
  if (_tSSocialSettingsObj->usncORDER != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncORDER", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}usncORDER. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}usncORDER...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->usncORDER));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}usncORDER. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}usncORDER. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSocialSettingsObj->usncYN != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "usncYN", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}usncYN. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}usncYN...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSocialSettingsObj->usncYN));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}usncYN. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}usncYN. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSSocialSettingsObj->_sizeof_auto_publishing; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "auto_publishing", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}auto_publishing. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSSocialAutoPubSettingsObj for element {}auto_publishing...\n");
#endif
    status = xmlTextWriterWriteNs0TSSocialAutoPubSettingsObjType(writer, &(_tSSocialSettingsObj->auto_publishing[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSSocialAutoPubSettingsObj for element {}auto_publishing. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}auto_publishing. status: %i\n", status);
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
  if (_tSSocialSettingsObj->usncORDER != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor usncORDER of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->usncORDER);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor usncORDER of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->usncORDER);
  }
  if (_tSSocialSettingsObj->usncYN != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor usncYN of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    freeXsStringType(_tSSocialSettingsObj->usncYN);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor usncYN of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->usncYN);
  }
  if (_tSSocialSettingsObj->auto_publishing != NULL) {
    for (i = 0; i < _tSSocialSettingsObj->_sizeof_auto_publishing; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor auto_publishing[%i] of type enunciate_ns0_TSSocialSettingsObj...\n", i);
#endif
      freeNs0TSSocialAutoPubSettingsObjType(&(_tSSocialSettingsObj->auto_publishing[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor auto_publishing of type enunciate_ns0_TSSocialSettingsObj...\n");
#endif
    free(_tSSocialSettingsObj->auto_publishing);
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
#ifndef DEF_enunciate_ns0_TSUserProfileBasicObj_M
#define DEF_enunciate_ns0_TSUserProfileBasicObj_M

/**
 * Reads a TSUserProfileBasicObj element from XML. The element to be read is "userprofilebasic", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSUserProfileBasicObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileBasicObj *xml_read_enunciate_ns0_TSUserProfileBasicObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0UserprofilebasicElement(reader);
}

/**
 * Writes a TSUserProfileBasicObj to XML under element name "userprofilebasic".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSUserProfileBasicObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj) {
  return xmlTextWriterWriteNs0UserprofilebasicElementNS(writer, _tSUserProfileBasicObj, 1);
}

/**
 * Frees a TSUserProfileBasicObj.
 *
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to free.
 */
void free_enunciate_ns0_TSUserProfileBasicObj(struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj) {
  freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
  free(_tSUserProfileBasicObj);
}

/**
 * Reads a TSUserProfileBasicObj element from XML. The element to be read is "userprofilebasic", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSUserProfileBasicObj, or NULL in case of error.
 */
struct enunciate_ns0_TSUserProfileBasicObj *xmlTextReaderReadNs0UserprofilebasicElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "userprofilebasic", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}userprofilebasic.\n");
#endif
    _tSUserProfileBasicObj = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSUserProfileBasicObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}userprofilebasic failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}userprofilebasic failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSUserProfileBasicObj;
}

/**
 * Writes a TSUserProfileBasicObj to XML under element name "userprofilebasic".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserprofilebasicElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj) {
  return xmlTextWriterWriteNs0UserprofilebasicElementNS(writer, _tSUserProfileBasicObj, 0);
}

/**
 * Writes a TSUserProfileBasicObj to XML under element name "userprofilebasic".
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0UserprofilebasicElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "userprofilebasic", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}userprofilebasic. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSUserProfileBasicObj for root element {}userprofilebasic...\n");
#endif
  status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, _tSUserProfileBasicObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}userprofilebasic. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}userprofilebasic. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSUserProfileBasicObj.
 *
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj whose children are to be free.
 */
static void freeNs0UserprofilebasicElement(struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj) {
  freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
}

/**
 * Reads a TSUserProfileBasicObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSUserProfileBasicObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSUserProfileBasicObj *xmlTextReaderReadNs0TSUserProfileBasicObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj = calloc(1, sizeof(struct enunciate_ns0_TSUserProfileBasicObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
        free(_tSUserProfileBasicObj);
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
          freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
          free(_tSUserProfileBasicObj);
          return NULL;
        }

        _tSUserProfileBasicObj->userId = ((xmlChar*)_child_accessor);
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
          freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
          free(_tSUserProfileBasicObj);
          return NULL;
        }

        _tSUserProfileBasicObj->name = ((xmlChar*)_child_accessor);
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
          freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
          free(_tSUserProfileBasicObj);
          return NULL;
        }

        _tSUserProfileBasicObj->photo = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "photoDetails", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}photoDetails of type {}TSPhotoObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSPhotoObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}photoDetails of type {}TSPhotoObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileBasicObjType(_tSUserProfileBasicObj);
          free(_tSUserProfileBasicObj);
          return NULL;
        }

        _tSUserProfileBasicObj->photoDetails = ((struct enunciate_ns0_TSPhotoObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSUserProfileBasicObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSUserProfileBasicObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSUserProfileBasicObj;
}

/**
 * Writes a TSUserProfileBasicObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSUserProfileBasicObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSUserProfileBasicObj->userId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileBasicObj->userId));
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
  if (_tSUserProfileBasicObj->name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileBasicObj->name));
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
  if (_tSUserProfileBasicObj->photo != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSUserProfileBasicObj->photo));
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
  if (_tSUserProfileBasicObj->photoDetails != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "photoDetails", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}photoDetails. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSPhotoObj for element {}photoDetails...\n");
#endif
    status = xmlTextWriterWriteNs0TSPhotoObjType(writer, (_tSUserProfileBasicObj->photoDetails));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSPhotoObj for element {}photoDetails. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}photoDetails. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSUserProfileBasicObj.
 *
 * @param _tSUserProfileBasicObj The TSUserProfileBasicObj to free.
 */
static void freeNs0TSUserProfileBasicObjType(struct enunciate_ns0_TSUserProfileBasicObj *_tSUserProfileBasicObj) {
  int i;
  if (_tSUserProfileBasicObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    freeXsStringType(_tSUserProfileBasicObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    free(_tSUserProfileBasicObj->userId);
  }
  if (_tSUserProfileBasicObj->name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor name of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    freeXsStringType(_tSUserProfileBasicObj->name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor name of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    free(_tSUserProfileBasicObj->name);
  }
  if (_tSUserProfileBasicObj->photo != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photo of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    freeXsStringType(_tSUserProfileBasicObj->photo);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photo of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    free(_tSUserProfileBasicObj->photo);
  }
  if (_tSUserProfileBasicObj->photoDetails != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor photoDetails of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    freeNs0TSPhotoObjType(_tSUserProfileBasicObj->photoDetails);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor photoDetails of type enunciate_ns0_TSUserProfileBasicObj...\n");
#endif
    free(_tSUserProfileBasicObj->photoDetails);
  }
}
#endif /* DEF_enunciate_ns0_TSUserProfileBasicObj_M */
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
        && xmlStrcmp(BAD_CAST "restaurantList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantList of type {}TSRestaurantView.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantViewType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantList of type {}TSRestaurantView.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileObjType(_tSUserProfileObj);
          free(_tSUserProfileObj);
          return NULL;
        }

        _tSUserProfileObj->restaurantList = realloc(_tSUserProfileObj->restaurantList, (_tSUserProfileObj->_sizeof_restaurantList + 1) * sizeof(struct enunciate_ns0_TSRestaurantView));
        memcpy(&(_tSUserProfileObj->restaurantList[_tSUserProfileObj->_sizeof_restaurantList++]), _child_accessor, sizeof(struct enunciate_ns0_TSRestaurantView));
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
  for (i = 0; i < _tSUserProfileObj->_sizeof_restaurantList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRestaurantView for element {}restaurantList...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantViewType(writer, &(_tSUserProfileObj->restaurantList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantView for element {}restaurantList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantList. status: %i\n", status);
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
  if (_tSUserProfileObj->restaurantList != NULL) {
    for (i = 0; i < _tSUserProfileObj->_sizeof_restaurantList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor restaurantList[%i] of type enunciate_ns0_TSUserProfileObj...\n", i);
#endif
      freeNs0TSRestaurantViewType(&(_tSUserProfileObj->restaurantList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantList of type enunciate_ns0_TSUserProfileObj...\n");
#endif
    free(_tSUserProfileObj->restaurantList);
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
        printf("Attempting to read choice {}restaurantCity of type {}TSCityObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSCityObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantCity of type {}TSCityObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSUserProfileRestaurantsObjType(_tSUserProfileRestaurantsObj);
          free(_tSUserProfileRestaurantsObj);
          return NULL;
        }

        _tSUserProfileRestaurantsObj->restaurantCity = ((struct enunciate_ns0_TSCityObj*)_child_accessor);
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
    printf("writing type {}TSCityObj for element {}restaurantCity...\n");
#endif
    status = xmlTextWriterWriteNs0TSCityObjType(writer, (_tSUserProfileRestaurantsObj->restaurantCity));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSCityObj for element {}restaurantCity. status: %i\n", status);
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
    freeNs0TSCityObjType(_tSUserProfileRestaurantsObj->restaurantCity);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantCity of type enunciate_ns0_TSUserProfileRestaurantsObj...\n");
#endif
    free(_tSUserProfileRestaurantsObj->restaurantCity);
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
#ifndef DEF_enunciate_ns0_TSRecoRequestNonAssignedObj_M
#define DEF_enunciate_ns0_TSRecoRequestNonAssignedObj_M

/**
 * Reads a TSRecoRequestNonAssignedObj element from XML. The element to be read is "recorequestnonassigned", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestNonAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestNonAssignedObj *xml_read_enunciate_ns0_TSRecoRequestNonAssignedObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RecorequestnonassignedElement(reader);
}

/**
 * Writes a TSRecoRequestNonAssignedObj to XML under element name "recorequestnonassigned".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecoRequestNonAssignedObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj) {
  return xmlTextWriterWriteNs0RecorequestnonassignedElementNS(writer, _tSRecoRequestNonAssignedObj, 1);
}

/**
 * Frees a TSRecoRequestNonAssignedObj.
 *
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to free.
 */
void free_enunciate_ns0_TSRecoRequestNonAssignedObj(struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj) {
  freeNs0TSRecoRequestNonAssignedObjType(_tSRecoRequestNonAssignedObj);
  free(_tSRecoRequestNonAssignedObj);
}

/**
 * Reads a TSRecoRequestNonAssignedObj element from XML. The element to be read is "recorequestnonassigned", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestNonAssignedObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestNonAssignedObj *xmlTextReaderReadNs0RecorequestnonassignedElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recorequestnonassigned", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recorequestnonassigned.\n");
#endif
    _tSRecoRequestNonAssignedObj = xmlTextReaderReadNs0TSRecoRequestNonAssignedObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecoRequestNonAssignedObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recorequestnonassigned failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recorequestnonassigned failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecoRequestNonAssignedObj;
}

/**
 * Writes a TSRecoRequestNonAssignedObj to XML under element name "recorequestnonassigned".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecorequestnonassignedElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj) {
  return xmlTextWriterWriteNs0RecorequestnonassignedElementNS(writer, _tSRecoRequestNonAssignedObj, 0);
}

/**
 * Writes a TSRecoRequestNonAssignedObj to XML under element name "recorequestnonassigned".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecorequestnonassignedElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recorequestnonassigned", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recorequestnonassigned. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecoRequestNonAssignedObj for root element {}recorequestnonassigned...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecoRequestNonAssignedObjType(writer, _tSRecoRequestNonAssignedObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recorequestnonassigned. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recorequestnonassigned. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecoRequestNonAssignedObj.
 *
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj whose children are to be free.
 */
static void freeNs0RecorequestnonassignedElement(struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj) {
  freeNs0TSRecoRequestNonAssignedObjType(_tSRecoRequestNonAssignedObj);
}

/**
 * Reads a TSRecoRequestNonAssignedObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecoRequestNonAssignedObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecoRequestNonAssignedObj *xmlTextReaderReadNs0TSRecoRequestNonAssignedObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj = calloc(1, sizeof(struct enunciate_ns0_TSRecoRequestNonAssignedObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecoRequestNonAssignedObjType(_tSRecoRequestNonAssignedObj);
        free(_tSRecoRequestNonAssignedObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recoRequestId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recoRequestId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recoRequestId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecoRequestNonAssignedObjType(_tSRecoRequestNonAssignedObj);
          free(_tSRecoRequestNonAssignedObj);
          return NULL;
        }

        _tSRecoRequestNonAssignedObj->recoRequestId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "nonassignedFacebookIdList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}nonassignedFacebookIdList of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}nonassignedFacebookIdList of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecoRequestNonAssignedObjType(_tSRecoRequestNonAssignedObj);
          free(_tSRecoRequestNonAssignedObj);
          return NULL;
        }

        _tSRecoRequestNonAssignedObj->nonassignedFacebookIdList = realloc(_tSRecoRequestNonAssignedObj->nonassignedFacebookIdList, (_tSRecoRequestNonAssignedObj->_sizeof_nonassignedFacebookIdList + 1) * sizeof(xmlChar));
        memcpy(&(_tSRecoRequestNonAssignedObj->nonassignedFacebookIdList[_tSRecoRequestNonAssignedObj->_sizeof_nonassignedFacebookIdList++]), _child_accessor, sizeof(xmlChar));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecoRequestNonAssignedObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecoRequestNonAssignedObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecoRequestNonAssignedObj;
}

/**
 * Writes a TSRecoRequestNonAssignedObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecoRequestNonAssignedObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecoRequestNonAssignedObj->recoRequestId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recoRequestId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recoRequestId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recoRequestId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecoRequestNonAssignedObj->recoRequestId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recoRequestId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recoRequestId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSRecoRequestNonAssignedObj->_sizeof_nonassignedFacebookIdList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "nonassignedFacebookIdList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}nonassignedFacebookIdList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}nonassignedFacebookIdList...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, &(_tSRecoRequestNonAssignedObj->nonassignedFacebookIdList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}nonassignedFacebookIdList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}nonassignedFacebookIdList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecoRequestNonAssignedObj.
 *
 * @param _tSRecoRequestNonAssignedObj The TSRecoRequestNonAssignedObj to free.
 */
static void freeNs0TSRecoRequestNonAssignedObjType(struct enunciate_ns0_TSRecoRequestNonAssignedObj *_tSRecoRequestNonAssignedObj) {
  int i;
  if (_tSRecoRequestNonAssignedObj->recoRequestId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recoRequestId of type enunciate_ns0_TSRecoRequestNonAssignedObj...\n");
#endif
    freeXsStringType(_tSRecoRequestNonAssignedObj->recoRequestId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recoRequestId of type enunciate_ns0_TSRecoRequestNonAssignedObj...\n");
#endif
    free(_tSRecoRequestNonAssignedObj->recoRequestId);
  }
  if (_tSRecoRequestNonAssignedObj->nonassignedFacebookIdList != NULL) {
    for (i = 0; i < _tSRecoRequestNonAssignedObj->_sizeof_nonassignedFacebookIdList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor nonassignedFacebookIdList[%i] of type enunciate_ns0_TSRecoRequestNonAssignedObj...\n", i);
#endif
      freeXsStringType(&(_tSRecoRequestNonAssignedObj->nonassignedFacebookIdList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor nonassignedFacebookIdList of type enunciate_ns0_TSRecoRequestNonAssignedObj...\n");
#endif
    free(_tSRecoRequestNonAssignedObj->nonassignedFacebookIdList);
  }
}
#endif /* DEF_enunciate_ns0_TSRecoRequestNonAssignedObj_M */
#ifndef DEF_enunciate_ns0_TSRecoRequestObj_M
#define DEF_enunciate_ns0_TSRecoRequestObj_M

/**
 * Reads a TSRecoRequestObj element from XML. The element to be read is "recorequest", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestObj *xml_read_enunciate_ns0_TSRecoRequestObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RecorequestElement(reader);
}

/**
 * Writes a TSRecoRequestObj to XML under element name "recorequest".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecoRequestObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj) {
  return xmlTextWriterWriteNs0RecorequestElementNS(writer, _tSRecoRequestObj, 1);
}

/**
 * Frees a TSRecoRequestObj.
 *
 * @param _tSRecoRequestObj The TSRecoRequestObj to free.
 */
void free_enunciate_ns0_TSRecoRequestObj(struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj) {
  freeNs0TSRecoRequestObjType(_tSRecoRequestObj);
  free(_tSRecoRequestObj);
}

/**
 * Reads a TSRecoRequestObj element from XML. The element to be read is "recorequest", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecoRequestObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecoRequestObj *xmlTextReaderReadNs0RecorequestElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recorequest", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recorequest.\n");
#endif
    _tSRecoRequestObj = xmlTextReaderReadNs0TSRecoRequestObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecoRequestObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recorequest failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recorequest failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecoRequestObj;
}

/**
 * Writes a TSRecoRequestObj to XML under element name "recorequest".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecorequestElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj) {
  return xmlTextWriterWriteNs0RecorequestElementNS(writer, _tSRecoRequestObj, 0);
}

/**
 * Writes a TSRecoRequestObj to XML under element name "recorequest".
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecorequestElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recorequest", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recorequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecoRequestObj for root element {}recorequest...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecoRequestObjType(writer, _tSRecoRequestObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recorequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recorequest. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecoRequestObj.
 *
 * @param _tSRecoRequestObj The TSRecoRequestObj whose children are to be free.
 */
static void freeNs0RecorequestElement(struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj) {
  freeNs0TSRecoRequestObjType(_tSRecoRequestObj);
}

/**
 * Reads a TSRecoRequestObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecoRequestObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecoRequestObj *xmlTextReaderReadNs0TSRecoRequestObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj = calloc(1, sizeof(struct enunciate_ns0_TSRecoRequestObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecoRequestObjType(_tSRecoRequestObj);
        free(_tSRecoRequestObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommendeeUser", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecoRequestObjType(_tSRecoRequestObj);
          free(_tSRecoRequestObj);
          return NULL;
        }

        _tSRecoRequestObj->recommendeeUser = ((struct enunciate_ns0_TSUserProfileBasicObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recorequestText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recorequestText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recorequestText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecoRequestObjType(_tSRecoRequestObj);
          free(_tSRecoRequestObj);
          return NULL;
        }

        _tSRecoRequestObj->recorequestText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommendeeUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommendeeUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommendeeUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecoRequestObjType(_tSRecoRequestObj);
          free(_tSRecoRequestObj);
          return NULL;
        }

        _tSRecoRequestObj->recommendeeUserFolloweeFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecoRequestObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecoRequestObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecoRequestObj;
}

/**
 * Writes a TSRecoRequestObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecoRequestObj The TSRecoRequestObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecoRequestObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecoRequestObj->recommendeeUser != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUser", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSUserProfileBasicObj for element {}recommendeeUser...\n");
#endif
    status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, (_tSRecoRequestObj->recommendeeUser));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSUserProfileBasicObj for element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecoRequestObj->recorequestText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recorequestText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recorequestText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recorequestText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecoRequestObj->recorequestText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recorequestText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recorequestText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecoRequestObj->recommendeeUserFolloweeFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUserFolloweeFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommendeeUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recommendeeUserFolloweeFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecoRequestObj->recommendeeUserFolloweeFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recommendeeUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommendeeUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecoRequestObj.
 *
 * @param _tSRecoRequestObj The TSRecoRequestObj to free.
 */
static void freeNs0TSRecoRequestObjType(struct enunciate_ns0_TSRecoRequestObj *_tSRecoRequestObj) {
  int i;
  if (_tSRecoRequestObj->recommendeeUser != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recommendeeUser of type enunciate_ns0_TSRecoRequestObj...\n");
#endif
    freeNs0TSUserProfileBasicObjType(_tSRecoRequestObj->recommendeeUser);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommendeeUser of type enunciate_ns0_TSRecoRequestObj...\n");
#endif
    free(_tSRecoRequestObj->recommendeeUser);
  }
  if (_tSRecoRequestObj->recorequestText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recorequestText of type enunciate_ns0_TSRecoRequestObj...\n");
#endif
    freeXsStringType(_tSRecoRequestObj->recorequestText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recorequestText of type enunciate_ns0_TSRecoRequestObj...\n");
#endif
    free(_tSRecoRequestObj->recorequestText);
  }
  if (_tSRecoRequestObj->recommendeeUserFolloweeFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recommendeeUserFolloweeFlag of type enunciate_ns0_TSRecoRequestObj...\n");
#endif
    freeXsStringType(_tSRecoRequestObj->recommendeeUserFolloweeFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommendeeUserFolloweeFlag of type enunciate_ns0_TSRecoRequestObj...\n");
#endif
    free(_tSRecoRequestObj->recommendeeUserFolloweeFlag);
  }
}
#endif /* DEF_enunciate_ns0_TSRecoRequestObj_M */
#ifndef DEF_enunciate_ns0_TSRecommendationsFollowupObj_M
#define DEF_enunciate_ns0_TSRecommendationsFollowupObj_M

/**
 * Reads a TSRecommendationsFollowupObj element from XML. The element to be read is "recosfollowup", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsFollowupObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsFollowupObj *xml_read_enunciate_ns0_TSRecommendationsFollowupObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RecosfollowupElement(reader);
}

/**
 * Writes a TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecommendationsFollowupObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj) {
  return xmlTextWriterWriteNs0RecosfollowupElementNS(writer, _tSRecommendationsFollowupObj, 1);
}

/**
 * Frees a TSRecommendationsFollowupObj.
 *
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to free.
 */
void free_enunciate_ns0_TSRecommendationsFollowupObj(struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj) {
  freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
  free(_tSRecommendationsFollowupObj);
}

/**
 * Reads a TSRecommendationsFollowupObj element from XML. The element to be read is "recosfollowup", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsFollowupObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsFollowupObj *xmlTextReaderReadNs0RecosfollowupElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recosfollowup", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recosfollowup.\n");
#endif
    _tSRecommendationsFollowupObj = xmlTextReaderReadNs0TSRecommendationsFollowupObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecommendationsFollowupObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recosfollowup failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recosfollowup failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecommendationsFollowupObj;
}

/**
 * Writes a TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecosfollowupElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj) {
  return xmlTextWriterWriteNs0RecosfollowupElementNS(writer, _tSRecommendationsFollowupObj, 0);
}

/**
 * Writes a TSRecommendationsFollowupObj to XML under element name "recosfollowup".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecosfollowupElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recosfollowup", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recosfollowup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecommendationsFollowupObj for root element {}recosfollowup...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecommendationsFollowupObjType(writer, _tSRecommendationsFollowupObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recosfollowup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recosfollowup. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecommendationsFollowupObj.
 *
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj whose children are to be free.
 */
static void freeNs0RecosfollowupElement(struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj) {
  freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
}

/**
 * Reads a TSRecommendationsFollowupObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecommendationsFollowupObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendationsFollowupObj *xmlTextReaderReadNs0TSRecommendationsFollowupObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj = calloc(1, sizeof(struct enunciate_ns0_TSRecommendationsFollowupObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
        free(_tSRecommendationsFollowupObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "questionUse", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}questionUse of type {}TSUserProfileBasicObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}questionUse of type {}TSUserProfileBasicObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
          free(_tSRecommendationsFollowupObj);
          return NULL;
        }

        _tSRecommendationsFollowupObj->questionUse = ((struct enunciate_ns0_TSUserProfileBasicObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "questionText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}questionText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}questionText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
          free(_tSRecommendationsFollowupObj);
          return NULL;
        }

        _tSRecommendationsFollowupObj->questionText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "questionUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}questionUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}questionUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
          free(_tSRecommendationsFollowupObj);
          return NULL;
        }

        _tSRecommendationsFollowupObj->questionUserFolloweeFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "questionRestaurant", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}questionRestaurant of type {}TSRestaurantObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}questionRestaurant of type {}TSRestaurantObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsFollowupObjType(_tSRecommendationsFollowupObj);
          free(_tSRecommendationsFollowupObj);
          return NULL;
        }

        _tSRecommendationsFollowupObj->questionRestaurant = ((struct enunciate_ns0_TSRestaurantObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecommendationsFollowupObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecommendationsFollowupObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecommendationsFollowupObj;
}

/**
 * Writes a TSRecommendationsFollowupObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecommendationsFollowupObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecommendationsFollowupObj->questionUse != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionUse", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}questionUse. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSUserProfileBasicObj for element {}questionUse...\n");
#endif
    status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, (_tSRecommendationsFollowupObj->questionUse));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSUserProfileBasicObj for element {}questionUse. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}questionUse. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendationsFollowupObj->questionText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}questionText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}questionText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendationsFollowupObj->questionText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}questionText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}questionText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendationsFollowupObj->questionUserFolloweeFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionUserFolloweeFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}questionUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}questionUserFolloweeFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendationsFollowupObj->questionUserFolloweeFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}questionUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}questionUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendationsFollowupObj->questionRestaurant != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "questionRestaurant", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}questionRestaurant. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRestaurantObj for element {}questionRestaurant...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantObjType(writer, (_tSRecommendationsFollowupObj->questionRestaurant));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantObj for element {}questionRestaurant. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}questionRestaurant. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecommendationsFollowupObj.
 *
 * @param _tSRecommendationsFollowupObj The TSRecommendationsFollowupObj to free.
 */
static void freeNs0TSRecommendationsFollowupObjType(struct enunciate_ns0_TSRecommendationsFollowupObj *_tSRecommendationsFollowupObj) {
  int i;
  if (_tSRecommendationsFollowupObj->questionUse != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor questionUse of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    freeNs0TSUserProfileBasicObjType(_tSRecommendationsFollowupObj->questionUse);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor questionUse of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    free(_tSRecommendationsFollowupObj->questionUse);
  }
  if (_tSRecommendationsFollowupObj->questionText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor questionText of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    freeXsStringType(_tSRecommendationsFollowupObj->questionText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor questionText of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    free(_tSRecommendationsFollowupObj->questionText);
  }
  if (_tSRecommendationsFollowupObj->questionUserFolloweeFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor questionUserFolloweeFlag of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    freeXsStringType(_tSRecommendationsFollowupObj->questionUserFolloweeFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor questionUserFolloweeFlag of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    free(_tSRecommendationsFollowupObj->questionUserFolloweeFlag);
  }
  if (_tSRecommendationsFollowupObj->questionRestaurant != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor questionRestaurant of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    freeNs0TSRestaurantObjType(_tSRecommendationsFollowupObj->questionRestaurant);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor questionRestaurant of type enunciate_ns0_TSRecommendationsFollowupObj...\n");
#endif
    free(_tSRecommendationsFollowupObj->questionRestaurant);
  }
}
#endif /* DEF_enunciate_ns0_TSRecommendationsFollowupObj_M */
#ifndef DEF_enunciate_ns0_TSRecommendationsForYouObj_M
#define DEF_enunciate_ns0_TSRecommendationsForYouObj_M

/**
 * Reads a TSRecommendationsForYouObj element from XML. The element to be read is "recos4u", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsForYouObj *xml_read_enunciate_ns0_TSRecommendationsForYouObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Recos4uElement(reader);
}

/**
 * Writes a TSRecommendationsForYouObj to XML under element name "recos4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecommendationsForYouObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj) {
  return xmlTextWriterWriteNs0Recos4uElementNS(writer, _tSRecommendationsForYouObj, 1);
}

/**
 * Frees a TSRecommendationsForYouObj.
 *
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to free.
 */
void free_enunciate_ns0_TSRecommendationsForYouObj(struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj) {
  freeNs0TSRecommendationsForYouObjType(_tSRecommendationsForYouObj);
  free(_tSRecommendationsForYouObj);
}

/**
 * Reads a TSRecommendationsForYouObj element from XML. The element to be read is "recos4u", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsForYouObj *xmlTextReaderReadNs0Recos4uElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recos4u", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recos4u.\n");
#endif
    _tSRecommendationsForYouObj = xmlTextReaderReadNs0TSRecommendationsForYouObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecommendationsForYouObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recos4u failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recos4u failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecommendationsForYouObj;
}

/**
 * Writes a TSRecommendationsForYouObj to XML under element name "recos4u".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Recos4uElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj) {
  return xmlTextWriterWriteNs0Recos4uElementNS(writer, _tSRecommendationsForYouObj, 0);
}

/**
 * Writes a TSRecommendationsForYouObj to XML under element name "recos4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Recos4uElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recos4u", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recos4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecommendationsForYouObj for root element {}recos4u...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecommendationsForYouObjType(writer, _tSRecommendationsForYouObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recos4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recos4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecommendationsForYouObj.
 *
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj whose children are to be free.
 */
static void freeNs0Recos4uElement(struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj) {
  freeNs0TSRecommendationsForYouObjType(_tSRecommendationsForYouObj);
}

/**
 * Reads a TSRecommendationsForYouObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecommendationsForYouObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendationsForYouObj *xmlTextReaderReadNs0TSRecommendationsForYouObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj = calloc(1, sizeof(struct enunciate_ns0_TSRecommendationsForYouObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecommendationsForYouObjType(_tSRecommendationsForYouObj);
        free(_tSRecommendationsForYouObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recorequestText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recorequestText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recorequestText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsForYouObjType(_tSRecommendationsForYouObj);
          free(_tSRecommendationsForYouObj);
          return NULL;
        }

        _tSRecommendationsForYouObj->recorequestText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "restaurantsForYouObjList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}restaurantsForYouObjList of type {}TSRestaurantsForYouObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantsForYouObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}restaurantsForYouObjList of type {}TSRestaurantsForYouObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsForYouObjType(_tSRecommendationsForYouObj);
          free(_tSRecommendationsForYouObj);
          return NULL;
        }

        _tSRecommendationsForYouObj->restaurantsForYouObjList = realloc(_tSRecommendationsForYouObj->restaurantsForYouObjList, (_tSRecommendationsForYouObj->_sizeof_restaurantsForYouObjList + 1) * sizeof(struct enunciate_ns0_TSRestaurantsForYouObj));
        memcpy(&(_tSRecommendationsForYouObj->restaurantsForYouObjList[_tSRecommendationsForYouObj->_sizeof_restaurantsForYouObjList++]), _child_accessor, sizeof(struct enunciate_ns0_TSRestaurantsForYouObj));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecommendationsForYouObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecommendationsForYouObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecommendationsForYouObj;
}

/**
 * Writes a TSRecommendationsForYouObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecommendationsForYouObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecommendationsForYouObj->recorequestText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recorequestText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recorequestText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recorequestText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendationsForYouObj->recorequestText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recorequestText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recorequestText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  for (i = 0; i < _tSRecommendationsForYouObj->_sizeof_restaurantsForYouObjList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantsForYouObjList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}restaurantsForYouObjList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRestaurantsForYouObj for element {}restaurantsForYouObjList...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantsForYouObjType(writer, &(_tSRecommendationsForYouObj->restaurantsForYouObjList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantsForYouObj for element {}restaurantsForYouObjList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}restaurantsForYouObjList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecommendationsForYouObj.
 *
 * @param _tSRecommendationsForYouObj The TSRecommendationsForYouObj to free.
 */
static void freeNs0TSRecommendationsForYouObjType(struct enunciate_ns0_TSRecommendationsForYouObj *_tSRecommendationsForYouObj) {
  int i;
  if (_tSRecommendationsForYouObj->recorequestText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recorequestText of type enunciate_ns0_TSRecommendationsForYouObj...\n");
#endif
    freeXsStringType(_tSRecommendationsForYouObj->recorequestText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recorequestText of type enunciate_ns0_TSRecommendationsForYouObj...\n");
#endif
    free(_tSRecommendationsForYouObj->recorequestText);
  }
  if (_tSRecommendationsForYouObj->restaurantsForYouObjList != NULL) {
    for (i = 0; i < _tSRecommendationsForYouObj->_sizeof_restaurantsForYouObjList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor restaurantsForYouObjList[%i] of type enunciate_ns0_TSRecommendationsForYouObj...\n", i);
#endif
      freeNs0TSRestaurantsForYouObjType(&(_tSRecommendationsForYouObj->restaurantsForYouObjList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantsForYouObjList of type enunciate_ns0_TSRecommendationsForYouObj...\n");
#endif
    free(_tSRecommendationsForYouObj->restaurantsForYouObjList);
  }
}
#endif /* DEF_enunciate_ns0_TSRecommendationsForYouObj_M */
#ifndef DEF_enunciate_ns0_TSRecommendationsObj_M
#define DEF_enunciate_ns0_TSRecommendationsObj_M

/**
 * Reads a TSRecommendationsObj element from XML. The element to be read is "recommendations4u", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsObj *xml_read_enunciate_ns0_TSRecommendationsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Recommendations4uElement(reader);
}

/**
 * Writes a TSRecommendationsObj to XML under element name "recommendations4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecommendationsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj) {
  return xmlTextWriterWriteNs0Recommendations4uElementNS(writer, _tSRecommendationsObj, 1);
}

/**
 * Frees a TSRecommendationsObj.
 *
 * @param _tSRecommendationsObj The TSRecommendationsObj to free.
 */
void free_enunciate_ns0_TSRecommendationsObj(struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj) {
  freeNs0TSRecommendationsObjType(_tSRecommendationsObj);
  free(_tSRecommendationsObj);
}

/**
 * Reads a TSRecommendationsObj element from XML. The element to be read is "recommendations4u", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendationsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendationsObj *xmlTextReaderReadNs0Recommendations4uElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recommendations4u", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recommendations4u.\n");
#endif
    _tSRecommendationsObj = xmlTextReaderReadNs0TSRecommendationsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecommendationsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recommendations4u failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recommendations4u failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecommendationsObj;
}

/**
 * Writes a TSRecommendationsObj to XML under element name "recommendations4u".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Recommendations4uElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj) {
  return xmlTextWriterWriteNs0Recommendations4uElementNS(writer, _tSRecommendationsObj, 0);
}

/**
 * Writes a TSRecommendationsObj to XML under element name "recommendations4u".
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Recommendations4uElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendations4u", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recommendations4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecommendationsObj for root element {}recommendations4u...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecommendationsObjType(writer, _tSRecommendationsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recommendations4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recommendations4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecommendationsObj.
 *
 * @param _tSRecommendationsObj The TSRecommendationsObj whose children are to be free.
 */
static void freeNs0Recommendations4uElement(struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj) {
  freeNs0TSRecommendationsObjType(_tSRecommendationsObj);
}

/**
 * Reads a TSRecommendationsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecommendationsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendationsObj *xmlTextReaderReadNs0TSRecommendationsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj = calloc(1, sizeof(struct enunciate_ns0_TSRecommendationsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecommendationsObjType(_tSRecommendationsObj);
        free(_tSRecommendationsObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "replyText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}replyText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}replyText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsObjType(_tSRecommendationsObj);
          free(_tSRecommendationsObj);
          return NULL;
        }

        _tSRecommendationsObj->replyText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommenderUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommenderUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommenderUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsObjType(_tSRecommendationsObj);
          free(_tSRecommendationsObj);
          return NULL;
        }

        _tSRecommendationsObj->recommenderUserFolloweeFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommendeeUser", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendationsObjType(_tSRecommendationsObj);
          free(_tSRecommendationsObj);
          return NULL;
        }

        _tSRecommendationsObj->recommendeeUser = ((struct enunciate_ns0_TSUserProfileBasicObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecommendationsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecommendationsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecommendationsObj;
}

/**
 * Writes a TSRecommendationsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendationsObj The TSRecommendationsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecommendationsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecommendationsObj->replyText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "replyText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}replyText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}replyText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendationsObj->replyText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}replyText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}replyText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendationsObj->recommenderUserFolloweeFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommenderUserFolloweeFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommenderUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}recommenderUserFolloweeFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendationsObj->recommenderUserFolloweeFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}recommenderUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommenderUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendationsObj->recommendeeUser != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUser", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSUserProfileBasicObj for element {}recommendeeUser...\n");
#endif
    status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, (_tSRecommendationsObj->recommendeeUser));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSUserProfileBasicObj for element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecommendationsObj.
 *
 * @param _tSRecommendationsObj The TSRecommendationsObj to free.
 */
static void freeNs0TSRecommendationsObjType(struct enunciate_ns0_TSRecommendationsObj *_tSRecommendationsObj) {
  int i;
  if (_tSRecommendationsObj->replyText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor replyText of type enunciate_ns0_TSRecommendationsObj...\n");
#endif
    freeXsStringType(_tSRecommendationsObj->replyText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor replyText of type enunciate_ns0_TSRecommendationsObj...\n");
#endif
    free(_tSRecommendationsObj->replyText);
  }
  if (_tSRecommendationsObj->recommenderUserFolloweeFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recommenderUserFolloweeFlag of type enunciate_ns0_TSRecommendationsObj...\n");
#endif
    freeXsStringType(_tSRecommendationsObj->recommenderUserFolloweeFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommenderUserFolloweeFlag of type enunciate_ns0_TSRecommendationsObj...\n");
#endif
    free(_tSRecommendationsObj->recommenderUserFolloweeFlag);
  }
  if (_tSRecommendationsObj->recommendeeUser != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recommendeeUser of type enunciate_ns0_TSRecommendationsObj...\n");
#endif
    freeNs0TSUserProfileBasicObjType(_tSRecommendationsObj->recommendeeUser);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommendeeUser of type enunciate_ns0_TSRecommendationsObj...\n");
#endif
    free(_tSRecommendationsObj->recommendeeUser);
  }
}
#endif /* DEF_enunciate_ns0_TSRecommendationsObj_M */
#ifndef DEF_enunciate_ns0_TSRecommendeeUserObj_M
#define DEF_enunciate_ns0_TSRecommendeeUserObj_M

/**
 * Reads a TSRecommendeeUserObj element from XML. The element to be read is "recommendeeusers", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRecommendeeUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendeeUserObj *xml_read_enunciate_ns0_TSRecommendeeUserObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RecommendeeusersElement(reader);
}

/**
 * Writes a TSRecommendeeUserObj to XML under element name "recommendeeusers".
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRecommendeeUserObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj) {
  return xmlTextWriterWriteNs0RecommendeeusersElementNS(writer, _tSRecommendeeUserObj, 1);
}

/**
 * Frees a TSRecommendeeUserObj.
 *
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to free.
 */
void free_enunciate_ns0_TSRecommendeeUserObj(struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj) {
  freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
  free(_tSRecommendeeUserObj);
}

/**
 * Reads a TSRecommendeeUserObj element from XML. The element to be read is "recommendeeusers", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRecommendeeUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRecommendeeUserObj *xmlTextReaderReadNs0RecommendeeusersElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "recommendeeusers", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}recommendeeusers.\n");
#endif
    _tSRecommendeeUserObj = xmlTextReaderReadNs0TSRecommendeeUserObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRecommendeeUserObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}recommendeeusers failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}recommendeeusers failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRecommendeeUserObj;
}

/**
 * Writes a TSRecommendeeUserObj to XML under element name "recommendeeusers".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecommendeeusersElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj) {
  return xmlTextWriterWriteNs0RecommendeeusersElementNS(writer, _tSRecommendeeUserObj, 0);
}

/**
 * Writes a TSRecommendeeUserObj to XML under element name "recommendeeusers".
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RecommendeeusersElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeusers", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}recommendeeusers. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRecommendeeUserObj for root element {}recommendeeusers...\n");
#endif
  status = xmlTextWriterWriteNs0TSRecommendeeUserObjType(writer, _tSRecommendeeUserObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}recommendeeusers. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}recommendeeusers. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRecommendeeUserObj.
 *
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj whose children are to be free.
 */
static void freeNs0RecommendeeusersElement(struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj) {
  freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
}

/**
 * Reads a TSRecommendeeUserObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRecommendeeUserObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRecommendeeUserObj *xmlTextReaderReadNs0TSRecommendeeUserObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj = calloc(1, sizeof(struct enunciate_ns0_TSRecommendeeUserObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
        free(_tSRecommendeeUserObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommendeeUser", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommendeeUser of type {}TSUserProfileBasicObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
          free(_tSRecommendeeUserObj);
          return NULL;
        }

        _tSRecommendeeUserObj->recommendeeUser = ((struct enunciate_ns0_TSUserProfileBasicObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "replyId", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}replyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}replyId of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
          free(_tSRecommendeeUserObj);
          return NULL;
        }

        _tSRecommendeeUserObj->replyId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "replyText", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}replyText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}replyText of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
          free(_tSRecommendeeUserObj);
          return NULL;
        }

        _tSRecommendeeUserObj->replyText = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "addedPoints", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}addedPoints of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}addedPoints of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRecommendeeUserObjType(_tSRecommendeeUserObj);
          free(_tSRecommendeeUserObj);
          return NULL;
        }

        _tSRecommendeeUserObj->addedPoints = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRecommendeeUserObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRecommendeeUserObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRecommendeeUserObj;
}

/**
 * Writes a TSRecommendeeUserObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRecommendeeUserObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRecommendeeUserObj->recommendeeUser != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendeeUser", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSUserProfileBasicObj for element {}recommendeeUser...\n");
#endif
    status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, (_tSRecommendeeUserObj->recommendeeUser));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSUserProfileBasicObj for element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommendeeUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendeeUserObj->replyId != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "replyId", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}replyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}replyId...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendeeUserObj->replyId));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}replyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}replyId. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendeeUserObj->replyText != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "replyText", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}replyText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}replyText...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendeeUserObj->replyText));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}replyText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}replyText. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRecommendeeUserObj->addedPoints != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "addedPoints", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}addedPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}addedPoints...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSRecommendeeUserObj->addedPoints));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}addedPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}addedPoints. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRecommendeeUserObj.
 *
 * @param _tSRecommendeeUserObj The TSRecommendeeUserObj to free.
 */
static void freeNs0TSRecommendeeUserObjType(struct enunciate_ns0_TSRecommendeeUserObj *_tSRecommendeeUserObj) {
  int i;
  if (_tSRecommendeeUserObj->recommendeeUser != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor recommendeeUser of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    freeNs0TSUserProfileBasicObjType(_tSRecommendeeUserObj->recommendeeUser);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommendeeUser of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    free(_tSRecommendeeUserObj->recommendeeUser);
  }
  if (_tSRecommendeeUserObj->replyId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor replyId of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    freeXsStringType(_tSRecommendeeUserObj->replyId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor replyId of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    free(_tSRecommendeeUserObj->replyId);
  }
  if (_tSRecommendeeUserObj->replyText != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor replyText of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    freeXsStringType(_tSRecommendeeUserObj->replyText);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor replyText of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    free(_tSRecommendeeUserObj->replyText);
  }
  if (_tSRecommendeeUserObj->addedPoints != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor addedPoints of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    freeXsStringType(_tSRecommendeeUserObj->addedPoints);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor addedPoints of type enunciate_ns0_TSRecommendeeUserObj...\n");
#endif
    free(_tSRecommendeeUserObj->addedPoints);
  }
}
#endif /* DEF_enunciate_ns0_TSRecommendeeUserObj_M */
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
#ifndef DEF_enunciate_ns0_TSRestaurantCusineTier2Obj_M
#define DEF_enunciate_ns0_TSRestaurantCusineTier2Obj_M

/**
 * Reads a TSRestaurantCusineTier2Obj element from XML. The element to be read is "restaurantcuisinetier2", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantCusineTier2Obj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantCusineTier2Obj *xml_read_enunciate_ns0_TSRestaurantCusineTier2Obj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Restaurantcuisinetier2Element(reader);
}

/**
 * Writes a TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantCusineTier2Obj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj) {
  return xmlTextWriterWriteNs0Restaurantcuisinetier2ElementNS(writer, _tSRestaurantCusineTier2Obj, 1);
}

/**
 * Frees a TSRestaurantCusineTier2Obj.
 *
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to free.
 */
void free_enunciate_ns0_TSRestaurantCusineTier2Obj(struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj) {
  freeNs0TSRestaurantCusineTier2ObjType(_tSRestaurantCusineTier2Obj);
  free(_tSRestaurantCusineTier2Obj);
}

/**
 * Reads a TSRestaurantCusineTier2Obj element from XML. The element to be read is "restaurantcuisinetier2", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantCusineTier2Obj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantCusineTier2Obj *xmlTextReaderReadNs0Restaurantcuisinetier2Element(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantcuisinetier2", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantcuisinetier2.\n");
#endif
    _tSRestaurantCusineTier2Obj = xmlTextReaderReadNs0TSRestaurantCusineTier2ObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantCusineTier2Obj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantcuisinetier2 failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantcuisinetier2 failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantCusineTier2Obj;
}

/**
 * Writes a TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Restaurantcuisinetier2Element(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj) {
  return xmlTextWriterWriteNs0Restaurantcuisinetier2ElementNS(writer, _tSRestaurantCusineTier2Obj, 0);
}

/**
 * Writes a TSRestaurantCusineTier2Obj to XML under element name "restaurantcuisinetier2".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Restaurantcuisinetier2ElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantcuisinetier2", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantcuisinetier2. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantCusineTier2Obj for root element {}restaurantcuisinetier2...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantCusineTier2ObjType(writer, _tSRestaurantCusineTier2Obj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantcuisinetier2. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantcuisinetier2. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantCusineTier2Obj.
 *
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj whose children are to be free.
 */
static void freeNs0Restaurantcuisinetier2Element(struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj) {
  freeNs0TSRestaurantCusineTier2ObjType(_tSRestaurantCusineTier2Obj);
}

/**
 * Reads a TSRestaurantCusineTier2Obj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantCusineTier2Obj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantCusineTier2Obj *xmlTextReaderReadNs0TSRestaurantCusineTier2ObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantCusineTier2Obj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantCusineTier2ObjType(_tSRestaurantCusineTier2Obj);
        free(_tSRestaurantCusineTier2Obj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsRestaurantDetailsObj", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsRestaurantDetailsObj of type {}TSRestaurantDetailsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRestaurantDetailsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsRestaurantDetailsObj of type {}TSRestaurantDetailsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantCusineTier2ObjType(_tSRestaurantCusineTier2Obj);
          free(_tSRestaurantCusineTier2Obj);
          return NULL;
        }

        _tSRestaurantCusineTier2Obj->tsRestaurantDetailsObj = ((struct enunciate_ns0_TSRestaurantDetailsObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "tsCuisineTier2Obj", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}tsCuisineTier2Obj of type {}TSCuisineTier2Obj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSCuisineTier2ObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}tsCuisineTier2Obj of type {}TSCuisineTier2Obj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantCusineTier2ObjType(_tSRestaurantCusineTier2Obj);
          free(_tSRestaurantCusineTier2Obj);
          return NULL;
        }

        _tSRestaurantCusineTier2Obj->tsCuisineTier2Obj = ((struct enunciate_ns0_TSCuisineTier2Obj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantCusineTier2Obj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantCusineTier2Obj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantCusineTier2Obj;
}

/**
 * Writes a TSRestaurantCusineTier2Obj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantCusineTier2ObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantCusineTier2Obj->tsRestaurantDetailsObj != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsRestaurantDetailsObj", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsRestaurantDetailsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRestaurantDetailsObj for element {}tsRestaurantDetailsObj...\n");
#endif
    status = xmlTextWriterWriteNs0TSRestaurantDetailsObjType(writer, (_tSRestaurantCusineTier2Obj->tsRestaurantDetailsObj));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRestaurantDetailsObj for element {}tsRestaurantDetailsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsRestaurantDetailsObj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantCusineTier2Obj->tsCuisineTier2Obj != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "tsCuisineTier2Obj", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}tsCuisineTier2Obj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSCuisineTier2Obj for element {}tsCuisineTier2Obj...\n");
#endif
    status = xmlTextWriterWriteNs0TSCuisineTier2ObjType(writer, (_tSRestaurantCusineTier2Obj->tsCuisineTier2Obj));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSCuisineTier2Obj for element {}tsCuisineTier2Obj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}tsCuisineTier2Obj. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantCusineTier2Obj.
 *
 * @param _tSRestaurantCusineTier2Obj The TSRestaurantCusineTier2Obj to free.
 */
static void freeNs0TSRestaurantCusineTier2ObjType(struct enunciate_ns0_TSRestaurantCusineTier2Obj *_tSRestaurantCusineTier2Obj) {
  int i;
  if (_tSRestaurantCusineTier2Obj->tsRestaurantDetailsObj != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsRestaurantDetailsObj of type enunciate_ns0_TSRestaurantCusineTier2Obj...\n");
#endif
    freeNs0TSRestaurantDetailsObjType(_tSRestaurantCusineTier2Obj->tsRestaurantDetailsObj);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsRestaurantDetailsObj of type enunciate_ns0_TSRestaurantCusineTier2Obj...\n");
#endif
    free(_tSRestaurantCusineTier2Obj->tsRestaurantDetailsObj);
  }
  if (_tSRestaurantCusineTier2Obj->tsCuisineTier2Obj != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor tsCuisineTier2Obj of type enunciate_ns0_TSRestaurantCusineTier2Obj...\n");
#endif
    freeNs0TSCuisineTier2ObjType(_tSRestaurantCusineTier2Obj->tsCuisineTier2Obj);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor tsCuisineTier2Obj of type enunciate_ns0_TSRestaurantCusineTier2Obj...\n");
#endif
    free(_tSRestaurantCusineTier2Obj->tsCuisineTier2Obj);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantCusineTier2Obj_M */
#ifndef DEF_enunciate_ns0_TSRestaurantRecommendersDetailsObj_M
#define DEF_enunciate_ns0_TSRestaurantRecommendersDetailsObj_M

/**
 * Reads a TSRestaurantRecommendersDetailsObj element from XML. The element to be read is "restaurantrecommenders", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *xml_read_enunciate_ns0_TSRestaurantRecommendersDetailsObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0RestaurantrecommendersElement(reader);
}

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML under element name "restaurantrecommenders".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantRecommendersDetailsObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj) {
  return xmlTextWriterWriteNs0RestaurantrecommendersElementNS(writer, _tSRestaurantRecommendersDetailsObj, 1);
}

/**
 * Frees a TSRestaurantRecommendersDetailsObj.
 *
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to free.
 */
void free_enunciate_ns0_TSRestaurantRecommendersDetailsObj(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj) {
  freeNs0TSRestaurantRecommendersDetailsObjType(_tSRestaurantRecommendersDetailsObj);
  free(_tSRestaurantRecommendersDetailsObj);
}

/**
 * Reads a TSRestaurantRecommendersDetailsObj element from XML. The element to be read is "restaurantrecommenders", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantRecommendersDetailsObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *xmlTextReaderReadNs0RestaurantrecommendersElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "restaurantrecommenders", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}restaurantrecommenders.\n");
#endif
    _tSRestaurantRecommendersDetailsObj = xmlTextReaderReadNs0TSRestaurantRecommendersDetailsObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantRecommendersDetailsObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}restaurantrecommenders failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}restaurantrecommenders failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantRecommendersDetailsObj;
}

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML under element name "restaurantrecommenders".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantrecommendersElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj) {
  return xmlTextWriterWriteNs0RestaurantrecommendersElementNS(writer, _tSRestaurantRecommendersDetailsObj, 0);
}

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML under element name "restaurantrecommenders".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0RestaurantrecommendersElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "restaurantrecommenders", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}restaurantrecommenders. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantRecommendersDetailsObj for root element {}restaurantrecommenders...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantRecommendersDetailsObjType(writer, _tSRestaurantRecommendersDetailsObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}restaurantrecommenders. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}restaurantrecommenders. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantRecommendersDetailsObj.
 *
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj whose children are to be free.
 */
static void freeNs0RestaurantrecommendersElement(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj) {
  freeNs0TSRestaurantRecommendersDetailsObjType(_tSRestaurantRecommendersDetailsObj);
}

/**
 * Reads a TSRestaurantRecommendersDetailsObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantRecommendersDetailsObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *xmlTextReaderReadNs0TSRestaurantRecommendersDetailsObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantRecommendersDetailsObjType(_tSRestaurantRecommendersDetailsObj);
        free(_tSRestaurantRecommendersDetailsObj);
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
          freeNs0TSRestaurantRecommendersDetailsObjType(_tSRestaurantRecommendersDetailsObj);
          free(_tSRestaurantRecommendersDetailsObj);
          return NULL;
        }

        _tSRestaurantRecommendersDetailsObj->userId = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantRecommendersDetailsObjType(_tSRestaurantRecommendersDetailsObj);
          free(_tSRestaurantRecommendersDetailsObj);
          return NULL;
        }

        _tSRestaurantRecommendersDetailsObj->restaurantId = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommendersDetailsList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommendersDetailsList of type {}TSUserProfileBasicObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommendersDetailsList of type {}TSUserProfileBasicObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantRecommendersDetailsObjType(_tSRestaurantRecommendersDetailsObj);
          free(_tSRestaurantRecommendersDetailsObj);
          return NULL;
        }

        _tSRestaurantRecommendersDetailsObj->recommendersDetailsList = realloc(_tSRestaurantRecommendersDetailsObj->recommendersDetailsList, (_tSRestaurantRecommendersDetailsObj->_sizeof_recommendersDetailsList + 1) * sizeof(struct enunciate_ns0_TSUserProfileBasicObj));
        memcpy(&(_tSRestaurantRecommendersDetailsObj->recommendersDetailsList[_tSRestaurantRecommendersDetailsObj->_sizeof_recommendersDetailsList++]), _child_accessor, sizeof(struct enunciate_ns0_TSUserProfileBasicObj));
        free(_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantRecommendersDetailsObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantRecommendersDetailsObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantRecommendersDetailsObj;
}

/**
 * Writes a TSRestaurantRecommendersDetailsObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantRecommendersDetailsObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSRestaurantRecommendersDetailsObj->userId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantRecommendersDetailsObj->userId));
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
  if (_tSRestaurantRecommendersDetailsObj->restaurantId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantRecommendersDetailsObj->restaurantId));
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
  for (i = 0; i < _tSRestaurantRecommendersDetailsObj->_sizeof_recommendersDetailsList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendersDetailsList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommendersDetailsList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSUserProfileBasicObj for element {}recommendersDetailsList...\n");
#endif
    status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, &(_tSRestaurantRecommendersDetailsObj->recommendersDetailsList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSUserProfileBasicObj for element {}recommendersDetailsList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommendersDetailsList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantRecommendersDetailsObj.
 *
 * @param _tSRestaurantRecommendersDetailsObj The TSRestaurantRecommendersDetailsObj to free.
 */
static void freeNs0TSRestaurantRecommendersDetailsObjType(struct enunciate_ns0_TSRestaurantRecommendersDetailsObj *_tSRestaurantRecommendersDetailsObj) {
  int i;
  if (_tSRestaurantRecommendersDetailsObj->userId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor userId of type enunciate_ns0_TSRestaurantRecommendersDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantRecommendersDetailsObj->userId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor userId of type enunciate_ns0_TSRestaurantRecommendersDetailsObj...\n");
#endif
    free(_tSRestaurantRecommendersDetailsObj->userId);
  }
  if (_tSRestaurantRecommendersDetailsObj->restaurantId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantId of type enunciate_ns0_TSRestaurantRecommendersDetailsObj...\n");
#endif
    freeXsStringType(_tSRestaurantRecommendersDetailsObj->restaurantId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantId of type enunciate_ns0_TSRestaurantRecommendersDetailsObj...\n");
#endif
    free(_tSRestaurantRecommendersDetailsObj->restaurantId);
  }
  if (_tSRestaurantRecommendersDetailsObj->recommendersDetailsList != NULL) {
    for (i = 0; i < _tSRestaurantRecommendersDetailsObj->_sizeof_recommendersDetailsList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor recommendersDetailsList[%i] of type enunciate_ns0_TSRestaurantRecommendersDetailsObj...\n", i);
#endif
      freeNs0TSUserProfileBasicObjType(&(_tSRestaurantRecommendersDetailsObj->recommendersDetailsList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommendersDetailsList of type enunciate_ns0_TSRestaurantRecommendersDetailsObj...\n");
#endif
    free(_tSRestaurantRecommendersDetailsObj->recommendersDetailsList);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantRecommendersDetailsObj_M */
#ifndef DEF_enunciate_ns0_TSRestaurantsForYouObj_M
#define DEF_enunciate_ns0_TSRestaurantsForYouObj_M

/**
 * Reads a TSRestaurantsForYouObj element from XML. The element to be read is "rests4u", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSRestaurantsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantsForYouObj *xml_read_enunciate_ns0_TSRestaurantsForYouObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0Rests4uElement(reader);
}

/**
 * Writes a TSRestaurantsForYouObj to XML under element name "rests4u".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSRestaurantsForYouObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj) {
  return xmlTextWriterWriteNs0Rests4uElementNS(writer, _tSRestaurantsForYouObj, 1);
}

/**
 * Frees a TSRestaurantsForYouObj.
 *
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to free.
 */
void free_enunciate_ns0_TSRestaurantsForYouObj(struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj) {
  freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
  free(_tSRestaurantsForYouObj);
}

/**
 * Reads a TSRestaurantsForYouObj element from XML. The element to be read is "rests4u", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSRestaurantsForYouObj, or NULL in case of error.
 */
struct enunciate_ns0_TSRestaurantsForYouObj *xmlTextReaderReadNs0Rests4uElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "rests4u", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}rests4u.\n");
#endif
    _tSRestaurantsForYouObj = xmlTextReaderReadNs0TSRestaurantsForYouObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSRestaurantsForYouObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}rests4u failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}rests4u failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSRestaurantsForYouObj;
}

/**
 * Writes a TSRestaurantsForYouObj to XML under element name "rests4u".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Rests4uElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj) {
  return xmlTextWriterWriteNs0Rests4uElementNS(writer, _tSRestaurantsForYouObj, 0);
}

/**
 * Writes a TSRestaurantsForYouObj to XML under element name "rests4u".
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0Rests4uElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "rests4u", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}rests4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSRestaurantsForYouObj for root element {}rests4u...\n");
#endif
  status = xmlTextWriterWriteNs0TSRestaurantsForYouObjType(writer, _tSRestaurantsForYouObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}rests4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}rests4u. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSRestaurantsForYouObj.
 *
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj whose children are to be free.
 */
static void freeNs0Rests4uElement(struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj) {
  freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
}

/**
 * Reads a TSRestaurantsForYouObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSRestaurantsForYouObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSRestaurantsForYouObj *xmlTextReaderReadNs0TSRestaurantsForYouObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj = calloc(1, sizeof(struct enunciate_ns0_TSRestaurantsForYouObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
        free(_tSRestaurantsForYouObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "recommendationsForYouList", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}recommendationsForYouList of type {}TSRecommendationsObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSRecommendationsObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}recommendationsForYouList of type {}TSRecommendationsObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->recommendationsForYouList = realloc(_tSRestaurantsForYouObj->recommendationsForYouList, (_tSRestaurantsForYouObj->_sizeof_recommendationsForYouList + 1) * sizeof(struct enunciate_ns0_TSRecommendationsObj));
        memcpy(&(_tSRestaurantsForYouObj->recommendationsForYouList[_tSRestaurantsForYouObj->_sizeof_recommendationsForYouList++]), _child_accessor, sizeof(struct enunciate_ns0_TSRecommendationsObj));
        free(_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantId = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantName = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->cuisineTier2Name = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->price = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantCity = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantLat = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantLong = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantDealFlag = ((xmlChar*)_child_accessor);
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
          freeNs0TSRestaurantsForYouObjType(_tSRestaurantsForYouObj);
          free(_tSRestaurantsForYouObj);
          return NULL;
        }

        _tSRestaurantsForYouObj->restaurantRating = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSRestaurantsForYouObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSRestaurantsForYouObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSRestaurantsForYouObj;
}

/**
 * Writes a TSRestaurantsForYouObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSRestaurantsForYouObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  for (i = 0; i < _tSRestaurantsForYouObj->_sizeof_recommendationsForYouList; i++) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "recommendationsForYouList", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}recommendationsForYouList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSRecommendationsObj for element {}recommendationsForYouList...\n");
#endif
    status = xmlTextWriterWriteNs0TSRecommendationsObjType(writer, &(_tSRestaurantsForYouObj->recommendationsForYouList[i]));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSRecommendationsObj for element {}recommendationsForYouList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}recommendationsForYouList. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSRestaurantsForYouObj->restaurantId != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantId));
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
  if (_tSRestaurantsForYouObj->restaurantName != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantName));
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
  if (_tSRestaurantsForYouObj->cuisineTier2Name != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->cuisineTier2Name));
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
  if (_tSRestaurantsForYouObj->price != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->price));
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
  if (_tSRestaurantsForYouObj->restaurantCity != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantCity));
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
  if (_tSRestaurantsForYouObj->restaurantLat != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantLat));
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
  if (_tSRestaurantsForYouObj->restaurantLong != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantLong));
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
  if (_tSRestaurantsForYouObj->restaurantDealFlag != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantDealFlag));
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
  if (_tSRestaurantsForYouObj->restaurantRating != NULL) {
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
    status = xmlTextWriterWriteXsStringType(writer, (_tSRestaurantsForYouObj->restaurantRating));
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

  return totalBytes;
}

/**
 * Frees the elements of a TSRestaurantsForYouObj.
 *
 * @param _tSRestaurantsForYouObj The TSRestaurantsForYouObj to free.
 */
static void freeNs0TSRestaurantsForYouObjType(struct enunciate_ns0_TSRestaurantsForYouObj *_tSRestaurantsForYouObj) {
  int i;
  if (_tSRestaurantsForYouObj->recommendationsForYouList != NULL) {
    for (i = 0; i < _tSRestaurantsForYouObj->_sizeof_recommendationsForYouList; i++) {
#if DEBUG_ENUNCIATE > 1
      printf("Freeing accessor recommendationsForYouList[%i] of type enunciate_ns0_TSRestaurantsForYouObj...\n", i);
#endif
      freeNs0TSRecommendationsObjType(&(_tSRestaurantsForYouObj->recommendationsForYouList[i]));
    }
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor recommendationsForYouList of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->recommendationsForYouList);
  }
  if (_tSRestaurantsForYouObj->restaurantId != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantId of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantId);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantId of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantId);
  }
  if (_tSRestaurantsForYouObj->restaurantName != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantName of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantName);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantName of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantName);
  }
  if (_tSRestaurantsForYouObj->cuisineTier2Name != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor cuisineTier2Name of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->cuisineTier2Name);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor cuisineTier2Name of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->cuisineTier2Name);
  }
  if (_tSRestaurantsForYouObj->price != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor price of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->price);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor price of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->price);
  }
  if (_tSRestaurantsForYouObj->restaurantCity != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantCity of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantCity);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantCity of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantCity);
  }
  if (_tSRestaurantsForYouObj->restaurantLat != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantLat of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantLat);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantLat of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantLat);
  }
  if (_tSRestaurantsForYouObj->restaurantLong != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantLong of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantLong);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantLong of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantLong);
  }
  if (_tSRestaurantsForYouObj->restaurantDealFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantDealFlag of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantDealFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantDealFlag of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantDealFlag);
  }
  if (_tSRestaurantsForYouObj->restaurantRating != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor restaurantRating of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    freeXsStringType(_tSRestaurantsForYouObj->restaurantRating);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor restaurantRating of type enunciate_ns0_TSRestaurantsForYouObj...\n");
#endif
    free(_tSRestaurantsForYouObj->restaurantRating);
  }
}
#endif /* DEF_enunciate_ns0_TSRestaurantsForYouObj_M */
#ifndef DEF_enunciate_ns0_TSSenderUserObj_M
#define DEF_enunciate_ns0_TSSenderUserObj_M

/**
 * Reads a TSSenderUserObj element from XML. The element to be read is "senderuser", and
 * it is assumed that the reader is pointing to the XML document (not the element).
 *
 * @param reader The XML reader.
 * @return The TSSenderUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSenderUserObj *xml_read_enunciate_ns0_TSSenderUserObj(xmlTextReaderPtr reader) {
  int status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
  return xmlTextReaderReadNs0SenderuserElement(reader);
}

/**
 * Writes a TSSenderUserObj to XML under element name "senderuser".
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
int xml_write_enunciate_ns0_TSSenderUserObj(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj) {
  return xmlTextWriterWriteNs0SenderuserElementNS(writer, _tSSenderUserObj, 1);
}

/**
 * Frees a TSSenderUserObj.
 *
 * @param _tSSenderUserObj The TSSenderUserObj to free.
 */
void free_enunciate_ns0_TSSenderUserObj(struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj) {
  freeNs0TSSenderUserObjType(_tSSenderUserObj);
  free(_tSSenderUserObj);
}

/**
 * Reads a TSSenderUserObj element from XML. The element to be read is "senderuser", and
 * it is assumed that the reader is pointing to that element.
 *
 * @param reader The XML reader.
 * @return The TSSenderUserObj, or NULL in case of error.
 */
struct enunciate_ns0_TSSenderUserObj *xmlTextReaderReadNs0SenderuserElement(xmlTextReaderPtr reader) {
  struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj = NULL;

  if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
    && xmlStrcmp(BAD_CAST "senderuser", xmlTextReaderConstLocalName(reader)) == 0
    && xmlTextReaderConstNamespaceUri(reader) == NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Attempting to read root element {}senderuser.\n");
#endif
    _tSSenderUserObj = xmlTextReaderReadNs0TSSenderUserObjType(reader);
  }
#if DEBUG_ENUNCIATE
  if (_tSSenderUserObj == NULL) {
    if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
      printf("attempt to read {}senderuser failed. current element: {}%s\n",  xmlTextReaderConstLocalName(reader));
    }
    else {
      printf("attempt to read {}senderuser failed. current element: {%s}%s\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
    }
  }
#endif

  return _tSSenderUserObj;
}

/**
 * Writes a TSSenderUserObj to XML under element name "senderuser".
 * Does NOT write the namespace prefixes.
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SenderuserElement(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj) {
  return xmlTextWriterWriteNs0SenderuserElementNS(writer, _tSSenderUserObj, 0);
}

/**
 * Writes a TSSenderUserObj to XML under element name "senderuser".
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @param writeNamespaces Whether to write the namespace prefixes.
 * @return 1 if successful, 0 otherwise.
 */
static int xmlTextWriterWriteNs0SenderuserElementNS(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj, int writeNamespaces) {
  int totalBytes = 0;
  int status;

  status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "senderuser", NULL);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write start element {}senderuser. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

#if DEBUG_ENUNCIATE > 1
  printf("writing type {}TSSenderUserObj for root element {}senderuser...\n");
#endif
  status = xmlTextWriterWriteNs0TSSenderUserObjType(writer, _tSSenderUserObj);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to write type for start element {}senderuser. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  status = xmlTextWriterEndElement(writer);
  if (status < 0) {
#if DEBUG_ENUNCIATE
    printf("unable to end element {}senderuser. status: %i\n", status);
#endif
    return status;
  }
  totalBytes += status;

  return totalBytes;
}

/**
 * Frees the children of a TSSenderUserObj.
 *
 * @param _tSSenderUserObj The TSSenderUserObj whose children are to be free.
 */
static void freeNs0SenderuserElement(struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj) {
  freeNs0TSSenderUserObjType(_tSSenderUserObj);
}

/**
 * Reads a TSSenderUserObj from XML. The reader is assumed to be at the start element.
 *
 * @return the TSSenderUserObj, or NULL in case of error.
 */
static struct enunciate_ns0_TSSenderUserObj *xmlTextReaderReadNs0TSSenderUserObjType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj = calloc(1, sizeof(struct enunciate_ns0_TSSenderUserObj));



  if (xmlTextReaderIsEmptyElement(reader) == 0) {
    depth = xmlTextReaderDepth(reader);//track the depth.
    status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);

    while (xmlTextReaderDepth(reader) > depth) {
      if (status < 1) {
        //panic: XML read error.
#if DEBUG_ENUNCIATE
        printf("Failure to advance to next child element.\n");
#endif
        freeNs0TSSenderUserObjType(_tSSenderUserObj);
        free(_tSSenderUserObj);
        return NULL;
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "senderUser", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}senderUser of type {}TSUserProfileBasicObj.\n");
#endif
        _child_accessor = xmlTextReaderReadNs0TSUserProfileBasicObjType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}senderUser of type {}TSUserProfileBasicObj.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSenderUserObjType(_tSSenderUserObj);
          free(_tSSenderUserObj);
          return NULL;
        }

        _tSSenderUserObj->senderUser = ((struct enunciate_ns0_TSUserProfileBasicObj*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "senderUserFolloweeFlag", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}senderUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}senderUserFolloweeFlag of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSenderUserObjType(_tSSenderUserObj);
          free(_tSSenderUserObj);
          return NULL;
        }

        _tSSenderUserObj->senderUserFolloweeFlag = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else if (xmlTextReaderNodeType(reader) == XML_READER_TYPE_ELEMENT
        && xmlStrcmp(BAD_CAST "message", xmlTextReaderConstLocalName(reader)) == 0
        && xmlTextReaderConstNamespaceUri(reader) == NULL) {

#if DEBUG_ENUNCIATE > 1
        printf("Attempting to read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
        _child_accessor = xmlTextReaderReadXsStringType(reader);
        if (_child_accessor == NULL) {
#if DEBUG_ENUNCIATE
          printf("Failed to read choice {}message of type {http://www.w3.org/2001/XMLSchema}string.\n");
#endif
          //panic: unable to read the child element for some reason.
          freeNs0TSSenderUserObjType(_tSSenderUserObj);
          free(_tSSenderUserObj);
          return NULL;
        }

        _tSSenderUserObj->message = ((xmlChar*)_child_accessor);
        status = xmlTextReaderAdvanceToNextStartOrEndElement(reader);
      }
      else {
#if DEBUG_ENUNCIATE > 1
        if (xmlTextReaderConstNamespaceUri(reader) == NULL) {
          printf("unknown child element {}%s for type {}TSSenderUserObj.  Skipping...\n",  xmlTextReaderConstLocalName(reader));
        }
        else {
          printf("unknown child element {%s}%s for type {}TSSenderUserObj. Skipping...\n", xmlTextReaderConstNamespaceUri(reader), xmlTextReaderConstLocalName(reader));
        }
#endif
        status = xmlTextReaderSkipElement(reader);
      }
    }
  }

  return _tSSenderUserObj;
}

/**
 * Writes a TSSenderUserObj to XML.
 *
 * @param writer The XML writer.
 * @param _tSSenderUserObj The TSSenderUserObj to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0TSSenderUserObjType(xmlTextWriterPtr writer, struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;
  if (_tSSenderUserObj->senderUser != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "senderUser", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}senderUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {}TSUserProfileBasicObj for element {}senderUser...\n");
#endif
    status = xmlTextWriterWriteNs0TSUserProfileBasicObjType(writer, (_tSSenderUserObj->senderUser));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {}TSUserProfileBasicObj for element {}senderUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}senderUser. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSenderUserObj->senderUserFolloweeFlag != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "senderUserFolloweeFlag", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}senderUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}senderUserFolloweeFlag...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSenderUserObj->senderUserFolloweeFlag));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}senderUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}senderUserFolloweeFlag. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }
  if (_tSSenderUserObj->message != NULL) {
    status = xmlTextWriterStartElementNS(writer, NULL, BAD_CAST "message", NULL);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write start element {}message. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
#if DEBUG_ENUNCIATE > 1
    printf("writing type {http://www.w3.org/2001/XMLSchema}string for element {}message...\n");
#endif
    status = xmlTextWriterWriteXsStringType(writer, (_tSSenderUserObj->message));
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write type {http://www.w3.org/2001/XMLSchema}string for element {}message. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;

    status = xmlTextWriterEndElement(writer);
    if (status < 0) {
#if DEBUG_ENUNCIATE
      printf("Failed to write end element {}message. status: %i\n", status);
#endif
      return status;
    }
    totalBytes += status;
  }

  return totalBytes;
}

/**
 * Frees the elements of a TSSenderUserObj.
 *
 * @param _tSSenderUserObj The TSSenderUserObj to free.
 */
static void freeNs0TSSenderUserObjType(struct enunciate_ns0_TSSenderUserObj *_tSSenderUserObj) {
  int i;
  if (_tSSenderUserObj->senderUser != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor senderUser of type enunciate_ns0_TSSenderUserObj...\n");
#endif
    freeNs0TSUserProfileBasicObjType(_tSSenderUserObj->senderUser);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor senderUser of type enunciate_ns0_TSSenderUserObj...\n");
#endif
    free(_tSSenderUserObj->senderUser);
  }
  if (_tSSenderUserObj->senderUserFolloweeFlag != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor senderUserFolloweeFlag of type enunciate_ns0_TSSenderUserObj...\n");
#endif
    freeXsStringType(_tSSenderUserObj->senderUserFolloweeFlag);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor senderUserFolloweeFlag of type enunciate_ns0_TSSenderUserObj...\n");
#endif
    free(_tSSenderUserObj->senderUserFolloweeFlag);
  }
  if (_tSSenderUserObj->message != NULL) {
#if DEBUG_ENUNCIATE > 1
    printf("Freeing type of accessor message of type enunciate_ns0_TSSenderUserObj...\n");
#endif
    freeXsStringType(_tSSenderUserObj->message);
#if DEBUG_ENUNCIATE > 1
    printf("Freeing accessor message of type enunciate_ns0_TSSenderUserObj...\n");
#endif
    free(_tSSenderUserObj->message);
  }
}
#endif /* DEF_enunciate_ns0_TSSenderUserObj_M */
#ifndef DEF_enunciate_ns0_JSONObject_M
#define DEF_enunciate_ns0_JSONObject_M

/**
 * Reads a JSONObject from XML. The reader is assumed to be at the start element.
 *
 * @return the JSONObject, or NULL in case of error.
 */
static struct enunciate_ns0_JSONObject *xmlTextReaderReadNs0JSONObjectType(xmlTextReaderPtr reader) {
  int status, depth;
  void *_child_accessor;
  struct enunciate_ns0_JSONObject *_jSONObject = calloc(1, sizeof(struct enunciate_ns0_JSONObject));




  return _jSONObject;
}

/**
 * Writes a JSONObject to XML.
 *
 * @param writer The XML writer.
 * @param _jSONObject The JSONObject to write.
 * @return The total bytes written, or -1 on error;
 */
static int xmlTextWriterWriteNs0JSONObjectType(xmlTextWriterPtr writer, struct enunciate_ns0_JSONObject *_jSONObject) {
  int status, totalBytes = 0, i;
  xmlChar *binaryData;

  return totalBytes;
}

/**
 * Frees the elements of a JSONObject.
 *
 * @param _jSONObject The JSONObject to free.
 */
static void freeNs0JSONObjectType(struct enunciate_ns0_JSONObject *_jSONObject) {
  int i;
}
#endif /* DEF_enunciate_ns0_JSONObject_M */
