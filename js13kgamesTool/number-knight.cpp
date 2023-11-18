#include <cstdio>
#include <vector>
class TowerRoom {
    private:
	int life;
	char attributes;
	char type;

    public:
	void setLAT(int life, char attributes, char type)
	{
		this->life = life;
		this->attributes = attributes;
		this->type = type;
	}
};

int main()
{
	TowerRoom my;
	int life, attributes, type;
	printf("my LAT:");
	scanf("%d%c%c", &life, &attributes, &type);
	my.setLAT(life, attributes, type);

	int towersNum, floors;
	printf("Number of towers:");
	scanf("%d", &towersNum);

	std::vector<std::vector<TowerRoom> > towerRooms;
	for (int i = 0; i < towersNum; i++) {
		printf("Number of floors in Tower %d:", i + 1);
		scanf("%d", &floors);

		std::vector<TowerRoom> thisTowerRooms;
		for (int j = 0; j < floors; j++) {
			TowerRoom thisRoom;

			printf("The LAT of the room on the %d floor is:",
			       j + 1);
			scanf("%d%c%c", &life, &attributes, &type);

			thisRoom.setLAT(life, attributes, type);

			thisTowerRooms.push_back(thisRoom);
		}

		towerRooms.push_back(thisTowerRooms);
	}

	
}