//
//  Customer_Curation_Sale_Gallery.cpp
//  ArtGallerySimplified
//
//  implement/define the member functions of the following classes:
//     1. class Customer; 2. class Curation; 3. class Sale; 4. class ArtGallery
//
//created by: Andy Poon
//date:  Nov 1st, 2023

#include "Customer_Curation_Sale_Gallery.h"
#include "util_date_uniqueIDs.h"

namespace NS_ARTGALLERY{
   
 //  implement/define the member functions of the following classes:
//     1. class Customer; 2. class Curation; 3. class Sale; 4. class ArtGallery


  /*
   Type 3. Customer
     Relevant data properties:
      ID; //customer’s unique ID
      name; //customer’s full name: first last
      email; //customer’s email
      address; //customer’s address
    
    Relevant data operations:
      set the initial value of a customer's properties  ----->constructors
      retrieve an individual property    -----> accessors
      revise an individual property ---->mutators
   */

    //default constructor: ID(-1),name("na"),email("na"),address("na")
    Customer::Customer():ID(-1),name("na"),email("na"),address("na"){
        }
    //parameterized constructor: ID(theID),name(theName),email(theEmail), address("theAddr")
    Customer::Customer(int theID, string theName, string theEmail, const string theAddr):ID(theID),name(theName),email(theEmail), address("theAddr"){
        }
    
    //accessors
    //returns a customer's ID
    int Customer::getID() const{
        return ID;
        }
    //returns a customer's name
    string Customer::getName() const{
        return name;
        }
    //returns a customer's email
    string Customer::getEmail() const{
        return email;
        }
    //returns a customer's address
    string Customer::getAddress() const{
        return address;
        }
  
    //mutators
    //change a customer's ID to theID
    void Customer::setID( int theID){
        ID = theID;
        }
    //change a customer's name to theName
    void Customer::setName( string theName){
        name = theName;
        }
    //change a customer's email to theEmail
    void Customer::setEmail(string theEmail){
        email = theEmail;
        }
    //change a customer's address to theAddress
    void Customer::setAddress( string theAddress){
        address = theAddress;
        }


/*
 Type 4: Curation
 Relevant data properties:
 artworkID; //ID of the artwork being curated
 artistID; //ID of the artist who created this artwork
 curationDate; //date of curation: {day, month, year}
  
  Relevant data operations:
 set the initial value of an art-curation's properties  ----->constructors
 retrieve an individual property    -----> accessors
 revise an individual property except its unique ID---->mutators
 */

    //default constructor: artworkID(-1),artistID(-1),curationDate({1,1,2022})
    Curation::Curation(){
        artworkID = -1;
        artistID = -1;
        curationDate = {1,1,2022};
        }
    //parameterized constructor: artworkID(theArtworkID),artistID(theArtistID),curationDate(theDate)
    Curation::Curation(int theArtworkID, int theArtistID, Date theDate){
        artworkID = theArtworkID;
        artistID = theArtistID;
        curationDate = theDate;
        }
    
    //accessors
    //return a curation's artworkID
    int Curation::getArtworkID() const{
        return artworkID;
        }
    //return a curation's artistID
    int Curation::getArtistID() const{
        return artistID;
        }
    //return a curation's date
    Date Curation::getCurationDate() const{
        return curationDate;
        }
    //mutators
    //changes a curation's artworkID to theID
    void Curation::setArtworkID( int theID){
        artworkID = theID;
        }
    //changes a curation's artistID to theID
    void Curation::setArtistID( int theID){
        artistID = theID;
        }
    //changes a curation's date to theDate
    void Curation::setCurationDate(Date theDate){
        curationDate = theDate;
        }


/*
 Type 5. Sale   //a type of activity —>class Sale;
  Relevant data properties:
 customerID
 artworkID
 saleDate; //date of sale: {day, month, year}
  
  Relevant data operations:
 set the initial value of an art-purchase/transaction's properties  ----->constructors
 retrieve an individual property    -----> accessors
 revise an individual property except its unique ID---->mutators
 */

    //default constructor: customerID(-1), artworkID(-1),saleDate({1,1,2022})
    Sale::Sale(){
        customerID = -1;
        artworkID = -1;
        saleDate = {1,1,2022};
    }
    //parameterized constructor: customerID(theCustomerID),artworkID(theArtworkID),saleDate(theDate)
    Sale::Sale(int theCustomerID, int theArtworkID,  Date theDate){
        customerID = theCustomerID;
        artworkID = theArtworkID;
        saleDate = theDate;
        }
    
    //accessors
    //return a sale's customerID
    int Sale::getCustomerID() const{
        return customerID;
        }
    
    //return a sale's artworkID
    int Sale::getArtworkID() const{
        return artworkID;
        }
    //return a sale's date
    Date Sale::getSaleDate() const{
        return saleDate;
        }
    
    //mutators
    //changes a sale's customerID to theID
    void Sale::setCustomerID( int theID){
        customerID = theID;
        }
    //changes a sale's artworkID to theID
    void Sale::setArtworkID( int theID){
        artworkID = theID;
        }
    //changes a sale's date to theDate
    void Sale::setSaleDate(Date theDate){
        saleDate = theDate;
        }


/*
 Type 6. Gallery
  Relevant data properties:
 ID; //the unique ID of an art gallery
 name; //name of the gallery
 address;
 webURL; //website of the gallery
 artistList; //the list of artists who have at least one artwork curated by the gallery
 customerList; //the list of customers who have ever purchased an artwork from the gallery
 artworkListCurated; //the list of artworks that have ever been curated by the gallery. We are going to assume every artwork is unique. In other words, we don't have multiple copies of the same artwork.
 artworkListForSale; //the list of artworks that are available for purchase. note the difference between this list and the above.
 curationRecords; //collection of art curation records
 salesRecords; //collection of art sales records
 */

    //default constructor: ID(-1),name("na"),address("na"),webURL("na")
    Gallery::Gallery(){
        ID = -1;
        name = "na";
        address = "na";
        webURL = "na";
        }
    
    //accessors
    
    //returns the unique ID of a gallery
    int Gallery::getID() const{
        return ID;
        }
    //returns the name of a gallery
    string Gallery::getName() const{
        return name;
        }
    //returns the address of a gallery
    string Gallery::getAddress() const{
        return address;
        }
    //returns the webURL of a gallery
    string Gallery::getWebURL() const{
        return webURL;
        }
    
    unsigned long Gallery::num_artists() const{
        return artistsList.size();
        } //returns the size of artistsList
    unsigned long Gallery::num_artworksCurated() const{
        return artworksCurated.size();
        } //returns the size of artworksCurated;
    unsigned long Gallery::num_artworksForSale() const{
        return artworksForSale.size();
        } //returns the size of artworksForSale;
    unsigned long Gallery::num_customers() const{
        return customersList.size();
        } //returns the size of customersList
    unsigned long Gallery::num_curations() const{
        return curationsRecords.size();
        } //returns the size of curationRecords
    unsigned long Gallery::num_sales() const{
        return salesRecords.size();     
        } //returns the size of salesRecords
    
    //retrieves an artist's ID from the artistList using the provided name and email.
    //We assume that name & email can uniquely identify an artist.
    //returns the ID if found; -1 if not. The latter means that this is a new artist.
    int Gallery::getArtistID(string name, string email) const{
        if (artistsList.size() == 0){
            return -1;
            }
        else{
            for (int i = 0; i < artistsList.size(); i++){
                if (artistsList[i].getName() == name && artistsList[i].getEmail() == email){
                    return artistsList[i].getID();
                    }
                }
            return -1;
            }
        }
    
    //retrieves a customer's ID from the customerList using the provided name and email.
    //We assume that name & email can uniquely identify a customer.
    //returns the customer's ID if found; -1 if not. The latter means that this is a new customer.
    int Gallery::getCustomerID(string name, string email) const{
        if (customersList.size() == 0){
            return -1;
            }
        else{
            for (int i = 0; i < customersList.size(); i++){
                if (customersList[i].getName() == name && customersList[i].getEmail() == email){
                    return customersList[i].getID();
                    }
                }
            return -1;
            }
        }
    
    //returns the IDs of for-sale artworks
    vector<int> Gallery::getIDsOfArtworksForSale() const{
        vector<int> IDs;
        for (int i = 0; i < artworksForSale.size(); i++){
            IDs.push_back(artworksForSale[i].getID());
            }
        return IDs;
        }
    //returns the unique IDs of the artists who have artworks for sale
    // Note: make sure that you deduplicate the IDs as one artist may have multiple artworks for sale
    vector<int> Gallery::getIDsOfArtistsForSale() const{
        vector<int> IDs;
        for (int i = 0; i < artworksForSale.size(); i++){
                IDs.push_back(artworksForSale[i].getArtistID());
        }
        sort(IDs.begin(), IDs.end());
        auto last = std::unique(IDs.begin(), IDs.end());
        IDs.erase(last, IDs.end());
        return IDs;
    }
    
    //Summarize a gallery's curated artworks (i.e., artworkListCurated) by  art type, style, and subject.
    //ReportType is an enum class declared in the util_date_uniqueIDs.h. It consists of {artType, artStyle, artSubject}.
    //For example, if reportType is ReportType::artType, this function will return a vector of the following pairs: 
    //("ArtType::painting", #), ("ArtType::photography", #), ("ArtType::drawing", #), ("ArtType::sculpture", #), ("ArtType::other", #).
    //You can call the string toStr_ArtType( ArtType ) function to convert an ArtType value to a string.
    //You algorithm is going to replace the # with the actual number of artworks of the corresponding artType.
    vector<pair<string, int>> Gallery::genArtworksReport( ReportType reportType){
        vector<pair<string, int>> report;
        switch(reportType){
            case ReportType::artType:
                int numPainting = 0;
                int numPhotography = 0;
                int numDrawing = 0;
                int numSculpture = 0;
                int numOther = 0;
                for (int i=0; i < artworksCurated.size(); i++){
                    switch(artworksCurated[i].getType()){
                        case ArtType::painting:
                            numPainting++;
                            break;
                        case ArtType::photography:
                            numPhotography++;
                            break;
                        case ArtType::drawing:
                            numDrawing++;
                            break;
                        case ArtType::sculpture:
                            numSculpture++;
                            break;
                        case ArtType::other:
                            numOther++;
                            break;
                    }
                }
                report.push_back(make_pair("ArtType::painting", numPainting));
                report.push_back(make_pair("ArtType::photography", numPhotography));
                report.push_back(make_pair("ArtType::drawing", numDrawing));
                report.push_back(make_pair("ArtType::sculpture", numSculpture));
                report.push_back(make_pair("ArtType::other", numOther));
                break;
            case ReportType::artStyle:
                int numFineArt = 0;
                int numAbstract = 0;
                int numModern = 0;
                int numPopArt = 0;
                int numOtherStyle = 0;
                for (int i=0; i < artworksCurated.size(); i++){
                    switch(artworksCurated[i].getStyle()){
                        case ArtStyle::fineArt:
                            numFineArt++;
                            break;
                        case ArtStyle::abstract:
                            numAbstract++;
                            break;
                        case ArtStyle::modern:
                            numModern++;
                            break;
                        case ArtStyle::popArt:
                            numPopArt++;
                            break;
                        case ArtStyle::other:
                            numOtherStyle++;
                            break;
                    }
                }
                report.push_back(make_pair("ArtStyle::fineArt", numFineArt));
                report.push_back(make_pair("ArtStyle::abstract", numAbstract));
                report.push_back(make_pair("ArtStyle::modern", numModern));
                report.push_back(make_pair("ArtStyle::popArt", numPopArt));
                report.push_back(make_pair("ArtStyle::other", numOtherStyle));
                break;
            case ReportType::artSubject:
                int numNature = 0;
                int numPortrait = 0;
                int numAnimal = 0;
                int numCartoon = 0;
                int numOtherSubject = 0;
                for (int i=0; i < artworksCurated.size(); i++){
                    switch(artworksCurated[i].getSubject()){
                        case ArtSubject::nature:
                            numNature++;
                            break;
                        case ArtSubject::portrait:
                            numPortrait++;
                            break;
                        case ArtSubject::animal:
                            numAnimal++;
                            break;
                        case ArtSubject::cartoon:
                            numCartoon++;
                            break;
                        case ArtSubject::other:
                            numOtherSubject++;
                            break;
                    }
                }
                report.push_back(make_pair("ArtSubject::nature", numNature));
                report.push_back(make_pair("ArtSubject::portrait", numPortrait));
                report.push_back(make_pair("ArtSubject::animal", numAnimal));
                report.push_back(make_pair("ArtSubject::cartoon", numCartoon));
                report.push_back(make_pair("ArtSubject::other", numOtherSubject));
                break;
            }
        return report;
    }
    
    //mutators
    //changes the unique ID of a gallery to theID
    void Gallery::setID(int theID){
        ID = theID;
        }
    //changes the name of a gallery to theName
    void Gallery::setName(string theName){
        name = theName;
        }
    //changes the address of a gallery to theAddr
    void Gallery::setAddress(string theAddr){
        address = theAddr;
        }
    //changes the webURL of a gallery to theURL
    void Gallery::setWebURL(string theURL){
        webURL = theURL;
        }
    //add an artist to the artistList. Make sure that (1) this artist is not already on artistList by checking the name & email combination; 
    //and (2) this artist has a valid ID by generating a unique ID. Do nothing if the artist is already on the list.
    //returns artistID
    int Gallery::addArtist(Artist artist){
        bool found = false;
        for (int i=0; i < artistsList.size(); i++){
            if (artistsList[i].getName() == artist.getName() && artistsList[i].getEmail() == artist.getEmail()){
                found = true;
                artist.setID(nextArtistID());
                }
            }
        if (found == false){
            artist.setID(artistsList.size());
            artistsList.push_back(artist);
            return artist.getID();
            }
        return artist.getID();
        }         
    //adds a customer to the customerList. Make sure that (1) this customer is not already on customerList by checking their name & email combination; and (2) this customer has a valid ID by generating a unique ID. Do nothing if the artist is already on the list.Do nothing if this customer is already on the list.
    //returns customerID.
    int Gallery::addCustomer(Customer customer){
        bool found = false;
        for (int i=0; i <customersList.size(); i++){
            if (customersList[i].getName() == customer.getName() && customersList[i].getEmail() == customer.getEmail()){
                found = true;
                customer.setID(customersList[i].getID());
                }
            }
        if (found == false){
            customer.setID(customersList.size());
            customersList.push_back(customer);
            return customer.getID();
            }
        return customer.getID();
        }
    

    //artwork curation: curate a new piece of artwork for the gallery. newItem.ID, newItem.artistID, and artist.ID are all set to -1 (not available) 
    //initially. As a result, you’ll need to assign this newItem a unique ID. Check if the artist is already on the artistList using their name and email. 
    //If new, assign this artist a unique ID and add them to the artistList. If not new, retrieve their ID from the artistList. You will also need to 
    //update the artworkListCurated and the artworkListForSale. Finally, you will need to update the curationRecords to include this new curation.
    void Gallery::curateArtwork(Artwork newItem, Artist artist){
        int artistID = addArtist(artist);
        
               
        }
    
    //artwork sale: sell a for-sale artwork to a customer. customer.ID is set to -1 initially. So you will need to find out if this customer is new using their name and email address. If new, assign this customer a unique ID and add them to the customerList. If not, retrieve their ID from customerList. You will also need to check if the specified artworkID is still for sale. If yes, update the artworkListForSale by removing this artwork that was just sold, and update the salesRecords to include this new sale. If this artwork is not for sale, do nothing. 
    void Gallery::sellArtwork(int artworkID, Customer customer){

    }
    
    //you can include more functions should you like.  They will not be tested though.


    //add a new curation record to curationRecords.
    void Gallery::addCuration(Curation curation){

    }
    
    //add a new sale record to salesRecords
    void Gallery::addSale(Sale sale){

    }


}//end of NS_ARTGALLERY