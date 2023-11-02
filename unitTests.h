//
//  unitTests.h
//  ArtGallerySimplified
//
//unit-test a few member functions for each class
//
//  Created by Hui Yang on 3/23/22.
//

#ifndef unitTests_h
#define unitTests_h

#include "Artwork_Artist.h"
#include "Customer_Curation_Sale_Gallery.h"

namespace NS_UTESTS{

using namespace NS_ARTGALLERY;

//class Artwork; a partial unit testing.
//write one unit test each for the following member functions of the Artwork class
//  . default constructor and accessors --->bool test_Artwork();
//  . setStyle() and getStyle()    --->bool test_set_getStyle_Artwork();
//  . setDimension(), getWidth(), getHeight() and getDepth() --->bool test_setDimension_Artwork();
bool test_Artwork(){
    Artwork a;
    if (a.getID() != -1) return false;
    if (a.getArtistID() != -1) return false;
    if (a.getType() != ArtType::painting) return false;
    if (a.getStyle() != ArtStyle::fineArt) return false;
    if (a.getSubject() != ArtSubject::nature) return false;
    if (a.getYearMade() != 2022) return false;
    if (a.getWidth() != 0.00) return false;
    if (a.getHeight() != 0.00) return false;
    if (a.getDepth() != 0.00) return false;
    if (a.getPrice() != 0.00) return false;
    return true;
}
bool test_set_getStyle_Artwork(){
    Artwork a;
    a.setStyle(ArtStyle::abstract);
    if (a.getStyle() != ArtStyle::abstract) return false;
    return true;
}
bool test_setDimension_Artwork(){
    Artwork a;
    a.setDimension(1.0, 2.0, 3.0);
    if (a.getWidth() != 1.0) return false;
    if (a.getHeight() != 2.0) return false;
    if (a.getDepth() != 3.0) return false;
    return true;
}

//class Artist; a partial unit testing.
//write one unit test each for the following member functions of the Artist class
// .default constructor and accessors -->bool test_Artist();
// .setID() and getID()--->bool test_set_getID_Artist();

bool test_Artist(){
    Artist a;
    if (a.getID() != -1) return false;
    if (a.getName() != "na") return false;
    if (a.getEmail() != "na") return false;
    if (a.getBirthYear() != 1900) return false;
    if (a.getBirthPlace() != "na") return false;
    if (a.getPrimaryArtType() != ArtType::painting) return false;
    return true;
}
bool test_set_getID_Artist(){
    Artist a;
    a.setID(1);
    if (a.getID() != 1) return false;
    return true;
}


//class Customer; a partial unit testing.
//write one unit test each for the following member functions of the Customer class
// .the parameterized constructor and accessors -->bool test_Customer2();
// .setName() and getName()--->bool test_set_getName_Customer();

bool test_Customer(){
    Customer a(1, "Andy", "andypoon923@gmail.com", "1600 Holloway Ave");
    if (a.getID() != 1) return false;
    if (a.getName() != "Andy") return false;
    if (a.getEmail() != "andypoon923@gmail.com") return false;
    if (a.getAddress() != "1600 Holloway Ave") return false;
    return true;
}

bool test_set_getName_Customer(){
    Customer a;
    a.setName("Andy");
    if (a.getName() != "Andy") return false;
    return true;
}

//class Curation; a partial unit testing.
//write one unit test each for the following member functions of the Curation class
// .the parameterized constructor and accessors -->bool test_Curation2();
// .setCurationDate() and getCurationDate()--->bool test_set_getDate_Curation();

bool test_Curation(){
    Date today;
    Curation a(1, 23, today);
    if (a.getArtworkID() != 1) return false;
    if (a.getArtistID() != 23) return false;
    if (a.getCurationDate() == today) return true;
}
bool test_set_getDate_Curation(){
    Date yesterday;
    yesterday.day = 22;
    yesterday.month = 3;
    yesterday.year = 2022;
    Curation a;
    a.setCurationDate({22, 3, 2022});
    if (a.getCurationDate() == yesterday) return true;
}


//class Sale; a partial unit testing.
//write one unit test each for the following member functions of the Sale class
// .the parameterized constructor and accessors -->bool test_Sale2();
// .setCustomerID() and getCustomerID()--->bool test_set_getCustomerID_Sale();

bool test_Sale(){
    Date today;
    Sale a(1, 23, today);
    if (a.getCustomerID() != 1) return false;
    if (a.getArtworkID() != 23) return false;
    if (a.getSaleDate() == today) return true;
}
bool test_set_getCustomerID_Sale(){
    Sale a;
    a.setCustomerID(1);
    if (a.getCustomerID() != 1) return false;
    return true;

}

//class Gallery; a partial unit testing.
//write one unit test for the Gallery::getArtistID() function correspoinding to either of the two scenarios: exist/doesn't exist
//  bool test_getArtistID_Gallery();

bool test_getArtistID_Gallery(){
    Gallery a;
    Artist andy;
    Artist wayne;
    andy.setName("Andy");
    wayne.setName("Wayne");
    andy.setEmail("cpoon@sfsu.edu");
    wayne.setEmail("wkan@sfsu.edu");
    a.addArtist(andy);
    a.addArtist(wayne);
    if (a.getArtistID("Wayne","wkan@sfsu.edu") == 2) return true;
}

//write one unit test for the Gallery::getCustomerID() function, correspoinding to either of the two scenarios: exist/doesn't exist
//  bool test_getCustomerID_Gallery();

bool test_getCustomerID_Gallery(){
    Gallery a;
    Customer andy;
    Customer wayne;
    andy.setName("Andy");
    wayne.setName("Wayne");
    andy.setEmail("cpoon@sfsu.edu");
    wayne.setEmail("wkan@sfsu.edu");
    a.addCustomer(andy);
    a.addCustomer(wayne);
    if (a.getCustomerID("Wayne","wkan@sfsu.edu") == 2) return true;
}

//write one unit test for the Gallery::getIDsOfArtworksForSale() function. Make sure your artworksForSale is not empty.
// bool test_getIDsOfArtistsForSale_Gallery();

bool test_getIDsOfArtistsForSale_Gallery(){
    Gallery a;
    Artwork test1;
    Artwork test2;
    Artwork test3;
    Artist andy;
    Artist wayne;
    andy.setID(1);
    wayne.setID(2);
    a.curateArtwork(test1, andy);
    a.curateArtwork(test2, andy);
    a.curateArtwork(test3, wayne);
    if (a.getIDsOfArtworksForSale().size() == 2) return true;
    return false;
}

//write one unit test for the Gallery::getIDsOfArtworksForSale() function. Make sure your artworksForSale is not empty. This test will call the curateArtwork() function.
// bool test_getIDsOfArtworksForSale_Gallery();

bool test_getIDsOfArtworksForSale_Gallery(){
    Gallery a;
    Artwork test1;
    Artwork test2;
    Artwork test3;
    Artist andy;
    Artist wayne;
    andy.setID(1);
    wayne.setID(2);
    a.curateArtwork(test1, andy);
    a.curateArtwork(test2, andy);
    a.curateArtwork(test3, wayne);
    if (a.getIDsOfArtworksForSale().size() == 3) return true;
    return false;
}


//write one unit test for the genArtworksReport() based on ArtType
//   bool test_genArtworksReport_artType_Gallery();

bool test_genArtworksReport_artType_Gallery(){
    Gallery a;
    Artwork test1;
    Artwork test2;
    Artwork test3;
    Artwork test4;
    Artist andy;
    Artist wayne;
    andy.setID(1);
    wayne.setID(2);
    test1.setType(ArtType::painting);
    test2.setType(ArtType::sculpture);
    test3.setType(ArtType::drawing);
    test4.setType(ArtType::painting);
    a.curateArtwork(test1,andy);
    a.curateArtwork(test2,wayne);
    a.curateArtwork(test3,andy);
    a.curateArtwork(test4,wayne);

    if (a.genArtworksReport(ReportType::artType).size() == 3) return true;
    return false;
}


// Write one unit test for Gallery::curateArtwork(). 
//  bool test_curateArtwork_Gallery();

bool test_curateArtwork_Gallery(){
    Gallery a;
    Artwork test1;
    Artwork test2;
    Artist andy;
    Artist wayne;
    andy.setID(1);
    wayne.setID(2);
    a.curateArtwork(test1, andy);
    a.curateArtwork(test2, wayne);

    if (a.getIDsOfArtworksForSale().size() == 2) return true;
    return false;

}

//write one unit test for the Gallery::sellArtwork() function
//  bool test_sellArtwork_Gallery();

bool test_sellArtwork_Gallery(){
    Gallery a;
    Artwork test1;
    Artwork test2;
    Artist andy;
    Artist wayne;
    Customer johnny;
    andy.setID(1);
    wayne.setID(2);
    johnny.setID(1);
    a.curateArtwork(test1, andy);
    a.curateArtwork(test2, wayne);
    a.sellArtwork(test1.getID(), johnny);

    return true;

}

}//end-of namespace NS_UTESTS
#endif