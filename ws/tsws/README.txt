**********
ENVIRONMENT SETUP:
 
check ANT/Tomcat/Java/Enunciate are correctly configured. if not, install/configured the appropriate set up

e.g. 
export JAVA_HOME =.... /java/jdk1.6.0_45

export TOMCAT_HOME=.... /tomcat/apache-tomcat-7.0.40

export ANT_HOME=.... /ant/apache-ant-1.8.4

export ENUNCIATE_HOME= ...  /enunciate/enunciate-1.26.2


SET TOMCAT_HOME / JAVA_HOME /ANT_HOME /ENUNCIATE_HOME as part of environment variables

COMPILATION+Local DEPOYMENT:

If everything is correctly set, then once you have the working copy web services under tsws directory, 
use the following for compilation and deployment.

For compilation and deployment:sh compileAndRun.sh

**********
For pointing to current DB instance, check url in context.xml under META-INF is correct.
e.g.

    <Resource name="jdbc/TastesyncDB" auth="Container"
        type="javax.sql.DataSource" maxActive="100" maxIdle="30"
        maxWait="10000" removeAbandoned="true" username="root" password=""
        driverClassName="com.mysql.jdbc.Driver" url="jdbc:mysql://localhost:3306/03May2013Tastesync" />

 
**********

. in eclipse, set the project as DYNAMIC WEB Project

**********
. in Firefox, add additional plugin RESTCLIENT for testing.
    in header, set Content-Type (name), application/x-www-form-urlencoded (value)

**********
General DESIGN / DEVLOPMENT approach:

Flow is like following:
input from the app :  SERVICE --> BO --> DAO --> Queries
                                                        |
--> denotes kind of invocation here.                    |
                                                        |
output to the app  :  SERVICE <-- BO <-- DAO
<-- denotes kind of output transferred here.#

e.g.
1.
all services under com.tastesync.services
     e.g. com.tastesync.services.RestaurantService
2.
all BOs under com.tastesync.bos
    e.g. com.tastesync.bos.RestaurantBO

write details in corresponding IMPL class..
    com.tastesync.bos.RestaurantBOImpl
3. 
all DAOs under com.tastesync.db.dao
    e.g. com.tastesync.db.dao.RestaurantDAO
    com.tastesync.db.dao.RestaurantDAOImpl
    
3.1.
Normally for GET kind of request, objects need to be defined.
com.tastesync.model.objects
e.g. com.tastesync.model.objects.TSRestaurantExtendInfoObj
 
 Please use everything as STRING and use CAMEL characters for different variables name.
 These variables will becom part of JSON object.

4.
all Queries under com.tastesync.db.queries
e.g. com.tastesync.db.queries.RestaurantQueries

In nutshell, for each service, we have kind of flow that need to be reused.
If flow does not exist, let us know. We TASTESYNC can define appropriately.  

**********
As part of COMPILE and DEPLY scripts, html docs are also created which provides easy way
to check (similar to javadocs)
tsws/docs/index.html

All details about existing methods/Data elements / Data Types  can be checked wrt what it suppoed to have (e.g. sample JSON data)
note: some changes are still pending. 
**********
Existing sample requests:

One can check sample READ and WRITE request to understand the whole FLOW.

    

**********
There are a few TODOs that need to be integrated.
e.g. OAUTH for Tastesync application

**********

**********


