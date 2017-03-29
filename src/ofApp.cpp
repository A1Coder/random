#include "ofApp.h"
#include <random>
using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
/*
//UNIFORM RANDOM COORDINATES

//x-coordinates
int x_min=0; 
int x_max=1200;

random_device rd;
mt19937 en(rd());
uniform_int_distribution < > my_listx(x_min,x_max);

for(int i=0; i<20; i++)
X.push_back(my_listx(en));



//y-coordinates
int y_min=0; 
int y_max=970;
uniform_int_distribution < > my_listy(y_min,y_max);

for(int i=0; i<20; i++)
Y.push_back(my_listy(en));
*/



//NORMAL DISTRIBUTION 
random_device rd;
mt19937 en(rd());

//x-coordinates
float x_mean=1000.0f;
float x_sd=15.0f;



normal_distribution < > my_listx(x_mean,x_sd);

for(int i=0; i<20; i++)
X.push_back(my_listx(en));



//y-coordinates
float y_mean=800.0f;
float y_sd=15.0f;
normal_distribution < > my_listy(y_mean,y_sd);

for(int i=0; i<20; i++)
Y.push_back(my_listy(en));


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
