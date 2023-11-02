//
//  Artwork_Artist.cpp
//  ArtGallerySimplified
//
//  implement/define the functions declared in "Artwork_Artist.h"
//
//created by Andy Poon
//date: Oct 31, 2023

#include "Artwork_Artist.h" 

namespace NS_ARTGALLERY{

//***implement all the functions declared in "Artwork_Artist.h"
class Artwork{
public:    
    Artwork(){
        ID = -1;
        artistID = -1;
        type = ArtType::painting;
        style = ArtStyle::fineArt;
        subject = ArtSubject::nature;
        yearMade = 2022;
        width = 0.00;
        height = 0.00;
        depth = 0.00;
        price = 0.00;
        } 
    //default constructor: ID(-1),aritistID(-1), type(ArtType::painting), style(ArtStyle::fineArt), subject(ArtSbuject::nature), yearMade(2022), width(0.00),
    //hei0ght(0.00),depth(0.00),price(0.00)
    
    //accessors
    int getID() const{
        return ID;
        }
    int getArtistID() const{
        return artistID;
        }
    ArtType getType() const{
        return type;
        }
    ArtStyle getStyle() const{
        return style;
        }
    ArtSubject getSubject() const{
        return subject;
        }  
    double getYearMade() const{
        return yearMade;
        }
    double getWidth() const{
        return width;
        }
    double getHeight() const{
        return height;
        }
    double getDepth() const{
        return depth;
        }
    double getPrice() const{
        return price;
        }
    //mutators
    void setID(int newID){
        ID = newID;
        }
    void setArtistID( int newID){
        artistID = newID;
        }
    void setType( ArtType theType){
        type = theType;
        }
    void setStyle(ArtStyle theStyle){
        style = theStyle;
        }
    void setSubject(ArtSubject theSubject){
        subject = theSubject;
        }
    void setYearMade( int year){
        yearMade = year;
        }
    void setDimension(double w, double h, double d){
        width = w;
        height = h;
        depth = d;
        }
    void setPrice( double thePrice ){
        price = thePrice;
        }
};

/*
 ---Relevant data properties
 ID; //unique ID
 name //artist’s full name: first last
 email ; //artist’s email
 primaryArtType; //artist’s primary type of artworks, which can be one of the following {painting, photography, drawing, sculpture, other}
 birthYear; //year in which the artist was born in
 birthPlace; //the country where the artist was born
 ---Relevant data operations:
 set the initial value of an artist's properties  ----->constructors
 retrieve an individual property    -----> accessors
 revise an individual property---->mutators
 */
class Artist{
public:
    //default constructor: ID(-1),name("na"),email("na"),birthYear(1900),birthPlace("na"),primaryArtType(ArtType::painting)
    Artist(){
        ID = -1;
        name = "na";
        email = "na";
        birthYear = 1900;
        birthPlace = "na";
        primaryArtType = ArtType::painting;
        }
    
    //accessors
    //returns an artist's ID
    int getID() const{
        return ID;
        }
    //returns an artist's name
    string getName() const{
        return name;
        }
    //returns an artist's email
    string getEmail() const{
        return email;
        }
    //returns an artist's birthYear
    int getBirthYear() const{
        return birthYear;
        }
    //returns an artist's birthPlace
    string getBirthPlace() const{
        return birthPlace;
        }
    //returns an artist's primary ArtType
    ArtType getPrimaryArtType() const{
        return primaryArtType;
        }
    
    //mutators
    //changes an artist's ID to theID
    void setID(int theID){
        ID = theID;
        }
    //changes an artist's name to theName
    void setName(string theName){
        name = theName;
        }
    //changes an artist's email to theEmail
    void setEmail(string theEmail){
        email = theEmail;
        }
    //changes an artist's birthYear to theYear
    void setBirthYear(int theYear){
        birthYear = theYear;
        }
    //changes an artist's birthPlace to thePlace
    void setBirthPlace(string thePlace){
        birthPlace = thePlace;
        }
    //returns an artist's primary ArtType to theType
    void setPrimaryArtType(ArtType theType){
        primaryArtType = theType;
        }

}//end-of NS_ARTGALLERY