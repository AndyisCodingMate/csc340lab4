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
   
    Artwork::Artwork(){
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
    int Artwork::getID() const{
        return ID;
        }
    int Artwork::getArtistID() const{
        return artistID;
        }
    ArtType Artwork::getType() const{
        return type;
        }
    ArtStyle Artwork::getStyle() const{
        return style;
        }
    ArtSubject Artwork::getSubject() const{
        return subject;
        }  
    double Artwork::getYearMade() const{
        return yearMade;
        }
    double Artwork::getWidth() const{
        return width;
        }
    double Artwork::getHeight() const{
        return height;
        }
    double Artwork::getDepth() const{
        return depth;
        }
    double Artwork::getPrice() const{
        return price;
        }
    //mutators
    void Artwork::setID(int newID){
        ID = newID;
        }
    void Artwork::setArtistID( int newID){
        artistID = newID;
        }
    void Artwork::setType( ArtType theType){
        type = theType;
        }
    void Artwork::setStyle(ArtStyle theStyle){
        style = theStyle;
        }
    void Artwork::setSubject(ArtSubject theSubject){
        subject = theSubject;
        }
    void Artwork::setYearMade( int year){
        yearMade = year;
        }
    void Artwork::setDimension(double w, double h, double d){
        width = w;
        height = h;
        depth = d;
        }
    void Artwork::setPrice( double thePrice ){
        price = thePrice;
        }


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

    //default constructor: ID(-1),name("na"),email("na"),birthYear(1900),birthPlace("na"),primaryArtType(ArtType::painting)
    Artist::Artist(){
        ID = -1;
        name = "na";
        email = "na";
        birthYear = 1900;
        birthPlace = "na";
        primaryArtType = ArtType::painting;
        }
    
    //accessors
    //returns an artist's ID
    int Artist::getID() const{
        return ID;
        }
    //returns an artist's name
    string Artist::getName() const{
        return name;
        }
    //returns an artist's email
    string Artist::getEmail() const{
        return email;
        }
    //returns an artist's birthYear
    int Artist::getBirthYear() const{
        return birthYear;
        }
    //returns an artist's birthPlace
    string Artist::getBirthPlace() const{
        return birthPlace;
        }
    //returns an artist's primary ArtType
    ArtType Artist::getPrimaryArtType() const{
        return primaryArtType;
        }
    
    //mutators
    //changes an artist's ID to theID
    void Artist::setID(int theID){
        ID = theID;
        }
    //changes an artist's name to theName
    void Artist::setName(string theName){
        name = theName;
        }
    //changes an artist's email to theEmail
    void Artist::setEmail(string theEmail){
        email = theEmail;
        }
    //changes an artist's birthYear to theYear
    void Artist::setBirthYear(int theYear){
        birthYear = theYear;
        }
    //changes an artist's birthPlace to thePlace
    void Artist::setBirthPlace(string thePlace){
        birthPlace = thePlace;
        }
    //returns an artist's primary ArtType to theType
    void Artist::setPrimaryArtType(ArtType theType){
        primaryArtType = theType;
        }

}//end-of NS_ARTGALLERY