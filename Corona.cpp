#include <GL/glut.h>
#include <math.h>

using namespace std;

float X = 1530.0;
float Y = 800.0;
float offset_yes = X / 2 - 300;
float offset_no = X / 2 - 260;
float angle_yes = 0;
float angle_no = 0;
float offset_lm = 0;
float offset_rm = X - 200;
float nam = 0;
float close_eyes = 0;
float updowneye = 0;
float shake_left = 0;
float shake_right = 0;
float shake_done = 0;
float stay_in_touch = 0;
float coronatransfer = 0;
float wash_left = 0;
float wash_right = 0;
float reach_tap = 0;
float wash_left_t = 0;
float wash_right_t = 1;
float z1 = 0, z2 = 0, z3 =0;
float car_left = 0;
float man_on_car = 0;

void yes();
void no();
void covid_hands();

void init(void) {

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, X, 0.0, Y);
	// glLoadIdentity();
	// gluPerspective(60, 1, 5.0, 100.0);

}

void timer(int) {

	//// YES - NO  Animation Logic
	if (X / 2 - 300 - offset_yes < offset_yes + 500)
		offset_yes -= 8;
	if (X / 2 - 260 - offset_no < offset_no + 500)
		offset_no -= 8;


	// Men animation
	// DONT : offset_lm < 550 and offset_rm > 800
	// DO : offset_lm < 250 and offset_rm > 1100
	// HOUSE COMEOUT : offset_lm < 1050
	// CAR GET IN : offset_lm += 4; (offset_lm < 850)
	//offset_lm += 4;
	/*if (offset_lm < 550)
		offset_lm += 2;
	if (offset_rm > 800)
		offset_rm -= 2;*/
		

	/*if (man_on_car)
		car_left += 4;*/

	//z1++;
	//z2++;
	//z3++;

	////Restart
	//if (z1 == 30) {
	//	z1 = 0;
	//}

	//if (z2 == 45) {
	//	z2 = 0;
	//}

	//if (z3 == 60) {
	//	z3 = 0;
	//}

	// Eyes close
	/*if (nam >= Y / 2 - 200 && updowneye == 0) {
		close_eyes += 5;
		if (close_eyes == 5)
			for (long long i = 0; i <= 200000000; i = i + 0.85)
				i++;
		if (close_eyes >= 100)
			updowneye = 1;
	}
	if (nam >= Y / 2 - 100 && updowneye == 1) {
		close_eyes -= 5;
		if (close_eyes <= 0)
			updowneye = 0;
	}*/


	// Namasthe
	/*if (nam < Y / 2 - 100)
		nam += 2;*/


	//// Handshake
	//if (shake_left <= 755 and shake_done == 0) {
	//	shake_left += 5;
	//	if (shake_left == 755)
	//	{
	//		shake_done = 1;
	//		stay_in_touch = 1;
	//	}
	//}

	//if (stay_in_touch) {
	//	int i = 0;
	//	while (i++ < 20000000);
	//	stay_in_touch = 0;
	//}

	//if (shake_done == 1) {
	//	if (shake_left > 300)
	//		shake_left -= 7;
	//	if (shake_left < 310)
	//	{
	//		shake_done = 2;
	//		coronatransfer = 1;
	//	}
	//}


	// Handwash
	//if (wash_left <= 762 and reach_tap == 0) {
	//	wash_left += 6;
	//	wash_right += 6;
	//	if (wash_left == 762)
	//		reach_tap = 1;
	//}

	//if (reach_tap) {
	//
	//	// Right hand
	//	if (wash_right_t) {
	//		if (wash_right <= 864) {
	//			wash_right += 6;
	//		}
	//		else {
	//			wash_right_t = 0;
	//		}
	//	}
	//	else {
	//		if (wash_right >= 702) {
	//			wash_right -= 6;
	//		}
	//		else {
	//			wash_right_t = 1;
	//		}
	//	}

	//	// Left hand
	//	if (wash_left_t) {
	//		if (wash_left <= 864) {
	//			wash_left += 6;
	//		}
	//		else {
	//			wash_left_t = 0;
	//		}
	//	}
	//	else {
	//		if (wash_left >= 702) {
	//			wash_left -= 6;
	//		}
	//		else {
	//			wash_left_t = 1;
	//		}
	//	}

	//}

	glutPostRedisplay();
	glutTimerFunc(1000/60, timer, 0);

}

void covid_hands() {

	// Corona Virus
	glColor3f(0.6, 0.76, 0.30);

	glPointSize(20);
	glBegin(GL_POINTS);
	glVertex2d(X - 280 - 600, Y / 2 + 100);
	glVertex2d(X - 320 - 600, Y / 2 + 90);
	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2d(X - 440 - 600, Y / 2 + 145);
	glEnd();

	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2d(X - 360 - 500, Y / 2 + 160);
	glVertex2d(X - 290 - 500, Y / 2 + 150);
	glVertex2d(X - 400 - 500, Y / 2 + 130);
	glVertex2d(X - 820, Y / 2 + 120);
	glVertex2d(X - 860, Y / 2 + 120);
	glVertex2d(X - 890, Y / 2 + 110);
	glVertex2d(X - 800, Y / 2 + 90);
	glVertex2d(X - 820, Y / 2 + 80);
	glVertex2d(X - 860, Y / 2 + 80);
	glVertex2d(X - 890, Y / 2 + 50);
	glVertex2d(X - 800, Y / 2 + 40);
	glVertex2d(X - 820, Y / 2 + 30);
	glEnd();

}

void yes() {

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// small
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 300 - offset_yes, Y / 2);
	glVertex2d(X / 2 - 130 - offset_yes, Y / 2 - 130);
	glVertex2d(X / 2 - 130 - offset_yes, Y / 2);
	glVertex2d(X / 2 - 300 - offset_yes, Y / 2 + 130);
	glEnd();

	// big
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 130 - offset_yes, Y / 2);
	glVertex2d(X / 2 - 130 - offset_yes, Y / 2 - 130);
	glVertex2d(X / 2 + 250 - offset_yes, Y / 2 + 150);
	glVertex2d(X / 2 + 250 - offset_yes, Y / 2 + 280);
	glEnd();

	glFlush();
	// glutSwapBuffers();

}

void no() {

	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// L-R
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 200 - offset_no, Y / 2 + 150);
	glVertex2d(X / 2 + 200 - offset_no, Y / 2 - 250);
	glVertex2d(X / 2 + 260 - offset_no, Y / 2 - 180);
	glVertex2d(X / 2 - 140 - offset_no, Y / 2 + 220);
	glEnd();

	// R-L
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 200 + 55 - offset_no, Y / 2 - 250);
	glVertex2d(X / 2 + 200 + 55 - offset_no, Y / 2 + 150);
	glVertex2d(X / 2 + 140 + 55 - offset_no, Y / 2 + 220);
	glVertex2d(X / 2 - 260 + 55 - offset_no, Y / 2 - 180);
	glEnd();

	glFlush();
	// glutSwapBuffers();

}

void circle(int x, int y, int r = 30, float c1 = 1.0, float c2 = 0.0, float c3 = 0.0) {

	// Circle
	float x1, y1, x2, y2;
	float angle;
	double radius = r;
	x1 = x, y1 = y;
	glColor3f(c1, c2, c3);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x1, y1);
	for (angle = 1.0f;angle < 361.0f;angle += 0.2)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();

}

void cloud(int x = 0, int y = 0) {

	// Cloud
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(X / 2 + x, Y / 2 + 200 + y);
	glVertex2i(X / 2 + 200 + x, Y / 2 + 200 + y);
	glVertex2i(X / 2 + 200 + x, Y / 2 - 30 + 200 + y);
	glVertex2i(X / 2 + x, Y / 2 - 30 + 200 + y);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(X / 2 + 50 + x, Y / 2 + 230 + y);
	glVertex2i(X / 2 + 200 - 50 + x, Y / 2 + 230 + y);
	glVertex2i(X / 2 + 200 - 50 + x, Y / 2 + 200 + y);
	glVertex2i(X / 2 + 50 + x, Y / 2 + 200 + y);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(X / 2 + 80 + x, Y / 2 + 250 + y);
	glVertex2i(X / 2 + 200 - 80 + x, Y / 2 + 250 + y);
	glVertex2i(X / 2 + 200 - 80 + x, Y / 2 + 230 + y);
	glVertex2i(X / 2 + 80 + x, Y / 2 + 230 + y);
	glEnd();

}

void man_close_up(float shirt1 = 0.07, float shirt2 = 0.73, float shirt3 = 0.72) {

	// Face
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 250, Y);
	glVertex2d(X / 2 + 250, Y);
	glVertex2d(X / 2 + 250, Y - 500);
	glVertex2d(X / 2 - 250, Y - 500);
	glEnd();

	// Eyes
	glPointSize(100);
	glColor3f(1, 1, 1);
	glBegin(GL_POINTS);
	glVertex2d(X / 2 - 100, Y - 200);
	glVertex2d(X / 2 + 100, Y - 200);
	glEnd();

	// Pupil
	glPointSize(50);
	glColor3f(0.28, 0.22, 0.54);
	glBegin(GL_POINTS);
	glVertex2d(X / 2 - 100 + 10, Y - 200);
	glVertex2d(X / 2 + 100 - 10, Y - 200);
	glEnd();

	// Eyes Close Parat
	glPointSize(100);
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_POINTS);
	glVertex2d(X / 2 - 100, Y - 100 - close_eyes);
	glVertex2d(X / 2 + 100, Y - 100 - close_eyes);
	glEnd();

	// Mouth
	glColor3f(0.89, 0.83, 0.65);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 80, Y - 370);
	glVertex2d(X / 2 + 80, Y - 370);
	glVertex2d(X / 2 + 80, Y - 390);
	glVertex2d(X / 2 - 80, Y - 390);
	glEnd();

	// Hair
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 250, Y);
	glVertex2d(X / 2 + 250, Y);
	glVertex2d(X / 2 + 250, Y - 50);
	glVertex2d(X / 2 - 250, Y - 50);
	glEnd();

	// Neck
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 150, Y - 500);
	glVertex2d(X / 2 - 150 + 300, Y - 500);
	glVertex2d(X / 2 - 150 + 300, Y - 550);
	glVertex2d(X / 2 - 150, Y - 550);
	glEnd();

	// Beard
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 210 + 30, Y - 465);
	glVertex2d(X / 2 + 210 - 30, Y - 465);
	glVertex2d(X / 2 + 210 - 30, Y - 530);
	glVertex2d(X / 2 - 210 + 30, Y - 530);
	glEnd();

	// Moustache Top
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 210 + 40, Y - 495 + 200);
	glVertex2d(X / 2 + 210 - 40, Y - 495 + 200);
	glVertex2d(X / 2 + 210 - 40, Y - 530 + 200);
	glVertex2d(X / 2 - 210 + 40, Y - 530 + 200);
	glEnd();

	// Moustache Left
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 210 + 40, Y - 495 + 200);
	glVertex2d(X / 2 - 210 + 80, Y - 495 + 200);
	glVertex2d(X / 2 - 210 + 80, Y - 630 + 200);
	glVertex2d(X / 2 - 210 + 40, Y - 630 + 200);
	glEnd();

	// Moustache Right
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 210 + 40 + 300, Y - 495 + 200);
	glVertex2d(X / 2 - 210 + 80 + 300, Y - 495 + 200);
	glVertex2d(X / 2 - 210 + 80 + 300, Y - 630 + 200);
	glVertex2d(X / 2 - 210 + 40 + 300, Y - 630 + 200);
	glEnd();

	// Left Sidelock
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 250, Y);
	glVertex2d(X / 2 - 200, Y);
	glVertex2d(X / 2 - 200, Y - 150);
	glVertex2d(X / 2 - 250, Y - 150);
	glEnd();

	// Right Sidelock
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 250 + 450, Y);
	glVertex2d(X / 2 - 200 + 450, Y);
	glVertex2d(X / 2 - 200 + 450, Y - 150);
	glVertex2d(X / 2 - 250 + 450, Y - 150);
	glEnd();

	// Left Ear
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 300, Y - 150);
	glVertex2d(X / 2 - 250, Y - 150);
	glVertex2d(X / 2 - 250, Y - 100 - 150);
	glVertex2d(X / 2 - 300, Y - 100 - 150);
	glEnd();

	// Right Ear
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 300 + 550, Y - 150);
	glVertex2d(X / 2 - 250 + 550, Y - 150);
	glVertex2d(X / 2 - 250 + 550, Y - 100 - 150);
	glVertex2d(X / 2 - 300 + 550, Y - 100 - 150);
	glEnd();

	// Shirt
	glColor3f(shirt1, shirt2, shirt3);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 400, Y - 550);
	glVertex2d(X / 2 - 400 + 800, Y - 550);
	glVertex2d(X / 2 - 400 + 800, Y - 800);
	glVertex2d(X / 2 - 400, Y - 800);
	glEnd();

}

void home() {

	// Sun
	circle(X / 2 + 150, Y / 2 + 230, 80, 0.92, 0.92, 0.32);

	cloud();
	cloud(300, 100);
	cloud(500, -150);
	cloud(-200, 300);
	cloud(-500, 100);

	// Ground
	glColor3f(0.41, 0.74, 0.36);
	glBegin(GL_POLYGON);
	glVertex2i(0, 100);
	glVertex2i(X, 100);
	glVertex2i(X, 0);
	glVertex2i(0, 0);
	glEnd();

	// Roof
	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();

	// Top of Front Wall
	glColor3f(0.2, 0.3, 0.4);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();

	// Front Wall
	glColor3f(0.57, 0.81, 0.73);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();

	// Front Door
	glColor3f(0.47, 0.3, 0.08);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();

	// Front Door Lock
	glColor3f(0.5, 0.5, 0.5);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2i(170, 170);
	glEnd();

	// Side Wall
	glColor3f(0.47, 0.71, 0.63);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();

	// Window one
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();

	// Line of window one
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(390, 320);
	glVertex2i(390, 230);
	glVertex2i(330, 273);
	glVertex2i(450, 273);
	glEnd();

	// Window two
	glColor3f(0.2, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();

	// Lines of window two
	glColor3f(0.1, 0.7, 0.5);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(590, 320);
	glVertex2i(590, 230);
	glVertex2i(530, 273);
	glVertex2i(650, 273);
	glEnd();

	// Entrance Path
	glColor3f(0.80, 0.75, 0.75);
	glLineWidth(3);
	glBegin(GL_POLYGON);
	glVertex2i(150, 100);
	glVertex2i(250, 100);
	glVertex2i(210, 0);
	glVertex2i(40, 0);
	glEnd();

}

void man_left(int x = 100, int y = Y/2, float skin1 = 0.9490196078431372, float skin2 = 0.9019607843137255, float skin3 = 0.7137254901960784, float shirt1 = 0.00392156862745098, float shirt2 = 0.7098039215686275, float shirt3 = 0.6862745098039216, float pant1 = 0.26666666666666666, float pant2 = 0.2235294117647059, float pant3 = 0.6352941176470588) {
	
	int ox = x + offset_lm, oy = y;

	// Face W x H = 100 x 100, O = (X/2, 100)
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_QUADS);
	glVertex2d(ox, oy);
	glVertex2d(ox+100, oy);
	glVertex2d(ox+100, oy+100);
	glVertex2d(ox, oy+100);
	glEnd();

	
	// Hairs W x H = 100 x 20, O = (X/2, 180)
	ox = 100 + offset_lm; oy = oy + 90;
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy + 20);
	glVertex2d(ox, oy + 20);
	glEnd();

	// Eyes W x H = 5 x 5, O = (130, 160)oy 
	ox = 130 + offset_lm; oy = oy - 30;
	glPointSize(10);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2d(ox, oy);
	glVertex2d(ox + 40, oy);
	glEnd();

	// Neck
	ox = 100 + offset_lm, oy = Y / 2;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox + 30, oy);
	glVertex2d(ox + 70, oy);
	glVertex2d(ox + 70, oy - 15);
	glVertex2d(ox + 30, oy - 15);
	glEnd();

	// Left Ear (W = 15, H = 35)
	ox = 85 + offset_lm, oy = Y / 2 + 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 15, oy);
	glVertex2d(ox + 15, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

	// Right Ear (W = 15, H = 35)
	ox = 200 + offset_lm, oy = Y / 2 + 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 15, oy);
	glVertex2d(ox + 15, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

	// Shirt Top
	ox = 70 + offset_lm, oy = (Y / 2) - 15;
	glColor3f(shirt1, shirt2, shirt3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 160, oy);
	glVertex2d(ox + 160, oy - 70);
	glVertex2d(ox, oy - 70);
	glEnd();

	// Shirt Bottom
	ox = 100 + offset_lm, oy = (Y / 2) - 15 - 70;
	glColor3f(shirt1, shirt2, shirt3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy - 70);
	glVertex2d(ox, oy - 70);
	glEnd();

	// Hand Left (W = 25, H = 55)
	ox = 75 + offset_lm, oy = (Y / 2) - 15 - 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 25, oy);
	glVertex2d(ox + 25, oy - 55);
	glVertex2d(ox, oy - 55);
	glEnd();

	// Hand Right (W = 25, H = 55)
	ox = 200 + offset_lm, oy = (Y / 2) - 15 - 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 25, oy);
	glVertex2d(ox + 25, oy - 55);
	glVertex2d(ox, oy - 55);
	glEnd();

	// Pant Left (W = 40, H = 120)
	ox = 100 + offset_lm, oy = (Y / 2) - 15 - 140;
	glColor3f(pant1, pant2, pant3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 40, oy);
	glVertex2d(ox + 40, oy - 120);
	glVertex2d(ox, oy - 120);
	glEnd();

	// Pant Right (W = 40, H = 120)
	ox = 160 + offset_lm, oy = (Y / 2) - 15 - 140;
	glColor3f(pant1, pant2, pant3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 40, oy);
	glVertex2d(ox + 40, oy - 120);
	glVertex2d(ox, oy - 120);
	glEnd();

	// Pant Middle (W = 100, H = 50)
	ox = 100 + offset_lm, oy = (Y / 2) - 15 - 140;
	glColor3f(pant1, pant2, pant3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy - 50);
	glVertex2d(ox, oy - 50);
	glEnd();

	// Shoe Left (W = 50, H = 350)
	ox = 95 + offset_lm, oy = (Y / 2) - 15 - 140 - 120;
	glColor3f(0.40784313725490196, 0.40784313725490196, 0.40784313725490196);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 50, oy);
	glVertex2d(ox + 50, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

	// Shoe Right (W = 50, H = 350)
	ox = 155 + offset_lm, oy = (Y / 2) - 15 - 140 - 120;
	glColor3f(0.40784313725490196, 0.40784313725490196, 0.40784313725490196);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 50, oy);
	glVertex2d(ox + 50, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

}

void man_right(int x_offset = 0, int y_offset = 0, int x = 100, int y = Y / 2, float skin1 = 0.9490196078431372, float skin2 = 0.9019607843137255, float skin3 = 0.7137254901960784, float shirt1 = 0.00392156862745098, float shirt2 = 0.7098039215686275, float shirt3 = 0.6862745098039216, float pant1 = 0.26666666666666666, float pant2 = 0.2235294117647059, float pant3 = 0.6352941176470588) {

	int ox = x + offset_rm + x_offset, oy = y;

	// Face W x H = 100 x 100, O = (X/2, 100)
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_QUADS);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy + 100);
	glVertex2d(ox, oy + 100);
	glEnd();


	// Hairs W x H = 100 x 20, O = (X/2, 180)
	ox = 100 + offset_rm + x_offset; oy = oy + 90;
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy + 20);
	glVertex2d(ox, oy + 20);
	glEnd();

	// Eyes W x H = 5 x 5, O = (130, 160)
	ox = 130 + offset_rm + x_offset; oy = oy - 30;
	glPointSize(10);
	glColor3f(0, 0, 0);
	glBegin(GL_POINTS);
	glVertex2d(ox, oy);
	glVertex2d(ox + 40, oy);
	glEnd();

	// Neck
	ox = 100 + offset_rm + x_offset, oy = Y / 2;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox + 30, oy);
	glVertex2d(ox + 70, oy);
	glVertex2d(ox + 70, oy - 15);
	glVertex2d(ox + 30, oy - 15);
	glEnd();

	// Left Ear (W = 15, H = 35)
	ox = 85 + offset_rm + x_offset, oy = Y / 2 + 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 15, oy);
	glVertex2d(ox + 15, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

	// Right Ear (W = 15, H = 35)
	ox = 200 + offset_rm + x_offset, oy = Y / 2 + 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 15, oy);
	glVertex2d(ox + 15, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

	// Shirt Top
	ox = 70 + offset_rm + x_offset, oy = (Y / 2) - 15;
	glColor3f(shirt1, shirt2, shirt3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 160, oy);
	glVertex2d(ox + 160, oy - 70);
	glVertex2d(ox, oy - 70);
	glEnd();

	// Shirt Bottom
	ox = 100 + offset_rm + x_offset, oy = (Y / 2) - 15 - 70;
	glColor3f(shirt1, shirt2, shirt3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy - 70);
	glVertex2d(ox, oy - 70);
	glEnd();

	// Hand Left (W = 25, H = 55)
	ox = 75 + offset_rm + x_offset, oy = (Y / 2) - 15 - 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 25, oy);
	glVertex2d(ox + 25, oy - 55);
	glVertex2d(ox, oy - 55);
	glEnd();

	// Hand Right (W = 25, H = 55)
	ox = 200 + offset_rm + x_offset, oy = (Y / 2) - 15 - 70;
	glColor3f(skin1, skin2, skin3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 25, oy);
	glVertex2d(ox + 25, oy - 55);
	glVertex2d(ox, oy - 55);
	glEnd();

	// Pant Left (W = 40, H = 120)
	ox = 100 + offset_rm + x_offset, oy = (Y / 2) - 15 - 140;
	glColor3f(pant1, pant2, pant3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 40, oy);
	glVertex2d(ox + 40, oy - 120);
	glVertex2d(ox, oy - 120);
	glEnd();

	// Pant Right (W = 40, H = 120)
	ox = 160 + offset_rm + x_offset, oy = (Y / 2) - 15 - 140;
	glColor3f(pant1, pant2, pant3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 40, oy);
	glVertex2d(ox + 40, oy - 120);
	glVertex2d(ox, oy - 120);
	glEnd();

	// Pant Middle (W = 100, H = 50)
	ox = 100 + offset_rm + x_offset, oy = (Y / 2) - 15 - 140;
	glColor3f(pant1, pant2, pant3);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 100, oy);
	glVertex2d(ox + 100, oy - 50);
	glVertex2d(ox, oy - 50);
	glEnd();

	// Shoe Left (W = 50, H = 350)
	ox = 95 + offset_rm + x_offset, oy = (Y / 2) - 15 - 140 - 120;
	glColor3f(0.40784313725490196, 0.40784313725490196, 0.40784313725490196);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 50, oy);
	glVertex2d(ox + 50, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

	// Shoe Right (W = 50, H = 350)
	ox = 155 + offset_rm + x_offset, oy = (Y / 2) - 15 - 140 - 120;
	glColor3f(0.40784313725490196, 0.40784313725490196, 0.40784313725490196);
	glBegin(GL_POLYGON);
	glVertex2d(ox, oy);
	glVertex2d(ox + 50, oy);
	glVertex2d(ox + 50, oy - 35);
	glVertex2d(ox, oy - 35);
	glEnd();

}

void comeout() {

	// man_right(-100, 0, 100, Y / 2, 0.87, 0.76, 0.55, 0.62, 0.85, 0.67, 0.22, 0.20, 0.45);
	// man_left();

	glClearColor(0.48, 0.79, 0.87, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Ground
	glColor3f(0.41, 0.74, 0.36);
	glBegin(GL_POLYGON);
	glVertex2i(0, 100);
	glVertex2i(X, 100);
	glVertex2i(X, 0);
	glVertex2i(0, 0);
	glEnd();

	// Sun
	circle(X / 2 + 150, Y / 2 + 230, 80, 0.92, 0.92, 0.32);

	// Clouds
	cloud();
	cloud(300, 100);
	cloud(400, -80);
	cloud(-240, 150);
	cloud(-400, 80);

	man_left(100, Y / 2, 0.89, 0.79, 0.49, 0.72, 0.32, 0.42, 0.15, 0.30, 0.23);

	// House
	glColor3f(0.57, 0.81, 0.73);
	glBegin(GL_POLYGON);
	glVertex2i(0, Y);
	glVertex2i(300, Y);
	glVertex2i(300, 50);
	glVertex2i(0, 50);
	glEnd();

	// Front Door
	glColor3f(0.47, 0.3, 0.08);
	glBegin(GL_POLYGON);
	glVertex2i(300, Y / 2 + 200);
	glVertex2i(650, Y / 2 + 200);
	glVertex2i(650, 50);
	glVertex2i(300, 50);
	glEnd();

	// Front Door Lock
	glColor3f(0.5, 0.5, 0.5);
	glPointSize(35);
	glBegin(GL_POINTS);
	glVertex2i(550, Y / 2 - 100);
	glEnd();

	glFlush();

}

void s1nf1() {
	
	glClearColor(0.48, 0.79, 0.87, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	//home();
	comeout();

	glFlush();

}

void z(int x = 0, int y = 0) {

	// Top
	glColor3f(0.25, 0.5, 0.75);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + x, Y / 2 + y);
	glVertex2d(X / 2 + 50 + x, Y / 2 + y);
	glVertex2d(X / 2 + 50 + x, Y / 2 - 10 + y);
	glVertex2d(X / 2 + x, Y / 2 - 10 + y);
	glEnd();

	// Slant
	glColor3f(0.25, 0.5, 0.75);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 50 + x, Y / 2 + y);
	glVertex2d(X / 2 + 50 + x, Y / 2 - 10 + y);
	glVertex2d(X / 2 + x, Y / 2 - 10 - 60 + y);
	glVertex2d(X / 2 + x, Y / 2 - 10 - 50 + y);
	glEnd();

	// Bottom
	glColor3f(0.25, 0.5, 0.75);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + x, Y / 2 - 10 - 60 + y);
	glVertex2d(X / 2 + x, Y / 2 - 10 - 50 + y);
	glVertex2d(X / 2 + 50 + x, Y / 2 - 10 - 50 + y);
	glVertex2d(X / 2 + 50 + x, Y / 2 - 10 - 60 + y);
	glEnd();

}

void sleep() {

	if (z1 >= 20)
		z();
	if (z2 >= 35)
		z(70, 30);
	if (z3 >= 50)
		z(140, 60);	

}

void s1yf1() {

	glClearColor(0.48, 0.79, 0.87, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	home();
	sleep();

	glFlush();

}

void car_get_in() {
	
	// Car body
	glColor3f(1, 1, 0);
	glBegin(GL_QUADS);
	glVertex2f(X / 2 + 100 - 190 + car_left, Y / 2);
	glVertex2f(X / 2 + 400 + 190 + car_left, Y / 2);
	glVertex2f(X / 2 + 400 + 190 + car_left, Y / 2 - 120);
	glVertex2f(X / 2 + 100 - 190 + car_left, Y / 2 - 120);
	glEnd();

	// Car Top
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2f(X / 2 + 200 - 130 + car_left, Y / 2 + 130);
	glVertex2f(X / 2 + 300 + 130 + car_left, Y / 2 + 130);
	glVertex2f(X / 2 + 350 + 130 + car_left, Y / 2);
	glVertex2f(X / 2 + 150 - 130 + car_left, Y / 2);
	glEnd();

	// Wheels
	circle(X / 2 + 120 + car_left, Y / 2 - 100, 60, 0.3, 0.3, 0.3);
	circle(X / 2 + 380 + car_left, Y / 2 - 100, 60, 0.3, 0.3, 0.3);
	circle(X / 2 + 120 + car_left, Y / 2 - 100, 40, 0.8, 0.8, 0.8);
	circle(X / 2 + 380 + car_left, Y / 2 - 100, 40, 0.8, 0.8, 0.8);
	circle(X / 2 + 120 + car_left, Y / 2 - 100, 8, 0.2, 0.2, 0.2);
	circle(X / 2 + 380 + car_left, Y / 2 - 100, 8, 0.2, 0.2, 0.2);

	// Window 1
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(X / 2 + 200 - 130 + 10 + car_left, Y / 2 + 130 - 10);
	glVertex2f(X / 2 + 175 + car_left, Y / 2 + 130 - 10);
	glVertex2f(X / 2 + 175 + car_left, Y / 2 + 10);
	glVertex2f(X / 2 + 150 - 130 + 20 + car_left, Y / 2 + 10);
	glEnd();

	// Window 1
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(X / 2 + 185 + car_left, Y / 2 + 130 - 10);
	glVertex2f(X / 2 + 280 + car_left, Y / 2 + 130 - 10);
	glVertex2f(X / 2 + 280 + car_left, Y / 2 + 10);
	glVertex2f(X / 2 + 185 + car_left, Y / 2 + 10);
	glEnd();

	// Window 2
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(X / 2 + 290 + car_left, Y / 2 + 130 - 10);
	glVertex2f(X / 2 + 300 + 130 - 10 + car_left, Y / 2 + 130 - 10);
	glVertex2f(X / 2 + 350 + 130 - 20 + car_left, Y / 2 + 10);
	glVertex2f(X / 2 + 290 + car_left, Y / 2 + 10);
	glEnd();

}

void happy_mask() {

	glClearColor(0.37, 0.39, 0.4, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Window Left Front
	glColor3f(0.73, 0.83, 0.89);
	glBegin(GL_POLYGON);
	glVertex2d(0, Y / 2 + 300);
	glVertex2d(270, Y / 2 + 400);
	glVertex2d(270, Y / 2);
	glVertex2d(0, Y / 2 - 400);
	glEnd();

	// Seat
	glColor3f(0.81, 0.79, 0.52);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 500, 500);
	glVertex2d(X / 2 - 400, 600);
	glVertex2d(X / 2 + 400, 600);
	glVertex2d(X / 2 + 500, 500);
	glVertex2d(X / 2 + 500, 0);
	glVertex2d(X / 2 - 500, 0);
	glEnd();

	// Head Rest
	glColor3f(0.81, 0.79, 0.52);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 400, 800);
	glVertex2d(X / 2 + 400, 800);
	glVertex2d(X / 2 + 400, 600);
	glVertex2d(X / 2 - 400, 600);
	glEnd();

	// Seat
	glColor3f(0.81, 0.79, 0.52);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 500 + 1200, 500);
	glVertex2d(X / 2 - 400 + 1200, 600);
	glVertex2d(X / 2 + 400 + 1200, 600);
	glVertex2d(X / 2 + 500 + 1200, 500);
	glVertex2d(X / 2 + 500 + 1200, 0);
	glVertex2d(X / 2 - 500 + 1200, 0);
	glEnd();

	// Head Rest
	glColor3f(0.81, 0.79, 0.52);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 400 + 1200, 800);
	glVertex2d(X / 2 + 400 + 1200, 800);
	glVertex2d(X / 2 + 400 + 1200, 600);
	glVertex2d(X / 2 - 400 + 1200, 600);
	glEnd();

	// Man
	man_close_up(0.72, 0.32, 0.42);
	// Steering
	circle(X / 2, -200, 400, 0.25, 0.25, 0.25);
	// Shirt under Steering
	circle(X / 2, -200, 330, 0.72, 0.32, 0.42);

	// Arm L
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 200, 65);
	glVertex2d(X / 2 - 200 + 100, 115);
	glVertex2d(X / 2 - 200 + 100, 0);
	glVertex2d(X / 2 - 200, 0);
	glEnd();

	// Arm R
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 100, 115);
	glVertex2d(X / 2 + 100 + 100, 65);
	glVertex2d(X / 2 + 100 + 100, 0);
	glVertex2d(X / 2 + 100, 0);
	glEnd();

	// Hand Left
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 240, 300 - 150);
	glVertex2d(X / 2 - 240 + 80 + 40, 360 - 150);
	glVertex2d(X / 2 - 240 + 110 + 40, 300 - 150);
	glVertex2d(X / 2 - 240 + 30, 240 - 150);
	glEnd();

	// Hand Right
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 240, 300 - 150);
	glVertex2d(X / 2 + 240 - 80 - 40, 360 - 150);
	glVertex2d(X / 2 + 240 - 110 - 40, 300 - 150);
	glVertex2d(X / 2 + 240 - 30, 240 - 150);
	glEnd();

	// Mask White
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 180, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 - 80);
	glVertex2d(X / 2 - 180, Y / 2 - 80);
	glEnd();

	// Mask Left Thread 1
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 260, Y / 2 + 130);
	glVertex2d(X / 2 - 180, Y / 2 + 130);
	glVertex2d(X / 2 - 180, Y / 2 + 110);
	glVertex2d(X / 2 - 260, Y / 2 + 110);
	glEnd();

	// Mask Left Thread 2
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 260, Y / 2 - 100);
	glVertex2d(X / 2 - 180, Y / 2 - 100);
	glVertex2d(X / 2 - 180, Y / 2 - 80);
	glVertex2d(X / 2 - 260, Y / 2 - 80);
	glEnd();

	// Mask Right Thread 1
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 260, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 + 110);
	glVertex2d(X / 2 + 260, Y / 2 + 110);
	glEnd();

	// Mask Right Thread 2
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 260, Y / 2 - 100);
	glVertex2d(X / 2 + 180, Y / 2 - 100);
	glVertex2d(X / 2 + 180, Y / 2 - 80);
	glVertex2d(X / 2 + 260, Y / 2 - 80);
	glEnd();

	// Mask Green
	glColor3f(0.61, 0.95, 0.87);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 160, Y / 2 + 110);
	glVertex2d(X / 2 + 160, Y / 2 + 110);
	glVertex2d(X / 2 + 160, Y / 2 - 60);
	glVertex2d(X / 2 - 160, Y / 2 - 60);
	glEnd();

	// Mask Lines
	glColor3f(0.41, 0.75, 0.67);
	glBegin(GL_LINES);
	glVertex2d(X / 2 - 100, Y / 2 + 70);
	glVertex2d(X / 2 + 100, Y / 2 + 70);
	glVertex2d(X / 2 - 100, Y / 2 + 69);
	glVertex2d(X / 2 + 100, Y / 2 + 69);

	glVertex2d(X / 2 - 100, Y / 2 + 20);
	glVertex2d(X / 2 + 100, Y / 2 + 20);
	glVertex2d(X / 2 - 100, Y / 2 + 19);
	glVertex2d(X / 2 + 100, Y / 2 + 19);

	glVertex2d(X / 2 - 100, Y / 2 - 30);
	glVertex2d(X / 2 + 100, Y / 2 - 30);
	glVertex2d(X / 2 - 100, Y / 2 - 31);
	glVertex2d(X / 2 + 100, Y / 2 - 31);
	glEnd();

	glFlush();

}

void s2yf1() {

	glClearColor(0.78, 0.99, 0.97, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Ground
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(0, 300);
	glVertex2f(X, 300);
	glVertex2f(X, 0);
	glVertex2f(0, 0);
	glEnd();

	//home();
	//comeout();	// Make him go full right

	/*car_get_in();

	if (offset_lm <= 850)
		man_left(100, Y / 2, 0.89, 0.79, 0.49, 0.72, 0.32, 0.42, 0.15, 0.30, 0.23);
	if (offset_lm >= 900)
		man_on_car = 1;*/

	//if (offset_lm >= X + 100)
		happy_mask();

	glFlush();

}

void sad_mask() {

	glClearColor(0.98, 0.97, 0.56, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Table
	glColor3f(0.50, 0.43, 0.25);
	glBegin(GL_POLYGON);
	glVertex2f(0, Y);
	glVertex2f(X, Y);
	glVertex2f(X, Y - 300);
	glVertex2f(500, 0);
	glVertex2f(0, 0);
	glEnd();

	// Table Shade
	glColor3f(0.30, 0.23, 0.05);
	glBegin(GL_POLYGON);
	glVertex2f(X, Y - 300);
	glVertex2f(X, Y - 330);
	glVertex2f(550, 0);
	glVertex2f(500, 0);
	glEnd();

	// Mask White
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 180, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 - 80);
	glVertex2d(X / 2 - 180, Y / 2 - 80);
	glEnd();

	// Mask Left Thread 1
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 260, Y / 2 + 130);
	glVertex2d(X / 2 - 180, Y / 2 + 130);
	glVertex2d(X / 2 - 180, Y / 2 + 110);
	glVertex2d(X / 2 - 260, Y / 2 + 110);
	glEnd();

	// Mask Left Thread 2
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 260, Y / 2 - 80);
	glVertex2d(X / 2 - 180, Y / 2 - 80);
	glVertex2d(X / 2 - 180, Y / 2 - 60);
	glVertex2d(X / 2 - 260, Y / 2 - 60);
	glEnd();

	// Mask Right Thread 1
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 260, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 + 130);
	glVertex2d(X / 2 + 180, Y / 2 + 110);
	glVertex2d(X / 2 + 260, Y / 2 + 110);
	glEnd();

	// Mask Right Thread 2
	glColor3f(0.94, 0.95, 0.96);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 260, Y / 2 - 80);
	glVertex2d(X / 2 + 180, Y / 2 - 80);
	glVertex2d(X / 2 + 180, Y / 2 - 60);
	glVertex2d(X / 2 + 260, Y / 2 - 60);
	glEnd();

	// Mask Green
	glColor3f(0.61, 0.95, 0.87);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 160, Y / 2 + 110);
	glVertex2d(X / 2 + 160, Y / 2 + 110);
	glVertex2d(X / 2 + 160, Y / 2 - 60);
	glVertex2d(X / 2 - 160, Y / 2 - 60);
	glEnd();

	// Mask Lines
	glColor3f(0.41, 0.75, 0.67);
	glBegin(GL_LINES);
	glVertex2d(X / 2 - 100, Y / 2 + 70);
	glVertex2d(X / 2 + 100, Y / 2 + 70);
	glVertex2d(X / 2 - 100, Y / 2 + 69);
	glVertex2d(X / 2 + 100, Y / 2 + 69);

	glVertex2d(X / 2 - 100, Y / 2 + 20);
	glVertex2d(X / 2 + 100, Y / 2 + 20);
	glVertex2d(X / 2 - 100, Y / 2 + 19);
	glVertex2d(X / 2 + 100, Y / 2 + 19);

	glEnd();

	// Mask EYE Left
	glColor3f(0.01, 0.35, 0.27);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 80, Y / 2 + 65);
	glVertex2d(X / 2 - 60, Y / 2 + 65);
	glVertex2d(X / 2 - 60, Y / 2 + 45);
	glVertex2d(X / 2 - 80, Y / 2 + 45);
	glEnd();

	// Mask EYE Left Tear
	glColor3f(0.4, 0.58, 0.77);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 75, Y / 2 + 45);
	glVertex2d(X / 2 - 65, Y / 2 + 45);
	glVertex2d(X / 2 - 65, Y / 2 - 25);
	glVertex2d(X / 2 - 75, Y / 2 - 25);
	glEnd();

	// Mask EYE Right
	glColor3f(0.01, 0.35, 0.27);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 80, Y / 2 + 65);
	glVertex2d(X / 2 + 60, Y / 2 + 65);
	glVertex2d(X / 2 + 60, Y / 2 + 45);
	glVertex2d(X / 2 + 80, Y / 2 + 45);
	glEnd();

	// Mask EYE Left Tear
	glColor3f(0.4, 0.58, 0.77);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 + 75, Y / 2 + 45);
	glVertex2d(X / 2 + 65, Y / 2 + 45);
	glVertex2d(X / 2 + 65, Y / 2 - 25);
	glVertex2d(X / 2 + 75, Y / 2 - 25);
	glEnd();

	// Sad Mask Face
	circle(X / 2, Y / 2, 40, 0, 0, 0);
	circle(X / 2, Y / 2 + 15, 10, 1, 0, 0);
	circle(X / 2, Y / 2 - 20, 40, 0.61, 0.95, 0.87);

	// Third Mask Line
	glColor3f(0.41, 0.75, 0.67);
	glBegin(GL_LINES);
	glVertex2d(X / 2 - 100, Y / 2 - 30);
	glVertex2d(X / 2 + 100, Y / 2 - 30);
	glVertex2d(X / 2 - 100, Y / 2 - 31);
	glVertex2d(X / 2 + 100, Y / 2 - 31);
	glEnd();

	glFlush();

}

void s2nf1() {

	glClearColor(0.78, 0.99, 0.97, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Ground
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_QUADS);
	glVertex2f(0, 300);
	glVertex2f(X, 300);
	glVertex2f(X, 0);
	glVertex2f(0, 0);
	glEnd();

	//home();
	//comeout();	// Make him go full right
	//car_get_in();

	/*if (offset_lm <= 850)
		man_left(100, Y / 2, 0.89, 0.79, 0.49, 0.72, 0.32, 0.42, 0.15, 0.30, 0.23);
	if (offset_lm >= 900)
		man_on_car = 1;*/

	//if (offset_lm >= X + 100)
	//happy_mask();
		sad_mask();
	glFlush();

}

void s4f1() {
	
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	// Floor
	glColor3f(0.70, 0.63, 0.40);
	glBegin(GL_QUADS);
	glVertex2d(0, 0);
	glVertex2d(X, 0);
	glVertex2d(X, 300);
	glVertex2d(0, 300);
	glEnd();

	// Left line
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 300 - 200, 1);
	glVertex2d(X / 2 - 300 - 200 + 10, 1);
	glVertex2d(X / 2 + 400 - 200, 299);
	glVertex2d(X / 2 + 400 - 200 - 10, 299);
	glEnd();

	// Right line
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 300 + 200 + 200, 1);
	glVertex2d(X / 2 - 300 + 200 + 200 + 10, 1);
	glVertex2d(X / 2 + 400 + 200, 299);
	glVertex2d(X / 2 + 400 + 200 - 10, 299);
	glEnd();

	// Wall
	glColor3f(0.82, 0.94, 0.93);
	glBegin(GL_QUADS);
	glVertex2d(0, 300);
	glVertex2d(X, 300);
	glVertex2d(X, Y);
	glVertex2d(0, Y);
	glEnd();

	// Man Left
	man_left();

	// Man Right
	man_right(-100, 0, 100, Y/2, 0.87, 0.76, 0.55, 0.62, 0.85, 0.67, 0.22, 0.20, 0.45);

	// Man Right
	glFlush();

}

void s5yf1() {
	
	glClearColor(0.74, 0.95, 0.95, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	man_close_up();

	// Arm Left
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 400, Y - 700);
	glVertex2d(X / 2 - 400 + 150, Y - 700);
	glVertex2d(X / 2 - 400 + 150, Y - 800);
	glVertex2d(X / 2 - 400, Y - 800);
	glEnd();

	// Arm Right
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 400 + 650, Y - 700);
	glVertex2d(X / 2 - 400 + 650 + 150, Y - 700);
	glVertex2d(X / 2 - 400 + 650 + 150, Y - 800);
	glVertex2d(X / 2 - 400 + 650, Y - 800);
	glEnd();

	// Hand Left
	glColor3f(0.91, 0.85, 0.70);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 100, Y - 700 + nam);
	glVertex2d(X / 2 - 100 + 100, Y - 700 + nam);
	glVertex2d(X / 2 - 100 + 100, Y - 1400 + nam);
	glVertex2d(X / 2 - 150, Y - 1400 + nam);
	glEnd();

	// Hand Right
	glColor3f(0.91, 0.85, 0.70);
	glBegin(GL_QUADS);
	glVertex2d(X / 2 - 100 + 110, Y - 700 + nam);
	glVertex2d(X / 2 - 100 + 110 + 100, Y - 700 + nam);
	glVertex2d(X / 2 - 100 + 150 + 100, Y - 1400 + nam);
	glVertex2d(X / 2 - 100 + 110, Y - 1400 + nam);
	glEnd();

	glFlush();

}

void s5nf1() {

	glClearColor(0.74, 0.95, 0.95, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.47, 0.46, 0.40);
	glBegin(GL_QUADS);
	glVertex2d(0, 300);
	glVertex2d(X, 300);
	glVertex2d(X, 0);
	glVertex2d(0, 0);
	glEnd();

	// COAT
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glVertex2d(X + shake_right - 250, Y / 2 + 150); //1
	glVertex2d(X, Y / 2 + 150); //2
	glVertex2d(X, Y / 2 + 40); //9
	glVertex2d(X + shake_right - 250, Y / 2 + 40); //10
	glEnd();

	// HAND 2 (RIGHT)
	glColor3f(0.94, 0.90, 0.71);
	glBegin(GL_POLYGON);
	glVertex2d(X + shake_right - 250, Y / 2 + 150); //1
	glVertex2d(X + shake_right - 250, Y / 2 + 80); //10
	glVertex2d(X + shake_right - 350, Y / 2 + 20); //7
	glVertex2d(X + shake_right - 480, Y / 2 + 20); //8
	glVertex2d(X + shake_right - 480, Y / 2 + 180); //3
	glVertex2d(X + shake_right - 440 + 70, Y / 2 + 180); //4
	glVertex2d(X + shake_right - 440 + 70, Y / 2 + 200); //5
	glVertex2d(X + shake_right - 440 + 150, Y / 2 + 200); //6
	glEnd();

	// KAI-REGAI
	glColor3f(0.54, 0.50, 0.31);
	glBegin(GL_LINES);
	glVertex2d(X + shake_right - 480, Y / 2 + 140);
	glVertex2d(X + shake_right - 390, Y / 2 + 140);

	glVertex2d(X + shake_right - 480, Y / 2 + 100);
	glVertex2d(X + shake_right - 390, Y / 2 + 100);

	glVertex2d(X + shake_right - 480, Y / 2 + 60);
	glVertex2d(X + shake_right - 390, Y / 2 + 60);

	glEnd();

	// COAT INSIDE
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2d(X + shake_right - 250 + 3, Y / 2 + 150);
	glVertex2d(X + shake_right - 260 + 3, Y / 2 + 150);
	glVertex2d(X + shake_right - 260 + 3, Y / 2 + 50);
	glVertex2d(X + shake_right - 250 + 3, Y / 2 + 50);
	glEnd();

	// Corona Virus
	glColor3f(0.6, 0.76, 0.30);
	
	glPointSize(20);
	glBegin(GL_POINTS);
	glVertex2d(X - 280, Y / 2 + 100);
	glVertex2d(X - 320, Y / 2 + 90);
	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);
	glVertex2d(X - 440, Y / 2 + 145);
	glEnd();

	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2d(X - 360, Y / 2 + 160);
	glVertex2d(X - 290, Y / 2 + 150);
	glVertex2d(X - 400, Y / 2 + 130);
	glVertex2d(X - 420, Y / 2 + 120);
	glVertex2d(X - 360, Y / 2 + 120);
	glVertex2d(X - 290, Y / 2 + 110);
	glVertex2d(X - 400, Y / 2 + 90);
	glVertex2d(X - 420, Y / 2 + 80);
	glVertex2d(X - 360, Y / 2 + 80);
	glVertex2d(X - 290, Y / 2 + 50);
	glVertex2d(X - 400, Y / 2 + 40);
	glVertex2d(X - 420, Y / 2 + 30);
	glEnd();





	/* LEFT HAND */

	// COAT
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2d(shake_left + 0, Y / 2 + 150); //1
	glVertex2d(shake_left + 250, Y / 2 + 150); //2
	glVertex2d(shake_left + 250, Y / 2 + 40); //9'
	glVertex2d(shake_left + 0, Y / 2 + 40); //10
	glEnd();

	// HAND 1 (LEFT)
	glColor3f(0.68, 0.48, 0.27);
	glBegin(GL_POLYGON);
	glVertex2d(shake_left + 250, Y / 2 + 150); //2
	glVertex2d(shake_left + 300, Y / 2 + 200); //3
	glVertex2d(shake_left + 380, Y / 2 + 200); //4
	glVertex2d(shake_left + 380, Y / 2 + 180); //5
	glVertex2d(shake_left + 490, Y / 2 + 180); //6
	glVertex2d(shake_left + 490, Y / 2 + 20); //7
	glVertex2d(shake_left + 340, Y / 2 + 20); //8
	glVertex2d(shake_left + 250, Y / 2 + 80); //9
	glEnd();

	// COAT INSIDE
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2d(shake_left + 250 - 3, Y / 2 + 150);
	glVertex2d(shake_left + 260 - 3, Y / 2 + 150);
	glVertex2d(shake_left + 260 - 3, Y / 2 + 50);
	glVertex2d(shake_left + 250 - 3, Y / 2 + 50);
	glEnd();

	// NAILS
	glColor3f(0.85, 0.74, 0.62);
	glPointSize(30);
	glBegin(GL_POINTS);
	glVertex2d(shake_left + 480, Y / 2 + 160);
	glVertex2d(shake_left + 480, Y / 2 + 120);
	glVertex2d(shake_left + 480, Y / 2 + 80);
	glVertex2d(shake_left + 480, Y / 2 + 40);
	glEnd();

	// NAILS
	glColor3f(0.85, 0.74, 0.62);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2d(shake_left + 375, Y / 2 + 190);
	glEnd();

	// KAI-REGAI
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(shake_left + 400, Y / 2 + 140);
	glVertex2d(shake_left + 490, Y / 2 + 140);

	glVertex2d(shake_left + 400, Y / 2 + 100);
	glVertex2d(shake_left + 490, Y / 2 + 100);

	glVertex2d(shake_left + 400, Y / 2 + 60);
	glVertex2d(shake_left + 490, Y / 2 + 60);

	glEnd();

	if (coronatransfer == 1)
		covid_hands();

	glFlush();

}

void eye_happy() {

	circle(X / 2 - 100, Y / 2 + 80, 90, 1, 0.61, 0.18);
	circle(X / 2 + 100, Y / 2 + 80, 90, 1, 0.61, 0.18);

	// Pupil
	circle(X / 2 - 100, Y / 2 + 80, 65, 0.2, 0.2, 0.2);
	circle(X / 2 + 100, Y / 2 + 80, 65, 0.2, 0.2, 0.2);

	// Pupil Inside
	circle(X / 2 - 100, Y / 2 + 80, 30, 1, 1, 1);
	circle(X / 2 + 100, Y / 2 + 80, 30, 1, 1, 1);

}

void eye_dead(int x = 0) {

	// L-R
	glColor3f(0.15, 0.15, 0.15);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 40 + x, Y / 2 + 140);
	glVertex2d(X / 2 - 120 + x, Y / 2 + 40);
	glVertex2d(X / 2 - 130 + x, Y / 2 + 50);
	glVertex2d(X / 2 - 50 + x, Y / 2 + 150);
	glEnd();

	// R-L
	glColor3f(0.15, 0.15, 0.15);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 + 40 - 170 + x, Y / 2 + 140);
	glVertex2d(X / 2 + 120 - 170 + x, Y / 2 + 40);
	glVertex2d(X / 2 + 130 - 170 + x, Y / 2 + 50);
	glVertex2d(X / 2 + 50 - 170 + x, Y / 2 + 150);
	glEnd();

}

void mouth() {

	circle(X / 2, Y / 2 - 80, 60, 0.25, 0.32, 0.52);
	circle(X / 2, Y / 2 - 80, 40, 0.84, 0.22, 0.40);

}

void mouth_dead() {

	glColor3f(0.15, 0.15, 0.15);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 60, Y / 2 - 60);
	glVertex2d(X / 2 + 60, Y / 2 - 60);
	glVertex2d(X / 2 + 60, Y / 2);
	glVertex2d(X / 2 - 60, Y / 2);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 60 + 70, Y / 2 - 60);
	glVertex2d(X / 2 - 60 + 85, Y / 2 - 60);
	glVertex2d(X / 2 - 60 + 85, Y / 2 - 40);
	glVertex2d(X / 2 - 60 + 70, Y / 2 - 40);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2d(X / 2 - 60 + 20, Y / 2 - 60 + 40);
	glVertex2d(X / 2 - 60 + 35, Y / 2 - 60 + 40);
	glVertex2d(X / 2 - 60 + 35, Y / 2 - 40 + 40);
	glVertex2d(X / 2 - 60 + 20, Y / 2 - 40 + 40);
	glEnd();

}

void s6f1() {
	
	// Body
	circle(X / 2, Y / 2, 300, 0.66, 0.66, 0.66);
	
	// Other Protruding parts
	// R0
	float x1 = X/2, x2, y1 = Y/2, y2, angle, radius = 300;
	for (angle = 1.0f;angle < 361.0f;angle += 37)
	{
		x2 = x1 + sin(angle) * radius;
		y2 = y1 + cos(angle) * radius;
		circle(x2, y2, 30, 1, 0, 0);
	}

	for (angle = 30.0f;angle < 391.0f;angle += 37)
	{
		x2 = x1 + sin(angle) * radius;
		y2 = y1 + cos(angle) * radius;
		circle(x2, y2, 45, 1, 0, 0);
	}

	// R1
	radius = 180;
	int s = 0;
	for (angle = 1.0f;angle < 361.0f;angle += 51, s = !s)
	{
		x2 = x1 + sin(angle) * radius;
		y2 = y1 + cos(angle) * radius;
		s ? circle(x2, y2, 30, 1, 0, 0) : circle(x2, y2, 40, 1, 0, 0);
	}

	// R2
	radius = 50;
	for (angle = 30.0f;angle < 361.0f;angle += 180)
	{
		x2 = x1 + sin(angle) * radius;
		y2 = y1 + cos(angle) * radius;
		circle(x2, y2, 40, 1, 0, 0);
	}

	// Eyes
	//eye_happy();
	eye_dead(-30);	//Left
	eye_dead(200);	//Right

	// Mouth
	//mouth();
	mouth_dead();

}

void s6f2() {

	// Water
	glColor3f(0.69, 0.86, 92);
	glBegin(GL_QUADS);
	glVertex2d(X - 300, Y / 2 + 230);
	glVertex2d(X - 250, Y / 2 + 230);
	glVertex2d(X - 250, Y / 2 - 40);
	glVertex2d(X - 300, Y / 2 - 40);
	glEnd();

	// Basin
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2d(X, Y / 2 - 40);
	glVertex2d(X, Y / 2 - 340);
	glVertex2d(X - 350, Y / 2 - 340);
	glVertex2d(X - 400, Y / 2 - 290);
	glVertex2d(X - 400, Y / 2 - 40);
	glEnd();

	/* LEFT HAND */

	// COAT
	glColor3f(0.59, 0.86, 0.20);
	glBegin(GL_QUADS);
	glVertex2d(wash_left + 0 + 20, Y / 2 + 150 + 20); //1
	glVertex2d(wash_left + 250 + 20, Y / 2 + 150 + 20); //2
	glVertex2d(wash_left + 250 + 20, Y / 2 + 40 + 20); //9'
	glVertex2d(wash_left + 0 + 20, Y / 2 + 40 + 20); //10
	glEnd();

	// HAND 1 (LEFT)
	glColor3f(0.90, 0.84, 0.68);
	glBegin(GL_POLYGON);
	glVertex2d(wash_left + 250 + 20, Y / 2 + 150 + 20); //2
	glVertex2d(wash_left + 300 + 20, Y / 2 + 200 + 20); //3
	glVertex2d(wash_left + 380 + 20, Y / 2 + 200 + 20); //4
	glVertex2d(wash_left + 380 + 20, Y / 2 + 180 + 20); //5
	glVertex2d(wash_left + 490 + 20, Y / 2 + 180 + 20); //6
	glVertex2d(wash_left + 490 + 20, Y / 2 + 20 + 20); //7
	glVertex2d(wash_left + 340 + 20, Y / 2 + 20 + 20); //8
	glVertex2d(wash_left + 250 + 20, Y / 2 + 80 + 20); //9
	glEnd();

	// KAI-REGAI
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(wash_left + 400 + 20, Y / 2 + 140 + 20);
	glVertex2d(wash_left + 490 + 20, Y / 2 + 140 + 20);
	glVertex2d(wash_left + 400 + 20, Y / 2 + 100 + 20);
	glVertex2d(wash_left + 490 + 20, Y / 2 + 100 + 20);
	glVertex2d(wash_left + 400 + 20, Y / 2 + 60 + 20);
	glVertex2d(wash_left + 490 + 20, Y / 2 + 60 + 20);
	glEnd();


	/* RIGHT HAND */

	// COAT
	glColor3f(0.63, 0.90, 0.24);
	glBegin(GL_QUADS);
	glVertex2d(wash_right + 0, Y / 2 + 150); //1
	glVertex2d(wash_right + 250, Y / 2 + 150); //2
	glVertex2d(wash_right + 250, Y / 2 + 40); //9'
	glVertex2d(wash_right + 0, Y / 2 + 40); //10
	glEnd();

	// HAND 1 (LEFT)
	glColor3f(0.89, 0.77, 0.48);
	glBegin(GL_POLYGON);
	glVertex2d(wash_right + 250, Y / 2 + 150); //2
	glVertex2d(wash_right + 300, Y / 2 + 200); //3
	glVertex2d(wash_right + 380, Y / 2 + 200); //4
	glVertex2d(wash_right + 380, Y / 2 + 180); //5
	glVertex2d(wash_right + 490, Y / 2 + 180); //6
	glVertex2d(wash_right + 490, Y / 2 + 20); //7
	glVertex2d(wash_right + 340, Y / 2 + 20); //8
	glVertex2d(wash_right + 250, Y / 2 + 80); //9
	glEnd();

	// NAILS
	glColor3f(0.85, 0.74, 0.62);
	glPointSize(30);
	glBegin(GL_POINTS);
	glVertex2d(wash_right + 480, Y / 2 + 160);
	glVertex2d(wash_right + 480, Y / 2 + 120);
	glVertex2d(wash_right + 480, Y / 2 + 80);
	glVertex2d(wash_right + 480, Y / 2 + 40);
	glEnd();

	// NAILS (THUMB)
	glColor3f(0.85, 0.74, 0.62);
	glPointSize(15);
	glBegin(GL_POINTS);
	glVertex2d(wash_right + 375, Y / 2 + 190);
	glEnd();

	// KAI-REGAI
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2d(wash_right + 400, Y / 2 + 140);
	glVertex2d(wash_right + 490, Y / 2 + 140);
	glVertex2d(wash_right + 400, Y / 2 + 100);
	glVertex2d(wash_right + 490, Y / 2 + 100);
	glVertex2d(wash_right + 400, Y / 2 + 60);
	glVertex2d(wash_right + 490, Y / 2 + 60);
	glEnd();

	// Tap
	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glVertex2d(X - 300, Y / 2 + 230);
	glVertex2d(X - 300, Y / 2 + 330);
	glVertex2d(X - 250, Y / 2 + 330);
	glVertex2d(X - 250, Y / 2 + 230);
	glEnd();

	glColor3f(0.8, 0.8, 0.8);
	glBegin(GL_QUADS);
	glVertex2d(X - 250, Y / 2 + 330);
	glVertex2d(X, Y / 2 + 330);
	glVertex2d(X, Y / 2 + 280);
	glVertex2d(X - 250, Y / 2 + 280);
	glEnd();

}

void s6() {
	
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	//s6f1();
	s6f2();
	glFlush();
	//glutSwapBuffers();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1530,800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("cg");
	init();

	//glTranslatef(0.0, 0.0, -10.0);
	//glutDisplayFunc(yes);
	glutDisplayFunc(no);
	//glutDisplayFunc(s1nf1);
	//glutDisplayFunc(s1yf1);
	//glutDisplayFunc(s2yf1);
	//glutDisplayFunc(s2nf1);
	//glutDisplayFunc(s4f1);
	//glutDisplayFunc(s5yf1);
	//glutDisplayFunc(s5nf1);
	//glutDisplayFunc(s6);
	
	glutTimerFunc(0, timer, 0);
	glutMainLoop();

}

