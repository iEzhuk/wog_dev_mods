class RscMapControl {
	maxSatelliteAlpha = 0.75; //Прозрачность сателит-наложения
	 
	sizeExLevel = 0.022; // Размер текста высот
	 
	colorBackground[] = {0.99, 0.99 0.99, 1};//цвета 
	colorCountlines[] = {0.65, 0.33, 0.2, 0.5};
	colorMainCountlines[] = {0.6, 0.3, 0.2, 0.99};
	colorLevels[] = {0.2, 0.2, 0.1, 0.9};
	colorTracks[] = {1.0, 0.0, 0.0, 0.5};
	colorTracksFill[] = {0.8, 0.7, 0.6, 0.7};
	colorRoads[] = {0.0, 0.0, 0.0, 0.7};
	colorRoadsFill[] = {1, 1, 0, 0.8};
	colorMainRoads[] = {0.0, 0.0, 0.0, 0.7};
	colorMainRoadsFill[] = {1, 0.6, 0.4, 0.7};
	 
	ptsPerSquareSea = 8; // Шаг начала видимости типа объекта (чем меньше-тем раньше видно, начиная от макс зума)
	ptsPerSquareTxt = 8;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor =5;
	ptsPerSquareForEdge = 5;
	ptsPerSquareRoad = 3;
	ptsPerSquareObj = 8;
};