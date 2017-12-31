#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
	
	private:
		double x;
		double y;
			
	public:
		double getDistFrom(const Point2D & aPoint) const;
		Point2D(double x, double y);
		

		double getX() const;
		
		double getY() const;

		void setX(double newX);
		
		void setY(double newY);

};






#endif
